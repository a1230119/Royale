#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "1 2 3 4 5 6 7 8" << endl;
    string str;
    //cin >> str;
    //string deck[4];
    while(getline(cin,str)) {
        if(str=="END") break;
        /*string[] a=str.split(" ");
        if(a[0]=="DECK") {
            for(int i=1; i<5; i++) {
                deck[i-1]=a[i];
            }
		}*/
	}
    int x,y;
    srand((unsigned)time(NULL));
    x=rand()%11+12;
    y=rand()%14+4;
    //cout << 1 << " " << deck[rand()%4] << " " << x << " " << y << endl;
    cout << "1" << " " << "1" << " " << x << " " << y << endl;
	cout << "0";
}
