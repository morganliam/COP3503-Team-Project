#ifndef TEAMPLANNER_H_
#define TEAMPLANNER_H_

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <sstream>

class Time
{
private:
	int startHour;
	int endHour;
	//Represents the # of overlaps for a given time
	int timeoccurence;

public:
	Time(int startHour, int endHour);
	void incrementTimeoccurence();
	int getTimeoccurence();
	int getStartHour();
	int getEndHour();
};

class Day
{
private:
	std::vector<Time*> today;
	std::vector<Time*>::iterator it;

public:
	std::vector<Time*> getTime();
	void sortTime(std::vector<Time*>& today, Time*& t);
	void insertTime(int startHour, int endHour);
	void insertTimeUltimateSchedule(int startHour, int endHour);
	void deleteTime(int startHour, int endHour);
};

class Person
{
private:
	std::string firstName;
	std::string lastName;
	Day week[7];
	std::vector<std::string> history;

public:
	Person(std::string firstName, std::string lastName);
	void printHistory();
	void insertTime();
	bool timeExists(int dayOfWeek, int beginTime, int endTime);
	void deleteTime();
	std::vector<Time*> getDay(int dayOfWeek);
	Day* returnWeek();
	int dayOfWeek();
	int startTime();
	int endTime();
	std::string getName();
};

class scheduleManager
{
public:
	scheduleManager();
	void outputSchedule(std::vector<Person*> group);
	void outputDaySchedule(std::vector<Person*> group, int day);
	void ultimateSchedule(std::vector<Person*> group);
	bool personExists(std::vector<Person*> group, std::string name);
	void editPerson(std::vector<Person*> group);
};

#endif /* TEAMPLANNER_H_ */
#pragma once
