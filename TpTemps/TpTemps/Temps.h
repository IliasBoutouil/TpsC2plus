#pragma once
class Temps
{

private:
	int heure;
	int minute;
	int seconde;
public:
	Temps();
	Temps(int, int, int);
	void ShowFrTime();
	void ShowEngTime();
	bool CompareTo(Temps);

};
