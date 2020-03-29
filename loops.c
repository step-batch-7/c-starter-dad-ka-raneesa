#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
int print_odds(int);
int print_evens(int);
int print_multiplication_table(int, int);
long int add_numbers(int, int);
long int multiply_numbers(int, int);
int print_every_nth_number(int, int, int);

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

int print_evens(int lastNum){
  printf("Even numbers between %d and %d are :\n", 1, lastNum);
  for(int num = 1; num <= lastNum; num++){
   is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int print_multiplication_table(int m, int n){
  printf("Multiplication table of %d till %d is :\n", m, n);
  for(int i = 1; i <= n; i++) {
    printf("%d x %d = %d\n", m, i, m * i);
  }
  return 0;
}

long int add_numbers(int firstNum, int lastNum){
  long int sum = 0;
  for(int num = firstNum; num <= lastNum; num++) {
    sum += num;
  }
  return sum;
}

long int multiply_numbers(int firstNum, int lastNum){
  long int product = 1;
  for(int num = firstNum; num <= lastNum; num++) {
    product *= num;
  }
  return product;
}

int print_every_nth_number(int firstNum, int lastNum, int step){
  printf("\nEvery %dth number between %d and %d are :\n", step, firstNum, lastNum);
  for(int num = firstNum; num <= lastNum; num += step) {
    printf("%d\n", num);
  }
  return 0;
}

int main(void){
  int num, upto, step;

  printf("Enter a number to get factorial :\n");
  scanf("%d", &num);
  printf("%d factorial is %lu\n", num, factorial(num));

  printf("Enter a number to get fibonacci series :\n");
  scanf("%d", &num);
  fibonacci(num);

  printf("Enter a number to print odds from 1 to that number :\n");
  scanf("%d", &upto);
  print_odds(upto);

  printf("Enter a number to print evens from 1 to that number :\n");
  scanf("%d", &upto);
  print_evens(upto);

  printf("Enter two numbers to get multiplication table :\n");
  scanf("%d %d", &num, &upto);
  print_multiplication_table(num, upto);

  printf("Enter two numbers to get sum of numbers in between :\n");
  scanf("%d %d", &num, &upto);
  printf("Sum of the numbers between %d and %d is %ld\n", num, upto, add_numbers(num, upto));

  printf("Enter two numbers to get product of numbers in between :\n");
  scanf("%d %d", &num, &upto);
  printf("Product of the numbers between %d and %d is %ld\n", num, upto, multiply_numbers(num, upto));

  printf("Enter start and ending of a series and step :\n");
  scanf("%d %d %d", &num, &upto, &step);
  print_every_nth_number(num, upto, step);
  return 0;
}