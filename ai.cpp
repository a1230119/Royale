#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

int main() {
    cout << "6 9 1 8 C 7 3 2" << endl;
    while(1) {
        string str,token,temp;
        string deck[4];
        string enemy[5];
        int enpos[10];
        stringstream ss,ss1;
        int num=0;//enemy number
        while(getline(cin,str)) {
            if(str=="END") break;
            ss.clear();
            ss.str(str);
            ss >> token;
            if(token=="DECK") {
                ss>>deck[0]>>deck[1]>>deck[2]>>deck[3];
            }
            if(token=="ENEMY"){
            	ss>>enemy[0]>>enemy[1]>>enemy[2]>>enemy[3]>>enemy[4];
            	ss1.clear();
            	ss1.str(enemy[2]);
            	while(getline(ss1,temp,',')){//get enemy position
            		enpos[num]=atoi(temp.c_str());//string to int
				}
				num++;
			}
        }
        int x,y,sumx=0;
        for(int i=0;i<num;i++){
        	sumx+=enpos[i];
        } 
        srand((unsigned)time(NULL));
        for(int i=0; i<4; i++) {
            if(num==0)
				x=rand()%14+4;
			else
				x=sumx/num;
            y=rand()%11+12;
            //x=sumx/num;
            //y=sumy/num;
            cout << 1 << " " << deck[i] << " " << x << " " << y << endl;
        }
        cout << "0";
    }
}
