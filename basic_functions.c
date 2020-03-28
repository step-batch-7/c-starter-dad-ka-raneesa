#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
{
  return !is_even(number);
}

long int square(int number)
{
  return number * number;
}

long int cube(int number)
{
  return square(number) * number;
}

int main(void)
{
  int number;
  printf("Enter a number :\n");
  scanf("%d", &number);
  printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s\n", number, is_odd(number) ? "odd" : "not odd");
  printf("Square of %d is %ld\n", number, square(number));
  printf("Cube of %d is %ld\n", number, cube(number));
}