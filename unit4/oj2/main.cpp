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
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirst() << ' ' << p.getLast(); // �м���������������������һ���ո��ַ�
	return 0;
}