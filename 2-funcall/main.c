#include <stdio.h>

/*
 * Set a breakpoint at the beginning of the function.
 * Step through the function.
 * Display the parameters passed to addValues
 *
 * Important GDB instructions
 * 1. breakpoint <linenum>
 * 2. step
 * 3. next
 * 4. info <locals>
 *
 *
 * What are two different ways to enter the addValues function?
 *  
 */

int
addValues(int d, int c)
{
  int e = d + c;
  printf("Added value: %d\n", e);
  return e;
}

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  int d = addValues(a, b);
  int e = addValues(c, d);
  printf("Value of e: %d\n", e);
  return 1;
}
