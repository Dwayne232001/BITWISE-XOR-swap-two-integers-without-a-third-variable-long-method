#include <stdio.h>

int main(void) {
  int a=5,b=9;
  a=a^b;
  b=b^a;
  a=a^b;
  printf("The value of a is =%d\n",a);
  printf("The value of b is =%d",b);
  return 0;
}