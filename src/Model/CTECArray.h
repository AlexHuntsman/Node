/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: Alex Huntsman
 */


#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"
template <class Type>
class CTECArray
{
private:
	int size;
	int length;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type get(int position);
	void set(int position,const Type& value);
};

#endif /* MODEL_CTECARRAY_H_ */
