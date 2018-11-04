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
	string name;
	string size;
	string color;
	double price;
protected:
	string matherial;
	string model;
public:
	Footwear();
	Footwear(string name, string model, string gender, string matherial, string size, string color, double price, int discount);
	~Footwear();
	//specific
	int discount;
	string gender;
	//sets
	void setName(string nameIn);
	void setSize(string sizeIn);
	void setColor(string colorIn);
	void setPrice(double priceIn);
	void setMatherial(string matherialIn);
	void setModel(string modelIn);
	void setGender(string genderIn);
	void setDiscount(int discountIn);
	//gets
	double getPrice();
	string getMatherial();
	string getModel();
	string getName();
	string getColor();
	string getSize();
	string getGender();
	int getDiscount();
};
#endif FOOTWEAR_H
