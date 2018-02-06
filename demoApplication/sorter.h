#pragma once

#include <vector>
#include <iostream>
#include <string>

class sorter
{
public:
	sorter();

	void greeting(void);

	void bubbleSort(std::vector<int>& a);

	void printVector(std::vector<int> a);

	void farewell(void);

	~sorter();

private:
	std::string name = "John";
};

