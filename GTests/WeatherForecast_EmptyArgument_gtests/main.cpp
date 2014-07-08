
#include "gtest/gtest.h"
#include "EmptyArgument.h"

TEST( test001, EmptyArgumentTest )
{
    std::string functionName = "readData()";
    EmptyArgument error( functionName );

    // Actual result
    std::string actual;
    ASSERT_NO_THROW( {
                         actual = error.message( );
                     } );

    // Expected result
    std::string expected = "Error: empty argument in the "
            "function " + functionName;

    // Check the actual result
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
