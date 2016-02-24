/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: ahun0442
 */

#include "CTECList.h"


template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList()
{

}
//Removes the node at the front
template <class Type>
Type CTECList<Type> :: removeFromFront()
{
	Type returnValue; //In case we need to use the value we are removing.

	assert(size >0);
	//Create a pointer to what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//get what was in the head node
	returnValue = this->head->getVaue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	return returnValue;
}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	Type returnValue; // In case we need to use value we are deleting

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);

}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{
	//Loop over size
	//or
	//Loop until getNext()-getNext() ==nullptr
}



