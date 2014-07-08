#ifndef CURRENTCONDITION_H
#define CURRENTCONDITION_H

#include <QString>

class CurrentCondition
{
public:
    void setObservationTime( const QString &observationTime )
    {
        m_observationTime = observationTime;
    }

    QString observationTime( ) const
    {
        return m_observationTime;
    }

    void setTemp_C( const QString &temp_C )
    {
        m_temp_C = temp_C;
    }

    QString temp_C( ) const
    {
        return m_temp_C;
    }

    void setTemp_F( const QString &temp_F )
    {
        m_temp_F = temp_F;
    }

    QString temp_F( ) const
    {
        return m_temp_F;
    }

    void setWeatherCode( const QString &weatherCode )
    {
        m_weatherCode = weatherCode;
    }

    QString weatherCode( ) const
    {
        return m_weatherCode;
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

    void setWinddirDegree( const QString &winddirDegree )
    {
        m_winddirDegree = winddirDegree;
    }

    QString winddirDegree( ) const
    {
        return m_winddirDegree;
    }

    void setWinddir16Point( const QString &winddir16Point )
    {
        m_winddir16Point = winddir16Point;
    }

    QString winddir16Point( ) const
    {
        return m_winddir16Point;
    }

    void setPrecipMM( const QString &precipMM )
    {
        m_precipMM = precipMM;
    }

    QString precipMM( ) const
    {
        return m_precipMM;
    }

    void setHumidity( const QString &humidity )
    {
        m_humidity = humidity;
    }

    QString humidity( ) const
    {
        return m_humidity;
    }

    void setVisibility( const QString &visibility )
    {
        m_visibility = visibility;
    }

    QString visibility( ) const
    {
        return m_visibility;
    }

    void setPressure( const QString &pressure )
    {
        m_pressure = pressure;
    }

    QString pressure( ) const
    {
        return m_pressure;
    }

    void setCloudcover( const QString &cloudcover )
    {
        m_cloudcover = cloudcover;
    }

    QString cloudcover( ) const
    {
        return m_cloudcover;
    }

private:
    QString m_observationTime;
    QString m_temp_C;
    QString m_temp_F;
    QString m_weatherCode;
    QString m_windspeedMiles;
    QString m_windspeedKmph;
    QString m_winddirDegree;
    QString m_winddir16Point;
    QString m_precipMM;
    QString m_humidity;
    QString m_visibility;
    QString m_pressure;
    QString m_cloudcover;
};

#endif // CURRENTCONDITION_H
