#pragma once

#ifndef FOOTWEAR_H
#define FOOTWEAR_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Footwear
{
private:
	string brandName;
	string sizeOfFootwear;
	string colorOfFootwear;
	double priceOfFootwear;
protected:
	string matherialOfFootwear;
	string modelOfFootwear;
public:
	Footwear();
	Footwear(string brandNameIn, string modelOfFootwearIn, string genderOfBuyerIn, string matherialOfFootwearIn, string sizeOfFootwearIn, string colorOfFootwearIn, double priceOfFootwearIn, int discountOnFootwear);
	~Footwear();
	//specific
	int discountOnFootwear;
	string genderOfBuyer;
	//sets
	void setBrandName(string brandNameIn);
	void setSizeOfFootwear(string sizeOfFootwearIn);
	void setColorOfFootwear(string colorOfFootwearIn);
	void setPriceOfFootwear(double priceOfFootwearIn);
	void setMatherialOfFootwear(string matherialOfFootwearIn);
	void setModelOfFootwear(string modelOfFootwearIn);
	void setGenderOfBuyer(string genderOfBuyerIn);
	void setDiscountOnFootwear(int discountOnFootwearIn);
	//gets
	const double getPriceOfFootwear();
	const string getMatherialOfFootwear();
	const string getModelOfFootwear();
	const string getBrandName();
	const string getColorOfFootwear();
	const string getSizeOfFootwear();
	const string getGenderOfBuyer();
	const int getDiscountOnFootwear();
};
#endif FOOTWEAR_H
