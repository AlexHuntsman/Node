/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: ahun0442
 */

#include "CTECList.h"
#include <sstream>

using namespace std;

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

/**
 * Start at head
 * Iterate over nodes
 * update position
 * delete final
 * reset size, head, end to default
 */
template <class Type>
CTECList<Type>::~CTECList()
{

	ArrayNode<Type> *current = head;
	for(int deleteCount = 0; deleteCount < size; deleteCount++)
	{
		ArrayNode<Type> *temp = current;
		current = current->getNext();
		head = current;
		delete temp;
	}

	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
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

	ArrayNode<Type> * previous, deleteMe, newNext, current;

	std::string searchItem = "";


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
		cout << "What do you want to delete?" <<endl;
			getline(cin,searchItem);
			cout << "You entered: " << searchItem << endl << endl;
		for(int spot = 0; spot < index+1; spot++)
		{
			if(current->value == searchItem)
			{
				deleteMe->value;
			}
			else
			{
				current = current->newNext;
			}
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
	ArrayNode<Type> * counterPointer;
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

		this->size = count;
	}
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{

	//Loop over size
	//or
	//Loop until getNext()-getNext() ==nullptr
	//grab the value from the last node
	//set the next to last node to point to nullptr
	//Before return the Cariable call calculateSize

	assert(size > 0);
	Type valueToRemove;


	ArrayNode<Type> * current = head;
	for(int spot = 0; spot < size-1; spot++)
	{
		current = current->getNext();
	}


	valueToRemove = current->getNext();

	delete current->getNext();
	this->calculatSize();
	return valueToRemove;
}

template <class Type>
Type CTECList<Type> :: getFront()
{
	assert(size >0);
	//Create a pointer to what is after head
	Type thingToReturn;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//get what was in the head node
	thingToReturn = this->head->getVaue();

	this->calculateSize();

	return thingToReturn;
}
template <class Type>
Type CTECList<Type> :: getEnd()
{
assert(size > 0);
	Type valueToReturn;

	ArrayNode<Type> * current = head;
		for(int spot = 0; spot < size-1; spot++)
		{
			current = current->getNext();
		}


		valueToReturn = current->getNext()->getValue();

		this->calculatSize();
		return valueToReturn;

}

template<class Type>
Type CTECList<Type> :: getFromIndex(int index)
{
	Type thingToReturn; // In case we need to use value we are deleting

	assert (this->size > 0);
	assert(size > 0 && index >= 0 && index < size);

	ArrayNode<Type> * previous, newNext, current;

	std::string searchItem = "";


	if(index == 0)
	{
		thingToReturn = getFront();
	}
	else if(index == size-1)
	{
		thingToReturn = getEnd();
	}
	else
	{
		cout << "What do you want to get" <<endl;
			getline(cin,searchItem);
			cout << "You entered: " << searchItem << endl << endl;
		for(int spot = 0; spot < index+1; spot++)
		{
			if(current->value == searchItem)
			{
				thingToReturn = current->getValue;
			}
			else
			{
				current = current->newNext;
			}
		}
		this->calculateSize();
	}
	return thingToReturn;
}

template<class Type>
void CTECList<Type> ::addToFront(const Type& value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value, head);
	head = newStuff;

	calculateSize();
}

template<class Type>
void CTECList<Type> :: addToEnd(const Type& value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value, head);
	end->setNext(newStuff);
	end = newStuff;

	calculateSize();
}
