#include <stdio.h>

int print_denominations(unsigned long int);
unsigned long int print_note_count(unsigned long int, unsigned int);

unsigned long int print_note_count(unsigned long int currency,  unsigned int denomination){
  unsigned int count = currency/denomination;
  count > 0 && printf("%u x Rs %u\n", count, denomination);
  return currency % denomination;
}

int print_denominations(unsigned long int currency){
  unsigned long int remaining_currency;
  remaining_currency = print_note_count(currency,2000);
  remaining_currency = print_note_count(remaining_currency,500);
  remaining_currency = print_note_count(remaining_currency,200);
  remaining_currency = print_note_count(remaining_currency,100);
  remaining_currency = print_note_count(remaining_currency,50);
  remaining_currency = print_note_count(remaining_currency,10);
  remaining_currency = print_note_count(remaining_currency,5);
  print_note_count(remaining_currency, 1);
  return 0;
}

int main(void){
  unsigned long int currency;
  printf("Enter money :\n");
  scanf("%lu", &currency);
  printf("Amount is %lu\n", currency);
  print_denominations(currency);
  return 0;
}