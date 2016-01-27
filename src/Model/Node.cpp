/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: ahun0442
 */

#include "Node.h"
#include <iostream>

using namespace std;
template <class Type>
Node<Type> ::Node()
{
	value = 0;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{

}

template <class Type>
Type Node<Type> :: getValue()
{
	return this -> value;
	pointers = nullptr;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}
