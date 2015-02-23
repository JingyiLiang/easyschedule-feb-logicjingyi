#include "Task.h" 

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void printTaskDetail(vector <Task> taskVector){
	vector <Task>:: iterator iter;

	for( iter = taskVector.begin(); iter != taskVector.end(); iter++){
		cout << (*iter).Task::toStringTaskDetail() << endl;
	}

	return;
}

void printTaskSerialID(vector <Task> taskVector){
	vector <Task>:: iterator iter;
	serialID ID;

	for( iter = taskVector.begin(); iter != taskVector.end(); iter++){
		ID = (*iter).Task::getTaskSerialID();
		cout <<ID.year; 
		cout << ID.month;
		cout << ID.day;
		cout << ID.startTime << endl;
	}

	return;
}

int main(){
	vector <Task> taskVector;
	
	//creation of multiple tasks
	Task t1(2015, 02, 15, 8, 11, "CS2103 project meeting");
	Task t2(2015, 02, 15, 12, 13.30, "Lunch at Utwon");
	Task t3(2015, 02, 15, 16, 20, "Go to the movies at Vivo");
	taskVector.push_back(t1);
	taskVector.push_back(t2);
	taskVector.push_back(t3);
	
	//check task full detail
	
	cout << "Full task detail: "<< endl;
	printTaskDetail(taskVector);

	//check task serial ID
	cout << "Task Serial ID: "<< endl;
	printTaskSerialID(taskVector);

	cout << "Press any key to exit" << endl;
	cin.ignore();

	return 0;
}
