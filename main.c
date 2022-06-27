#include <stdio.h>

int main (int argc, char** argv)
{
	if (argc > 0)
		// This is a bug - see if CI detects this
		printf (argv);
	return 0;
}
