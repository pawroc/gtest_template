//#define _GLIBCXX_USE_CXX11_ABI 0

#include <gtest/gtest.h>
//#include "Isolator.h"
#include <gmock/gmock.h>
#include <module/module.hpp>
//#include <module/secondModule.hpp>
#include "mocks/secondModuleMock.hpp"

using testing::Return;

TEST(pubFoo, zeros_shouldPass)
{
    MyModule<MySecondModuleMock> m;

    EXPECT_CALL(m.m, foo(0)).WillOnce(Return(0));

    EXPECT_EQ(m.pubFoo(0, 0), 2);
}

TEST(pubFoo, oneArgIsZero_shouldPass)
{
    MyModule<MySecondModuleMock> m;

    EXPECT_CALL(m.m, foo(-1)).WillOnce(Return(-2));

    EXPECT_EQ(m.pubFoo(-1, 100), -2);
}

TEST(pubFoo, oneArgIsZero_typemock_shouldPass)
{
//    MyModule<MySecondModule> m;
//    MySecondModule* sm = FAKE<MySecondModule>();

//    WHEN_CALLED(sm->foo(-1)).Return(-2);

//    EXPECT_EQ(m.pubFoo(-1, 100), -2);

//    ISOLATOR_CLEANUP();
}


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
