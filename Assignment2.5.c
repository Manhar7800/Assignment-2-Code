#include<stdio.h>
int main(){
	
	int i;
	printf("\nusing break to stop at 5:");
	
	for(i=1;i<10;i++){
		if(i==5){
			break;
		}
		printf("%d",i);
	}
	printf("\n");
	return 0;
}


//continue statement 


   int i;
   
   for(i=1;i<10;i++){
   	if(i==3){
   		continue;
	   }
	   printf("%d",i);
   }
   printf("\n");
}
   
