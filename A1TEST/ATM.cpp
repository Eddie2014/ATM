/*
 * ATM.cpp
 *
 */

#include "ATM.h"
#include "ATMQueue.h"
#include <iostream>
// TO DO:: Fill in.
ATM::ATM(){
  available = true;
  timeWaiting = 0;
  transactionTime = 0;
  linequeue = new ATMQueue();
}
//destructor

void ATM::insertCustomer(Customer *c, int customerTransactionTime){ //finished
  if(available==true){
    transactionTime=c->getTT(); //from document?
    available=false;
    cout<<"inserted one into ATM"<<endl;
  }
  else{
  cout<<"put into the queue"<<endl;
  linequeue->Enqueue(c); //insert customer into linequeue
  }
}

void ATM::processCustomer(int minute){ //finished
  //linequeue.Dequeue();
  if(available==false && transactionTime!=0){
    transactionTime--;
    cout<<"transactionTime from PROCESS CUSTOMER"<<transactionTime<<endl;
    //c.decrementTime(nullptr); //not sure if supposed to be transaction
    if(transactionTime==0){
    	available=true;
    }
  }
  else{

    transactionTime = linequeue->frontTT();
    cout<<"transactionTime from FIRST QUEUE---- CUSTOMER"<<transactionTime<<endl;
    		//getDataTT(); //not sure if this isthe correct customer
    timeWaiting = minute- (linequeue->front->getDataAT());
    cout<<"removed front of line"<<endl;
    linequeue->Dequeue();
    available=true;
    //atm needs to become true again
  }
}
int ATM::returnRemainingTime() const{
	return transactionTime;
}

int ATM::returnQueueLength() const{
	//return linequeue.returnQueueLength();
}

bool ATM::returnGetAvailable() const{
	return available;
}

bool ATM::setAvailable(){
	 available=false;
}

////  //implement time
//}

