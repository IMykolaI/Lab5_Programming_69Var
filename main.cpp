
#include "shoes.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Footwear standart;
	cout << "Brand: " << standart.getBrandName() << endl;
	cout << "Model: " << standart.getModelOfFootwear() << endl;
	cout << "Gender: " << standart.getGenderOfBuyer() << endl;
	cout << "Matherial: " << standart.getMatherialOfFootwear() << endl;
	cout << "Size: " << standart.getSizeOfFootwear() << endl;
	cout << "Color: " << standart.getColorOfFootwear() << endl;
	cout << "Price: " << standart.getPriceOfFootwear() << "$ (" << standart.getDiscountOnFootwear() << "% OFF)\n" << endl;

	Footwear Nike("Nike", "Downshifter 7", "For Men", "Textile/Phylon(Rubber)", "6 - 15(Step - 0.5)", "Black/Volt/White", 50.25, 16);
	cout << "Brand: " << Nike.getBrandName() << endl;
	cout << "Model: " << Nike.getModelOfFootwear() << endl;
	cout << "Gender: " << Nike.getGenderOfBuyer() << endl;
	cout << "Matherial: " << Nike.getMatherialOfFootwear() << endl;
	cout << "Size: " << Nike.getSizeOfFootwear() << endl;
	cout << "Color: " << Nike.getColorOfFootwear() << endl;
	cout << "Price: " << Nike.getPriceOfFootwear() << "$ (" << Nike.getDiscountOnFootwear() << "% OFF)\n" << endl;

	Footwear Asics("Asics", "GT-2000 5", "For Women", "Textile/Rubber", "5 - 11.5(Step - 0.5)", "Midgrey/White/Pink Glow", 74.95, 38);
	cout << "Brand: " << Asics.getBrandName() << endl;
	cout << "Model: " << Asics.getModelOfFootwear() << endl;
	cout << "Gender: " << Asics.getGenderOfBuyer() << endl;
	cout << "Matherial: " << Asics.getMatherialOfFootwear() << endl;
	cout << "Size: " << Asics.getSizeOfFootwear() << endl;
	cout << "Color: " << Asics.getColorOfFootwear() << endl;
	cout << "Price: " << Asics.getPriceOfFootwear() << "$ (" << Asics.getDiscountOnFootwear() << "% OFF)\n" << endl;

	Footwear NewBalance("New Balance", "M990v3", "For Men/Women", "Textile/Rubber", "16", "Grey", 149.95, 0);
	cout << "Brand: " << NewBalance.getBrandName() << endl;
	cout << "Model: " << NewBalance.getModelOfFootwear() << endl;
	cout << "Gender: " << NewBalance.getGenderOfBuyer() << endl;
	cout << "Matherial: " << NewBalance.getMatherialOfFootwear() << endl;
	cout << "Size: " << NewBalance.getSizeOfFootwear() << endl;
	cout << "Color: " << NewBalance.getColorOfFootwear() << endl;
	cout << "Price: " << NewBalance.getPriceOfFootwear() << "$ (" << NewBalance.getDiscountOnFootwear() << "% OFF)\n" << endl;

	system("pause");
}