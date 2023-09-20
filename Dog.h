#pragma once
#include "Animal.h"

class Dog:Animal
{
public:
	Dog();
	Dog(string name, Color color, int age);
	~Dog();

	void Bark();
};

