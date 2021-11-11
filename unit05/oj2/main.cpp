#include<iostream>
#include<string>

class C {
	int x{ 0 };
public:
	C(int x)
		: x{ x } {
		std::cout << "C(" << std::to_string(x) << ")\n";
	}
	C(double d)
		: C{ static_cast<int>(d) } {
		std::cout << "C(" << d << ")\n";
	}
	C()
		: C{ 3.8 } {
		std::cout << "C()\n";
	}
};

int main() {
	C c1, c2{ 2.2 }, c3{ 1 };
	//std::cin.get();
}
