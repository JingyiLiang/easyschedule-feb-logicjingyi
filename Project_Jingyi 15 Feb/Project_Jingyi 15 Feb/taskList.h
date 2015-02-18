#ifndef TASKLIST_H_
#define TASKLIST_H_

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "Task.h"

using namespace std;

class taskList{
private:
	 list <*Task> _taskList;
public:
	taskList();
	void addTaskList(*Task);
	void toString();
	void sortTaskList();
	~taskList();
};

#endif