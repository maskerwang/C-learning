#include<stdio.h>
int main()
{
	int a[4][4]={};
	int b[1]={0};
	int i,j;
	int h,l;
	int max=b[1];
	int max1=b[1];
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<4;i++)
	{
	   for(j=0;j<4;j++)
	   {
		printf("%d\t",a[i][j]); 
      }
	   printf("\n");
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
     	{
	    	if(a[i][j]>max)
	    	{
		    	max=a[i][j];
		    	h=i+1;
		    	l=j+1;
	    	}
	    }
    	printf("第%d个人最高成绩是%d是第%d门课",h,max,l);
    	max=b[1];
    	 printf("\n");
	}
		for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
     	{
	    	if(a[j][i]>max1)
	    	{
		    	max1=a[j][i];
		    	h=j+1;
		    	l=i+1;
	    	}
	    }
    	printf("第%d门课最高成绩是%d是第%d个人",l,max1,h);
    	max1=b[1];
    	 printf("\n");
	}
	return 0;
}
