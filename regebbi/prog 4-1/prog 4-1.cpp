// prog 4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A rendszam teszt

#include <iostream>
#include <string.h>
#include <string>

using namespace std;


int main()
{
	std::cout << "Rendszam teszteles\n";
	string rsz;
	bool nemk = true;
	bool helyes = true;
	do{
		getline(cin, rsz);
		if (rsz.length() == 1) {
			if (rsz[0] == 'k' or rsz[0] == 'K') {
				nemk = false;
			}
		}
		else if (rsz.length() == 6 or rsz.length() == 7) {
			if (rsz.length() == 6) {
				for (int i = 0; i < 3; i++) {
					if (('a' <= rsz[i] and rsz[i] <= 'z') or ('A' <= rsz[i] and rsz[i] <= 'Z') and helyes) {
						helyes = true;
					}
					else
						helyes = false;
				}
				if (helyes) {
					for (int i = 3; i < 6; i++) {
						if ('0' <= rsz[i] and rsz[i] <= '9' and helyes) {
							helyes = true;
						}
						else
							helyes = false;
					}
					if (rsz[3] == '0' and rsz[4] == '0' and rsz[5] == '0') {
						helyes = false;
					}
				}
			}
			if (rsz.length() == 7) {
				for (int i = 0; i < 3; i++) {
					if (('a' <= rsz[i] and rsz[i] <= 'z') or ('A' <= rsz[i] and rsz[i] <= 'Z') and helyes) {
						helyes = true;
					}
					else
						helyes = false;
				}
				if (helyes) {
					if (rsz[3] == ' ' or rsz[3] == '-') {
						helyes = true;
					}
					else
						helyes = false;
				}
				if (helyes) {
					for (int i = 4; i < 7; i++) {
						if ('0' <= rsz[i] and rsz[i] <= '9' and helyes) {
							helyes = true;
						}
						else
							helyes = false;
					}
					if (rsz[4] == '0' and rsz[5] == '0' and rsz[6] == '0') {
						helyes = false;
					}
				}
			}
		}
		else
			helyes = false;
		if (helyes and nemk) {
			cout << "A rendszam jo\n";
		}
		if (not(helyes) and nemk) {
			cout << "A rendszam rossz\n";
		}
	} while (nemk);
	cout << "Kileptel a programbol";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
