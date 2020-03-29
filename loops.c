#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
int print_odds(int);

unsigned long int factorial(int number){
  unsigned long int fact = 1;
  for(int index = 1; index <= number; index++){
    fact *= index;
  }
  return fact;
}

int fibonacci(int length){
  int first = 0, second = 1;
  printf("Fibonacci series :\n");
  for(int index = 1; index <= length; index++){
    printf("%d\n", first);
    int temp = second;
    second += first;
    first = temp;
  }
  return 0;
}

unsigned char is_even(int number) {
  return number % 2 == 0 ;
}

int print_odds(int lastNum){
  printf("Odd numbers between %d and %d are :\n", 1, lastNum);
  for(int num = 1; num <= lastNum; num++){
   !is_even(num) && printf("%d\n", num);
  }
  return 0;
}


int main(void){
  int num;
  printf("Enter a number to get factorial :\n");
  scanf("%d", &num);
  printf("%d factorial is %lu\n", num, factorial(num));

  printf("Enter a number to get fibonacci series :\n");
  scanf("%d", &num);
  fibonacci(num);

  printf("Enter a number to print odds from 1 to that number :\n");
  scanf("%d", &num);
  print_odds(num);
  return 0;
}