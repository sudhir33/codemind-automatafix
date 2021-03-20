#include<stdio.h>
void printCharacterPattern(int num)
{
	int i,j;
	char ch='a',print;//ch=a
	for(i=0;i<num;i++)
	{
		print=ch;//print='a'
		for(j=0;j<=i;j++)
		{
			printf("%c",print++);//a bc def
		}
		printf("
");
	}
}


int main()
{
	int num;
	scanf("%d",&num);
	printCharacterPattern(num);
	return 0;
}