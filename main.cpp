#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include "Carddeck.h"

using namespace std;

//hello world

int main() {

  CardDeck d;
  string a, b;

  d.createDeck();
  d.shuffleDeck();
  a = d.getCard();
  b = d.getCard();

  cout << a << "\t" << b << endl << endl << endl;

if(d.isGreater(a,b))
  cout << "Yes" << endl;

}
