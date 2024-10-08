#include "stdio.h"
#include <limits.h>
#include <stdio.h>


int max_of_four(int num1, int num2, int num3, int num4)
{
  int max = INT_MIN;
  if (num1 > max) {
    max = num1;
  }
  if (num2 > max) {
    max = num2;
  }
  if(num3 > max) {
    max = num3;
  }
  if(num4 > max) {
    max = num4;
  }

  return max;
}


int main(int argc, char *argv[])
{
  int x = max_of_four(10, 8, 12, -1);

  printf("%d", x);
  return 0;
}

