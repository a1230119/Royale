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
        int enpos[10][2];
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
            /*
            if(token=="ENEMY"){
            	int p=0;
            	for(int i=0;i<5;i++){
            		ss>enemy[i];
            	}
            	ss1.clear();
            	ss1.str(enemy[2]);
            	while(getline(ss1,temp,',')){//get enemy position
            		enpos[num][p]=atoi(temp);
            		p++;
            	}
            	num++;
            } */
        }
        int x,y,sumx,sumy;
        /*for(int i=0;i<num;i++){
        	sumx+=enpos[i][0];
        	sumy+=enpos[i][1];
        } */
        //srand((unsigned)time(NULL));
        for(int i=0; i<4; i++) {
            x=rand()%14+4;
            y=rand()%11+12;
            //x=sumx/num;
            //y=sumy/num;
            cout << 1 << " " << deck[i] << " " << x << " " << y << endl;
        }
        cout << "0";
    }
}
