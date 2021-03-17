#include <iostream>
using namespace std;
void updatenumber ( int a){
	a = a * 5;
	cout << &a << endl;
	}
void updatenumber1 (int &a){
	a = a* 5;
	cout << &a << endl;
	}
int main(){
	int n = 100;
	cout << &n << endl;
	updatenumber (n);
	updatenumber1 (n);
	return 0;
	}
// hai cach khac nhau cho hai ket qua khac nhau//
	 
	

