#include <stdio.h>

/*
 * Quiz: What is the location of the segfault(s)?
 *       What is the address that the program tries to access?
 *       Fix the segfault(s). 
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
main(int argc, char* argv[])
{
	int i, j, k;
	int x[10000];

	for(i = 0; i < 1000; ++i){
		x[i] = i;
	}

	printf("Enter integer in 0..9999: ");
	scanf("%d", k);

	tester(x, k);
	
	return 1;
}

void
tester(int* c, int k)
{
	printf("x[%d] = %d\n", k, c[k]);
}
