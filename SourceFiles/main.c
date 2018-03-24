/* PROGRAM:  lab3.c
   AUTHOR:   Devan J Ferguson
   DATE:     09/20/2017
   TOPIC:    Deal 52 card deck to 2-4 players
   PURPOSE:  Learn Multi-Dimension arrays
   LEVEL OF DIFFICULTY:
   CHALLENGES:
   HOURS:
*/

#include "deck.h"
#include "deal.h"
#include <stdio.h>

/* Main */

int main(void){
  /*Attributes*/

card * deck[NUM_OF_CARDS];
getPlayers();
getCards();
validate();
setupDeck(deck);
shuffleDeck(deck);
dealHand(deck);
deleteDeck(deck);
  return 0;



  }
