











A player rolls the dice. After the dice have come to rest, the sum of the spots on the two upward faces is
calculated. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3,or 12 on the first throw , the player loses. 
If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player’s“point”. To win, you must continue rolling the 
dice until you “make your point.” The player loses by rolling a 7 before making the point.
So basically what the program does once it starts executing is :
It first randomizes the random number generator using the current time with the function srand(time(NULL));. 
Then it uses the rand() function to create 2 random numbers for the variables dice1 and dice2 between the numbers 1 and 6.
After that is done the random numbers saved in these two variables are added and then assigned to a variable sum.
Then using a switch the program check the output of the variable sum. If the variable sum generates a number 7 or 11 on the first try
the player wins the game and the value of the variable gameStatus is assigned with the variable WON and the if statement equated to the 
variable WON is executed and prints the statement "Player Wins.".
But if the first value of the variable sum ends up being 2,3,12 the player loses the game and the value of the variable gameStatus
is assigned with the variable LOST and the if else statement corresponding to it is executed and prints the statement "Player losses.".
Whereas if the value of the variable sum is 4, 5, 6, 8, 9, or 10 on the first try, the program executes the default statement of the switch
then that sum gets assigned to the variable myPoint and the variable gameStatus gets assigned with the variable CONTINUE and then prints
the players point.
While the gameStatus remains as CONTINUE it keeps generating random numbers for the variables dice1 and dice2 and produces the sum of these
two variables. During this if the values of sum becomes equal to the value of the player's point the player wins the game and the above
mentioned condition for WON is executed. Whereas if the sum becomes 7 during this loop the player loses the game and the above mentioned condition
for LOST is executed.
This is how the game seems to work upon the code provided to us.












