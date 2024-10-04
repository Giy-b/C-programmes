#include <stdio.h>
int main(){

/*Author: Gideon Barasa
Course: computer systems engineering 
Registration number:PA107/G/24617/24*/
	int book_ID;
	int due_date;
	int return_date;
	
	printf("Enter the book ID: ");
	scanf("%d/n", &book_ID);
	
	printf("Enter the due_date: ");
	scanf("%d/n", &due_date);
	
	printf("Enter the return_date: ");
	scanf("%d/n", &return_date);
	
	int Overduedays=return_date-due_date;
	printf("Over due day: %d", Overduedays);
	
	if (Overduedays<=7 && Overduedays>0){
		printf("Fine Rate= Ksh.20");
	}
	else if (Overduedays>7 && Overduedays<=14){
		printf("Fine Rate= Ksh.50");
		
	}
	else if (Overduedays>14){
	printf("Fine Rate= Ksh.100");
		
	}
	else printf("Invalid input");

return 0;
	
	
	
	
	
	
}