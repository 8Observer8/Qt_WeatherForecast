#ifndef CURRENTCONDITION_H
#define CURRENTCONDITION_H

#include <QString>

class CurrentCondition
{
public:
    QString observationTime( ) const
    {
        return m_observationTime;
    }

    QString temp_C( ) const
    {
        return m_temp_C;
    }

    QString temp_F( ) const
    {
        return m_temp_F;
    }

    QString weatherCode( ) const
    {
        return m_weatherCode;
    }

    QString windspeedMiles( ) const
    {
        return m_windspeedMiles;
    }

    QString windspeedKmph( ) const
    {
        return m_windspeedKmph;
    }

    QString winddirDegree( ) const
    {
        return m_winddirDegree;
    }

    QString winddir16Point( ) const
    {
        return m_winddir16Point;
    }

    QString precipMM( ) const
    {
        return m_precipMM;
    }

    QString humidity( ) const
    {
        return m_humidity;
    }

    QString visibility( ) const
    {
        return m_visibility;
    }

    QString pressure( ) const
    {
        return m_pressure;
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
