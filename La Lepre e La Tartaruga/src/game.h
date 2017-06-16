#ifndef GAME_H_
#define GAME_H_
#include "arrays.h"
#include "tools.h"
#include "linked_lists.h"
#include "globals.h"




typedef struct player{
	char name[20];
	bool ai;
	array bet_cards;
	array run_cards;
}player;

typedef struct players{
	player *player;
	int n_players;
}players;

typedef struct deck{
	list card_list;
	array totals;
}deck;

/// Funzioni principali
int newGame(players *, array *, deck *, int *);
int loadGame(void);
int settings(void);
int rules(void);

/// Funzioni essenziali del gioco
deck shuffle_deck(deck *);
players create_players(players *, bool);
players name_players(players *);
int GetCard(deck *);
players firstBetCard(players *);
int secondBetCard(player , deck *, array *);
array playerGetCard(player *, array *, int , array *);
int check_played_card(array *);
int play(players *p, array *, deck *, int  );
int runPhase(players *players, array *played);
int playerTurn(players *players, array *played,deck *deck, array * pos, int turn);

/// Funzioni di gestione
void errorHandle(int error);
int initConsole(void);

#endif /* GAME_H_ */

