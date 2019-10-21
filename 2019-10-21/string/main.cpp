#include <string> // Vi inkluderar klassen string
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string s="hejsan";
	cout << s << endl;
	s="kaffe";
    cout << s << endl;
	// Metod f�r att hitta f�rsta f�rekomsten av tecknet f 
	// i str�ngen s
	for (int i=0; i<5; i++)
	{
		if (s[i] == 'f')
		{
			cout << "Tecknet " << s[i] << " hittas p� plats " << i << endl;
			break;
		}
	}
	// Metod som finns inbygd i klassen string
	// plats tilldelas heltalet f�r positionen
	// av f�rsta f�rekomsten av f
	int plats = s.find('f');
	cout << "Tecknet " << s[plats] << " hittas p� plats " << plats << endl;
	// Metod f�r att f� veta hur m�nga tecken det finns i en str�ng
	int antalTecken = s.size();
    cout << s << " inneh�ller " << antalTecken << " tecken" << endl;
    // Du kan s�tta ihop str�ngar (konkatenera)
    // + tecknet anv�nds f�r konkateneringen
    string s1 = " gott!";
    string s2 = s+s1+" eller hur";
    cout << s2 << endl;
    // Plocka ut en del av en str�ng
    // s2.substr(start,l�ngd);
    string s3 = s2.substr(6,3);
    cout << s3 << endl;
	return 0;
}
