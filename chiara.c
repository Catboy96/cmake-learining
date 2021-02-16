#include <stdio.h>
#include "version.h"
#include "lib/lib.h"

int main (int argc, char **argv)
{
	int a;

#ifdef USE_MYLIB	
	a = func(6);
#else
	a = 0;
#endif

	printf("hello\n");
	printf("version %d.%d\n", major, minor);
	printf("a = %d\n", a);

	return 0;
}

