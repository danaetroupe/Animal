#include "Animal.h"
#include "Flower.h"
#include <iostream>
using namespace std;

int main() {
	Animal dog(Dog);
	dog.setSound("Bark");
	cout << "Bark! Bark! Meet your new dog!" << endl;
	cout << "What are you going to name your new dog?" << endl;
	string name;
	cin >> name;
	dog.setName(name);

	cout << "Wow..." << dog.getName() << ". That's a great name for a dog. He looks pretty young? How old do you think he is?" << endl;
	int age;
	cin >> age;
	dog.setAge(age);
	if (age <= 3) { cout << "Awww a puppy!" << endl; }
	else { cout << "You got an adult!" << endl; }

	cout << "Look at those cute eyes. Your dog wants some money. How much are you going to give them?" << endl;
	float money;
	cin >> money;
	dog.addMoney(money);

	while (dog.getMoney() <= 10) {
		cout << "Aww that's not enough. Give them a little more.";
		cin >> money;
		dog.addMoney(money);
	}

	cout << "Now the dog wants to buy something. These flowers look really nice... What kind of flower is it" << endl;
	string type;
	cin >> type;
	cout << "How many petals does it have?" << endl;
	int petals;
	cin >> petals;
	cout << "How much does it cost?" << endl;
	float price;
	cin >> price;

	float moneyLeft = dog.buyFlower(type, petals, price);
	cout << "Now your dog has $" << moneyLeft << " left in their account. They are sooo grateful to you for buying this " << type << endl;

	return 1;
}