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
		return std::stoi(str.substr(0, minus_pos));
	}
	int getLast() {
		return std::stoi(str.substr(minus_pos+1));
	}
};


int main() {
	std::string s{};
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirst() << ' ' << p.getLast(); // �м���������������������һ���ո��ַ�
	return 0;
}