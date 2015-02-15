#include "Task.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Task::Task(){
}

Task:: Task(int year, int month, int day, int startTime, int endTime, string taskDescription):
_year(year), _month(month), _day(day), _startTime(statTime), _endTime(endTime), _taskDescription(taskDescription){
	_taskStatus = NotDoneYet;
	_taskSerialID = _year*100000000 + _month*1000000 + _day*1000 + _startTime;
}

string Task::toStringTaskDetail{
		ostringstream oss;
		oss << "Year/ Month/ Day " << _year << "/ " << _month << "/ " << _day << " ";
		oss << _startTime << " - " << _endTime << " ";
		oss << _taskDescription << " ";
		oss << _taskStatus << endl;
		return oss.str();
}

int Task::getTaskSerialID(){
	return _taskSerialID;
}





