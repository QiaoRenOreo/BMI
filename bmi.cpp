/*
 * bmi.cpp
 *
 *  Created on: 7 Feb 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#include <iostream>

double getWeight()
{
	double weight;
    std::cout << "Enter weight in kg: ";
    std::cin >> weight;
    return weight;
}

double getHeight()
{
	double height;
	std::cout << "Enter height in m: ";
    std::cin >> height;
	return height;
}

double calculateBMI(double weight, double height)
{
	double bmi = weight/height/height;
	return bmi;
}

void evaluateBMI(double bmi)
{
	if(bmi < 18.5)
		std::cout << "You are underweight.";	// Underweight: less than 18.5
	else if(bmi >= 18.5 && bmi <= 24.5)
		std::cout << "Your weight is normal.";	// Normal: between 18.5 and 24.5
	else if(bmi >= 24.5 && bmi <= 30)
		std::cout << "You are overweight.";		// Overweight: between 24.5 and 30
	else
		std::cout << "You are obese.";			// Obese: 30 or over
	return;
}

void info()
{
	// BMI value table
	std::cout << "\n				\n \
*BMI Values*						\n \
Underweight: less than 18.5			\n \
     Normal: between 18.5 and 24.9	\n \
 Overweight: between 25 and 29.9	\n \
      Obese: 30 or greater"			;
}

int main()
{
	double weight = getWeight();
	double height = getHeight();

	double bmi = calculateBMI(weight,height);
	std::cout << "Your BMI is " << bmi << ".\n";
	evaluateBMI(bmi);
	info();
	return 0;
}
