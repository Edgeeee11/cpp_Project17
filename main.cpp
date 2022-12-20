#include <iostream>
#include <string.h>

main() 
{
	char str[100];
	
	printf("Please enter a word\n");
	
	gets(str);
	
	printf("%c\n", str[1]);
		
	printf("Please enter a word\n");
	
	gets(str);
	
	int q=strlen(str);
	
	char buf=str[0];
	str[0]=str[q-1];
	str[q-1]=buf;
	
	puts(str);
	
	printf("Please enter a word\n");
	
	gets(str);
	
	int i;
	printf("del=");
	scanf("%i", &i);
	
	
	for(int j=i-1; j<strlen(str); j++)
	{
		str[j]=str[j+1];
	}
	
	puts(str);
	
}
