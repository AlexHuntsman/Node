/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: ahun0442
 */

#include "CTECArray.h"
using namespace std;


template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	// TODO Auto-generated constructor stub

}
template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template <class Type>
Type* CTECArray<Type>::get(int position)
{
	//bounds cheack for size and negative
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		//inclusive beacuse i am inside t bounds guarenteed :D
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current ->getValue();
			}
		}
	}
}
template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	//bounds cheack for size and negative
		if(position >= size || position < 0)
		{
			cerr << "Don't do this! out of bounds!!" << endl;
		}
		else
		{
			ArrayNode<Type> * current = head;
					for(int spot = 0; spot <= position; spot++)
					{
						if(spot != position)
						{
							current = current->getNext();
						}
						else
						{
							current->setValue(value);
						}
					}
		}
}
