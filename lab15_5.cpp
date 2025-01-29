#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a, int *b, int *c, int *d) {
    int temp, randomIndex1, randomIndex2;
    
    randomIndex1 = rand() % 4;
    randomIndex2 = rand() % 4;
    
    while(randomIndex1 == randomIndex2) {
        randomIndex2 = rand() % 4;
    }
    
    if(randomIndex1 == 0 && randomIndex2 == 1) {
        temp = *a;
        *a = *b;
        *b = temp;
    } else if(randomIndex1 == 0 && randomIndex2 == 2) {
        temp = *a;
        *a = *c;
        *c = temp;
    } else if(randomIndex1 == 0 && randomIndex2 == 3) {
        temp = *a;
        *a = *d;
        *d = temp;
    } else if(randomIndex1 == 1 && randomIndex2 == 2) {
        temp = *b;
        *b = *c;
        *c = temp;
    } else if(randomIndex1 == 1 && randomIndex2 == 3) {
        temp = *b;
        *b = *d;
        *d = temp;
    } else if(randomIndex1 == 2 && randomIndex2 == 3) {
        temp = *c;
        *c = *d;
        *d = temp;
    }
}