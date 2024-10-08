#include "stdio.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *num1 = malloc(sizeof *num1);
  int *num2 = malloc(sizeof *num2);

  float *fl1 = malloc(sizeof *fl1);
  float *fl2 = malloc(sizeof *fl2);

  scanf("%d %d", num1, num2);
  scanf("%f %f", fl1, fl2);

  printf("%d %d\n", (*num1 + *num2), (*num1 - *num2));
  printf("%.1f %.1f\n", (*fl1 + *fl2), (*fl1 - *fl2));
 
  free(num1);
  free(num2);
  free(fl1);
  free(fl2);

  return EXIT_SUCCESS;
}
