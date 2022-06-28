#include <cstdio>
#include <cstdlib>

struct Large
{
	int data[128];
};

Large* badMalloc (int count)
{
	Large* l = (Large*) std::malloc (count * sizeof(Large));
	l[count-1].data[0] = 7;
	return l;
}

int doNothing (int a, int b)
{
	a += b;
	// return a;
}

int outOfBoundsLoop (Large l)
{
	int sum = 0;
	for (float i=0; i<sizeof(Large::data); i++)
	{
		sum += l.data[(int)i];
	}
	return sum;
}

float undefinedTypePun (int a)
{
	return *(float*)&a;
}

void rethrow ()
{
	throw;
}

void noexceptThrow () noexcept
{
	throw 1;
}

struct DestructorThrow
{
	~DestructorThrow () {
		throw "Terminate";
	}
};

int main (int argc, char** argv)
{
	std::printf (argv[0]);
}
