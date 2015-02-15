#include "Task.h" 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void printTaskDetail(vector <Task>& taskVector){
	vector <Task>:: iterator iter;

	for( iter = taskVector.begin(); iter !=taskVector.end(); iter++){
		cout << Task::toStringTaskDetail() << endl;
	}

	return;
}

void printTaskSerialID(vector <Task>& taskVector){
	vector <Task>:: iterator iter;

	for( iter = taskVector.begin(); iter !=taskVector.end(); iter++){
		cout << Task::getTaskSerialID() << endl;
	}

	return;
}

int main(){
	vector <Task> taskVector;
	cout << "How many task would you like to enter?" <<endl;
	int n;
	cin >> n;
	cin.ignore();

	for(int i = 0; i<n ; i++){
		cout << "Please enter your task: " << endl;
		cout << "yy mm dd startTime endTime "<< endl;
		cout << "taskDescription" << endl;

		int year, month, day, startTime, endTime;
		string taskDescription;

		//creation of new task
		cin >> year >> month >> day>> startTime >> endTime;
		cin.ignore();
		getline(cin, taskDescription);

		//push new task into the vector to store
		Task t1(year, month, day, startTime, endTime, taskDescription);
		taskVector.push_back(t1);
	}
	
	//check task full detail
	
	cout << "Full task detail: "<< endl;
	printTaskDetail(taskVector);

	//check task serial ID
	cout << "Task Serial ID: "<< endl;
	printTaskSerialID(taskVector);

	return 0;
}
