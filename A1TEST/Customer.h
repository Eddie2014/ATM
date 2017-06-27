/*
 * Customer.h
 *
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer {
public:
	//friend class ATM;
  // TO DO:: Fill in.
  Customer();//default constructor
  Customer(int aTime, int tTime);//overload constructor
 // ~Customer();
  void setTransactionTime(int tTime);
  void setArrivalTime(int aTime);
  int getTT();
  int getAT();
private:
  int transactionTime;
  int arrivalTime;
};
#endif /* CUSTOMER_H_ */
