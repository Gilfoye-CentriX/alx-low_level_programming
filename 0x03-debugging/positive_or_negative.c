#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
  if (n >= 0)
    {
      printf(" is positive \n");
    }
  else if (n < 0)
    {
      printf(" is negative \n");
    }
  else
    {
      printf(" is zero \n");
    }

  return (0);
}
