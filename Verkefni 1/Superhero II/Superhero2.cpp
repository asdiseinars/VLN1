#include "Superhero2.h"

Superhero2::Superhero2(){
    string name = "";
    int age = 0;
    char power = 'n';
}

Superhero2::Superhero2(string name, int age, char power){
    this->name = name;
    this->age = age;
    this->power = power;
}

int Superhero2::get_age(){
    return age;
}
char Superhero2::get_power(){
    return power;
}

void Superhero2::set_name(string name){
     for (int i = 0; i < 20; i++) {
        this->name[i] = name[i];
    }
}

void Superhero2::set_age(int age){
    this->age = age;
}

void Superhero2::set_power(char power){
    this->power = power;
}

string Superhero2::find_power(){
    string pow;
    if(power == 'f'){
        pow = "Flying";
        return pow;
    }
    else if(power == 'h'){
        pow = "Hacker";
        return pow;
    }
    else if(power == 'g'){
        pow = "Giant";
        return pow;
    }
    else if(power == 'n'){
        pow = "None";
        return pow;
    }
    else{
        pow = "Weakling";
        return pow;
    }
}

istream& operator >> (istream& in, Superhero2& hero){
    cout << "Name: ";
    in >> hero.name;
    cout << "Age: ";
    in >> hero.age;
    cout << "Superpower: ";
    in >> hero.power;
    return in;
}

ostream& operator << (ostream& out, Superhero2& hero){
    out << hero.name << " (" << hero.age << "): " << hero.find_power() << endl;
    return out;
}
//hallo
