/*
 CH08-320143
 a5_p4.cpp (also including 5.5 and 5.6 in 1 file)
 Kevin Silaj
 k.silaj@jacobs-university.de
*/

#ifndef Player_h
#define Player_h

#include "GenericPlayer.h"

class Player : public GenericPlayer{
public:
    Player(const std::string& name = "");

    virtual ~Player();

    //returns whether or not the player wants another hit
    virtual bool IsHitting() const;

    //announces that the player wins
    void Win() const;

    //announces that the player loses
    void Lose() const;

    //announces that the player pushes
    void Push() const;
};


#endif /* Player_h */
