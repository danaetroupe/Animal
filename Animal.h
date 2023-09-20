#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	enum AnimalType { Dog, Rabbit, Cat, Bird, Tiger };
	enum Color { Red, Orange, Yellow, Green, Blue, Purple, Pink, White, Black };

	Animal(AnimalType type);
	Animal(AnimalType type, string name, string sound, Color color, int age);
	~Animal();
	
	Color getColor();
	string getName();
	string getSound();
	int getAge();

	void setColor(Color color);
	void setName(string name);
	void setSound(string sound);
	void setAge(int age);
protected:
	AnimalType type;
	string name, sound;
	Color color;
	int age;
};

