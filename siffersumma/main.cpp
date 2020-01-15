#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"swedish");
	long n;

	cout << "N = ";
	cin >> n;
	long talfalt[1000]={0};
   
    //int antalSiffror=0;
    for (long i=0,a=1,b=10; i<10000; i++, a=a*10,b=b*10)
    {
    	//antalSiffror=+1;
    	talfalt[i] = n%b;
    	talfalt[i] = talfalt[i]/a;
    	if (talfalt[i] == 0)
    		break;
    }
    
    long i=0;
    int summa = 0;
    while (true) {
    	summa=summa+talfalt[i++];
    if (talfalt[i] == 0)
    		break;
   }
    cout << "Siffersumman på ditt inmatade tal " << summa << endl;
    
    /*  */
long k;
for (k = n+1; k<10000; k++)
{
    long talfalt2[10000]={0};
   

    for (long j=0,a=1,b=10; j<10000; j++, a=a*10,b=b*10)
    {
    	talfalt2[j] = (k)%b;
    	talfalt2[j] = talfalt2[j]/a;
    	if (talfalt2[j] == 0)
    		break;
    }
    
    long i2=0;
    int summa2 = 0;
    while (true) {
    	summa2=summa2+talfalt2[i2++];
    if (talfalt2[i2] == 0)
    		break;
   }
   
   if (summa == summa2)
       break;
   
}

    cout << "Det minsta talet (större än " << n << ")" << " är " << k << endl;
	return 0;
}

