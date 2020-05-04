/*
 * Trivial implementation of converter function.
 * You may override this file or create your own.
 */
#include "converter.h"

#include <stdlib.h>

int liam_atoi(char* line) {
  int result = 0;
  for(int i = 0; line[i] != '\0';) 
    result = result * 10 + line[i++] - '0';
  return result;
}

void convert_all(unsigned nlines, char *lines[], quote_t nums[])
{
  for(int i = 0; i < (int)(nlines); i++) 
    nums[i]= liam_atoi(lines[i]);
}
