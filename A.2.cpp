#include <iostream>
using namespace std;
long factor(int n){
	if ( n == 0 || n == 1){
		return 1;
	}
	else {
		return n* factor(n-1);
	}
}
int main()
{   int n;
    cin >> n;
    cout << "n= " << n << " at " << &n << endl;
	cout << factor(n);
	return 0;
}
		
