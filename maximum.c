
#include <stdio.h>
#include <string.h>

void Max_Occurring(char *str);

int main()
{
  	char str[100];

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	Max_Occurring(str);

  	return 0;
}

void Max_Occurring(char *str)
{
	int i;
  	int max = 0;

  	int eleme[256] = {0};

  	for(i = 0; str[i] != '\0'; i++)
  	{
  		eleme[str[i]] = eleme[str[i]] + 1;
	}

  	for(i = 0; i < 256; i++)
  	{
		if(eleme[i] > eleme[max])
		{
			max = i;
		}
	}
	printf("\n Character '%c' appears Maximum of %d Times in a Given String :  %s ", max, eleme[max], str);
}
