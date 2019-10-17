#include <iostream>
#include <array>

class Circle {
public:
	double radius{ 1.0 };
	Circle() = default;
	Circle(double input_radius) {
		radius = input_radius;
	}
	double getArea() {
		return radius * radius * 3.14;
		}
};

int main() {
	std::array<Circle, 10> circles{ 1.0, 2.0, 3.0, 4.0, 5.0 };
	double area_sum{ 0.0 };
	for (Circle c: circles) {
		area_sum += c.getArea();
	}
	std::cout << area_sum;
	return 0;
}