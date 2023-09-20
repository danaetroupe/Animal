#include "Animal.h"

Animal::Animal(AnimalType type) {
	this->type = type;

	// Sets default values
	name = "John Doe";
	color = Black;
	age = 0;
	money = 0;
}

Animal::Animal(AnimalType type, string name, string sound, Color color, int age, float money) {
	this->type = type;
	this->name = name;
	this->sound = sound;
	this->color = color;
	this->age = age;
	this->money = money;
}

Color Animal::getColor() {
	return color;
}
string Animal::getName() {
	return name;
}
string Animal::getSound() {
	return sound;
}
int Animal::getAge() {
	return age;
}
float Animal::getMoney() {
	return money;
}

float Animal::buyFlower(string name, int petals, float price) {
	if (price <= money) {
		flowers.push_back(new Flower(name, petals, price));
		money -= price;
	}
	return money;
}

void Animal::setColor(Color color) {
	this->color = color;
}
void Animal::setName(string name) {
	this->name = name;
}
void Animal::setSound(string sound) {
	this->sound = name;
}
void Animal::setAge(int age) {
	this->age = age;
}
void Animal::addMoney(float money) {
	this->money += money;
}