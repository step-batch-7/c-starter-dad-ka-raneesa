#include <stdio.h>

unsigned long int factorial(int);

unsigned long int factorial(int number){
  unsigned long int fact = 1;
  for(int i = 1; i <= number; i++){
    fact *= i;
  }
  return fact;
}


int main(void){
  int num;
  printf("Enter a number to calculate factorial :\n");
  scanf("%d", &num);
  printf("%d factorial is %lu\n", num, factorial(num));
  return 0;
}