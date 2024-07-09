#include<stdio.h>
int x,y,rem,res=1,sum;
void main(void)
{
	printf("please enter a number ");
	scanf_s("%d", &x);
	y = x;
	while (y != 0)
	{
		rem = y % 10;
		for(int i = rem; i > 0; i--)
		{
			res *= rem ;
			rem--;
		}
		y /= 10;
		sum += res;
		res = 1;
	}
	(x == sum) ? printf("%d is a srong number ", x) : printf("%d is  not a srong number ", x);
}