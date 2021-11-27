#include <stdio.h>

int main(int argc, char *argv[]){
  // Массивы

  char name[50] = "Хуила";
  char welcome[] = "Добро пожаловать, ";
  char array[9] = {'H', 'e', 'l', 'l', 'o', ' ', ',', ' ', '\0'};

  printf("Введите ваше имя: ");
  scanf("%50s", name);

  printf("%s%s!\n", welcome, name);

  int x[5] = {10, 5, 3, 2, 1};
  int y[5] = {0, 1, 2, 3, 5};

  int input = 0;

  printf("Введите число от 1 до 5: ");
  scanf("%d", &input);
  printf("Номеру %d соответствуют x=%d и y=%d.\n", input, x[input-1], y[input-1]);

}
