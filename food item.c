#include<stdio.h>
#include<conio.h>
int main()
{
	int choice=0;
	printf("Pick an food item:\n1.Pizza \n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You picked Pizza:");
			printf("Price-Rs239");
			break;
		case 2:
			printf("You picked Burger:");
			printf("Price-Rs129");
			break;
		case 3:
			printf("You picked Pasta:");
			printf("Price-rs179");
			break;
		case 4:
			printf("YOu picked French fries:");
			printf("Price-Rs99");
			break;
		case 5:
			printf("You pickedd Sandwich:");
			printf("Price-Rs149");
			break;
		default	: printf("Invalide choice");
		
	}
	return 0;
}
