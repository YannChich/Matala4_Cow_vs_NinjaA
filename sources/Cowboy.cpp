#include "Cowboy.hpp"

using namespace std;
using namespace ariel;

Cowboy::Cowboy(Point& location,string& name):Character(location,110,name),bullets(6){};

void Cowboy::shoot(Character* enemy){
    return;
}

bool Cowboy::hasboolets() const{
    return true;
}

void Cowboy::reload(){
    return;
}

string Cowboy::print()const{
    return "";
}