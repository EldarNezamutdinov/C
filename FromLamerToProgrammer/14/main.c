#include <stdio.h>

int main(void){

  int num1 = 2;
  int num2 = 8;
  int num3 = 5;
  char sym1 = 'A', sym2 = 'a';

  printf("%d == %d => %d\n", num1, num2, num1 == num2);
  printf("%d <= %d => %d\n", num1, num3, num1 <= num3);
  printf("%d >= %d => %d\n", num2, num1, num2 >= num1); 
  printf("%d != %d => %d\n", num2, num1, num2 != num1);
  printf("%d != %d => %d\n", num2, num2, num2 != num2);

  return 0;
}
