#include<stdio.h>
int main()
{
	int a[6][6];
	int i,j;
	int m=36;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
	    {
	 	    a[i][j]=m;
	     	m=m-1;
	    	printf("%d\t",a[i][j]);
    	}
    	printf("\n");
	}
//���������
   printf("�������������\n"); 
    for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
    	{
		 printf("%d\t",a[i][j]);
    	}	
        printf("\n");	
    }
//���������
 printf("�������������\n"); 
	 for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
    	{
	     if(j<i)
		printf(" \t"); 
		else
		 printf("%d\t",a[i][j]);
    	}	
        printf("\n");	
    }
	return 0;
} 
