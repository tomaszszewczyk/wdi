#include "unity.h"
#include <cstdio>

#include "fibonacciGenerator.cpp"

void test_default_initializers(void)
{
	int elements[] = {0,   1,   1,    2,    3,
					  5,   8,   13,   21,   34,
					  55,  89,  144,  233,  377,
					  610, 987, 1597, 2584, 4181};

	FibonacciGenerator generator;
	
	for(int i = 0; i < sizeof(elements)/sizeof(int); i++)
	{
		TEST_ASSERT_EQUAL(elements[i], generator.next());
	}
}