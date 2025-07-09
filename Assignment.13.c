#include<stdio.h>
int main(){
	
	int str[100];
	FILE *hello;
	hello=fopen("demo.txt","r");
	if(hello==NULL)
	{
		
		printf("\n FILE WAS NOT EXIST:");
	}
	else{
		while(fgets(str,sizeof(str),hello))
		{
			printf("\n %s",str);
		}
	}
	fclose(hello);
}
    
