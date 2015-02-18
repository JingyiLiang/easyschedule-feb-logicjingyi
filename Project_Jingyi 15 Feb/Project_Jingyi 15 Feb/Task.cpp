#include "Task.h"

#include <iostream>
#include <string>
#include <sstream>


Task::Task(){}

Task:: Task(int year, int month, int day, double startTime, double endTime, string taskDescription):
_year(year), _month(month), _day(day), _startTime(startTime), _endTime(endTime), _taskDescription(taskDescription){
	_taskStatus = "NotDoneYet";
	_taskSerialID.year = _year;
	_taskSerialID.month = _month;
	_taskSerialID.day = _day;
	_taskSerialID.startTime = _startTime;

	//_taskSerialID = _year*100000000 + _month*1000000 + _day*10000 + _startTime*100;
}

string Task::toStringTaskDetail(){
		ostringstream oss;
		oss << "Year/ Month/ Day " << _year << "/ " << _month << "/ " << _day << " ";
		oss << _startTime << " - " << _endTime << " ";
		oss << _taskDescription << " ";
		oss << _taskStatus << endl;
		return oss.str();
}

serialID Task::getTaskSerialID(){
	return _taskSerialID;
}





