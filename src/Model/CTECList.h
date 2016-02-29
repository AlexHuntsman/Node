/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: ahun0442
 */

#ifndef CTECLIST_H_
#define CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList : public Node<Type>
{
private:
	int size;
	ArrayNode<Type> head;
	ArrayNode<Type> end;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize;
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);


};





#endif /* CTECLIST_H_ */
