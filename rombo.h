#pragma once

class Rhombus {
private:

	int diagonalV;
	int diagonalH;

public:

	Rhombus();						//constructor default
	Rhombus(int dV, int dH);		//overload of constructor
	~Rhombus();						//destructor
	Rhombus(Rhombus& r);			//constructor di copie


	void setVertical(int dV);
	void setHorizontal(int dH);
	void setDiagonals(int dV, int dH);			//dimension setting


	double getArea();				//get area function
	double getPerimeter();		//get perimeter function
	double getSide();


	Rhombus& operator=(const Rhombus& r);		// = operator
	bool operator==(const Rhombus& r);			// == operator

	void GetDiagonals(float& dH, float& dV);
	float GetdH();
	float GetdV();


};