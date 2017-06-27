/*
 * ATMQueue.h
 *
 */

#ifndef ATMQUEUE_H_
#define ATMQUEUE_H_

#include "Node.h"
#include "Customer.h"

class ATMQueue {
public:
	ATMQueue(); //constrcutor
	 // ~ATMQueue(); //destructor
	void Enqueue(Customer*c);
	void Dequeue();
	int frontTT();
	int frontAT();
	int returnQueueLength();
	Node* front;
	Node* rear;


private:
	//  Customer c; //the object
	 int queueLine =1;

	 Node* temp;
};


#endif /* ATMQUEUE_H_ */
