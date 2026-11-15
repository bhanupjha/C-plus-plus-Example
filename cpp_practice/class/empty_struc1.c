// empty class in c is 0 byte
#include <stdio.h>

struct ABC
{

};

int main()
{
	struct ABC obj;
	printf("Size of obj: %ld", sizeof(obj)); // 1 byte
}
