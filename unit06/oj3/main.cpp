#include<iostream>
#include<vector>

class Animal {
private:
	static int num;
public:
	Animal() {
		std::cout << "Animal\n";
		num++;
	}
	~Animal() {
		num--;
	}
	virtual void speak() = 0;
	static int getNum() {
		return num;
	}
};

class Dog : public Animal {
public:
	Dog() {
		std::cout << "Dog\n";
	}
	void speak() override {
		std::cout << "wang\n";
	}
};

class Cat : public Animal {
public:
	Cat() {
		std::cout << "Cat\n";
	}
	void speak() override {
		std::cout << "miao\n";
	}
};

int Animal::num{ 0 };

int main() {
	int n, x = 0;
	std::vector<Animal*> animals;
	std::cin >> n;
	while (x < n) {
		animals.push_back(new Dog{});
		animals.push_back(new Cat{});
		x++;
	}
	for (auto& animal : animals) {
		animal->speak();
		delete animal;
	}
}
