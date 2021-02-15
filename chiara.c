#include <stdio.h>
#include "version.h"
#include "lib/lib.h"

int main (int argc, char **argv)
{
	int a = func(6);

	printf("hello\n");
	printf("version %d.%d\n", major, minor);
	printf("a = %d\n", a);

	return 0;
}

