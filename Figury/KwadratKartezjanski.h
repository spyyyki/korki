#include "Punkt.h"

class KwadratKartezjanski
{
	private:
		Punkt * p1;
		Punkt * p2;
		Punkt * p3;
		Punkt * p4;
		
		
	public:
		KwadratKartezjanski(double x, double y, int dlugosc);
		KwadratKartezjanski(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
		~KwadratKartezjanski();
};
