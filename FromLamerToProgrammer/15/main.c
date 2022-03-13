#include <stdio.h>

int main(void){
  int a = 1, b = 0;
  printf("!%d = %d; !%d = %d\n", a, !a, b, !b);
  printf("%d && %d = %d\n", a, b, a && b);
  printf("%d && %d = %d\n", a, a, a && a);
  printf("%d && %d = %d\n", b, b, b && b);
  printf("%d || %d = %d\n", a, b, a || b);
  printf("%d || %d = %d\n", a, a, a || a);
  printf("%d || %d = %d\n", b, b, b || b);
  return 0;
}
