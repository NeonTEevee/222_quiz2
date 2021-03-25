#include <stdio.h>
#include <math.h>
int main ()
{
	int num, i, j, pos = 1, check, cube = 1;
	scanf("%d", &num);
	
	for(i=1; i<num; i++)
	{
		for(j=1; j<i; j++)
		{
			if(pow(j*1.0,3)<=i)
				check = pow(j*1.0,3);
			printf("Check for %d = %d\n", i, check);
			if(i%check == 0)
			{
				cube = 0;
			} else {
				cube = 1;
			}
		}
		pos++;
	}
	
	if(cube == 1)
	{
		printf("%d", pos);
	} else {
		printf("Not Cube Free.");
	}
}
