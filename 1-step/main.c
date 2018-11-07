#include <stdio.h>

/*
 * Set a breakpoint at the beginning of the function.
 * Step through the function.
 *
 *
 * Important GDB instructions
 * 1. breakpoint <linenum>
 * 2. step
 * 3. next
 *
 */

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  int d = a + b;
  int e = c + d;
  printf("Value of e: %d\n", e);
  return 1;
}
