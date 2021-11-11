#include<iostream>
#include<cstdlib>

class Screen {
	int width, height;
	void exitWhenInvalidScreen() {
		if (width > 1000 || height > 1000 || width <= 0 || height <= 0) {
			std::cout << "invalid screen size";
			exit(0);
		}
	}
public:
	Screen() {
		width = 640;
		height = 480;
		exitWhenInvalidScreen();
		std::cout << "screen" << std::endl;
	}
	Screen(int w, int h) {
		width = w;
		height = h;
		exitWhenInvalidScreen();
		std::cout << "screen" << std::endl;
	}
	int getWidth() {
		return width;
	}
	void setWidth(int w) {
		width = w;
		exitWhenInvalidScreen();
	}
	int getHeight() {
		return height;
	}
	void setHeight(int h) {
		height = h;
		exitWhenInvalidScreen();
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