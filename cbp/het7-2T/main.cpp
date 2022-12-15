#include <iostream>

#define N 6
#define M 10

using namespace std;

/***********************************************************************************************
*   Olvasson be egy hatelemû tömböt, amely egész számokat tárol és töltse fel értékekkel       *
*   Hozzon létre egy 10 elemû tömböt, amely mutatókat tárol                                    *
*   Olvasson be tíz számot a képernyõrõl. Ha a szám szerepel a hatelemû tömbben,               *
tárolja el annak a címét, ellenkezõ esetben tároljon el egy nullaértékû címet                  *
*   Jelenítse meg a 10 elemû tömb által mutatott értékeket és hozzájuk tartozó memóriacímeket  *
************************************************************************************************/


int main()
{
	int tomb[N], *ptomb[M];
	int i, j;
	int ertek;
	cout << "Kerem a tomb elemeit:\n";
	for (i=0; i<N; i++)
	{
		cin >> tomb[i];
	}
	cout << "Kerek meg " << M << " szamot:\n";
	for (j=0; j<M; j++)
	{
		cin >> ertek;
		i=0;
		while (i<N and tomb[i]!=ertek)
			i++;
		if (i<N) // az elem szerepel a tombben, ekkor a cimet taroljuk
			ptomb[j]=&tomb[i];
		else // ha nem szerepel, akkor nullat
			ptomb[j]=0;
	}
	cout << "A memoriatomb elemei:\n";
	for (j=0; j<M; j++)
	{
		cout << "A cim: " << ptomb[j] << endl;
		if (ptomb[j]==0)
			cout << "NULLPOINTER.\n";
		else
			cout << "a mutatott ertek: " << *ptomb[j] << endl;
	}
	return 0;
}
