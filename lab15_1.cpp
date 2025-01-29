#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a = 5;
    char b = 'A';
    char *c = &b;
    int *x = &a;
    char *y = &b;
    int **z = &x;
    
    cout << a << " " << b << " " << *c << " " << (void*)x << " " << (void*)y << " " << (void*)z << endl;
    
    cout << (void*)&a << " " << (void*)&b << " " << (void*)&c << " " << (void*)&x << " " << (void*)&y << " " << (void*)&z << endl;
    
    *c = 'F';
    cout << a << " " << b << " " << *c << " " << (void*)x << " " << (void*)y << " " << (void*)z << endl;
    
    *y = 'W';
    cout << a << " " << b << " " << *c << " " << (void*)x << " " << (void*)y << " " << (void*)z << endl;
    
    *x = 6;
    cout << a << " " << b << " " << *c << " " << (void*)x << " " << (void*)y << " " << (void*)z << endl;
    
    *(*z) = 7;
    cout << a << " " << b << " " << *c << " " << (void*)x << " " << (void*)y << " " << (void*)z << endl;

	return 0;
}
