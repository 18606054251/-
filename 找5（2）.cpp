#include<stdio.h>
int main()
{
	/*��Ŀ˵ֻҪ�ҵ�5�Ϳ����ˣ���û��˵Ҫ��˵Ҫ֪���м���5�ȵ�֮���*/
	int a[1000],i,t=0,n;     /*���������������ĳ��Ⱥ�n*/
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	} 
	for (i=0;i<n;i++)
	{
		if (a[i]==5)
		{
			t=1;
			break;
		}
	}
	if (t==1) printf ("��");
	else printf ("��");
	return 0; 
}
