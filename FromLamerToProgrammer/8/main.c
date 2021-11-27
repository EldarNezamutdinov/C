#include <stdio.h>

int main(int argc, char *argv[]){
  // Преобразование типов данных

  int x = 2;
  float y = 3 / (x + 0.0); // неявное преобразование типов
  printf("%1.1f\n", y);

  double z = (double) x + (double) y; // явное преобразование данных
  printf("%1.1f\n", z);

  return 0;
}
