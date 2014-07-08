#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <memory>
#include <string>
#include <QObject>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include "EmptyArgument.h"

class NetworkManager : public QObject
{
    Q_OBJECT

public:

    NetworkManager( )
    {
        m_manager = std::unique_ptr<QNetworkAccessManager>( new QNetworkAccessManager( this ) );
    }

    void fetch( const QString &url )
    throw( EmptyArgument )
    {
        std::string functionName = "fetch()";

        // Check the input argument
        if ( url.isEmpty( ) )
        {
            throw EmptyArgument( functionName );
        }

        // Start fetching
        m_reply.reset( m_manager->get( QNetworkRequest( QUrl( url ) ) ) );
        connect( m_reply.get( ), SIGNAL( finished( ) ),
                 this, SLOT( replyFinished( ) ) );
    }

signals:
    void signalWithContent( QString content );

private slots:
    void replyFinished( )
    {
        QByteArray data = m_reply->readAll( );
        QString content( data );
        signalWithContent( content );
    }

private:
    std::unique_ptr<QNetworkReply> m_reply;
    std::unique_ptr<QNetworkAccessManager> m_manager;
};

#endif // NETWORKMANAGER_H
