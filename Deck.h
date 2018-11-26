/*
 CH08-320143
 a5_p4.cpp (also including 5.5 and 5.6 in 1 file)
 Kevin Silaj
 k.silaj@jacobs-university.de
*/
#ifndef Deck_h
#define Deck_h

#include "House.h"

class Deck : public Hand
{
public:
    Deck();

    virtual ~Deck();

    //create a standard deck of 52 cards
    void Populate();

    //shuffle cards
    void Shuffle();

    //deal one card to a hand
    void Deal(Hand& aHand);

    //give additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif /* Deck_h */

