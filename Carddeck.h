#ifndef CARDDECK_H
#define CARDDECK_H
#include <cstring>
#include <vector>

using namespace std;

class CardDeck
{
  private:
    vector<string> cardSet;
    string numValue[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    string suit[4] = {"H","S","D","C"};
    vector<string> randDeck;
    vector<string> usedCards;
    static int rndCount;
    string trumpCard;

  public:
    void createDeck();
    void shuffleDeck();
    string getCard();
    bool isGreater(string& card1, string& card2);
    void setTrumpCard();
    //void outputDeck();
};
#endif
