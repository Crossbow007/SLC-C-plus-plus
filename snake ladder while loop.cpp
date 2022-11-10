#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// Kevin Gao
/*Lab ex#8: Snakes and ladders
we will randomly roll die for the computer, player will input value
the game goes up to 10 (not 100) and only has 1 snake and 1 ladder
for simplicity, the computer isnâ€™t effected by snakes or ladders */
int main()
{
	//----------------------------------------------------------------housekeeping
	int computer = 0, player = 0;//player and computer's position on board 1-10
	int die;
	int snake, ladder;
	string name;
	srand((unsigned)time(0)); //start the random number generator
	system("color 2E");//change the console colours
	cout << "What is your name? ";
	getline(cin, name);
	cout << char(1) << " Hello " << name << " welcome to snakes & ladders! "
		<< char(1) << endl;
	//write a while loop that will continue as long as the value of computer is less than 10
	// and the value of player is less than 10
	while (computer < 10 && player<10)
	{
		cout << "Roll your die - what is its value? ";
		cin >> die;
		while (die > 6 || die < 1)
		{
			cout << "please reenter die, die number must be 1-6: ";
			cin >> die;
		}
		if (player == 10)
		{
		    break;
		}
		if (player > 10)
		{
			cout << "you can not move!";
		}
		/*write a while loop that will validate user input, by ensuring the value of die is 1-6,
		//allow the user to reenter if invalid
		//if player has 10, donâ€™t allow the computer to move,
		//end the game (break out of loop)
		//add an if statement that checks if the die + current position is over 10,
		//if true tell player he/she can't make the move
		//otherwise (player can move)
		*/
		
         cout << "you can move"<<endl;
	
		player += die; //add the die to current player's position:
		snake = rand() % 8 + 1; //randomly generates the position for the snake
			/*add an if statement that checks if landed on a snake:
			//if the playerâ€™s position is the same as the snake,
			// inform the player and reposition to 1
			// otherwise
			*/
		
		ladder = rand() % 8 + 1;//randomly generates the position for the ladder
				//if the player lands on a ladder,
			   //inform the player and reposition to 9
			 //end if (ladder)
		if (player == snake)
			{
				cout << "you land on the snake, and will start at position 1" << endl;
				player = 1;
			}
			else if (player == ladder)
			{ 
				cout << "you land on the ladder, and will start at position 9" << endl;
				player = 9;
			}

		 //end if (playerâ€™s move)
		//computerâ€™s turn
		die = rand() % 6 + 1; //randomly generates roll of die for the computer
		/*Check if computer can make move:
		//Add an if statement that checks if the die + computerâ€™s position is over 10,
		// if true tell player that the computer can't move
		//otherwise (computer can move)
		*/
		if ( computer > 10)
			cout << "computer can not move" << endl;
		else
		{
			cout << "computer can  move" << endl;
			computer += die;
		}//add the die to current computerâ€™s position:
		cout << "Your position is " << player << " My position is " << computer << endl;
	} //end while loop
	//add an if statement to determine the winner
	if (computer > player)
		cout << "computer win" << endl;
	else if (computer == player)
		cout << "computer and you are both winner!" << endl;
	else
		cout << "you win" << endl;
	cout << endl << "game over " << endl;
	system("pause");
}
/*
What is your name? Kevin Gao
☺ Hello s welcome to snakes & ladders! ☺
Roll your die - what is its value? 3
you can move
you land on the snake, and will start at position 1
computer can  move
Your position is 1 My position is 1
Roll your die - what is its value? 4
you can move
you land on the ladder, and will start at position 9
computer can  move
Your position is 9 My position is 7
Roll your die - what is its value? 3
you can move
computer can  move
Your position is 12 My position is 8
you win

game over
Press any key to continue . . .*/