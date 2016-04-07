#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	/*char *p = "csoftx3000";
	char a[] = "csoftx3000";*/
	/*unsigned short *arr[10][10];
	typedef union un
	{
		unsigned long a;
		unsigned short b[7];
		unsigned char c;
	}a;
	a b;
	a *p;*/
	char arr[] = "abcdefg";
	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	printf("sizeof(arr) = %d\n",sizeof(arr));
	//printf("sizeod(p) = %d\n", sizeof(p));
	//printf("sizeof(*p) = %d\n", sizeof(*p));
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("%s\n",arr);
	printf("%s\n",b);

	system("pause");
	return 0;
}