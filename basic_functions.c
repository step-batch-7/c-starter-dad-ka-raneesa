#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);
int gcd(int, int);
int lcm(int, int);

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

int gcd(int num1, int num2)
{
  if (num2 == 0)
    return num1;
  return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2)
{
  return num1 * num2 / gcd(num1, num2);
}

int main(void)
{
  int num1, num2, num3;
  printf("Enter a number :\n");
  scanf("%d", &num1);
  printf("%d is %s\n", num1, is_even(num1) ? "even" : "not even");
  printf("%d is %s\n", num1, is_odd(num1) ? "odd" : "not odd");
  printf("Square of %d is %ld\n", num1, square(num1));
  printf("Cube of %d is %ld\n", num1, cube(num1));
  printf("Enter two numbers for calculating G.C.D. and L.C.M. :\n");
  scanf("%d %d", &num2, &num3);
  printf("G.C.D. of %d and %d is %d \n", num2, num3, gcd(num2, num3));
  printf("L.C.M. of %d and %d is %d \n", num2, num3, lcm(num2, num3));
}