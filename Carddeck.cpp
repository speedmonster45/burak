#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include "Carddeck.h"

int CardDeck::rndCount = 0;

void CardDeck::createDeck()
{
  int i = 0;
  int j = 0;
  int x;

  cout << "This is the UNSHUFFLED deck. \n \n"<< endl;

  for(int i = 0; i < 4; i++)
  {
    for(int f = 0; f < 13; f++)
    {
      cardSet.push_back(numValue[j] + suit[i]);
      j++;

      cout << x+1 << "\t" << cardSet[x] << endl;
      x++;
    }
    j = 0;
  }

  cout << endl << endl;
}

void CardDeck::shuffleDeck()
{
  randDeck = cardSet;
  srand (time(NULL));
  random_shuffle (randDeck.begin(), randDeck.end());

  cout << "This the SHUFFLED deck. \n \n" << endl;
 for(int i = 0; i < 52; i++)
  cout << i << "    " << randDeck[i] << endl;
  cout << endl << endl;

}
string CardDeck::getCard()
{
  string card = randDeck[0];
  randDeck.erase(randDeck.begin());
  usedCards.push_back(card);
  ++rndCount;
  cout << "The card count is at " << rndCount << endl;
  return card;
}

bool CardDeck::isGreater(string& card1, string& card2)
{
  int x = 1 + distance(cardSet.begin(),find(cardSet.begin(), cardSet.end() , card1));

  int y = 1 + distance(cardSet.begin(),find(cardSet.begin(), cardSet.end() , card2));

  cout << "Cards position on the desk set." << endl;
  cout << x << "\t" << y << endl << endl;
  cout << "Remainder" << endl;
  cout << x%13  << "\t" << y%13 << endl << endl;

  if(x%13 == 0)
  {
    cout << card1 << "  >  " << card2 << endl;
    return true;
  }
  else if(y%13 == 0)
    return false;

  else if(x%13 > y%13)
  {
    cout << card1 << "  >  " << card2 << endl;
    return true;
  }
  else
  return false;
}

void CardDeck::setTrumpCard()
{
  trumpCard = randDeck[0];
  randDeck.erase(randDeck.begin());
  randDeck.push_back(trumpCard);
  cout << "Trump Card: " << trumpCard << endl << endl;

  for(int i = 0; i < 52; i++)
    cout << i << "    " << randDeck[i] << endl;
  cout << endl << endl;
}

/*void CardDeck::outputDeck()
{
  for(int i = 0; i < randDeck.size(); i++)
    cout << rndCount+i  << "\t" << randDeck[i] << endl;

  cout << "card count at " << rndCount << endl;
}*/
