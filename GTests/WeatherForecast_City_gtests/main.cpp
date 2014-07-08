
#include "gtest/gtest.h"
#include "City.h"

TEST( test001, nameTest )
{
    City city;
    city.setName( "London, United Kingdom" );

    // Actual result
    QString actual;
    ASSERT_NO_THROW( {
                         actual = city.name( );
                     } );

    // Expected result
    QString expected = "London, United Kingdom";

    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
