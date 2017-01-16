#include<stdio.h>
int main()
{
    int a[10];
    int i,j,t,temp;                //假设就十个数吧 
    for (i=0;i<10;i++)             //输入10个待排序的数
    {
        scanf("%d",&a[i]);
    }
    for (j=1;j<=9;j++)            //j从1到10循环
    {
        t=10-j;                       //t=10-j
        for (i=0;i<t;i++)             //  i从0到t-1循环  比较相邻的元素。如果第一个比第二个大，就交换他们两个
                               
        {
            if (a[i]>a[i+1])           
            {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
    }
    for (i=0;i<=9;i++)           /*输出排序后的数字（这个输出的是从小到大的排序，如果要从大到小只要把循环里面给改了就行了）*/
    {
        printf("%d  ",a[i]);     /*从大到小如下：for (i=9;i>=0;i--) printf ("%d  ",a[i])*/
    }
   return 0;
}
