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
		void setSzerokosc(int szerokosc);
		void setWysokosc(int wysokosc);
		void setWymiary(int szerokosc, int wysokosc);
		double getSzerokosc();
		double getWysokosc();
		double getPole();
		
		Kwadrat();
		Kwadrat(int, int);
		~Kwadrat();
};
