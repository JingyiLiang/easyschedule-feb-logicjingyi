#ifndef TASK_H_
#define TASK_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct serialID{
	int year, month, day;
	double startTime;
};

class Task{
private:
	int _year;
	int _month;
	int _day;
	double _startTime;
	double _endTime;
	string _taskDescription;
	string _taskStatus;
	serialID _taskSerialID;

public:
	Task();
	Task(int, int, int, double, double, string);
	//Constructor
	//no string status required at point of construction
	//assume all tasks are not done yet at the point of construction
	//generate taskSerialID automatically

	string toStringTaskDetail();
	//get all information about the task in a singel formatted string

	serialID getTaskSerialID();

	~Task();
	//Desctuctor
};

#endif