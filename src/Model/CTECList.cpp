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
	assert(size >0);
	//Create a pointer to what is after head
	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//get what was in the head node
	thingToRemove = this->head->getVaue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	this->calculateSize();

	return thingToRemove;
}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	Type thingToRemove; // In case we need to use value we are deleting

	assert (this->size > 0);
	assert(size > 0 && index >= 0 && index < size);

	ArrayNode<Type> * previous, deleteMe, newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index+1; spot++)
		{


		}
		this->calculateSize();
	}


	return thingToRemove;
}

template<class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size > 0);
	assert(size >= 0);
	ArrayNode<Type> * counterPointer = head;
	int count = 0;

	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++;
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;
		}

		this->count = count;
	}
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{

	//Loop over size
	//or
	//Loop until getNext()-getNext() ==nullptr
	//Before return the Cariable call calculateSize
}



