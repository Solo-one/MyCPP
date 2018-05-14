#include "gmock/gmock.h"
#include "gtest/gtest.h"
using ::testing::AtLeast;

TEST(PainterTEST, CanDrawSomething) {
    MockTurtle tutle;
    EXPECT_CALL(tutle, PenDown()).Times(AtLeast(1));
    Painter painter(&tutle);
    EXPECT_TRUE(painter.DrawCircle(0 , 0, 10));
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
