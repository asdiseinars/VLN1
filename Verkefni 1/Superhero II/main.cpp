#include <iostream>
#include <fstream>
#include "Superhero2.h"

using namespace std;

int main()
{
    Superhero2 hero;
    ofstream fout;
    fout.open("binary_file_superhero.dat", ios::app | ios::binary);

    int size;
    cout << "How many superheroes? ";
    cin >> size;

    Superhero2* heroes = new Superhero2[size];


    for(int i = 0; i < size; i++){
        cout << "Superhero" << endl;
        cin >> heroes[i];
        fout << heroes[i] << endl;
        cout << endl;
    }

    fout.close();

    Superhero2 hero2;

    ifstream fin;
    fin.open("binary_file_superhero.dat", ios::binary);


    ifstream fin;
    fin.open("binary_file_superhero.dat", ios::binary);

    string str;
    cout << "All superheros: " << endl;
    if(fin.is_open()) {
      while(!fin.eof()){
        getline(fin, str);
        cout << str << endl;
      }
    }

    else {
        cout << "Could not open file" << endl;
    }

    delete[] heroes;

    return 0;
}
