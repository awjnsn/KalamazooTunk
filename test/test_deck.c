#include <stdio.h>
#include "../src/deck.h"

static void print_card(playing_card card)
{
	switch(card.value)
	{
		case TWO: printf("TWO"); break;
		case THREE: printf("THREE"); break;
		case FOUR: printf("FOUR"); break;
		case FIVE: printf("FIVE"); break;
		case SIX: printf("SIX"); break;
		case SEVEN: printf("SEVEN"); break;
		case EIGHT: printf("EIGHT"); break;
		case NINE: printf("NINE"); break;
		case TEN: printf("TEN"); break;
		case JACK: printf("JACK"); break;
		case QUEEN: printf("QUEEN"); break;
		case KING: printf("KING"); break;
		case ACE: printf("ACE"); break;
	}

	printf(" of ");

	switch(card.suit)
	{
		case CLUBS: printf("CLUBS"); break;
		case DIAMONDS: printf("DIAMONDS"); break;
		case HEARTS: printf("HEARTS"); break;
		case SPADES: printf("SPADES"); break;
	}

	printf("\n");
}

int main()
{
	card_deck deck;

	deck_init(&deck);

	while(!is_empty(&deck))
	{
		print_card(draw(&deck));
	}

	return 0;
}