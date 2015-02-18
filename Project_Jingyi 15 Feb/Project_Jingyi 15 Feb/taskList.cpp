#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "Task.h"
#include "taskList.h"

taskList::taskList(){}

void taskList::addTaskList(*Task){
	list.push_back(*Task);
	return;
}

void taskList::toString(){

	}

void taskList::sortTaskList(){
}




