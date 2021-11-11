练习数组下标运算符重载（10分）
题目内容：

在下面提供的MyCircle类中添加对数组下标运算符的重载。
要求：
按照数组下标由小到大，数组下标运算符按照次序分别返回圆心x坐标，圆心y坐标，圆的半径。
下标超出范围，则返回带符号整型数中最小的值(参见下方代码后的注1)。
在必要的情况下，你可以为MyCircle类添加数据域成员并且修改其函数成员。
不能修改主函数代码。

本题目所需使用的代码如下，请仔细阅读理解该代码并且在合适位置修改或者添加新代码。

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class MyShape {
protected:
  int R_ , G_ , B_;
  string colorToString() {
    stringstream ss;
    ss << R_ << " " << G_ << " " << B_;
    return ss.str();
  }
public:
  void setColor(int R , int G , int B) {
    R_ = R; G_ = G , B_ = B;
  }
  int getR() {
    return R_;
  }
  int getG() {
    return G_;
  }
  int getB() {
    return B_;
  }
  virtual void Draw() = 0;
  MyShape() {
    R_ = 255; G_ = 255 , B_ = 255;
  }
};
class MyCircle : public MyShape {
private:
  int x_ = 200 , y_ = 200 , radius_ = 200;
public:
  MyCircle(int x , int y , int radius) {
    x_ = x;
    y_ = y;
    radius_ = radius;
  }
  MyCircle() = default;
  MyCircle(MyCircle& aCircle) {
    x_ = aCircle.x_;
    y_ = aCircle.y_;
    radius_ = aCircle.radius_;
    R_ = aCircle.getR();
    G_ = aCircle.getG();
    B_ = aCircle.getB();
  }
  void setCenter(int x , int y) {
    x_ = x;
    y_ = y;
  }
  void setRadius(int radius) {
    radius_ = radius;
  }
  void Draw() {
  }
  //----在此处添加数组下标运算符的重载函数原型声明
};
//----在此处添加关系数组下标运算符的重载定义
int main() {
  int x , y , r = 0;
  cin >> x >> y >> r;
  MyCircle c1(x , y , r);
  MyCircle c2;
  c2[ 2 ] = x;
  for (int i = 0; i <= 3; i++) {
    cout << c1[ i ] << endl;
    cout << c2[ i - 1 ] << endl;
  }
  return 0;
}

注1：通过 numeric_limits<int>::min()  可以拿到最小的整数。该函数需要包含头文件 <limits>
注2：数组下标运算符要返回一个引用才能作为左值，但是“带符号整型数中最小的值”是个常量，不能作为函数的引用返回值。那么，可以在类中定义一个数据域成员，让它等于那个最小的值，然后返回这个数据域成员的引用，就可以做左值了。
注3：OJ使用GCC编译器。

输入格式:
空格分隔的3个整数

输出格式：
8个整数，每行一个。第8个整数后面有换行

输入样例：
1 2 3

输出样例：
1
-2147483648
2
200
3
200
-2147483648
1

第9行是空行

时间限制：500ms内存限制：32000kb