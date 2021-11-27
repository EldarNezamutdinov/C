#include <stdio.h>

int main(void){
  //Составные операции
  int num1 = 0, num2 = 0;
  printf("Введите первое число: ");
  scanf("%d", &num1);
  printf("Введите вьорое число: ");
  scanf("%d", &num2);

  printf("%d += %d = %d\n", num1, num2, num1 += num2);
  printf("%d -= %d = %d\n", num1, num2, num1 -= num2);
  printf("%d *= %d = %d\n", num1, num2, num1 *= num2);
  printf("%d /= %d = %d\n", num1, num2, num1 /= num2);
  printf("%d %%= %d = %d\n", num1, num2, num1 %= num2);
  return 0;
}
