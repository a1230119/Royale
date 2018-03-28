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
    int x,y;
    srand((unsigned)time(NULL));
    for(int i=0; i<4; i++) {
        x=rand()%14+4;
        y=rand()%11+12;
        cout << 1 << " " << deck[i] << " " << x << " " << y << endl;
    }
    cout << "0";
}
