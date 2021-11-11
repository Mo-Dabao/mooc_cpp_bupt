#include<iostream>
#include<string>

class C {
	int x{ 0 };
public:
	C(int x)
		: x { x }{
		std::cout << "C(" << std::to_string(x) << ")\n";
	}
	C()
		: C(42) {
		std::cout << "C()\n";
	}
};

int main() {
	C c1, c2(18);
}
