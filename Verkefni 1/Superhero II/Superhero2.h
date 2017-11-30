#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>

using namespace std;

class Superhero2
{
    private:
        string name;
        int age;
        char power;

    public:
        Superhero2();
        Superhero2(string name, int age, char power);
        int get_age();
        char get_power();
        void set_name(string name);
        void set_age(int age);
        void set_power(char power);
        string find_power();
        friend istream& operator >> (istream& in, Superhero2& hero);
        friend ostream& operator << (ostream& out, Superhero2& hero);

};

#endif // SUPERHERO_H
