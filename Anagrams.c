#include<stdio.h>
#include<string.h>
int check_anagram(char[],char[]);
int main()
{
    int flag;
    char str1[100];char str2[100];
    printf("\n Enter any String : ");
    gets(str1);
    printf("\n Enter any String : ");
    gets(str2);
    flag = check_anagram(str1,str2);

    if (flag == 1)
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);


}
int check_anagram(char str1[],char str2[])
{
    int i;
    int freq1[1000]={0};
    int freq2[1000]={0};
    for(i = 0; str1[i] != '\0'; i++)
  	{
  		freq1[str1[i]]++;
	}
    for(i = 0; str2[i] != '\0'; i++)
  	{
  		freq2[str2[i]]++;
	}
	for(i=0;i<100;i++)
    {
        if(freq1[i]!=freq2[i])
            return 0;
    }
return 1;

}



