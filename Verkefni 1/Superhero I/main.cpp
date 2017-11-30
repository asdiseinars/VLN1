#include <iostream>
#include <fstream>
#include "Superhero.h"

using namespace std;

int main()
{
    Superhero hero;
    ofstream fout;
    fout.open("binary_file_superhero.dat", ios::app | ios::binary);

    cout << "Superhero" << endl;
    cin >> hero;
    fout << hero;
    cout << endl;

    fout.close();

    Superhero hero2;

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

    fin.close();

    return 0;
}
