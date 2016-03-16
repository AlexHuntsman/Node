/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: ahun0442
 */

#include "CTECArray.h"
#include <assert.h>
using namespace std;

template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	assert(size > 0);

	for (int index = 0; index < size; index++)
	{
		if (head != nullptr)
		{	//We have more than one ArrayNode
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;
		}
		else
		{
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;
		}
	}
}
template<class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for (int index = 0; index < size; index++)
	{
		if (deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
		delete deleteMe->getNext();
		deleteMe = head;
	}
	delete head;
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template<class Type>
Type CTECArray<Type>::get(int position)
{

	//bounds cheack for size and negative

	assert(position < size && position >= 0);

	//inclusive beacuse i am inside the bounds guarenteed :D
	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= position; spot++)
	{
		if (spot != position)
		{
			current = current->getNext();
		} else
		{
			return current->getValue();
		}
	}

}
template<class Type>
void CTECArray<Type>::set(int position, const Type& value)
{
	//bounds cheack for size and negative
	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= position; spot++)
	{
		if (spot != position)
		{
			current = current->getNext();
		} else
		{
			current->setValue(value);
		}
	}

}
/*
 1 Assert size > 0
 2 Dclare and init valid return variable
 3 referance to head and loop
 4 if there, return index else fo to next
 5 return index
 */

template <class Type>
int CTECArray<Type> :: nextIndexOf(int startingindex, Type searchValue)
{
    assert(this->size > 0);
    assert(startingIndex >= 0 && startingIndex < this->size);

    int indexNotFound = -1;

    ArrayNode<Type> * current = head;
    for(int index = 0; index < startingIndex < this->size)
    {
        current = current->getNext();
    }

    for(int index = startingindex; index < this->size; index++)
        if(current->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getNext();
        }

    return indexNotFound;

}
