#include<stdio.h>

int main()
{
	int age;
	printf("enter your age to vote\n");
	scanf("%d", &age:);
	
	if(age >= 18){
		printf("You are Egligible for the vote\n");
	} 
	else if(age < 18){
		printf("You are not Egligible for the vote\n");
	}
	return 0;
}