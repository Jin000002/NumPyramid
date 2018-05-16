#include<stdio.h>

int main() 
{
	printf("Number Pyramid N rows\n");
	int start, end, n,num=0;
	printf("몇줄? : ");
	scanf_s("%d", &n);//n 줄
	start = n, end = n;
	for (int j = 0; j < n; j++)
	{
		num++;
		if (n > 5)
		{
			if (j < 4)
				for (int a = 0; a < n - 4; a++)
					printf(" ");
			else
				for (int k = 0; k < n - j; k++)
					printf(" ");
		}
			for (int i = 0; i <= end; i++)
		
		{
			
			
			if (i < start)
			{
				printf(" ");

			}
			else if (i<=n)
			{
				if(num>9)
					printf("%d", num);
				else
					printf("%d", num);
				num++;
			}
			else
			{
				num--;
				if (num>9)
					printf("%d", num);
				else
					printf("%d", num);
			}
			if (i == n)
			{
				num--;
			}
		}
		puts("");
		start--;
		end++;
	}
	return 0;
}
