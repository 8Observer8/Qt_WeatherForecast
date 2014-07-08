#ifndef WEATHER_H
#define WEATHER_H

#include <QString>

class Weather
{
public:
    void setDate( const QString &date )
    {
        m_date = date;
    }

    QString date( ) const
    {
        return m_date;
    }

    void setTempMaxC( const QString &tempMaxC )
    {
        m_tempMaxC = tempMaxC;
    }

    QString tempMaxC( ) const
    {
        return m_tempMaxC;
    }

    void setTempMaxF( const QString &tempMaxF )
    {
        m_tempMaxF = tempMaxF;
    }

    QString tempMaxF( ) const
    {
        return m_tempMaxF;
    }

    void setTempMinC( const QString &tempMinC )
    {
        m_tempMinC = tempMinC;
    }

    QString tempMinC( ) const
    {
        return m_tempMinC;
    }

    void setTempMinF( const QString &tempMinF )
    {
        m_tempMinF = tempMinF;
    }

    QString tempMinF( ) const
    {
        return m_tempMinF;
    }

    void setWindspeedMiles( const QString &windspeedMiles )
    {
        m_windspeedMiles = windspeedMiles;
    }

    QString windspeedMiles( ) const
    {
        return m_windspeedMiles;
    }

    void setWindspeedKmph( const QString &windspeedKmph )
    {
        m_windspeedKmph = windspeedKmph;
    }

    QString windspeedKmph( ) const
    {
        return m_windspeedKmph;
    }

    void setWinddirection( const QString &winddirection )
    {
        m_winddirection = winddirection;
    }

    QString winddirection( ) const
    {
        return m_winddirection;
    }

    void setWinddir16Point( const QString &winddir16Point )
    {
        m_winddir16Point = winddir16Point;
    }

    QString winddir16Point( ) const
    {
        return m_winddir16Point;
    }

    void setWinddirDegree( const QString &winddirDegree )
    {
        m_winddirDegree = winddirDegree;
    }

    QString winddirDegree( ) const
    {
        return m_winddirDegree;
    }

    void setWeatherCode( const QString &weatherCode )
    {
        m_weatherCode = weatherCode;
    }

    QString weatherCode( ) const
    {
        return m_weatherCode;
    }

    void setPrecipMM( const QString &precipMM )
    {
        m_precipMM = precipMM;
    }

    QString precipMM( ) const
    {
        return m_precipMM;
    }

private:
    QString m_date;
    QString m_tempMaxC;
    QString m_tempMaxF;
    QString m_tempMinC;
    QString m_tempMinF;
    QString m_windspeedMiles;
    QString m_windspeedKmph;
    QString m_winddirection;
    QString m_winddir16Point;
    QString m_winddirDegree;
    QString m_weatherCode;
    QString m_precipMM;
};

#endif // WEATHER_H
