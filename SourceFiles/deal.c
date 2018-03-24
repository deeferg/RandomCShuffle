/* PROGRAM:  lab3.c
   AUTHOR:   Devan J Ferguson
   DATE:     09/20/2017
   TOPIC:    Deal 52 card deck to 2-4 players
   PURPOSE:  Learn Multi-Dimension arrays
   LEVEL OF DIFFICULTY: 3
   CHALLENGES: reading ints, multiplying ints, arranging the cards in the print
   HOURS: 2
*/
#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

/* first dimension is player number, second is their hand. [player][card]*/

signed int numOfPlayers;
signed int numOfCards;
long int totalCrds;


/*Couple of getters for players and cards*/
void getPlayers(){
  printf("Enter the number of Players (%d-%d):", 2, 4);
  scanf("%5d", &numOfPlayers);
}

void getCards(){
  printf("Enter the number of cards:");
  scanf("%5d", &numOfCards);


}
/*Check for the usual errors, too many cards, not enough, etc.*/
void validate(){
  totalCrds = (*&numOfPlayers) * (*&numOfCards);

  if(totalCrds > NUM_OF_CARDS){
    while(totalCrds > NUM_OF_CARDS){
    printf("Too many cards!!!\n");
    printf("Enter the number of Players (%d-%d):", 2, 4);
    scanf("%5d", &numOfPlayers);
    printf("Enter the number of cards:");
    scanf("%5d", &numOfCards);
    totalCrds = (*&numOfPlayers) * (*&numOfCards);
    }
  }

  if(numOfCards > 26 || numOfCards <= 0){
    while(numOfCards > 26 || numOfCards <= 0){
    printf("Wrong number of cards!!!\n");
    printf("Enter the number of Players (%d-%d):", 2, 4);
    scanf("%5d", &numOfPlayers);
    printf("Enter the number of cards:");
    scanf("%5d", &numOfCards);
    totalCrds = (*&numOfPlayers) * (*&numOfCards);
    }
  }

  if(numOfPlayers > 4 || numOfPlayers <= 0){
    while(numOfPlayers > 4 || numOfPlayers <= 0){
    printf("Wrong number of players!!!\n");
    printf("Enter the number of Players (%d-%d):", 2, 4);
    scanf("%5d", &numOfPlayers);
    printf("Enter the number of cards:");
    scanf("%5d", &numOfCards);
    totalCrds = (*&numOfPlayers) * (*&numOfCards);
    }
  }
}

void dealHand(card * deck[]){

int k;
int i;
int playerNum = 1;
  for(i = 0; i < numOfPlayers; i++){
    printf("\nPlayer %d:\n\n", playerNum);
    for(k=0; k < numOfCards; k++){

      printDeck(deck[totalCrds]);
      --totalCrds;

    }
    ++playerNum;
  }
}
