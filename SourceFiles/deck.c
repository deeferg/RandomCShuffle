/* PROGRAM:  deck.c
   AUTHOR:   Devan J Ferguson
   DATE:     09/20/2017
   TOPIC:    Deal 52 card deck to 2-4 players
   PURPOSE:  Learn Multi-Dimension arrays
   LEVEL OF DIFFICULTY: 4
   CHALLENGES: Getting ten to not be X, Structure building and seg errors and faults. Lots and lots of null values, are they because of printing or data entry?
   HOURS: Too many ~20h
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "deck.h"


char suits[4] = {'S', 'C', 'D', 'H'};
char number[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X' , 'J', 'Q', 'K'};



void setupDeck( card * deck[]){


  int i;
  int k;
  int j= 0;

/*Loop through each suit and add a number/royalty to them*/
  for(k = 0; k < 4; k++){
    for(i = 0; i < 13; i++){

    deck[j] = (card *) malloc(sizeof(card));

    deck[j]->suitName = suits[k];

    deck[j] ->cardNum = number[i];


    j++;
    }
  }

}
/*Very random choices of hands now. srand has given me a good selection on the shuffle*/
void shuffleDeck(card * deck[]){
  int i;

  card temp;

  srand(time(0));

  for(i = 0; i< NUM_OF_CARDS; i++){
    int random = rand();
    temp = *deck[i];
    *deck[i] = *deck[random%52];
    *deck[random%52] = temp;


  }
}
/*Frees up the memory of each card in a deck.*/
void deleteDeck(card * deck[]){
  int i;
    for(i = 0; i < NUM_OF_CARDS; i++){
      free(deck[i]);
    }
}

/*Prints the card from the deck into the hand. shortcut? yes, but alas, it works!*/
void printDeck(card * deck){

      printf("%c%c\t", deck->cardNum, deck->suitName);


}
