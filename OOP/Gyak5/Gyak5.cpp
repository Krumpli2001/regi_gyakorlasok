// Gyak5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

class Szo {
	const std::string content;
public:
	Szo(const std::string& szo) : content(szo) {}
	int getLength() const { return content.length(); }
	void print() { std::cout << content; }
};

class Sor {
	std::vector<Szo> szavak;
	int currentHossz;
	const int hosszLimit;
public:
	Sor() :currentHossz(0), hosszLimit(75){}
	bool addSzo(const Szo& sz){
		if (currentHossz < hosszLimit) {
			if (szavak.size() > 0) { currentHossz++; }
			currentHossz = currentHossz + sz.getLength();
			szavak.push_back(sz);
			return true;
		}
		return false;
	}
	void print() {
		bool isFirst = true;
		for (Szo sz : szavak) {
				if (!isFirst) { std::cout << " "; }
				else { isFirst = false; }
			sz.print();
		}
		std::cout << std::endl;
	}
};

class Bekezdes {
	std::vector<Sor> sorok;
public:
	void addText(const std::string& text) {
		int inxofNextSpace = 0;
		int inxofPreviousSpace = -1;
		bool stop = false;

		while (!stop) {
			inxofNextSpace = text.find(" ", inxofPreviousSpace + 1);
			std::string nextSzo = text.substr(inxofPreviousSpace + 1,
				inxofNextSpace - inxofPreviousSpace - 1);
			inxofPreviousSpace = inxofNextSpace;

			if (nextSzo == "" or inxofPreviousSpace == -1) {
				stop = true;
			}
			if (nextSzo.length() > 0) {
				int numSorok = sorok.size();
				if (numSorok == 0) {
					Sor elsoSor;
					elsoSor.addSzo(Szo(nextSzo));
					sorok.push_back(elsoSor);
				}
				else {
					//Sor utolsoSor = ;
					Sor& nextSor = sorok[numSorok - 1];
					bool success = nextSor.addSzo(Szo(nextSzo));
					if (!success) {
						Sor nextSor;
						nextSor.addSzo(Szo(nextSzo));
						sorok.push_back(nextSor);
					}
				}
			}
		}
	}
	void print() {
		for (Sor sz : sorok) {
			sz.print();
		}
	}
};

int main()
{
	/*Szo sz1("Valami");
	Szo sz2("valami");
	Szo sz3("vlm");
	Szo sz4("aai");

	Sor sor1;
	sor1.addSzo(sz1);
	sor1.addSzo(sz2);
	sor1.addSzo(sz3);
	sor1.addSzo(sz4);
	sor1.print();

	std::string test("pelda Pelda pl");*/

	
		
	/*int inx = test.find(" ");
	std::string elsoSzo = test.substr(0, inx);

	int inx2 = test.find(" ", inx + 1);
	std::string masodikSzo = test.substr(inx + 1, inx2 - inx - 1);


	std::cout << "inx = " << inx << std::endl;
	std::cout << "elsoSzo = . " << elsoSzo << " ." << std::endl;*/

	Bekezdes b;
	b.addText("This is a test text");
	b.addText("This is also a test text");
	b.addText("OK enought with the texts");
	b.print();




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
