#include "Animal.h"

Animal::Animal(AnimalType type) {
	this->type = type;

	// Sets default values
	name = "John Doe";
	color = Black;
	age = 0;
}

Animal::Animal(AnimalType type, string name, string sound, Color color, int age) {

}
~Animal();

Color getColor();
string getName();
string getSound();
int getAge();

void setColor(Color color);
void setName(string name);
void setSound(string sound);
void setAge(int age);