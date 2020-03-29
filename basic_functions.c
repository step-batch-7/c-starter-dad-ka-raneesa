#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
double square(double);
double cube(double);
int gcd(int, int);
int lcm(int, int);
double simple_interest(double, double, double);
double compound_interest(double, double, double);
double fahrenheit_to_centigrade(double);
double centigrade_to_fahrenheit(double);
double get_greatest(double, double);
double greatest_of_three(double, double, double);
double average_of_three(double, double, double);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
{
  return !is_even(number);
}

double square(double number)
{
  return number * number;
}

double cube(double number)
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

double simple_interest(double p, double n, double r)
{
  return (p * n * r) / 100;
}

double compound_interest(double p, double n, double r){
  return p* (pow((1+r/100),n)); 
}

double fahrenheit_to_centigrade(double temperature)
{
  return ((temperature - 32) * 5) / 9;
}

double centigrade_to_fahrenheit(double temperature)
{
  return (temperature * 9 / 5) + 32;
}

double get_greatest(double num1, double num2) 
{
  return num1 > num2 ? num1 : num2;
}

double greatest_of_three(double num1, double num2, double num3) 
{
  return get_greatest(get_greatest(num1, num2), num3);
}

double average_of_three(double num1, double num2, double num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num1, num2, num3;
  double num4, num5, num6, principle, rate, time, temperature;
  printf("Enter a number :\n");
  scanf("%d", &num1);
  printf("%d is %s\n", num1, is_even(num1) ? "even" : "not even");
  printf("%d is %s\n", num1, is_odd(num1) ? "odd" : "not odd");
  printf("Enter a number to calculate square and cube :\n");
  scanf("%lf", &num4);
  printf("Square of %lf is %lf\n", num4, square(num4));
  printf("Cube of %lf is %lf\n", num4, cube(num4));
  printf("Enter two numbers for calculating G.C.D. and L.C.M. :\n");
  scanf("%d %d", &num2, &num3);
  printf("G.C.D. of %d and %d is %d \n", num2, num3, gcd(num2, num3));
  printf("L.C.M. of %d and %d is %d \n", num2, num3, lcm(num2, num3));
  printf("\nEnter the principle amount,number of years, rate of interest to calculate simple and compound interest :\n");
  scanf("%lf %lf %lf", &principle, &time, &rate);
  printf("Simple interest is %lf \n", simple_interest(principle, time, rate));
  printf("Compound interest is %lf \n", compound_interest(principle, time, rate));
  printf("Enter fahrenheit temperature to convert into centigrade :\n");
  scanf("%lf", &temperature);
  printf("Centigrade of %f fahrenheit is %5.2lf\n", temperature, fahrenheit_to_centigrade(temperature));
  printf("Enter centigrade temperature to convert into fahrenheit :\n");
  scanf("%lf", &temperature);
  printf("fahrenheit of %f centigrade is %5.2lf\n", temperature, centigrade_to_fahrenheit(temperature));
  printf("Enter three numbers to calculate greatest number and average of three :\n");
  scanf("%lf %lf %lf", &num4, &num5, &num6);
  printf("%lf is the greatest of %lf, %lf and %lf\n",greatest_of_three(num4, num5, num6), num4, num5, num6);
  printf("%lf is the average of %lf, %lf and %lf",average_of_three(num4, num5, num6), num4, num5, num6);
}