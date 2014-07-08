#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <QString>
#include <QObject>
#include "CurrentCondition.h"
#include "Weather.h"
#include "NetworkManager.h"
#include "LogicError.h"
#include <QDebug>

class City : public QObject
{
    Q_OBJECT

public:
    void setName( const QString &name )
    {
        m_name = name;
    }

    QString name( ) const
    {
        return m_name;
    }

    void initObject( const QString &nameOfCity )
    {
        connect( &m_manager, SIGNAL( signalWithContent( QString ) ),
                 this, SLOT( slotContentIsReady( QString ) ) );

        // Fetch a content from the server
        QString url = QString( "https://api.worldweatheronline.com/free/v1/weather.ashx?q=%1&format=xml&num_of_days=5&key=ca94f06c9f5eedc355a426b72c93b42ab289be22" ).arg( nameOfCity );
        try {
            m_manager.fetch( url );
        } catch ( const LogicError &e ) {
            std::cerr << e.what( ) << std::endl;
            return;
        } catch ( ... ) {
            std::cerr << "Error: unknown exception" << std::endl;
            return;
        }
    }

    CurrentCondition currentCondition;
    Weather weather;

signals:
    void singnalObjectIsReady( );

private slots:
    void slotContentIsReady( const QString &content )
    {
        qDebug() << content;
    }

private:
    QString m_name;
    NetworkManager m_manager;
};

#endif // CITY_H
