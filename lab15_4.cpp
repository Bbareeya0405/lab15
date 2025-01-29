#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a, int &b, int &c, int &d) {
    int temp, randomIndex;
    
    randomIndex = rand() % 4;  
    switch(randomIndex) {
        case 0:
            temp = a;
            a = b;
            b = temp;
            break;
        case 1:
            temp = a;
            a = c;
            c = temp;
            break;
        case 2:
            temp = a;
            a = d;
            d = temp;
            break;
        case 3:
            temp = b;
            b = c;
            c = temp;
            break;
    }
}