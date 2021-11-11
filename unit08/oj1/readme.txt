在如下给定的代码中，为 MyCircle 类重载关系运算符 >、< >=、< >（10分）
题目内容：

在如下给定的代码中，为 MyCircle 类添加关系运算符 >、<、>=、<=、==、!= ，实现按照半径对 MyCircle 对象进行比较。

要求
关系运算符重载后的返回值均为 bool 类型
不得修改所给的代码

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
  //----在此处添加关系运算符  >、<、>=、<=、==、!=  的重载原型声明
};
//----在此处添加关系运算符的重载定义
int main() {
  int r1 , r2 , r3 = 0;
  cin >> r1 >> r2 >> r3;
  MyCircle c1 , c2 , c3;
  c1.setRadius(r1);
  c2.setRadius(r2);
  c3.setRadius(r3);
  cout << (c1 > c2) << endl;
  cout << (c1 < c2) << endl;
  cout << (c2 >= c3) << endl;
  cout << (c2 <= c3) << endl;
  cout << (c1 == c3) << endl;
  cout << (c1 != c3) << endl;
  return 0;
}

输入格式:
空格分隔的3个整数

输出格式：
6个整数，每行一个
整数只限0或者1

输入样例：
8 9 1

输出样例：
0
1
1
0
0
1

一共6行。最后一行后面没有换行符

时间限制：500ms内存限制：32000kb