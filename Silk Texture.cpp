#include <stdio.h>
int main ()
{
	int i, j, cloth, num, pat;
	scanf("%d", &cloth);
	scanf("%d", &num);
	int row[num], col[num], pix[num];
	for(i=0; i<num; i++)
		scanf("%d %d %d", &row[i], &col[i], &pix[i]);
	
	int text[500][70];
	for(i=0; i<=cloth; i++)
	{
		for(j=0; j<=70; j++)
		{
			text[i][j] = 0;
		}
	}
	
	for(i=0; i<num; i++)
	{
		for(pat=pix[i]-1; pat>=0; pat--)
			text[row[i]-1][col[i]+pat-1] = 1;
	}
	
	for(i=0; i<cloth; i++)
	{
		for(j=0; j<70; j++)
		{
			if(text[i][j] == 1)
			{
				printf("x");
			} else {
				printf("o");
			}
		}
		printf("\n");
	}
}
