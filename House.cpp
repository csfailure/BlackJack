/*
 CH08-320143
 a5_p4.cpp (also including 5.5 and 5.6 in 1 file)
 Kevin Silaj
 k.silaj@jacobs-university.de
*/
#include "House.h"

House::House(const std::string& name):
GenericPlayer(name){

}

House::~House(){

}

bool House::IsHitting() const{
    return (GetTotal() <= 16);
}

void House::FlipFirstCard(){
    if (!(m_Cards.empty())){
        m_Cards[0]->Flip();
    }
    else{
        std::cout << "No card to flip!\n";
    }
}
