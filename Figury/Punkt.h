#ifndef PUNKT_H
#define PUNKT_H

class Punkt
{
	private:
		double m_x;
		double m_y;
	
	public:
		void setX(double);
		void setY(double);
		double getX();
		double getY();
		
		Punkt();
		Punkt(int, int);
		~Punkt();
};

#endif
