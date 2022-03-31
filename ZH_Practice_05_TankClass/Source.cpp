#include <stdio.h>
#include "MicroTank.h"

// A Feladat: http://www.aut.bme.hu/CppPeldatar/Article.aspx?Id=743b3a0b-ecd0-dc11-94d4-0015171a087a

/*
	1. �rjuk meg oszt�ly konstruktor�t, melyben k�telez� megadni a tank t�mad�- �s v�dekez�erej�t!
	A kezdeti �leter�t is lehessen megadni, de ne legyen k�telez�
	(haszn�ljon default param�tereket: ha a programoz� nem ad meg �leter�t,
	akkor a tagv�ltoz� kezdeti �rt�ke 1000 lesz)!

	2. �rjunk egy Repair() f�ggv�nyt, mely 100 ponttal n�veli a tank �leterej�t!
	�gyelj�nk r�, hogy 1000 f�l� sosem ker�lhessen az �rt�k.

	3. �rjunk egy Attack(MicroTank& otherTank) f�ggv�nyt, mely t�mad�st ind�t egy m�sik tank ellen!
	A f�ggv�ny tartalma csakis akkor fusson le, ha a "saj�t" tankunk �letereje nagyobb mint 0!
	A t�mad�s hat�s�ra otherTank �letereje cs�kkenjen
	(("saj�t" tankunk t�mad��rt�ke) - (otherTank v�dekez�ereje)) �rt�kkel!
	�gyelj�nk r�, hogy 0 al� nem cs�kkenhet a tank �letereje ill. ha nagyobb otherTank v�dekez�ereje
	mint a "saj�t" tankunk t�mad�ereje, akkor ne v�ltozzon az �leter� (ne fordulhasson el�, hogy t�mad�s 
	hat�s�ra n�vekszik otherTank �letereje)!

	4. �rjunk egy egyszer� main f�ggv�nyt, amely l�trehoz k�t tankot, amelyek k�z�l
	az egyik megt�madja a m�sikat. Minden esem�ny ut�n �rjuk ki a tankok �llapot�t!
*/

// Diagnosztikai szempontok miatt hozz�adtam egy kis csapart. ID-t kap mindegyik Tank kezdve 1-t�l. - Zoli

int main() {

	MicroTank T1(100, 50);
	MicroTank T2(110, 60, 500);
	T1.print();
	T2.print();

	T1.Attack(T2);
	T1.print();
	T2.print();

	T2.Repair();
	T2.print();

	MicroTank T3(200, 200, 0);
	T3.print();
	T3.Repair();
	T3.print();

	return 0;
}