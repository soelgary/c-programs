#include <stdio.h>

/*
 * Quiz: What will be printed on the 12345th iteration?
 *       What will be printed on the 12445th iteration?
 * 
 * Important GDB instructions
 * 1. breakpoint <linenum>
 * 2. step
 * 3. next
 * 4. info <locals>
 * 5. ignore <breakpoint> <count>
 * 6. continue
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
  for (int i = 0; i < 15000; i++) {
    addValues(i, i*5-3);
  }
  return 1;
}
