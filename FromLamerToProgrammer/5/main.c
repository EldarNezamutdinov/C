#include <stdio.h>

int main(void){
  // арифметические операции
  int a, b;
  printf("Введите число a: ");
  scanf("%d", &a);
  printf("Введите число b: ");
  scanf("%d", &b);
  printf("%d + %d = %d\n", a, b, a+b);
  printf("%d - %d = %d\n", a, b, a-b);
  printf("%d * %d = %d\n", a, b, a*b);
  printf("%d / %d = %d\n", a, b, a/b);
  printf("+%d = %d\n", a, +a);
  printf("-%d = %d\n", a, -a);
  printf("%d %% %d = %d\n", a, b, a%b);
  return 0;
}
