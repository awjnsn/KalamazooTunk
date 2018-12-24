//Standard deck size
#define DECK_SIZE 52
#define NUM_SUITS 4
#define NUM_CARD_TYPES 13

//Type definitions
typedef enum {
	CLUBS, DIAMONDS, HEARTS, SPADES
} card_suit;

typedef enum {
	TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
} card_value;

typedef struct {
	card_suit suit;
	card_value value;
} playing_card;

typedef struct {
	int index;
	playing_card cards[DECK_SIZE];
} card_deck;

//Function declarations
void deck_init(card_deck * deck);
void shuffle(card_deck * deck);
playing_card draw(card_deck * deck);
int is_empty(card_deck * deck);