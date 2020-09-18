// Author: Adam Warsing ajw6150@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *temperature = readline("Enter temperature in celsius: ");
  double t = atof(temperature);
  double temp = ((t*9/5) + 32);
  printf("%lf° in Celsius is equivalent to %lf° Fahrenheit.\n",t,temp);
  return 0;
}