/*
This is a two player guess my number game.
The program will start by stating the rules of the game.
The program will ask player 1 to pick a number between 1 - 100.
It will then store that value in a variable.
1.The program will ask player 2 to pick a number between 1-100.
2.It will then store that value in a variable.
3.The program will then compare the values of player 1 and player 2.
4.The program will the tell player if they got the number wrong or right and
how many more turns they have left.
If player 2's guess isn't player 1's number then program will tell them 
the new range and then repeat steps 1-4 aslong as they still have turns left.
If player 2 runs out of turns the program will state the number and 
player 2's closest guess and then end.
If player 2's guess matches player player 1's then it will congrat them.
-----------------------------------------------------------------------------
see README.txt
Joey Hanson
*/
#include <stdio.h>

int main()
{
	//declaring variables
	int player1_number = 0;
	int player2_number = 0;
	int max_limit = 100;
	int min_limit = 1;
	int turns = 7;
	
	//rules for the game.
	printf("Hello, this is a two player guessing game.\n");
	printf("Player 1 will pick a number between 1-100.\n");
	printf("Player 2 will have 7 turns to guess that number.\n");
	
	//first user input before loop.
	printf("Player 1 please select a integer between 1-100.\n");
	scanf("%d", &player1_number);
	
	//sets max limit and min limit depending on user input.
	if(player1_number <= 50)
	{
		max_limit = 50;
	}
	else
	{
		min_limit = 50;
	}
	
	printf("Player 2 please guess a number between 1-100.\n");
	
	//while turns is not 0/false game will continue running
	while(turns)
	{
		scanf("%d", &player2_number);
		
		//checks if player 2 is too low
		if(player2_number < player1_number)
		{
			turns--;
			min_limit = player2_number;//sets min limit to player 2 guess
			printf("Sorry player 2 your guess was too low.\n");
			printf("You have %d turns left.\n", turns);
			printf("Player 2 please guess a number between %d-%d.\n", min_limit, max_limit);
		}
		
		//checks if player 2 is too high
		if(player2_number > player1_number)
		{
			turns--;
			max_limit = player2_number;//checks if player 2 is too high
			printf("Sorry player 2 your guess was too high.\n");
			printf("You have %d turns left.\n", turns);
			printf("Player 2 please guess a number between %d-%d.\n", min_limit, max_limit);
		}
		
		//checks if player 2 got the right number
		if(player2_number == player1_number)
		{
			printf("Congrats, you guessed the right number!\n");
			printf("It took you %d turns.", turns);
			break; 
		}
	}
	
	//checks if player 2 ran out of turns
	if(turns <= 0)
	{
		printf("Sorry you have ran out of turns. *sigh*\n");
		printf("the correct answer was %d.\n", player1_number);
	}
	return 0;
}