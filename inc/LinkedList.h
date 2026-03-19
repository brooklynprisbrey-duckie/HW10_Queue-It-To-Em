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
	Node* front;
	Node* back;
	int count;
public:
	Queue();
	~Queue();

	void enqueue(string data) {

	}
	void dequeue() {

	}
	string peek() {

	}
	bool isEmpty() {

	}
	int size() {

	}
	void print() {

	}
};

#endif