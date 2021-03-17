#include <iostream>
using namespace std;
int main()
{
	int a[100];
	char b[100];
	for ( int i = 0; i< 3; i++){ cin >> a[i];}
	for ( int i = 0; i < 3; i++){cin >> b[i];}
	for ( int i = 0; i< 3; i++){cout << &a[i] << " " <<  endl;}
	for ( int i = 0; i< 3; i++){ cout << (void*)&b[i] << " " << endl;}
}
// dia chi cua mang int cach nhau 4 vi size cua int la 4 bit, dia chi cua mang char cach nhau 1 vi size cua char la 1 bit//

