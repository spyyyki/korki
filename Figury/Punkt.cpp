#include "Punkt.h"

void Punkt::setX(double x)
{
	m_x = x;
}

void Punkt::setY(double y)
{
	m_y = y;
}

double Punkt::getX()
{
	return m_x;
}

double Punkt::getY()
{
	return m_y;
}

Punkt::Punkt(int x, int y)
{
	m_x = x;
	m_y = y;
}

Punkt::Punkt()
{
	m_x = 0.0;
	m_y = 0.0;
}

Punkt::~Punkt()
{
}
