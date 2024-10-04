#include<stdio.h>
int main (){
/* Author: GIDEON BARASA 
course:computer systems engineering 
registration number:PA107/G/24617/24*/
	
	int age;
	float income;
	
	printf("Enter Your age: ");
	scanf("%d/n", &age);
	
	printf("Enter Your annual income: ");
	scanf("%f/n", &income);
	
	if (age>=21 && income>=21000){
		printf("congratulations you qualify for the a loan");
	}
	else
		printf("Unfortunately, we are unable to offer you a loan at this time");		
		
		return 0;	
	
}
