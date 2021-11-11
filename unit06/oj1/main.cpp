#include<iostream>

class Animal {
public:
	Animal() {
		std::cout << "Animal\n";
	}
};

class Dog: public Animal {
public:
	Dog() {
		std::cout << "Dog\n";
	}
};

int main() {
	int n, x = 0;
	std::cin >> n;
	while (x < n) {
		Animal{};
		Dog{};
		x++;
	}
}