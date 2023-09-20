#include "Dog.h"

Dog() {
	type = Dog;

	// Sets default values
	name = "John Doe";
	color = Black;
	age = 0;
}
Dog(string name, Color color, int age);
~Dog();

void Bark();