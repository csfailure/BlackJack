/*
 CH08-320143
 a5_p4.cpp (also including 5.5 and 5.6 in 1 file)
 Kevin Silaj
 k.silaj@jacobs-university.de
*/

#include "Card.h"

//definitions
Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

//5.5
int Card::GetValue() const
{
    int x;
    bool bol = true;

    if(bol == false)
    {
        x = 0;
    }
    else
    {
        if(m_Rank == KING || m_Rank == QUEEN || m_Rank == JACK)
        {
            x = 10;  //the value is 10 if it is K Q or J
        }
        else
        {
            x = m_Rank; //other cards
        }
    }

    return x;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
        "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}
