#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

int main() {
    cout << "6 5 9 C 4 1 8 7" << endl;
    while(1) {
        string str,token,temp,Mana,fd,others;
        string deck[4];
        string enemy[5];
        int enpos[100];
        stringstream ss,ss1;
        int num=0,mana;//enemy number
        int dancernum=0,sgramnum=0;
        while(getline(cin,str)) {
            if(str=="END") break;
            ss.clear();
            ss.str(str);
            ss >> token;
            if(token=="DECK") {
                ss>>deck[0]>>deck[1]>>deck[2]>>deck[3];
            }
            if(token=="ENEMY") {
                ss>>enemy[0]>>enemy[1]>>enemy[2]>>enemy[3]>>enemy[4];
                ss1.clear();
                ss1.str(enemy[2]);
                while(getline(ss1,temp,',')) { //get enemy position
                    enpos[num]=atoi(temp.c_str());//string to int
                }
                num++;
            }
            if(token=="FRIEND") {
                ss>>fd>>others;
                if(fd=="9") dancernum++;
				else if(fd=="8") sgramnum++;
			}
            if(token=="MANA") {
                ss>>Mana;
                mana=atoi(Mana.c_str());
            }
        }
        int x,y,sumx=0,pos=0;
        if(num!=0) {
            for(int i=0; i<num; i++) {
                sumx+=enpos[i];
            }
            pos=sumx/num;
        }
        bool rifleman=false,wisp=false,dancer=false,archer=false,sgram=false;
        //int iC=-1,i5=-1,i9=-1,i6=-1,i8=-1;
        //rifleman=C,wisp=5,dancer=9,archer=6,sgram=8
        for(int i=0; i<4; i++) {
            /*if(nosgram)
                break;
            else*/
            if(deck[i]=="8"&&sgramnum<3)
                sgram=true; //i8=i;
            if(deck[i]=="C")
                rifleman=true; //iC=i;
            if(deck[i]=="5")
                wisp=true; //i5=i;
            if(deck[i]=="9"&&dancernum<3)
                dancer=true; //i9=i;
            if(deck[i]=="6")
                archer=true; //i6=i;
        }
        srand((unsigned)time(NULL));
        int dancerx;
        //int index[5]={iC,i5,i9,i6,i8};
        if(pos<10) dancerx=15;
        else dancerx=5;
        for(int i=0; i<4; i++) {
            if(pos>=4 && pos <=17)
                x=pos;
            else
                x=rand()%14+4;
            y=rand()%11+12;
            if(wisp)
                cout << 1 << " " << 5 << " " << x << " " << y << endl;
            wisp=false;
            if(dancer)
                cout << 1 << " " << 9 << " " << dancerx << " " << 12 << endl;
            dancer=false;
            if(rifleman) {
                cout << 1 << " " << "C" << " " << x << " " << 22 << endl;
                rifleman=false;
            } else if(archer) {
                cout << 1 << " " << 6 << " " << x << " " << y << endl;
                archer=false;
            } else if(sgram) {
                cout << 1 << " " << 8 << " " << x << " " << 22 << endl;
                sgram=false;
            } else {
                cout << 1 << " " << deck[i] << " " << x << " " << y << endl;
            }
        }
        cout << "0";
    }
}
