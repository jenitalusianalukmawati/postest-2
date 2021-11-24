#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	//input
	float n;
	cin >> n;
	float a;
	cin >> a;
	float b;
	cin >> b;
	
	//output
	cout << endl;
	cout << "banyak suku = " <<n <<"\n";
	cout << "suku awal = " <<a <<"\n";
	cout << "beda = " <<b;
	cout << endl;
	cout << "Jumlah bilangan hingga suku ke- " << n;
	cout << " dari barisan aritmatika ini adalah " << a+(n-1)*b;
	
}
