#include "footwear.h"

Footwear::Footwear()
{
	cout << "Defining..." << endl;
	name = "Unknown";
	model = "Unknown";
	matherial = "Unknown";
	size = "Unknown";
	color = "Unknown";
	price = 999;
	discount = 3;
	gender = "Unknown";
}

Footwear::Footwear(string name, string model, string gender, string matherial, string size, string color, double price, int discount)
{
	cout << "Defining..." << endl;
	setName(name);
	setSize(size);
	setColor(color);
	setPrice(price);
	setMatherial(matherial);
	setModel(model);
	setGender(gender);
	setDiscount(discount);
}

Footwear::~Footwear()
{
	cout << "Clearing data..." << "\n" << endl;
}
//sets
void Footwear::setGender(string genderIn)
{
	gender = genderIn;
}

void Footwear::setDiscount(int discountIn)
{
	discount = discountIn;
}

void Footwear::setName(string nameIn)
{
	name = nameIn;
}

void Footwear::setSize(string sizeIn)
{
	size = sizeIn;
}

void Footwear::setColor(string colorIn)
{
	color = colorIn;
}

void Footwear::setPrice(double priceIn)
{
	price = priceIn;
}

void Footwear::setMatherial(string matherialIn)
{
	matherial = matherialIn;
}

void Footwear::setModel(string modelIn)
{
	model = modelIn;
}
//gets
double Footwear::getPrice()
{
	return price;
}

string Footwear::getMatherial()
{
	return matherial;
}

string Footwear::getModel()
{
	return model;
}

string Footwear::getName()
{
	return name;
}

string Footwear::getColor()
{
	return color;
}

string Footwear::getSize()
{
	return size;
}

string Footwear::getGender()
{
	return gender;
}

int Footwear::getDiscount()
{
	return discount;
}