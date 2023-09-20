#pragma once
#include <string>
using namespace std;

class Flower
{
public:
	Flower(string name);
	Flower(string name, int petals, float price);

	string getName();
	int getPetalCnt();
	float getPrice();

	void setName(string name);
	void setPetalCnt(int petals);
	void setPrice(float price);
private:
	string name;
	int petalCnt;
	float price;

};

