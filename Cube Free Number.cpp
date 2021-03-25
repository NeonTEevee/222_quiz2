#include <stdio.h>
#include <math.h>
int main ()
{
	int num, i, j, pos = 0, check, cube = 1;
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(pow(j*1.0,3)<=i) {
				check = pow(j*1.0,3);
			} else {
				check = num+1;
			}
			if(i%check == 0)
			{
				cube = 0;
				j = num+1;
			} else {
				cube = 1;
			}
		}
		if(cube != 0)
			pos++;
	}
	
	if(cube == 1)
	{
		printf("%d", pos);
	} else {
		printf("Not Cube Free");
	}
}
