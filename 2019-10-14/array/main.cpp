#include <iostream>
using namespace std;
int main() {
	// En variabel med flera v�rden
	// du kommer �t v�rdena genom
	// att varje v�rde har ett eget index
	int a[10]; // Plats f�r 10 "intar"
	for (int i=0; i<10; i++)
	{
	    a[i] = i+3;	
	}
	
	for (int i=0; i<10; i++)
	{
	    cout << a[i] << endl;	
	}
	
	
	
	

	return 0;
}
