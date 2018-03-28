#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

int main() {
    cout << "6 9 1 8 C 7 3 2" << endl;
    string str,token;
    //cin >> str;
    string deck[4];
    stringstream ss;
    while(getline(cin,str)) {
        if(str=="END") break;
        ss.clear();
        ss.str(str);
        ss >> token;
        if(token=="DECK") {
            ss>>deck[0]>>deck[1]>>deck[2]>>deck[3];
        }
    }
    int x[4],y[4];
    srand((unsigned)time(NULL));
    y[0]=rand()%11+12;
    x[0]=rand()%14+4;
    y[1]=rand()%4+12;
    x[1]=rand()%4+4;
    y[2]=rand()%4+16;
    x[2]=rand()%4+8;
    y[3]=rand()%3+20;
    x[3]=rand()%3+12;
    for(int i=0; i<4; i++)
        cout << 1 << " " << deck[rand()%4] << " " << x[i] << " " << y[i] << endl;
    cout << "0";
}
