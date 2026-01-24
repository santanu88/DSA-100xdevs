#include<iostream>
using namespace std;
 
int main() {
	int a;
	int b;
	cin >> a >> b;
	if ( a < b ){
	     cout << "Min = " << a << endl;
	}
	else {
	     cout << "Min = " << b << endl;
	}
	if(b > a ){
	    cout << "Max = " << b << endl;   
	}
	else{
	    cout << "Max = " << a << endl; 
	}
	
	
 
}