#include<stdio.h>
#include<string.h>
int main()
{
	char A[100],B[100];             /*����������鳤������ҳ���ֻ��100��������������ı�Ϳ���������ʵA����Ҫ���Ƶ�B�����У���Ҫ��B���鳤��Ҫ��С��A����ĳ���*/ 
	scanf ("%s",A);
	scanf ("%s",B);
	strcpy(B,A);
	printf ("%s",B);
	return 0;
}

