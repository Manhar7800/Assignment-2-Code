/*#include<stdio.h> 
int main() 
{ 
char ch='%',choice; 
int num1,num2; 
up : 
printf("\nEnter the value of num1 = "); 
scanf("%d",&num1); 
printf("\nEnter the value of num2 = "); 
scanf("%d",&num2); 
printf("\nPress '+' for addition"); 
printf("\nPress '-' for subtraction"); 
printf("\nPress '*' for multiplication"); 
printf("\nPress '/' for division"); 
printf("\nPress '%c' for remainder",ch); 
printf("\nEnter the choice = "); 
scanf(" %c",&choice); 
switch(choice) 
{ 
case '+': 
printf("\nThe addition of %d and %d is = %d",num1,num2,num1+num2); 
break; 
case '-': 
printf("\nThe subtraction of %d and %d is = %d",num1,num2,num1-num2); 
break; 
case '*': 
printf("\nThe multiplication of %d and %d is = %d",num1,num2,num1*num2); 
break; 
case '/': 
printf("\nThe division of %d and %d is = %.2f",num1,num2,(float)num1/num2); 
break; 
case '%': 
printf("\nThe remainder of %d and %d is = %d",num1,num2,num1%num2); 
break; 
} 
printf("\nPress 'Y' to continue or 'N' to exit = "); 
scanf(" %c",&choice); 
if(choice=='y' || choice=='Y') 
{ 
goto up; 
} 
return 0; 
}

#include<stdio.h> 
int main() 
{ 
char ch='%',choice; 
int num1,num2; 
up : 
printf("\nEnter the value of num1 = "); 
scanf("%d",&num1); 
printf("\nEnter the value of num2 = "); 
scanf("%d",&num2); 
printf("\nPress '+' for addition"); 
printf("\nPress '-' for subtraction"); 
printf("\nPress '*' for multiplication"); 
printf("\nPress '/' for division"); 
printf("\nPress '%c' for remainder",ch); 
printf("\nEnter the choice = "); 
scanf(" %c",&choice); 
switch(choice) 
{ 
case '+': 
printf("\nThe addition of %d and %d is = 
%d",num1,num2,num1+num2); 
break; 
case '-': 
printf("\nThe subtraction of %d and %d is = 
%d",num1,num2,num1-num2); 
break; 
case '*': 
printf("\nThe multiplication of %d and %d is = 
%d",num1,num2,num1*num2); 
break; 
case '/': 
printf("\nThe division of %d and %d is = 
%.2f",num1,num2,(float)num1/num2); 
break; 
case '%': 
printf("\nThe remainder of %d and %d is = 
%d",num1,num2,num1%num2); 
break; 
} 
printf("\nPress 'Y' to continue or 'N' to exit = "); 
scanf(" %c",&choice); 
if(choice=='y' || choice=='Y') 
{ 
goto up; 
} 
return 0; 
}*/

// relation operator
#include<stdio.h> 
int main() 
{ 
int n1=10,n2=12,n3=0; 
int ans; 
ans = n1<n2; 
printf("\nThe reult of n1<n2 = %d",ans); 
printf("\nThe result of n1<=n2 = %d",n1<=n2);
printf("\nThe result of n1>n2 = %d",n1>n2); 
printf("\nThe result of n1>=n2 = %d",n1>=n2); 
printf("\nThe result of n1==n2 = %d",n1==n2); 
printf("\nThe result of n1!=n2 = %d",n1!=n2); 
return 0; 
}


//logical operator
#include<stdio.h> 
int main() 
{ 
int n1=10,n2=30,n3=40; 
printf("\nResult of n1<n2 && n1<n3 = %d",n1<n2 && n1>n3); 
printf("\nResult of n1<n2 || n1<n3 = %d",n1<n2 || n1>n3); 
printf("\nResult of !n1<n2 = %d",!n1<n2); 
return 0; 
}
