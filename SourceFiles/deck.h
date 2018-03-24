/* PROGRAM:  deck.h
   AUTHOR:   Devan J Ferguson
   DATE:     09/20/2017
   TOPIC:    Deal 52 card deck to 2-4 players
   PURPOSE:  Learn Multi-Dimension arrays
   LEVEL OF DIFFICULTY:
   CHALLENGES:
   HOURS:
*/
#define NUM_OF_CARDS 52
typedef struct Card_ {
  char suitName;
  char cardNum;
} card;

extern void setupDeck( card * deck[]);

extern void printDeck( card * deck);

extern void shuffleDeck(card * deck[]);

extern void deleteDeck(card * deck[]);
