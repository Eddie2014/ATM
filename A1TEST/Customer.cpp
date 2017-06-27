/*
 * Customer.cpp
 *
 */

#include "Customer.h"
//customer cpp
Customer::Customer(){
    transactionTime=0;  //maybe search for empty and return nothing?
    arrivalTime=0;
}
Customer::Customer(int aTime, int tTime){
  transactionTime = tTime;
  arrivalTime = aTime;
}
//setters
void Customer::setTransactionTime(int tTime){
  transactionTime = tTime;
}
void Customer::setArrivalTime(int aTime){
  arrivalTime = aTime;

}
//getters
int Customer::getTT(){
  return transactionTime;
}
int Customer::getAT(){
  return arrivalTime;
}

// TO DO:: Fill in.


