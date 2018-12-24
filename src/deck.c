#include <stdlib.h>
#include <time.h>
#include "deck.h"

//Function to initialize a deck, must be called before using a deck
void deck_init(card_deck * deck)
{
	deck->index = 0;

	//For each suit
	for(int i = 0; i < NUM_SUITS; i++)
	{
		//For each card type
		for(int j = 0; j < NUM_CARD_TYPES; j++)
		{
			deck->cards[deck->index++] = (playing_card) {i, j};
		}
	}

	//Shuffles the deck
	shuffle(deck);

}

//Function to shuffle the deck of cards using the Fisher-Yates algorithm
void shuffle(card_deck * deck)
{
	//Resets the position of the index
	deck->index = 0;

	//Seeds the RNG
	srand(time(NULL));

	//Shuffles the deck
	for(int i = DECK_SIZE - 1; i > 0; i--)
	{
		int swap_index = rand() % i;

		playing_card swap = deck->cards[i];
		deck->cards[i] = deck->cards[swap_index];
		deck->cards[swap_index] = swap;
	}
}

//Function to draw a card from a deck
playing_card draw(card_deck * deck)
{
	return deck->cards[deck->index++]; 
}

//Function to check if a deck is empty
int is_empty(card_deck * deck)
{
	return deck->index >= DECK_SIZE;
}