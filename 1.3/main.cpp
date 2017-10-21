#include <cstdio>
#include <iostream>

#include "FibonacciGenerator.h"

using namespace std;

/**
 * Finds out if exist substring which adds up to given number
 */

int main(void)
{
	int n;
	cin >> n;

	FibonacciGenerator<int> * end_gen = new FibonacciGenerator<int>();

	int end = 0;
	int beg = 0;
	int end_sum = 0;
	int beg_sum = 0;

	while(end < n)
	{
		end = end_gen->next();
		end_sum += end;

		beg_sum = 0;
		FibonacciGenerator<int> * beg_gen = new FibonacciGenerator<int>();
		while(beg < end)
		{	
			if(end_sum - beg_sum == n)
			{
				cout << "TAK" << endl;
				return 0;
			}

			beg = beg_gen->next();
			beg_sum += beg;
		}

		delete beg_gen;
	}

	cout << "NIE" << endl;
	return 0;
}