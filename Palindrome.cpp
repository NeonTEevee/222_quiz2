#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i, j, x, y, left, right, palin = 0, check, value[8];
	char num[8];
	scanf("%s", num);
	
	for(i=atoi(num); i>0; i--)
	{
		check = 1;
		x = 0;
		y = 1;
		for(j=10; j<=i*10; j*=10)
		{
			value[x] = (i%j)/y;
			x++;
			y*=10;
		}
		left = x-1;
		right = 0;
		while(left >= right)
		{
			if(value[left] != value[right])
				check = 0;
			left--;
			right++;
		}
		if(check == 1)
			palin++;
	}
	
	printf("%d", palin);
}
