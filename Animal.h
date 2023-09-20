#pragma once
#include <string>
#include <vector>
#include "Flower.h"
using namespace std;

// Animal Enumerators
enum AnimalType { Dog, Rabbit, Cat, Bird, Tiger };
enum Color { Red, Orange, Yellow, Green, Blue, Purple, Pink, White, Black };

class Animal
{
public:
	Animal(AnimalType type);
	Animal(AnimalType type, string name, string sound, Color color, int age, float money);
	
	Color getColor();
	string getName();
	string getSound();
	int getAge();
	float getMoney();

	float buyFlower(string name, int petals, float price);

	void setColor(Color color);
	void setName(string name);
	void setSound(string sound);
	void setAge(int age);
	void addMoney(float money);
protected:
	AnimalType type;
	string name, sound;
	Color color;
	int age;
	float money;

	vector<Flower*> flowers;

};

