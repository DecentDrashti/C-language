#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

char Board[3][3];
char PLAYER1='O';
char PLAYER2='X';
char COMPUTER='X';
int PrintBoard();
char WinConditions();
int Move1();
int Move2();
int ComputerMove();
char name1[20],name2[20];
void WhoWonComputer(char);
void WhoWonPlayers(char);
int main()
{
    int path;  
    do
    {
        printf("\n Welcome!! \n enter the number against a game to play it: \n (1)Number guessing game \n (2)tic tac toe (2 player) \n (3) tic tac toe (against computer) \n (4) end the program \n" );
        scanf("%d",&path);

        if(path==1)
        {   
          while(1)
          { int response;
            int random,guess;
            printf("instructions: \n you will be given 5 tries to guess the random number. \n the random number is between 1 and 100. \n after your guess you will be told if the random number is lesser or greater than the number you guessed");
            srand(time(NULL));
            random=rand()%100;
            for(int i=1;i<=5;i++)
            {
                printf("\nguess number %d: ",i);
                do
                {
                scanf("%d",&guess);
                if(guess<=0 || guess>100)
                {
                    printf("please enter a number from 1 to 100. Guess number %d:",i);
                }
                }while(guess<=0 || guess>100);
                if(random==guess)
                {
                    printf("you guessed the number correctly!");
                    break;
                }
                else
                {
                    random>guess?printf("\nthe random number is greater"):printf("\nthe random number is lesser");
                    printf("\n %d tries left",5-i);
                    if(i==5 && random!=guess)
                    {
                        printf("\nthe correct number was %d.you lost.\n",random);
                    }
                }
            }
            printf("\nenter 1 to play again and any number to exit to main menu:\n");
            scanf("%d",&response);
            if(response==1)
            {
              continue;
            }
            else
            {
              break;
            }
          }
        }
        else if(path==2)
        {while(1)
          {  int response;
              printf("enter the name of player 1:\n");
              scanf("%s",name1);
              printf("enter the name of player 2:\n");
              scanf("%s",name2);
              int count = 0;
              char winner = ' ';
              srand(time(NULL));

            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    Board[i][j] = ' ';
                }
            }

            printf("Write row number and column number to place your move. Good luck.\n");
            while (count < 9) {
                PrintBoard();
                Move1();
                count++;

                winner = WinConditions();
                if (winner != ' ') {
                    break;
                }

                if (count >= 9) {
                    printf("Game over! Maximum moves reached.\n");
                    break;
                }

                PrintBoard();
                Move2();
                count++;

                winner = WinConditions();
                if (winner != ' ') {
                    break;
                }

                if (count >= 9) {
                    printf("Game over! Maximum moves reached.\n");
                    break;
                }
            }
            PrintBoard();
            WhoWonPlayers(winner);
            printf("\nenter 1 to play again and any number to exit to main menu:\n");
            scanf("%d",&response);
            if(response==1)
            {
              continue;
            }
            else
            {
              break;
            }
            return 0;
          }
        }
        else if(path==3)
        {while(1)
         {int response;
          int count = 0;
          char winner = ' ';
          srand(time(NULL));

              for(int i=0;i<3;i++)
              {
                  for(int j=0;j<3;j++)
                  {
                      Board[i][j] = ' ';
                  }
              }

              printf("Write row number and column number to place your move. Good luck.\n");
              while (count < 9) {
                  PrintBoard();
                  Move1();
                  count++;

                  winner = WinConditions();
                  if (winner != ' ') {
                      break;
                  }

                  if (count >= 9) {
                      printf("Game over! Maximum moves reached.\n");
                      break;
                  }

                  PrintBoard();
                  ComputerMove();
                  count++;

                  winner = WinConditions();
                  if (winner != ' ') {
                      break;
                  }

                  if (count >= 9) {
                      printf("Game over! Maximum moves reached.\n");
                      break;
                  }
              }

              PrintBoard();
              WhoWonComputer(winner);
              printf("\nenter 1 to play again and any number to exit to main menu:\n");
              scanf("%d",&response);
              if(response==1)
              {
                continue;
              }
              else
              {
                break;
              }
              return 0;
         }
        }
                  
        else if(path==4)
          {
            break;
          }
        else if(path!=1 || path!=2 || path!=3 || path!=4)
          {
            printf("invalid input!!please give the input again");
          }
    }
    while(path!=1 || path!=2 || path!=3 || path!=4);
    return 0;

}

int PrintBoard()
{ 
  printf("\n");
    printf(" %c | %c | %c ",Board[0][0],Board[0][1],Board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",Board[1][0],Board[1][1],Board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c \n",Board[2][0],Board[2][1],Board[2][2]);
    
}

void GetRandomPosition(){

 
  for (int i = 0; i < 3; i++)
  {
     for (int j = 0; j <3; j++)
     {
      char c = Board[i][j];
      if(c != 'O' && c != 'X')
      {
        Board[i][j]='X';
        return;
      }
     }
  }
}


int Move1()
{
  int row;
  int column;
  do
  {
  scanf("%d%d",&row,&column);
  if(Board[row-1][column-1]!=' ')
  {
    printf("invalid move \n");
  }
  else
  {
    Board[row-1][column-1]='O';
    break;
  }
  }
  while(Board[row-1][column-1]!=' ');
}
int Move2()
{
     int row;
  int column;
  do
  {
  scanf("%d%d",&row,&column);
  if(Board[row-1][column-1]!=' ')
  {
    printf("invalid move \n");
  }
  else
  {
    Board[row-1][column-1]='X';
    break;
  }
  }
  while(Board[row-1][column-1]!=' ');
}
int ComputerMove()
{
    int row,col;
    int count = 0;
    do
    {
      count ++;
       row=rand()%3;
       col=rand()%3;
    } while (Board[row-1][col-1]!=' ' && count<5000000);
    if(count == 5000000){
        GetRandomPosition();

    }else{
    Board[row-1][col-1]='X';
    }
}
void WhoWonComputer(char winner)
{
  if(winner==PLAYER1)
  {
    printf("you won!");
  }
  else if(winner==COMPUTER)
  {
    printf("you lost!");
  }
  else 
  {
    printf("draw!");
  }

}
void WhoWonPlayers(char winner)
{
  if(winner==PLAYER1)
  {
    printf("%s won!",name1);
  }
  else if(winner==PLAYER2)
  {
    printf("%s won!",name2);
  }
  else
  {
    printf("draw!");
  }

}

char WinConditions()
{
  
   for(int i = 0; i < 3; i++)
   {
      if((Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2]) && Board[i][0]!=' ')
      {
         return Board[i][0];
      }
   }
   
   for(int i = 0; i < 3; i++)
   {
      if((Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i]) && Board[0][i]!=' ')
      {
         return Board[0][i];
      }
   }
   if(((Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2]) || (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0])) && Board[1][1]!=' ')
   {
      return Board[1][1];
   }
   return ' ';
}