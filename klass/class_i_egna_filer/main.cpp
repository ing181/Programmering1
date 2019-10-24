
#include <iostream>
#include "minklass.h"

using namespace std;
int main() {
	
	float villha;
	cout << "Ange hur mycket pengar du vill ha ";
	cin >> villha;
	
	Minklass mk;
	mk.setSumma(villha);
	cout << mk.getSumma() << endl;

	return 0;
}
