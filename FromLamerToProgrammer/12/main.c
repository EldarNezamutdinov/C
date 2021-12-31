#include <stdio.h>

int main(void){
  // Перечисления
  enum DAYS {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} days;
  printf("MONDAY = %d.\n", MONDAY);

  enum DAYS day = MONDAY + TUESDAY;
  days = MONDAY + SUNDAY;
  printf("day = %d.\n", day);
  printf("days = %d.\n", days);

  typedef int MYTYPE;
  MYTYPE myvar = 100;
  
  return 0;
}
