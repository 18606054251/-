#include<stdio.h>
#include<string.h>
int main()
{
	char A[100],B[100];             /*这里假设数组长度相等且长度只有100，具体情况再做改变就可以啦，其实A数组要复制到B数组中，有要求B数组长度要不小于A数组的长度*/ 
	scanf ("%s",A);
	scanf ("%s",B);
	strcpy(B,A);
	printf ("%s",B);
	return 0;
}

