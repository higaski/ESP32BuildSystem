#include "sum.hpp"
#include <gtest/gtest.h>

TEST(sum, add_positive_numbers) { EXPECT_EQ(42, sum(41, 1)); }