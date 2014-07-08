
#include "gtest/gtest.h"
#include "Weather.h"

TEST( test001, dateTest )
{
    // Input data
    Weather weather;
    weather.setDate( "2014-07-05" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.date( );
                     } );

    // Expected result
    QString expected = "2014-07-05";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}


TEST( test002, tempMaxCTest )
{
    // Input data
    Weather weather;
    weather.setTempMaxC( "23" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.tempMaxC( );
                     } );

    // Expected result
    QString expected = "23";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test003, tempMaxFTest )
{
    // Input data
    Weather weather;
    weather.setTempMaxF( "74" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.tempMaxF( );
                     } );

    // Expected result
    QString expected = "74";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test004, tempMinCTest )
{
    // Input data
    Weather weather;
    weather.setTempMinC( "12" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.tempMinC( );
                     } );

    // Expected result
    QString expected = "12";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test005, tempMinFTest )
{
    // Input data
    Weather weather;
    weather.setTempMinF( "54" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.tempMinF( );
                     } );

    // Expected result
    QString expected = "54";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test006, windspeedMilesTest )
{
    // Input data
    Weather weather;
    weather.setWindspeedMiles( "13" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.windspeedMiles( );
                     } );

    // Expected result
    QString expected = "13";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test007, windspeedKmphTest )
{
    // Input data
    Weather weather;
    weather.setWindspeedKmph( "21" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.windspeedKmph( );
                     } );

    // Expected result
    QString expected = "21";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test008, winddirectionTest )
{
    // Input data
    Weather weather;
    weather.setWinddirection( "WSW" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.winddirection( );
                     } );

    // Expected result
    QString expected = "WSW";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test009, winddir16PointTest )
{
    // Input data
    Weather weather;
    weather.setWinddir16Point( "WSW" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.winddir16Point( );
                     } );

    // Expected result
    QString expected = "WSW";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test010, winddirDegreeTest )
{
    // Input data
    Weather weather;
    weather.setWinddirDegree( "254" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.winddirDegree( );
                     } );

    // Expected result
    QString expected = "254";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test011, weatherCodeTest )
{
    // Input data
    Weather weather;
    weather.setWeatherCode( "353" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.weatherCode( );
                     } );

    // Expected result
    QString expected = "353";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test012, precipMMTest )
{
    // Input data
    Weather weather;
    weather.setPrecipMM( "5.7" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = weather.precipMM( );
                     } );

    // Expected result
    QString expected = "5.7";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}
int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
