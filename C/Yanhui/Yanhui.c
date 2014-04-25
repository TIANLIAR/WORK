#include<stdio.h>

#define MAX_LINE   15

int a[MAX_LINE];

void print(int n, int line)
{
	int i;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if(i < n - line -1)
			printf("    ");
		else
		{
			printf("%4d", a[j++]);
			printf("    ");			
		}
	}
}

void yanghui(int i)
{
	int m, tmp;
	
	tmp = 1;
	for(m = 0; m <= i; m++)
	{
		if(m == 0 || m == i)
			a[m] = 1;
		else
		{			
			a[m] = a[m] + tmp;
			tmp = a[m]-tmp;
		}
	}
	printf("\n");
}

int main()
{
	int i,n;

	printf("This program will print YanhuiSanjiao\n");
	printf("Enter the line you mant:\n");
	scanf("%d",&n);
	
	if(n < MAX_LINE && n > 0)
	{
		for(i = 0; i < n; i++)
		{
			yanghui(i);
			print(n, i);
		}
		printf("\n");
	}
	else
		printf("You must enter the number bigger than 0 and less than  %d\n",MAX_LINE);
}
