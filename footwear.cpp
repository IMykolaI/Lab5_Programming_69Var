#include "footwear.h"

Footwear::Footwear()
{
	cout << "Defining..." << endl;
	brandName = "Unknown";
	modelOfFootwear = "Unknown";
	matherialOfFootwear = "Unknown";
	sizeOfFootwear = "Unknown";
	colorOfFootwear = "Unknown";
	priceOfFootwear = 999;
	discountOnFootwear = 3;
	genderOfBuyer = "Unknown";
}

Footwear::Footwear(string brandNameIn, string modelOfFootwearIn, string genderOfBuyerIn, string matherialOfFootwearIn, string sizeOfFootwearIn, string colorOfFootwearIn, double priceOfFootwearIn, int discountOnFootwearIn)
{
	cout << "Defining..." << endl;
	setBrandName(brandNameIn);
	setSizeOfFootwear(sizeOfFootwearIn);
	setColorOfFootwear(colorOfFootwearIn);
	setPriceOfFootwear(priceOfFootwearIn);
	setMatherialOfFootwear(matherialOfFootwearIn);
	setModelOfFootwear(modelOfFootwearIn);
	setGenderOfBuyer(genderOfBuyerIn);
	setDiscountOnFootwear(discountOnFootwearIn);
}

Footwear::~Footwear()
{
	cout << "Clearing data..." << "\n" << endl;
}
//sets
void Footwear::setGenderOfBuyer(string genderOfBuyerIn)
{
	genderOfBuyer = genderOfBuyerIn;
}

void Footwear::setDiscountOnFootwear(int discountOnFootwearIn)
{
	discountOnFootwear = discountOnFootwearIn;
}

void Footwear::setBrandName(string brandNameIn)
{
	brandName = brandNameIn;
}

void Footwear::setSizeOfFootwear(string sizeOfFootwearIn)
{
	sizeOfFootwear = sizeOfFootwearIn;
}

void Footwear::setColorOfFootwear(string colorOfFootwearIn)
{
	colorOfFootwear = colorOfFootwearIn;
}

void Footwear::setPriceOfFootwear(double priceOfFootwearIn)
{
	priceOfFootwear = priceOfFootwearIn;
}

void Footwear::setMatherialOfFootwear(string matherialOfFootwearIn)
{
	matherialOfFootwear = matherialOfFootwearIn;
}

void Footwear::setModelOfFootwear(string modelOfFootwearIn)
{
	modelOfFootwear = modelOfFootwearIn;
}
//gets
const double Footwear::getPriceOfFootwear()
{
	return priceOfFootwear;
}

const string Footwear::getMatherialOfFootwear()
{
	return matherialOfFootwear;
}

const string Footwear::getModelOfFootwear()
{
	return modelOfFootwear;
}

const string Footwear::getBrandName()
{
	return brandName;
}

const string Footwear::getColorOfFootwear()
{
	return colorOfFootwear;
}

const string Footwear::getSizeOfFootwear()
{
	return sizeOfFootwear;
}

const string Footwear::getGenderOfBuyer()
{
	return genderOfBuyer;
}

const int Footwear::getDiscountOnFootwear()
{
	return discountOnFootwear;
}