#include <stdio.h>

void displayMenu();
void placeOrder(char option);
float calculateTotalCost(char option, int quantity);

int main()
{
	char option;
	int quantity;
	
	do {
		displayMenu();
		printf("Enter your option: ");
		scanf("%c", &option);
		if (option != 'd') {
			printf("Enter the quantity: ");
			scanf("%d", &quantity);
			placeOrder(option);
			float totalCost = calculateTotalCost(option, quantity);
			printf("Total cost: $%.2f\n\n", totalCost);
		}
	} while (option != 'd');
	return 0;
}

void placeOrder(char option)
{
	switch (option) {
		case 'a':
			printf("Placing order: Espresso\n");
			break;
		case 'b':
			printf("Placing order: Cappuccino\n");
			break;
		case 'c':
			printf("Placing order: Latte\n");
			break;
		default:
			printf("Invalid option. Please try again.\n");
	}
}

float calculateTotalCost(char option, int quantity)
{
	float price;
	
	switch (option) {
		case 'a':
			price = 2.50;
			break;
		case 'b':
			price = 3.00;
			break;
		default:
			price = 0.00;
	}
	
	return price * quantity;
}
