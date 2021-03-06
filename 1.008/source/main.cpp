#include <iostream>

using namespace std;

/**
 * Finds perfect numbers below 1 000 000
 * Napisać program wyszukujący liczby doskonałe mniejsze od miliona
 */

#ifndef TEST
int main(void)
{
  for(int i = 1; i < 1000000; i++)
  {
    int n   = i;
    int sum = 0;

    for(int tmp = 1; tmp <= n / 2; tmp++)
    {
      if(n % tmp == 0)
      {
        sum += tmp;
      }
    }
    if(sum == n)
    {
      printf("%d\n", n);
    }
  }

  return 0;
}
#endif