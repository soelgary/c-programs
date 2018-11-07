#include <stdio.h>

/*
 * Quiz: What is the state of the stack when fun2 is executed?
 *       Include every stack frame. 
 * 
 * Important GDB instructions
 * 1. breakpoint <linenum>
 * 2. step
 * 3. next
 * 4. info <locals>
 * 5. ignore <breakpoint> <count>
 * 6. continue
 * 7. print [<local>,<$register>]
 *
 */

int
fun2(int x, int y, int z)
{
  int m = x + y;
  return m % 3;
}

int
fun1(int a, int b)
{
  int c = 5;
  int d = c + a;
  int e = fun2(c, d, 12);
  return e + d;
}

int
main()
{
  fun1(1,2);
}
