#pragma once
#include <iostream>
class Rectangle {
private:
	double sideA, sideB;

	class Point {
	private:
		double x;
		double y;
	public:
		Point() = default;
		Point(double x, double y) :x(x), y(y) {}
		double& getX() { return x; }
		double& getY() { return y; }
		void setXY(double x, double y) {
			this->x = x;
			this->y = y;
		}}a, b, c, d, center;
public:
	//default cons
	Rectangle() = default;
	//parameter cons
	Rectangle(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd);

	Rectangle(double xCenter, double yCenter, double sideA, double sideB);

	//accessors
	double getXA() { return a.getX(); }
	double getYA() { return a.getY(); }
	double getXB() { return b.getX(); }
	double getYB() { return b.getY(); }
	double getXC() { return c.getX(); }
	double getYC() { return c.getY(); }
	double getXD() { return d.getX(); }
	double getYD() { return d.getY(); }
	double getSideA() { return sideA; }
	double getSideB() { return sideB; }

	//methods
	void move(char direction, double value);
	void coordinates(double xCenter, double yCenter, double& sideA, double& sideB);
	void resize(double X, double Y);
	bool compare(const Rectangle& obj);
	const double area(); //определения площади, периметра прямоугольника
	const double perimetr();
	bool compare(Rectangle obj);//м
};
