#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i, j, x, y, left, right, palin = 0, check, value[8], digit;
	char num[8];
	scanf("%s", num);
	
	for(i=atoi(num); i>0; i--)
	{
		digit = 0;
		x = 0;
		y = 1;
		for(j=10; j<=i*10; j*=10)
		{
			value[x] = (i%j)/y;
			x++;
			digit++;
			y*=10;
		}
		right = value[0];
		left = value[x-1];
	}
}
