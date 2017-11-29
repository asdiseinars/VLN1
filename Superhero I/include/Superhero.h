#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>

using namespace std;

class Superhero
{
    private:
        char name[20];
        int age;
        char power;

    public:
        Superhero();
        Superhero(char* name, int age, char power);
        int get_age();
        char get_power();
        void set_name(char* name);
        void set_age(int age);
        void set_power(char power);
        string find_power();
        friend istream& operator >> (istream& in, Superhero& hero);
        friend ostream& operator << (ostream& out, Superhero& hero);

};

#endif // SUPERHERO_H
