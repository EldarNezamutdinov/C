#include <stdio.h>

int main(void){
	//Ввод-вывод информации

	int num1 = 0, num2 = 0;
	float pi = 3.14159265358;
	char grade = 'A';

	// %c - char
	// %d, %i - int
  // %f - float
	// %g - float, double
	// %p - addres
	// %s - string

	printf("Число Пи равно %06.2f.\n\a", pi);
	printf("%c is your grade for the test.\n", grade);
	printf("Введите первое число: ");
	scanf("%d", &num1);
	printf("Введите второе число: ");
	scanf("%d", &num2);
	printf("number1 = %d, number2 = %d.\n", num1, num2);
	printf("Размер переменной int равен %ld байт.\n", sizeof(int));
	printf("Размер переменной char равен %ld байт.\n", sizeof(char));
	printf("Размер переменной float равен %ld байт.\n", sizeof(float));

	return 0;
}
