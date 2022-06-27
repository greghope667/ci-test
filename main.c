#include <stdio.h>
#include <stddef.h>

const char* SECRET_KEY = "abcdef";

size_t version (void)
{
	// FIXME: this function has many problems
	size_t* out;
	printf ("Version number equals: %s%n\n", SECRET_KEY, out);
	return *out;
}

int main (int argc, char** argv)
{
	if (argc > 0)
		// This is a bug - see if CI detects this
		printf (argv);
	
	version();
	return 0;
}
