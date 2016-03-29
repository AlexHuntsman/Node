/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: ahun0442
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.h"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"
#include "../Model/CTECList.h"
#include "../Model/CTECList.cpp"

using namespace std;

class NodeController
{
private:

	//CTECArray<string> * myStringArray;
	//CTECArray<int> * myIntArray;
	//CTECArray<double> * myDoubleArray;
	Timer arrayTimer;
	//CTECList<int> * myNumberList;
	CTECList<int> * numbersInList();
	CTECArray<int> * numbersInArray();


public:
	NodeController();
	virtual ~NodeController();
	void start();
	void checkSorts();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
