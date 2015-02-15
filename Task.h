#ifndef _TASK_H_
#define _TASK_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Task{
private:
	int _year;
	int _month;
	int _day;
	int _startTime;
	int _endTime;
	string _taskDescription;
	string _taskStatus;
	int _taskSerialID;

public:
	Task();
	Task(int, int, int, int, int, string);
	//Constructor
	//no string status required at point of construction
	//assume all tasks are not done yet at the point of construction
	//generate taskSerialID automatically

	toStringTaskDetail();
	//get all information about the task in a singel formatted string

	getTaskSerialID();

	~Task();
	//Desctuctor
}

#endif