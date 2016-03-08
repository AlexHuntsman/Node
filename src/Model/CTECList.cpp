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
	//grab the value from the last node
	//set the next to last node to point to nullptr
	//Before return the Cariable call calculateSize

	assert(size > 0);
	Type valueToRemove;

	if(size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
		calculateSize();
		return valueToRemove;
	}
	else
	{

		ArrayNode<Type> * current = head;
		for(int spot = 0; spot < size-1; spot++)
		{
			current = current->getNext();
		}

		ArrayNode<Type> * pointer = head;
		while(pointer->getNext()->getNext() != nullptr)
		{
			pointer = pointer->getNext();
		}

		valueToRemove = current->getNext()->getValue();
		end = current;
		delete current->getNext();

		this->calculatSize();
		return valueToRemove;
	}
}



