The program is a 2 player game of guess my number.
Player 1 will be asked for a number input.
The program will then give player 2 "7" chances to guess the number.
If player 2 guesses too high or too low the program will identify this
and inform player 2. It will then let player 2 know how many guesses are left.
If player 2 guesses the number it will congradulate them. If player 2 can't guess
the correct number then the game will let player 2 know what the number is and then
will restart asking for player 1 to input a number.

---------------------------------------------------------------------------------------------------
int main()
variables:
int player1_number = 0
int player2_number = 0
int max_limit = 0
int min_limit = 0
int turns = 0

printf("Hello, this is a two player guess my number game.")
printf("player 2 will have 7 turns to guess that number.")
printf("player 1 please select a integer between 1-100.")
scanf("%d", &player1_number)

while(turns > 0)
printf("Player 2 please guess a number between 1-100.")
scanf("%d", &player2_number)
if(player2 > player1)
-1 turn
adjust range
printf("Your number was too high.")
printf("Please select another number between %d-%d.", adjust range)
scanf("%d", &player2_number)
if(player2_number < player1_number)
-1 turn
adjust range
printf("Your number was too low.")
printf("Please select another number between %d-%d.", adjust range)
scanf("%d", &player2_number)
if(player2_number == player1_number)
printf("Grats you got the right number!")
break
if(turns<=0)
printf("sorry you ran out of turns.")
---------------------------------------------------------------------------------------------------
Reflection! REEEEEEEEEEEEEEEEEflection!

Alot of reee trying to figure out the adjustment of range  lol. It took me awhile to figure it out
and it was a definite duh moment for me. The issue I was having was the range would adjust the 
first time but if you went below or above player 1's number it would give you a bad range.
Example:
player 1 input = 15
range 1 - 100
player 2 inputs 33
range 1 - 33
player 2 inputs 10
range 1 - 10
I did finally figure it out and it was quite nice.

We learned about if statements and while loops and how to make adjustments to from user input.
All of it was used in this assignment which was quite fun. For this assignment I wrote down on
paper what I wanted to do at the time and after I wrote it up I started testing the assignment.
It worked at first with very simple input. Then I tried different inputs and came out with the
range issue. 

