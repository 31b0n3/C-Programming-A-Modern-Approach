/* Classifies a poker hand */
#include <stdbool.h>        /* C99 only */
#include <stdio.h>
#include <stdlib.h>
/* external variables */  
bool straight, flush, four, three; 
int pairs; /* can be 0, 1, or 2 */

/* prototypes */ 
void read_cards (int hand[5][2]);
bool check_cards (int hand[5][2], int rank, int suit);
void quicksort(int hand[5][2], int low, int high);
int split (int hand[5][2], int low , int high);
void analyze_hand (int hand[5][2]); 
void arrange(int hand[5][2]);
void print_result (void);
/**********************************************************
 *  main: Calls read_cards, analyze_hand, and print_result*
 *        repeatedly.                                     *
 **********************************************************/
int main(void)
{
for (;;) {
int hand [5][2] = {0};
read_cards (hand); 
quicksort(hand,0,4);
analyze_hand(hand);
print_result();
    }
}
/**********************************************************
 *  read_cards: Reads the cards into the external         *
 *              variables num_in_rank and num_in_suit;    *
 *              checks for bad cards and duplicate cards. *                           
 **********************************************************/
void read_cards (int hand[5][2])
{
char ch, rank_ch, suit_ch;
int rank, suit, a = 0;
bool bad_card;
int i = 0;
for (; i < 5 ;) 
 { 
    bad_card = false;
    a = 0;
    printf("Enter a card: ");

    rank_ch = getchar(); 
    switch (rank_ch) {
        case '0': exit(EXIT_SUCCESS);
        case '2': rank = 0; break;
        case '3': rank = 1; break;
        case '4': rank = 2; break;
        case '5': rank = 3; break;
        case '6': rank = 4; break;
        case '7': rank = 5; break;
        case '8': rank = 6; break;
        case '9': rank = 7; break;
        case 't': case 'T': rank = 8; break;
        case 'j': case 'J': rank = 9; break;
        case 'q': case 'Q': rank = 10; break;
        case 'k': case 'K': rank = 11; break;
        case 'a': case 'A': rank = 12; break;
        default: bad_card = true;
    }
    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }
    while ((ch = getchar()) != '\n') 
      if (ch != ' ')  bad_card = true;

    if (bad_card) 
      printf("Bad card; ignored.\n");
     else if (check_cards(hand,rank,suit)) 
      printf("Duplicate card; ignored.\n");
    else
    {
       hand[i][a++]=rank;
       hand[i][a]=suit;
       i++;
    }

  }
}
bool check_cards (int hand[5][2], int rank, int suit)
{
  for (int i = 0; i < 5; i++)
    {
        if (hand[i][0] == rank && hand[i][1] == suit) 
        {
          return true;
        }
    }
    return false;
}
void quicksort(int hand[5][2], int low, int high)
{
  if (low >= high) return;
  int middle = split(hand, low, high);
  quicksort(hand, low, middle - 1);
  quicksort(hand, middle + 1, high);
}
int split (int hand[5][2], int low , int high)
{
  char part_element = hand[low][0];
  for (;;) {
    while (low < high && part_element <= hand[high][0])
      high--;
    if (low >= high) break;
    hand[low++][0] = hand[high][0];
    while (low < high && hand[low][0] <= part_element)
      low++;
    if (low >= high) break;
    hand[high--][0] = hand[low][0]; 
  }
  hand[high][0] = part_element;
  return high;
}
/**********************************************************
* analyze_hand: Determines whether the hand contains a    *
*               straight, a flush, four-of-a-kind,        *
*               and/or three-of-a-kind; determines the    *
*               number of pairs; stores the results into  *
*               the external variables straight, flush,   *
*               four, three, and pairs.                   *      
***********************************************************/

void analyze_hand(int hand[5][2])
{
    int num_consec = 0;
    int rank,suit,used=-1;
    straight = true;
    flush = false; 
    four = false;
    three = false;
    pairs = 0;

    /* check for flush */
    if (hand[0][1] == hand [1][1] && hand[1][1] == hand [2][1]&&
        hand[2][1] == hand [3][1]&&hand[3][1] == hand [4][1])
        flush = true;
    /* check for straight */
    for (int i = 0; i< 4; i++)
    {
      if (hand[i][0] + 1 != hand[i+1][0])
      {
        straight = false;
      }
    }  
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */ 
    for(int i = 0; i< 5; i++)
    {
      int count = 0;
      int card = hand[i][0];
      if(used != card){
      for(int j = 0; j < 5;j++)
      {
        if (card == hand[j][0])
        count++;
      }
        if (count == 4)
        { 
        four = true;
        return;
        }
        if (count == 3) 
        {
          three = true; 
          used = card;
        }
        if (count == 2) 
        {
            pairs++;
            used = card;
        }
      
    }
}
}

void print_result(void)
{
    if(straight && flush) printf("Straight flush");
    else if (four)        printf("Four of a kind");
    else if (three &&
             pairs == 1)  printf("Full house");
    else if (flush)       printf("Flush");
    else if (straight)    printf("Straight");
    else if (three)       printf("Three of a kind");
    else if (pairs == 2)  printf("Two pairs");
    else if (pairs == 1)  printf("Pair");
    else                  printf("High card");

    printf("\n\n");
}

