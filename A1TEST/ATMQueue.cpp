/*
 * ATMQueue.cpp
 *
 */

#include "ATMQueue.h"
#include "Node.h"
#include <iostream>

ATMQueue::ATMQueue(){
	queueLine = 0;
	rear = nullptr;
	front= nullptr;
	temp= nullptr;
}

void ATMQueue::Enqueue(Customer * c){ //add an element
 queueLine++;

  Node* temp = new Node; //new temp node
  temp->setDataAT(c->getAT());
  temp->setDataTT(c->getTT());
  temp->setNext(nullptr);  //store next temp
  if(front == nullptr && rear == nullptr){  //if completely empty
    front = temp;
	rear = temp; //only object
    cout<<"testing--------------------------------------------"<<front->getDataAT()<<endl;
    return;
  }
  rear->setNext(temp); //rear of list points to temp
  rear = temp; //rear is now the new temp
  cout<<"testing values of REAR----------------------------------"<<endl;
 // delete []temp;
}

void ATMQueue::Dequeue(){ //remove element at front of queue
  queueLine--;
  Node* temp = front;
  if(front == nullptr){ //if front is empty then return
    return;
  }
  if(front == rear){  //nothing
    front = rear = nullptr;
  }
  else{
    front = front->getNext();  //increment
  }
 // delete temp; //delete the first node
}

int ATMQueue::returnQueueLength(){
  return queueLine;
}

int ATMQueue::frontAT(){
	if(front == nullptr) {
		cout<<"Queue is empty!!!!!!!!!!!!!!!!!!!"<<endl;
		return 0;
	}
	else{
		cout<<"WE GOOD MAN"<<endl;
		return front->getDataAT();
	}
}

int ATMQueue::frontTT(){
	if(front == nullptr) {
		cout<<"Queue is empty!!!!!!!!!!!!!!!!!!!"<<endl;
		return 0;
	}
	else{
		cout<<"WE GOOD MAN2"<<endl;
		return front->getDataTT();
	}
}
// TO DO:: Fill in.
