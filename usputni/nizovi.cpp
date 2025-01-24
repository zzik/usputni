#include <iostream>
#include <ctime>
using namespace std;
int vratiRendom(int pozicija, int &meta);
void ispuniMatricu(int matra[], int glava, int rep);
void ispis(int* broj);

int main()
{

	const int duzinaGlave1 = 4, duzinaGlave2 = 4, duzinaRepa1 = 5, duzinaRepa2 = 5;
	
	int matrica1[duzinaGlave1][duzinaRepa1] = {};
	int matrica2[duzinaGlave2][duzinaRepa2] = {};

	ispuniMatricu(*matrica1, duzinaGlave1, duzinaRepa1);
	ispuniMatricu(*matrica2, duzinaGlave2, duzinaRepa2);

	for (int i = 0; i < duzinaRepa1; i++)
	{
		int* trenutnaVrijednost = *(matrica1 + i);
		ispis(trenutnaVrijednost);
	}

	return 0;
}
void ispis(int* broj) {
	cout << *broj << " " << endl;
}
int vratiRendom(int pozicija, int& meta) {
	return 3;
}

void ispuniMatricu(int matra[], int glava, int rep) {

}

//saberi ih u treci niz
//vodoravno slozit u treci
//vertikalno slozit u cetvrti
//
//uradi preko dinamicke i staticke memorije
//
//rendomizuj vrijednosti varijabli
//
//dodatni zadataci
//1. redoslijed brojeva neparan, paran
//2. red parnih, red neparnih
//3. izracunat prosjek svih i pojedinacnih redova, isto za brojeva, i matrica
//4. indeks reda sa najvisim prosjekom


//napravi 2 2d niza
//saberi ih u treci niz
//vodoravno slozit u treci
//vertikalno slozit u cetvrti
//
//uradi preko dinamicke i staticke memorije
//
//rendomizuj vrijednosti varijabli
//
//dodatni zadataci
//1. redoslijed brojeva neparan, paran
//2. red parnih, red neparnih
//3. izracunat prosjek svih i pojedinacnih redova, isto za brojeva, i matrica
//4. indeks reda sa najvisim prosjekom

