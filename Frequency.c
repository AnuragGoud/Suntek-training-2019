#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i;

  	int freq[150] = {0};

  	printf("\n Enter any String :  ");
  	gets(str);


  	for(i = 0; str[i] != '\0'; i++)
  	{
  		freq[str[i]]++;
	}

  	for(i = 0; i < 150; i++)
  	{
		if(freq[i] != 0)
		{
			printf("%c-%d\n", i, freq[i]);
		}
	}

  	return 0;
}
