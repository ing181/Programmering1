#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Comparison Operators
	// == Equal to
	bool b;
	b = (6 != 7);
	cout << b << " 1 sant, 0 falskt" << endl;
	// Logiska operatorer
	// && och, and
	cout << "Utv�rderas till " << ( (1==0) && (6<8) ) << endl; // 0
	// || eller, or
	cout << "Utv�rderas till " << ( (1==0) || (6<8) ) << endl; // 1
    // ! icke, not
    // (inverterar sanningsv�rdet)
    cout << "Utv�rderas till " << ( (!(1==0)) && (6<8) ) << endl; // 1
	return 0;
}
