#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string a,b;
    ofstream instr("Instrucciones.txt");
    getline(cin >> ws, b);
    while(b != "-1"){
        instr<<b<<endl;
        getline(cin >> ws, b);
    }
    string s;
    instr.close();
    string str;
    ifstream exe("Instrucciones.txt");
     while (getline(exe, str)){

        cout<<str<<endl;
    }

    return 0;
}
