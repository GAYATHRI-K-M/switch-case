#include<stdio.h>
main()
{
	//1. display the menu
	printf("products available: \n1. pizza - Rs.239\n2. Burger - Rs.129\n3. Pasta - Rs.179\n4. French fries - Rs.99\n5. Sandwich - Rs.149");
	
	//2. read their choice
	int choices=0;
	scanf ("%d",&choices);
		//3.display their choice
		
		switch(choices)
		{
			case 1:
			printf("your food item - pizza\n price - Rs.239");
			break;
			case 2:
			printf("your food item - Burger \n price - Rs.129");
			break;	
		    case 3:
		    printf("your food item - pasta\n price - Rs.179");
			break;	
		    case 4:
		    printf("your food item - French fries\n price - Rs.99");
			break;	
		    case 5:
		    printf("your food item - Sandwich\n price - Rs.149");
			break;
			default : printf("you have entered a invalid number");	
		}
		
		
			
		
}
