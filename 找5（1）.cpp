#include<stdio.h>
int main()
{
	int a[1000],i,n,t=0;      /*在这里假设数组只有1000的长度，还定义了一个n，这个n的意义是这个数组的长度，可以根据不同题目做出改变。*/ 
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);    /*其实在这里就可以作弊的，在这里加个if条件就可以省下后面的程序了，不过仅限于数组是需要输入的，如果是原来就知道的数据就不行了*/
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

