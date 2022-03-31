#include <stdio.h>
#include "MicroTank.h"

// A Feladat: http://www.aut.bme.hu/CppPeldatar/Article.aspx?Id=743b3a0b-ecd0-dc11-94d4-0015171a087a

/*
	1. Írjuk meg osztály konstruktorát, melyben kötelezõ megadni a tank támadó- és védekezõerejét!
	A kezdeti életerõt is lehessen megadni, de ne legyen kötelezõ
	(használjon default paramétereket: ha a programozó nem ad meg életerõt,
	akkor a tagváltozó kezdeti értéke 1000 lesz)!

	2. Írjunk egy Repair() függvényt, mely 100 ponttal növeli a tank életerejét!
	Ügyeljünk rá, hogy 1000 fölé sosem kerülhessen az érték.

	3. Írjunk egy Attack(MicroTank& otherTank) függvényt, mely támadást indít egy másik tank ellen!
	A függvény tartalma csakis akkor fusson le, ha a "saját" tankunk életereje nagyobb mint 0!
	A támadás hatására otherTank életereje csökkenjen
	(("saját" tankunk támadóértéke) - (otherTank védekezõereje)) értékkel!
	Ügyeljünk rá, hogy 0 alá nem csökkenhet a tank életereje ill. ha nagyobb otherTank védekezõereje
	mint a "saját" tankunk támadóereje, akkor ne változzon az életerõ (ne fordulhasson elõ, hogy támadás 
	hatására növekszik otherTank életereje)!

	4. Írjunk egy egyszerû main függvényt, amely létrehoz két tankot, amelyek közül
	az egyik megtámadja a másikat. Minden esemény után írjuk ki a tankok állapotát!
*/

// Diagnosztikai szempontok miatt hozzáadtam egy kis csapart. ID-t kap mindegyik Tank kezdve 1-tõl. - Zoli

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