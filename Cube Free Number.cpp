#include <stdio.h>
#include <math.h>
int main ()
{
	int num, i, j, pos = 0, check, cube;
	scanf("%d", &num);
	
	for(i=1; i<num; i++)
	{
		for(j=1; j<i; j++)
		{
			check = pow(j*1.0,3);
			if(i%check == 0)
			{
				cube = 0;
			} else {
				pos++;
				cube = 1;
			}
		}
	}
	
	if(cube == 1)
	{
		printf("%d", pos);
	} else {
		printf("Not Cube Free");
	}
}
