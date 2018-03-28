#include <iostream>
#include <string>
#include <csydlib>
#include <ctime>

int main(){
	cout << "1 2 3 4 5 6 7 8" << endl;
	string str;
	//cin >> str;
	char deck[5];
	while(getline(cin,str)){
		if(str=="END") break;
		string[] a=str.split(" ");
	}
	int x,y;
	srand((unsigned)time(NULL));
	x=rand()%11+12;
	y=rand()%14+4;
	cout << 1 << " " << deck[rand()%4+1] << " " << x << " " << y << endl;
	cout << "0";
}
