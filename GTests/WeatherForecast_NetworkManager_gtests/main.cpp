
#include <QString>
#include "gtest/gtest.h"
#include "NetworkManager.h"
#include "EmptyArgument.h"

TEST( test001, EmptyArgumentTest )
{
    QString url = "";
    NetworkManager manager;

    ASSERT_THROW( {
                      manager.fetch( url );
                  }, EmptyArgument );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
