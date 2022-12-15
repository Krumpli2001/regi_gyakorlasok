// Gyak3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Node {
	int value;
	Node* next;
public:
	Node(int v):value(v), next(nullptr){}
	void setNext(Node* n) { next = n; }
	void setValue(int v) { value = v; }
	int getValue() { return value; }
	Node* getNext() { return next; }
};

class IntLinkedList {
	//vector<Node> nodevec;
	Node* head;
	Node* last;
public:
	IntLinkedList() :head(nullptr), last(nullptr) {}
	~IntLinkedList() {
		Node* toDelete = head;
		while (toDelete != nullptr) {
			Node* temp = toDelete;
			toDelete = toDelete->getNext();
			delete temp;
		}
	}
	IntLinkedList& addNode(int val) {
		if (last != nullptr){
			cout << "adding new item to " << last << endl;
			last->setNext(new Node(val));
			last = last->getNext();
		}
		else {
			cout << "adding first item " << last << endl;
			head = new Node(val);
			last = head;
		}
		return *this;
	}
	void print() {
		cout << "IntLinkedList: ";
		Node* currentNode = head;
		while (currentNode != nullptr) {
			if (currentNode->setNext()) {
				cout << currentNode->getValue() << ", ";
			}
			else {
				cout << currentNode->getValue() << endl;
			}
			currentNode = currentNode->getNext();
		}
	}
	Node* operator[](int inx) {
		Node* currentNode = head;
		int currentInx = 0;
		Node* retval = 0;
		while (currentInx!=inx && currentNode!=nullptr) {
			retval = currentNode->getValue();
			currentNode = currentNode->getNext();
			currentInx++;
		}
		return retval;
	}
	};

	int main()
	{
		IntLinkedList mylist;
		Node testNode(10);
		mylist.addNode(10).addNode(15).addNode(18).addNode(19);
		mylist.print();
		cout << "Value of element 1= " << mylist[1] << endl;
		/*mylist[1].setValue(18);
		mylist[2] = 16;
		mylist.print();
		cout << "A lista -1. eleme: " << mylist[-1].getValue() << endl;
		cout << "A lista 18. eleme: " << mylist[18].getValue() << endl;*/
	}