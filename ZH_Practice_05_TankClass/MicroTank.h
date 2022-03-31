#pragma once
class MicroTank
{
	/*
		�leter� (hitPoints), mely egy eg�sz sz�m 0 �s 1000 k�z�tt.
		T�mad�er� (attackRating), mely egy eg�sz sz�m 1 �s 200 k�z�tt.
		V�dekez�er� (defenseRating), mely egy eg�sz sz�m 0 �s 200 k�z�tt
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