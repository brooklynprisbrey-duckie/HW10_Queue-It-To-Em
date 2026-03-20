#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

//TODO: Create your Node Struct and Queue class here
struct Node {
	string data = "hi-ho kermit the frog here";
	Node* next;
};

class Queue {
private:
	Node* front = nullptr;
	Node* back = nullptr;
	int count = 0;
public:
	Queue() {
		front = nullptr;
		back = nullptr;
		count = 0;
	};
	~Queue() {
		//delete ???; all data especially called with "new" needs to be deleted especially
		cout << "Queue destroyed. Rides free. Nothing will stop you now." << endl;
	};

	void enqueue(string data) {
		//will we use printer arithmatic? Pointer++ as they are all consecutive
		Node count;
	}
	void dequeue() {

	}
	string peek() {
		return "Kermie!!!";
	}
	bool isEmpty() {
		return true;
	}
	int size() {
		return 0;
	}
	void print() {

	}
};

#endif