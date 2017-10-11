#include "Kwadrat.h"

Kwadrat::Kwadrat()
{
	m_szerokosc = 5.0;
	m_wysokosc = 5.0;
}

void Kwadrat::setSzerokosc(int szerokosc)
{
	if (szerokosc <= 0)
	{
		m_szerokosc = 5.0;
	}
	else
	{
		m_szerokosc = szerokosc;
	}
	calculatePole();
}

void Kwadrat::setWysokosc(int wysokosc)
{
	if (wysokosc <= 0)
	{
		m_wysokosc = 5.0;
	}
	else
	{
		m_wysokosc = wysokosc;
	}
	calculatePole();
}

void Kwadrat::setWymiary(int szerokosc, int wysokosc)
{	
	if (szerokosc <= 0)
	{
		m_szerokosc = 5.0;
	}
	else
	{
		m_szerokosc = szerokosc;
	}
	
	if (wysokosc <= 0)
	{
		m_wysokosc = 5.0;
	}
	else
	{
		m_wysokosc = wysokosc;
	}
	calculatePole();
}

double Kwadrat::getSzerokosc()
{
	return m_szerokosc;
}

double Kwadrat::getWysokosc()
{
	return m_wysokosc;
}

double Kwadrat::getPole()
{
	return m_pole;
}

Kwadrat::Kwadrat(int szerokosc, int wysokosc)
{
	if (szerokosc <= 0)
	{
		m_szerokosc = 5.0;
	}
	else
	{
		m_szerokosc = szerokosc;
	}

	if (wysokosc <= 0)
	{
		m_wysokosc = 5.0;
	}
	else
	{
		m_wysokosc = wysokosc;
	}

	calculatePole();
}

Kwadrat::~Kwadrat()
{
}
