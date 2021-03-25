#include <stdio.h>
int main ()
{
	int i, j, cloth, num;
	scanf("%d", &cloth);
	scanf("%d", &num);
	int row[num], col[num], pix[num];
	for(i=0; i<num; i++)
		scanf("%d %d %d", &row[i], &col[i], &pix[i]);
	
	int text[70][cloth];
	for(i=0; i<=cloth; i++)
	{
		for(j=0; j<=70; j++)
		{
			text[i][j] = 0;
		}
	}
	
	for(i=0; i<num; i++)
	{
		text[row[i]][col[i]] = 1;
	}
}
