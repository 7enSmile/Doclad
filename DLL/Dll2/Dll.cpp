#include "Dll.h"
#include "pch.h"
#include <iostream>

void func()
{
	int* p = new int[2];

	std::cout << p;

	//delete[] p;

	return;
}
