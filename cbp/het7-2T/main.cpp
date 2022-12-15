#include <iostream>

#define N 6
#define M 10

using namespace std;

/***********************************************************************************************
*   Olvasson be egy hatelem� t�mb�t, amely eg�sz sz�mokat t�rol �s t�ltse fel �rt�kekkel       *
*   Hozzon l�tre egy 10 elem� t�mb�t, amely mutat�kat t�rol                                    *
*   Olvasson be t�z sz�mot a k�perny�r�l. Ha a sz�m szerepel a hatelem� t�mbben,               *
t�rolja el annak a c�m�t, ellenkez� esetben t�roljon el egy nulla�rt�k� c�met                  *
*   Jelen�tse meg a 10 elem� t�mb �ltal mutatott �rt�keket �s hozz�juk tartoz� mem�riac�meket  *
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
