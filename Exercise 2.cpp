#include <iostream>
class Shape{
protected:
	double length, height;
	public:
		Shape(double l,double h) :length(l), height(h) {}

 };


class Rectangle:public Shape {
public:
	void GetArea2() {

		double Area_rect;
		Area_rect = length * height;
		std::cout << "Area of Rectangle:" << Area_rect;

	}
	Rectangle();
};


		class triangle :public Shape {

		public:
			void GetArea() {
				double Area_tri;
				double a = 1;
				double b = 2;
				Area_tri = (a / b) * length * height;
				std::cout << "Area of triangle :" << Area_tri << std::endl;
				

			}
			triangle();
		};

int main() {
	double x;
	double y;
	std::cout << "Enter the length:";
	std::cin >> x;
	std::cout << "Enter the height:";
	std::cin >> y;
	Shape s(x, y);

	triangle t;
	t.GetArea();
	Rectangle r;
	r.GetArea2();



}
