#include <stdio.h>

void currency_breakdown(unsigned long int, unsigned int *, unsigned int *, unsigned int);

void currency_breakdown(unsigned long int currency, unsigned int *denominations, unsigned int *no_of_notes, unsigned int length)
{
  unsigned long int remaining_currency = currency;
  unsigned int index;
  for (index = 0; index < length; index++)
  {
    no_of_notes[index] = remaining_currency / denominations[index];
    remaining_currency = remaining_currency % denominations[index];
  }
}

int main(void)
{
  unsigned long int currency;
  unsigned int denominations[8] = {2000, 500, 200, 100, 50, 10, 5, 1};
  unsigned int no_of_notes[8], index;
  printf("Enter money :\n");
  scanf("%lu", &currency);
  currency_breakdown(currency, denominations, no_of_notes, 8);
  for (index = 0; index < 8; index++)
  {
    printf("%u x Rs %u\n", no_of_notes[index], denominations[index]);
  }

  return 0;
}