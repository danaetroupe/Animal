#include "Flower.h"

Flower::Flower(string name) {
	this->name = name;
	petalCnt = 5;
	price = 0;
}
Flower::Flower(string name, int petals, float price) {
	this->name = name;
	this->petalCnt = petals;
	this->price = price;
}

string Flower::getName() {
	return name;
}
int Flower::getPetalCnt() {
	return petalCnt;
}
float Flower::getPrice() {
	return price;
}

void Flower::setName(string name) {
	this->name = name;
}
void Flower::setPetalCnt(int petals) {
	this->petalCnt = petals;
}
void Flower::setPrice(float price) {
	this->price = price;
}