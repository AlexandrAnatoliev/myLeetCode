#include <gtest/gtest.h>

// Простейший тест: прÐ¾веряем, что 1 + 1 = 2
TEST(SanityCheck, Addition) { 
  EXPECT_EQ(1 + 1, 2); 
}

// Пустая main, чтобы линковаться с gtest_main
int main(int argc, char **argv) { 
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS(); 
}
