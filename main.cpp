
#include "footwear.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Footwear standart;
	cout << "Brand: " << standart.getName() << endl;
	cout << "Model: " << standart.getModel() << endl;
	cout << "Gender: " << standart.getGender() << endl;
	cout << "Matherial: " << standart.getMatherial() << endl;
	cout << "Size: " << standart.getSize() << endl;
	cout << "Color: " << standart.getColor() << endl;
	cout << "Price: " << standart.getPrice() << "$ (" << standart.getDiscount() << "% OFF)\n" << endl;

	Footwear Nike("Nike", "Downshifter 7", "For Men", "Textile/Phylon(Rubber)", "6 - 15(Step - 0.5)", "Black/Volt/White", 50.25, 16);
	cout << "Brand: " << Nike.getName() << endl;
	cout << "Model: " << Nike.getModel() << endl;
	cout << "Gender: " << Nike.getGender() << endl;
	cout << "Matherial: " << Nike.getMatherial() << endl;
	cout << "Size: " << Nike.getSize() << endl;
	cout << "Color: " << Nike.getColor() << endl;
	cout << "Price: " << Nike.getPrice() << "$ (" << Nike.getDiscount() << "% OFF)\n" << endl;

	Footwear Asics("Asics", "GT-2000 5", "For Women", "Textile/Rubber", "5 - 11.5(Step - 0.5)", "Midgrey/White/Pink Glow", 74.95, 38);
	cout << "Brand: " << Asics.getName() << endl;
	cout << "Model: " << Asics.getModel() << endl;
	cout << "Gender: " << Asics.getGender() << endl;
	cout << "Matherial: " << Asics.getMatherial() << endl;
	cout << "Size: " << Asics.getSize() << endl;
	cout << "Color: " << Asics.getColor() << endl;
	cout << "Price: " << Asics.getPrice() << "$ (" << Asics.getDiscount() << "% OFF)\n" << endl;

	Footwear NewBalance("New Balance", "M990v3", "For Men/Women", "Textile/Rubber", "16", "Grey", 149.95, 0);
	cout << "Brand: " << NewBalance.getName() << endl;
	cout << "Model: " << NewBalance.getModel() << endl;
	cout << "Gender: " << NewBalance.getGender() << endl;
	cout << "Matherial: " << NewBalance.getMatherial() << endl;
	cout << "Size: " << NewBalance.getSize() << endl;
	cout << "Color: " << NewBalance.getColor() << endl;
	cout << "Price: " << NewBalance.getPrice() << "$ (" << NewBalance.getDiscount() << "% OFF)\n" << endl;

	system("pause");
}