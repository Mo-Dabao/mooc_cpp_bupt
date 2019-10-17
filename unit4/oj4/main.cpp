#include<iostream>

class Screen {
	int width, height;
public:
	Screen() {
		width = 640;
		height = 480;
		std::cout << "screen" << std::endl;
	}
	Screen(int w, int h) {
		width = w;
		height = h;
		std::cout << "screen" << std::endl;
	}
	int getWidth() {
		return width;
	}
	void setWidth(int w) {
		width = w;
	}
	int getHeight() {
		return height;
	}
	void setHeight(int h) {
		height = h;
	}
};

int main() {
	int width, height;
	std::cin >> width >> height;
	Screen screen1(width, height);
	Screen screen2;

	screen2.setWidth(800);
	screen2.setHeight(600);

	// 下面两行代码所输出的宽和高之间有一个空格字符分隔
	std::cout << screen1.getWidth() << ' ' << screen1.getHeight() << std::endl;
	std::cout << screen2.getWidth() << ' ' << screen2.getHeight();

	return 0;
}