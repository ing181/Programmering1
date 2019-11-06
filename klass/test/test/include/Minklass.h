#ifndef MINKLASS_H
#define MINKLASS_H


class Minklass
{
	// saker man endast kommer åt från klassen
	private:
		float summa;





	// saker man kommer åt från main
	public:
		void setSumma(float);
		float getSumma();
};

#endif // MINKLASS_H
