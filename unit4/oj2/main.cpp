#include <iostream>
#include <string>

class Parse {
public:
	std::string str;
	int minus_pos;
	Parse(std::string input) {
		str = input;
		minus_pos = str.find_first_of("-");
	}
	int getFirst() {
		int first_num_pos{ 0 };
		while (str[first_num_pos] < '0' || str[first_num_pos] > '9') {
			first_num_pos++;
		}
		
		return std::stoi(str.substr(first_num_pos, minus_pos));
	}
	int getLast() {
		return std::stoi(str.substr(minus_pos + 1));
	}
};

int main() {
	std::string s{};
	std::cin >> s;  // 用户输入一个范围字符串
	Parse p(s);     // 构造Parse对象p，同时解析字符串 s
	std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
	return 0;
}