#include "Superhero.h"

Superhero::Superhero(){
    string name = "";
    int age = 0;
    char power = 'n';
}

Superhero::Superhero(string name, int age, char power){
    for(int i = 0; i < 20; i++) {
        this->name[i] = name[i];
    }

    this->age = age;
    this->power = power;
}

int Superhero::get_age(){
    return age;
}
char Superhero::get_power(){
    return power;
}

void Superhero::set_name(string name){
    this->name = name;
}

void Superhero::set_age(int age){
    this->age = age;
}

void Superhero::set_power(char power){
    this->power = power;
}

string Superhero::find_power(){
    string pow;
    if(power == 'f'){
        pow = "Flying";
        return pow;
    }
    else if(power == 'h'){
        pow = "Hacker";
        return pow;
    }
    else if(power == 'n'){
        pow = "None";
        return pow;
    }
    else if(power == 'g'){
        pow = "Giant";
        return pow;
    }
    else{
        pow = "Weakling";
        return pow;
    }
}

istream& operator >> (istream& in, Superhero& hero){
    cout << "Name: ";
    in >> hero.name;
    cout << "Age: ";
    in >> hero.age;
    cout << "Superpower: ";
    in >> hero.power;
    return in;
}

ostream& operator << (ostream& out, Superhero& hero){
    out << hero.name << " (" << hero.age << "): " << hero.find_power() << endl;
    return out;
}
