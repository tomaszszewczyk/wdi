#define TEST

#include "unity.h"
#include "../source/main.cpp"

void test_test(void)
{
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(1),  1);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(2),  2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(3),  6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(4),  4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(5),  2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(6),  2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(7),  4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(8),  2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(9),  8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(10), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(11), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(12), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(13), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(14), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(15), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(16), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(17), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(18), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(19), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(20), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(21), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(22), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(23), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(24), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(25), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(26), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(27), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(28), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(29), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(30), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(31), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(32), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(33), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(34), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(35), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(36), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(37), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(38), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(39), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(40), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(41), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(42), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(43), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(44), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(45), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(46), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(47), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(48), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(49), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(50), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(51), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(52), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(53), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(54), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(55), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(56), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(57), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(58), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(59), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(60), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(61), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(62), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(63), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(64), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(65), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(66), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(67), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(68), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(69), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(70), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(71), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(72), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(73), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(74), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(75), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(76), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(77), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(78), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(79), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(80), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(81), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(82), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(83), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(84), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(85), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(86), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(87), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(88), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(89), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(90), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(91), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(92), 4);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(93), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(94), 8);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(95), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(96), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(97), 2);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(98), 6);
  TEST_ASSERT_EQUAL(calculate_last_digit_of_factorial(99), 4);
}

