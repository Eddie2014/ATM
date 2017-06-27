/*
 * Node.cpp
 *
 */

#include "Node.h"

Node::Node(){
	dataAT =0;
	dataTT= 0;
	next =0;
}

Node::Node(int AT, int TT){
	dataAT = AT;
	dataTT = TT;
	next = 0;
}

Node::Node(int AT, int TT, Node* nxtNode){
	dataAT = AT;
	dataTT = TT;
	next = nxtNode;
}
void Node::setDataTT(int TT)
{
	dataTT=TT;
}

void Node::setDataAT(int AT)
{
	dataAT=AT;
}
//Node::~node(){
//
//}

int Node::getDataAT(){
	return dataAT;
}
int Node::getDataTT(){
	return dataTT;
}

Node* Node::getNext(){
	return next;
}
void Node::setNext(Node* nxtNode){
	next = nxtNode;
}
// TO DO:: Fill in.
