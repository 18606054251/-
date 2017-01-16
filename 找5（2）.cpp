#include<stdio.h>
int main()
{
	/*题目说只要找到5就可以了，并没有说要求说要知道有几个5等等之类的*/
	int a[1000],i,t=0,n;     /*这里继续假设数组的长度和n*/
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
	if (t==1) printf ("是");
	else printf ("否");
	return 0; 
}
