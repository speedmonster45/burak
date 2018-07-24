#include <iostream>
#include <cstring>
#include <vector>
#include "Carddeck.h"
#include "Playercard.h"

using namespace std;

int PlayerCard::nextCard = 0;

void PlayerCard::startGame()
{
  startHand.createDeck();
  startHand.shuffleDeck();
  startHand.setTrumpCard();
  assignHand();

  cout << "\n\n\n";
  startHand.outputDeck();
}


PlayerCard::PlayerCard()
{
  player1.reserve(6);
  player2.reserve(6);
}

void PlayerCard::assignHand()
{
  for(int i = 0; i < 12; i++)
  {
    if(i%2 != 0)
      player1.push_back(startHand.getCard()); 
    else 
      player2.push_back(startHand.getCard());
  }
  
  for(int i = 0; i < 6; i++)
    cout << player1[i] << endl;
  cout << "\n\n";
  for(int i = 0; i < 6; i++)
    cout << player2[i] << endl;
}

