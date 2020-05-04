/*
 * Trivial implementation of converter function.
 * You may override this file or create your own.
 */
#include "converter.h"

#include <stdlib.h>

quote_t liam_atoi(char* line) { 
  unsigned result = 0, digit = 0;
  for(unsigned i = 0; line[i] != '\0'; i++) {
    digit = (unsigned)(line[i]);
    result *= 10; 
    result += digit;
    result -= '0';
  }
  return result; 
}

void convert_all(unsigned nlines, char *lines[], quote_t nums[])
{
  for(unsigned i = 0; i < nlines; i++) {
    nums[i] = liam_atoi(lines[i]);
  }
}
