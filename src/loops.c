#include <stdio.h>

unsigned long int factorial(int);
void get_fibonacci_series(int *, int);
unsigned char is_even(int);
void print_odds(int);
void print_evens(int);
void print_multiplication_table(int, int);
long int add_numbers(int, int);
long int multiply_numbers(int, int);
void print_every_nth_number(int, int, int);
long int add_evens(int, int);
void print_odds_backwards(int);

unsigned long int factorial(int number)
{
  unsigned long int fact = 1;
  for (int index = 1; index <= number; index++)
  {
    fact *= index;
  }
  return fact;
}

void get_fibonacci_series(int *fibonacci_series, int length)
{
  int term1 = 0, term2 = 1, sum, count;
  for (count = 0; count < length; count++)
  {
    fibonacci_series[count] = term1;
    sum = term1 + term2;
    term1 = term2;
    term2 = sum;
  }
}

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

void print_odds(int lastNum)
{
  printf("Odd numbers between 1 and %d are :\n", lastNum);
  for (int num = 1; num <= lastNum; num++)
  {
    !is_even(num) && printf("%d  ", num);
  }
}

void print_evens(int lastNum)
{
  printf("Even numbers between 1 and %d are :\n", lastNum);
  for (int num = 1; num <= lastNum; num++)
  {
    is_even(num) && printf("%d  ", num);
  }
}

void print_multiplication_table(int m, int n)
{
  printf("Multiplication table of %d till %d is :\n", m, n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d x %d = %d\n", m, i, m * i);
  }
}

long int add_numbers(int firstNum, int lastNum)
{
  long int sum = 0;
  for (int num = firstNum; num <= lastNum; num++)
  {
    sum += num;
  }
  return sum;
}

long int multiply_numbers(int firstNum, int lastNum)
{
  long int product = 1;
  for (int num = firstNum; num <= lastNum; num++)
  {
    product *= num;
  }
  return product;
}

void print_every_nth_number(int firstNum, int lastNum, int step)
{
  printf("Every %dth number between %d and %d are :\n", step, firstNum, lastNum);
  for (int num = firstNum; num <= lastNum; num += step)
  {
    printf("%d  ", num);
  }
}

long int add_evens(int firstNum, int lastNum)
{
  long int sum = 0;
  for (int num = firstNum; num <= lastNum; num++)
  {
    is_even(num) && (sum += num);
  }
  return sum;
}

void print_odds_backwards(int startNum)
{
  printf("Odds between %d and 1 in reverse order are:\n", startNum);
  for (int num = startNum; num >= 1; num--)
  {
    !is_even(num) && printf("%d  ", num);
  }
}

void print_int_array(int *array, unsigned length)
{
  int index;
  for (index = 0; index < length; index++)
  {
    printf("%d  ", array[index]);
  }
}

int main(void)
{
  int num, upto, step;

  printf("Enter a number to get factorial :\n");
  scanf("%d", &num);
  printf("%d factorial is %lu\n", num, factorial(num));

  printf("Enter a number to get fibonacci series :\n");
  scanf("%d", &num);
  int fibonacci_series[num];
  get_fibonacci_series(fibonacci_series, num);
  print_int_array(fibonacci_series, num);
  printf("\n");

  printf("Enter a number to print odds from 1 to that number :\n");
  scanf("%d", &upto);
  print_odds(upto);
  printf("\n");

  printf("Enter a number to print evens from 1 to that number :\n");
  scanf("%d", &upto);
  print_evens(upto);
  printf("\n");

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
  printf("\n");

  printf("Enter two numbers to print sum of evens in between :\n");
  scanf("%d %d", &num, &upto);
  printf("Sum of evens between %d and %d is %lu\n", num, upto, add_evens(num, upto));

  printf("Enter starting number to print odds backwards upto 1 :\n");
  scanf("%d", &num);
  print_odds_backwards(num);
  printf("\n");

  return 0;
}