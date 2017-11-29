#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ofstream fout;

    fout.open("Textaskra.txt", ios::app);

    if(fout.is_open()) {
        while(!fout.eof()){
            getline(cin, str);

            if(str.at(0) == '\\'){
                return 0;
            }
            fout << str << endl;
        }
    }

    else{
        cout << "File not open" << endl;
    }

    return 0;
}
