#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

//TODO: Create your Node Struct and Queue class here
struct Node {
	string data = "hi-ho kermit the frog here";
	Node* next = nullptr;
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
		while (count > 0) { dequeue(); }
		cout << "Queue destroyed. Rides free. Nothing will stop you now.\n" << 
			"Documentary on Disney's Fastpass: https://youtu.be/9yjZpBq1XBE?si=Xp1UrLDop6s8AAjj" << endl;
	};

	void enqueue(string data) {
		//will we use printer arithmatic? Pointer++ as they are all consecutive
		Node* temp = new Node;
		temp->data = data;
		if (!count) {
			front = temp; //TODO fix front multiple queueing
		}
		else {
			back->next = temp;
		}
		back = temp;
		count++;
	}
	void dequeue() {
		if (front) {
			Node* temp = front;
			front = front->next;//next is new front
			count--;
			delete temp;
		}
		else {
			delete front;
		}
		return;
	}
	string peek() {
		if (count) {
			return front->data;
		}
		else {
			return "";
		}
	}
	bool isEmpty() {
		if (front) {
			return false;
		}
		return true;
	}
	int size() {
		return count;
	}
	void print() {
		if (count) {
			Node* holder = front;
			for (int i = 0; i < count; i++) {
				cout << holder->data << ", ";
				holder = holder->next;
			}
			cout << endl;
		}
		else {
			cout << "The wind blows a tumbleweed past. This memory is empty." << endl;
		}
		return;
	}
};

#endif