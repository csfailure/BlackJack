/*
 CH08-320143
 a5_p4.cpp (also including 5.5 and 5.6 in 1 file)
 Kevin Silaj
 k.silaj@jacobs-university.de
*/

#include "Hand.h"

Hand::Hand(){
    m_Cards.reserve(7);
}

Hand::~Hand(){
    Clear();
}

void Hand::Add(Card* pCard){
    m_Cards.push_back(pCard);
}


void Hand::Clear()
{
    std::vector<Card*>::iterator it = m_Cards.begin();
    for (it = m_Cards.begin(); it != m_Cards.end(); it++)
    {
        delete *it;
        *it = 0;
    }

    m_Cards.clear();
}

//5.5
int Hand::GetTotal() const
{
    int blackjack = 0, ace = 0; //ace is either 1 or 11

    std::vector<Card*>::const_iterator it;
    it = m_Cards.begin();

    for(it = m_Cards.begin(); it != m_Cards.end(); it++)
    {
        blackjack+= (*it)->GetValue();
        if((*it)->GetValue() == 1)
        {
            ace++;
            blackjack += 10;
        }
    }

    if(blackjack > 21) //ace turns into 1 if the total of cards > 21
    {
        while(ace != 0)
        {
            blackjack -= 10;
            ace--;

            if(blackjack < 21)
                break;
        }
    }

    return blackjack;
}
