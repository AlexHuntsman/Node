/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: ahun0442
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
	myStringArray = new CTECArray<string>(5);
	myIntArray = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
	//TODO Auto-geerated deconstructor stub
}

void NodeController :: start ()
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
	/**string first = "first";

	string second = "second";
	string third = "third";
	string fourth = "fourth";
	string fifth = "fifth";

	myStringArray->set(0, first);
	myStringArray->set(1, second);
	myStringArray->set(2, third);
	myStringArray->set(3, fourth);
	myStringArray->set(4, fifth);

	myIntArray->set(0, 1);
	myIntArray->set(1, 2);
	myIntArray->set(2, 3);
	myIntArray->set(3, 4);
	myIntArray->set(4, 5);
*/

	arrayTimer.startTimer();

	for(int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "In my String array the contents at spot " << index << " are: " << myStringArray->get(index) << endl;
	}
	for(int index = 0; index < myIntArray->getSize(); index++)
	{
		cout << "In my Int array the contents at spot " << index << " are: " << myIntArray->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}
//hello
