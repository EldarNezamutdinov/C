#include <stdio.h>

static int x = 135; //Глобальная локальная переменная

int main(void){
  // Глобальные и локальные переменные

  extern int x; // подключаем глобальную переменную, объявленную вне функции
  extern char symbol; // подключаем переменную из соседнего файла
  printf("%d\n", x);
  printf("%c\n", symbol);
  return 0;
}
