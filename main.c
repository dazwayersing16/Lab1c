// Author: Adam Warsing ajw6150@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *temperature = readline("Enter temperature in celsius: ");
  double t = atol(temperature);
  double temp = ((t*9/5) + 32);
  printf("%f° in Celsius is equivalent to %f° in Fahrenheit.\n",t,temp);
  return 0;
}