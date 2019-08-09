#include <stdio.h>

int main()
{
  int x = 0;
  int y = 0;

  printf("Enter two integers, seperated by a *, to be multiplied...\n");
  scanf("%32d*%32d", &x, &y);

  printf("The result of %d multipled by %d is %d \n", x, y, x*y);
  return 0;
}
