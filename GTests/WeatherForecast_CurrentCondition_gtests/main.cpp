
#include "gtest/gtest.h"
#include "CurrentCondition.h"

TEST( test001, observationTimeTest )
{
    CurrentCondition currentCondition;
    currentCondition.setObservationTime( "05:53 AM" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.observationTime( );
                     } );

    // Expected result
    QString expected = "05:53 AM";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test002, temp_CTest )
{
    CurrentCondition currentCondition;
    currentCondition.setTemp_C( "24" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.temp_C( );
                     } );

    // Expected result
    QString expected = "24";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test003, temp_FTest )
{
    CurrentCondition currentCondition;
    currentCondition.setTemp_F( "75" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.temp_F( );
                     } );

    // Expected result
    QString expected = "75";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test004, weatherCodeTest )
{
    CurrentCondition currentCondition;
    currentCondition.setWeatherCode( "302" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.weatherCode( );
                     } );

    // Expected result
    QString expected = "302";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test005, windspeedMilesTest )
{
    CurrentCondition currentCondition;
    currentCondition.setWindspeedMiles( "11" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.windspeedMiles( );
                     } );

    // Expected result
    QString expected = "11";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test006, windspeedKmphTest )
{
    CurrentCondition currentCondition;
    currentCondition.setWeatherCode( "17" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.weatherCode( );
                     } );

    // Expected result
    QString expected = "17";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test007, winddirDegreeTest )
{
    CurrentCondition currentCondition;
    currentCondition.setWeatherCode( "240" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.weatherCode( );
                     } );

    // Expected result
    QString expected = "240";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test008, winddir16PointTest )
{
    CurrentCondition currentCondition;
    currentCondition.setWinddir16Point( "WSW" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.winddir16Point( );
                     } );

    // Expected result
    QString expected = "WSW";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test009, precipMMTest )
{
    CurrentCondition currentCondition;
    currentCondition.setPrecipMM( "3.3" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.precipMM( );
                     } );

    // Expected result
    QString expected = "3.3";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test010, humidityTest )
{
    CurrentCondition currentCondition;
    currentCondition.setHumidity( "39" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.humidity( );
                     } );

    // Expected result
    QString expected = "39";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test011, visibilityTest )
{
    CurrentCondition currentCondition;
    currentCondition.setVisibility( "10" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.visibility( );
                     } );

    // Expected result
    QString expected = "10";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test012, pressureTest )
{
    CurrentCondition currentCondition;
    currentCondition.setPressure( "1020" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.pressure( );
                     } );

    // Expected result
    QString expected = "1020";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test013, cloudcoverTest )
{
    CurrentCondition currentCondition;
    currentCondition.setCloudcover( "0" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = currentCondition.cloudcover( );
                     } );

    // Expected result
    QString expected = "0";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
