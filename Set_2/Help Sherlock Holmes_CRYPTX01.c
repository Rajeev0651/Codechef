#include<stdio.h>
#include<string.h>
#include<math.h>
void removeSpaces(char *str) 
{ 
    int count = 0,i;  
    for (i = 0; str[i]; i++) 
        if (str[i] != ' ') 
            str[count++] = str[i];                                 
    str[count] = '\0'; 
}
int main()
{
	char A[500];
	int i,j,count = -1,c=0,d=0,row,col;
	float rw,cl;
	scanf("%[^\n]%*c",A);
	removeSpaces(A);
	rw = floor(sqrt(strlen(A)));
	cl = rw+1;
	row = rw; col = cl;
	char S[row+5][col+5];
	for(i=1; i<=row; i++)
	for(j=1; j<=col; j++)
	S[i][j] = ' ';
//	printf("%d\t%d",row,col);
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			S[i][j] = A[++count];
		}
	}
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			printf("%c",S[i][j]);
		}
		printf("\n");
	}
	for(j=1; j<=col; j++)
	{
		for(i=1; i<=row; i++)
		{	if(S[i][j]!=' ')
			printf("%c",S[i][j]);
		}
		printf(" ");
	}
	return 0;
}
