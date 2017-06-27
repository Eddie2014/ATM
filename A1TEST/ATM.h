/*
 * ATM.h
 *
 */


#ifndef ATM_H_
#define ATM_H_

#include "Customer.h"
#include "ATMQueue.h"

class ATM {
  // TO DO:: Fill in.
public:
    ATM(); //default constructor
    //overload constructor
    //~ATM(); //destructor
    //setters
    void insertCustomer(Customer *c, int customerTransactionTime); //insert customer
    void processCustomer(int minute); //call
    //get methods
    int returnRemainingTime() const; //return reamining transaction time for current customer
    int returnQueueLength() const; //return length of queue
    bool returnGetAvailable() const;

    bool setAvailable();

private:
  bool available; //available
  int timeWaiting; //time spent waiting UNSURE
  int transactionTime; //transaction time for current customer
  ATMQueue *linequeue; //pointer to linequeue

};

#endif /* ATM_H_ */
