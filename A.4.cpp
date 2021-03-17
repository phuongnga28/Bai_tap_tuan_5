#include <iostream>
using namespace std;
void mang( int b[]){
	for ( int i = 0; i< 4; i++)
        {
            cout << &b[i] << " "<< endl;
    }
}
void chuoi(string s)
{
	cout << &s << endl;
}
int main(){
	int a[4] = {0,1,2,3};
	for ( int i = 0; i< 4; i++){cout << &a[i] << " " << endl;}
	string s;
	cout << &s << endl;
	mang (a);
	chuoi(s);
	return 0;
	}
//c? hai d? dùng pass by reference//
