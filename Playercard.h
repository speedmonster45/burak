#ifndef PLAYERCARD_H
#define PLAYERCARD_H
#include <cstring>
#include <vector>
#include "Carddeck.h"

using namespace std;

class PlayerCard
{
  private:
    vector<string> player1;
    vector<string> player2;
    static int nextCard;
    CardDeck startHand;

  public:
    PlayerCard();
    void assignHand();
    void setTurn(){cout << "test" << endl;}
    void startGame();
};
#endif
