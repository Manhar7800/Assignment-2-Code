#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[100];
	char str2[50];
	int i,j;
	
	printf("Enter the frist string:");
	scanf("%s",str1);
	
	printf("Enter the second string:");
	scanf("%s",str2);
	
	strcat(str1,str2);
	
	int length = 0;
	
	for(i=0;str1[i] !=NULL;i++){
		length++;
	}
	printf("\n Concate string: %s",str1);
	printf("\n length of concate string: %d",length);
	
	return 0;
}
