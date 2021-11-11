#include<iostream>
#include<filesystem>
#include<fstream>

int main() {
	namespace fs = std::filesystem;
	fs::path pathOut{ "out.txt" };
	fs::path pathIn{ "in.txt" };
	std::ofstream out{ pathOut };
	std::ifstream in{ pathIn };
	if (exists(pathIn)) {
		std::cout << "in.txt exists\n";
	}
	else {
		std::cout << "in.txt does not exist\n";
	}
	in.close();
	std::cin.get();
}
