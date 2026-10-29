#include <iostream>
#include <cstring>
int main()
{
	char s[50]="Hello";
	char s1[20]="India";
	strcat(s, s1);
	printf("%s\n", s);
	printf("%s\n", s1);
}
