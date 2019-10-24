#include <iostream>
class Minklass
{
	// saker man endast kommer åt från klassen
	private:
		float summa;

	// saker man kommer åt från main	
	public:
		void setSumma(float in)
		{
	        summa = in;
        }

		
		float getSumma()
        {
	        return summa;
        }
};

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

