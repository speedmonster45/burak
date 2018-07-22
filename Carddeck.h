#ifndef CARDDECK.H
#define CARDDECK.H
class CardDeck
{
  private:
    vector <string> cardSet;
    string numValue[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    string suit[4] = {"H","S","D","C"};
    vector<string> randDeck;
    vector<string> currentCards;

  public:
    void createDeck();
    void shuffleDeck();
    string getCard();
    bool isGreater(string& card1, string& card2);
};
#endif
