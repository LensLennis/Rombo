/// \file rhombus.cpp
///	\brief class Rhombus: implementation of the functions

#include "rombo.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

/// @brief operator =
/// @param r 
/// @return *this
Rhombus& Rhombus::operator=(const Rhombus& r) {
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
	return *this;
}

/// @brief operator ==
/// @param r 
/// @return a==b?
bool Rhombus::operator==(const Rhombus& r) {

	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
		return true;
	return false;

}
/// @brief default constructor 
Rhombus::Rhombus() {
	cout << "Rhombus- Default Constructor: done" << endl;
	diagonalH = 0;
	diagonalV = 0;
}


/// @brief constructor 
/// @param dV length of the vertical diagonal
/// @param DH length of the horizontal diagonal
Rhombus::Rhombus(int dV, int dH) {
	diagonalH = 0;
	diagonalV = 0;
	cout << "Rhombus - Constructor: done" << endl;

	if (dV <= 0)
		cout << "WARNING: Rhombus - constructor: vertical diagonal should be > 0" << endl;
	else
		diagonalV = dV;

	if (dH <= 0)
		cout << "WARNING: Rhombus - constructor: horizontal diagonal should be > 0" << endl;
	else
		diagonalH = dH;

}


/// @brief destructor
Rhombus::~Rhombus() {
	cout << "Rhombus - Destructor : done" << endl;

}

/// @brief copy constructor
/// <param name="r"></param>
Rhombus::Rhombus(Rhombus& r) {

	cout << "Rhombus - Copy constructor: done" << endl;

}


/// @brief setting the vertical diagonal
/// @param dV vertical diagonal length
void Rhombus::setVertical(int dV) {
	if (dV < 0)
		cout << "ERROR- Vertical Diagonal should be set > 0";
	diagonalV = dV;
}

/// @brief setting the vertical diagonal
///	@param dH horizontal diagonal length
void Rhombus::setHorizontal(int dH) {
	if (dH < 0)
		cout << "ERROR- Horizontal Diagonal should be set > 0";
	diagonalH = dH;
}

/// @brief setting the diagonals
/// @param dV vertical diagonal length
///	@param dH horizontal diagonal length

void Rhombus::setDiagonals(int dV, int dH) {
	setHorizontal(dH);
	setVertical(dV);
}


/// @brief Get Area
/// @param dV Vertical diagonal
/// @param dH Horizontal diagonal
/// @return (dV * dH) / 2;

double Rhombus::getArea() {
	return (diagonalV * diagonalH) / 2;
}


/// @brief Get perimeter
/// @param dV Vertical diagonal
/// @param dH Horizontal diagonal
/// @return getSide()*4
double Rhombus::getPerimeter() {
	return getSide()*4;				// or just double x = [(diagonalH / 2) * (diagonalH / 2) + (diagonalV / 2) * (diagonalV / 2) ]*4
}


/// @brief Side of the Rhombus
/// @return sqrt(x)
double Rhombus::getSide() {
	double x = (diagonalH / 2) * (diagonalH / 2) + (diagonalV / 2) * (diagonalV / 2);
	return sqrt(x);
}




float Rhombus::GetdH() {
	return diagonalH;
}

float Rhombus::GetdV() {
	return diagonalV;
}

void Rhombus::GetDiagonals(float& memory_dH, float& memory_dV) {
	memory_dH = diagonalH;
	memory_dV = diagonalV;

}