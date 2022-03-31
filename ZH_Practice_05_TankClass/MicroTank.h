#pragma once
class MicroTank
{
	/*
		Életerõ (hitPoints), mely egy egész szám 0 és 1000 között.
		Támadóerõ (attackRating), mely egy egész szám 1 és 200 között.
		Védekezõerõ (defenseRating), mely egy egész szám 0 és 200 között
	*/

private:
	int id;
	int attackRating;
	int defenseRating;
	int hitPoints;
public:
	MicroTank(int ar, int dr);
	MicroTank(int ar, int dr, int hp);
	
	int getAr() const;
	int getDr() const;
	int getHp() const;
	int getId() const;

	void setAr(int pAr);
	void setDr(int pDr);
	void setHp(int pHp);

	void Attack(MicroTank& otherTank);
	void Repair();

	void print() const;
};