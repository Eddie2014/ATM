/*
 * Node.h
 *
 */

#ifndef NODE_H_
#define NODE_H_
using namespace std;

class Node {
	//friend class ATMQueue;
public:
	Node();
	Node(int AT, int TT);
	Node(int AT, int TT, Node* nxtNode);
	~Node();

	//getters
	int getDataAT();
	int getDataTT();
	Node* getNext();

	//setter
	void setNext(Node* nxtNode);
	void setDataAT(int AT);
	void setDataTT(int TT);

private:
    int dataAT;
    int dataTT;
    Node* next;
};

#endif /* NODE_H_ */
