// 1.	Write programs to demonstrate the usage of storage classes in C.
#include <stdio.h>

int x;
int a=10;
void local_var()
{
	printf("\nDemonstrating local variable\n");
	int a = 32;
	printf("Value of the variable 'a' declared as local: %d\n",a);
}
void global_var()
{
	printf("\nDemonstrating static variable\n");
	printf("Value of the variable 'a' declared as global: %d\n",a);
}
void static_var()
{
	int i = 0;
	printf("\nDemonstrating static variable\n");
	for (i = 1; i < 5; i++) {
		static int y = 5;
		y++;
		printf("Value of 'y' declared as static, in %d iteration is %d\n",i, y);
	}
}
void register_var()
{

	printf("\nDemonstrating register class\n");
	register int i;
	for(i=0;i<=5;i++)
	{
		printf("%d ",i);
	}
}
void extern_var()
{
	printf("\n\nDemonstrating extern class\n");
	extern int x;
	printf("Value of the variable 'x' declared as extern: %d\n",x);
	x = 2;
	printf("Modified value of the variable 'x' declared as extern: %d\n",x);
}
int main()
{

	printf("To demonstrate usage of storage Classes in C\n");
	local_var();
	global_var();
	static_var();
	register_var();
	extern_var();
	return 0;
}
