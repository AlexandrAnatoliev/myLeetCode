#include <gtest/gtest.h>
#include "Calculator.hpp"   // подклюÑаем наш класс
TEST(CalculatorTest, AddPositive) {
  Calculator calc;
  EXPECT_EQ(calc.add(2, 3), 5);
}
