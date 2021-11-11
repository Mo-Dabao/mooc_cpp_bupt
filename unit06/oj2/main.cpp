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
	static int getNum() {
		return num;
	}
};

class Dog : public Animal {
public:
	Dog() {
		std::cout << "Dog\n";
	}
};

int Animal::num{ 0 };

int main() {
	int n, x = 0;
	std::vector<Animal*> animals;
	std::vector<Dog*> dogs;
	std::cin >> n;
	while (x < n) {
		animals.push_back(new Animal{});
		dogs.push_back(new Dog{});
		std::cout << Animal::getNum() << std::endl;
		x++;
	}
	x = 0;
	while (x < n) {
		delete animals[x];
		delete dogs[x];
		std::cout << Animal::getNum() << std::endl;
		x++;
	}
}