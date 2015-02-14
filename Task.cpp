#include "Task.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Task::Task(){
}

Task:: Task(int year, int month, int day, string taskDescription):
_year(year), _month(month), _day(day), _taskDescription(taskDescription){
	_taskStatus = NotDoneYet;
	_taskSerialID = _year*1000 + _month*100 + _day;
}

string Task::toStringTaskDetail{
		ostringstream oss;
		oss << "Year/ Month/ Day " << _year << "/ " << _month << "/ " << _day << " ";
		oss << _taskDescription << " ";
		oss << _taskStatus << endl;
		return oss.str();
}

int Task::getTaskSerialID(){
	return _taskSerialID;
}




