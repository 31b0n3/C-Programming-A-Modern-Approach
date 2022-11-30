#include<stdio.h>
 #include<stdbool.h>
 #include<stdlib.h>
 #include <time.h>
 int roll_dice()
 {

 int num1 = 1 + rand() % 6;
 int num2 = 1 + rand() % 6;
 return num1 + num2;
 }
 int play_game()
 {
  int roll;
  int point = roll_dice();
  printf("You rolled: %d\n",point);
  printf("Your point is %d\n", point);
  for(int count = 1;; count++)
  {
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if(count==1)
    {
      if(roll==7||roll==11)
      {
        return 1;
      }
      if(roll==2||roll==3||roll==12)
      {
        return 0;
      }
    }
    else
    {
      if(roll==point)
      {
        return 1;
      }
      if(roll==7)
      {
        return 0;
      }
    }
  }
 }
 int main ()
 {
  srand((int) time(NULL));
    char pa;
    int win = 0, lose = 0;
    playagain:
    if(play_game() == 1)
    {
      printf("You win!\n");
      win++;
    }
    else
    {
      printf("You lose!\n");
      lose++;
    }
    printf("\nPlay again? ");
    scanf(" %c",&pa);
    if(pa=='y'||pa=='Y')
    {
      goto playagain;
    }
    else
    {
      printf("Wins: %d   Losses: %d",win,lose);
    }
    return 0;
 }