#include "MicroTank.h"
#include <stdio.h>

static int tankNumber = 1;

MicroTank::MicroTank(int ar, int dr)
{
	id = tankNumber++;
	hitPoints = 1000;
	if (ar >= 1 || ar <= 200) {
		attackRating = ar;
	}
	if (dr >= 0 || dr <= 200) {
		defenseRating = dr;
	}
}

MicroTank::MicroTank(int ar, int dr, int hp)
{
	id = tankNumber++;
	if (hp >= 0 || hp <= 1000) {
		hitPoints = hp;
	}
	if (ar >= 1 || ar <= 200) {
		attackRating = ar;
	}
	if (dr >= 0 || dr <= 200) {
		defenseRating = dr;
	}
}

int MicroTank::getAr() const
{
	return attackRating;
}

int MicroTank::getDr() const
{
	return defenseRating;
}

int MicroTank::getHp() const
{
	return hitPoints;
}

int MicroTank::getId() const
{
	return id;
}

void MicroTank::setAr(int pAr)
{
	attackRating = pAr;
}

void MicroTank::setDr(int pDr)
{
	defenseRating = pDr;
}

void MicroTank::setHp(int pHp)
{
	hitPoints = pHp;
}

void MicroTank::Attack(MicroTank& otherTank)
{
	printf("\nTank nr:%d attacks Tank nr:%d\n", getId(), otherTank.getId());
	if (hitPoints > 0 && (getAr()-otherTank.getDr())>0) {
		otherTank.setHp(otherTank.getHp() - (getAr()-otherTank.getDr()));
		printf("\nTank nr:%d lost %d HP\n", otherTank.getId(), (getAr() - otherTank.getDr()));
	}
	else {
		printf("\nTank nr:%d didn't lost any hp\n", otherTank.getId());
	}
}

void MicroTank::Repair()
{
	
		if (hitPoints > 0 && (hitPoints + 100) < 1000) {
			hitPoints += 100;
		}
		if (hitPoints == 0) {
			printf("\nThis tank is destroyed\n");
		}
		if ((hitPoints + 100) > 1000) {
			hitPoints = 1000;
		}
	
}

void MicroTank::print() const
{
	printf("\nTank nr:%d\nHP: %d | Attack: %d | Defense: %d\n", getId(), getHp(), getAr(), getDr());
}
