#include <stdio.h>

char ball(void);
char paddle(void);

int main (void)
{
	
	int boardSize = 31;// the boardSize has to be odd to place the ball in the middle of the board.
	char board[boardSize][boardSize];
	int gameOn = 1;
	int ballX = (boardSize - 1)/2 + 1;
	int ballY = (boardSize - 1)/2 + 1;
	int ballYDirection = 1;
	int ballXDirection = 1;
        //	char buff[100];
	while(gameOn == 1)
	{
		for(int i = 0; i < boardSize; i++)
		{
			for(int j = 0; j < boardSize;j++)
			{
				
			}
			printf("\n");
		}
		printf("____________________________________________________\n");
	}
	return 0;
}

char ball(void)
{
	return 'o'; 
}

char paddle(void)
{
	return '|';
}
