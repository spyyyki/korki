#pragma once
class Kwadrat
{
private:
	double m_szerokosc;
	double m_wysokosc;
	double m_pole;

	void calculatePole()
	{
		m_pole = m_szerokosc * m_wysokosc;
	}

public:
	void setSzerokosc(int);
	void setWysokosc(int);
	void setWymiary(int, int);
	double getSzerokosc();
	double getWysokosc();
	double getPole();

	Kwadrat();
	Kwadrat(int, int);
	~Kwadrat();
};

