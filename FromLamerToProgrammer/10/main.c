#include <stdio.h>

int main(int argc, char *argv[]){
  // Многомерные Массивы

  char place[3][3] = {{'A', 'C', 'E'},
                      {'2', '4', '6'}};

  printf("place[0][0] = %c\n", place[0][0]);
  printf("place[1][0] = %c\n", place[0][1]);
  printf("place[2][0] = %c\n", place[0][2]);
  printf("place[0][0] = %c\n", place[1][0]);
  printf("place[0][1] = %c\n", place[1][1]);
  printf("place[0][2] = %c\n", place[1][2]);
}
