#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class MyShape {
protected:
    int R_, G_, B_;
    string colorToString() {
        stringstream ss;
        ss << R_ << " " << G_ << " " << B_;
        return ss.str();
    }
public:
    void setColor(int R, int G, int B) {
        R_ = R; G_ = G, B_ = B;
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
        R_ = 255; G_ = 255, B_ = 255;
    }
};
class MyCircle : public MyShape {
private:
    int x_ = 200, y_ = 200, radius_ = 200;
public:
    MyCircle(int x, int y, int radius) {
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
    void setCenter(int x, int y) {
        x_ = x;
        y_ = y;
    }
    void setRadius(int radius) {
        radius_ = radius;
    }
    void Draw() {
    }
    //----在此处添加关系运算符  >、<、>=、<=、==、!=  的重载原型声明
    bool operator>(const MyCircle& aCircle);
    bool operator>=(const MyCircle& aCircle);
    bool operator<(const MyCircle& aCircle);
    bool operator<=(const MyCircle& aCircle);
    bool operator==(const MyCircle& aCircle);
    bool operator!=(const MyCircle& aCircle);

};
//----在此处添加关系运算符的重载定义
bool MyCircle::operator>(const MyCircle& aCircle) {
    return (radius_ > aCircle.radius_) ? true : false;
}
bool MyCircle::operator>=(const MyCircle& aCircle) {
    return (radius_ >= aCircle.radius_) ? true : false;
}
bool MyCircle::operator<(const MyCircle& aCircle) {
    return (radius_ < aCircle.radius_) ? true : false;
}
bool MyCircle::operator<=(const MyCircle& aCircle) {
    return (radius_ <= aCircle.radius_) ? true : false;
}
bool MyCircle::operator==(const MyCircle& aCircle) {
    return (radius_ == aCircle.radius_) ? true : false;
}
bool MyCircle::operator!=(const MyCircle& aCircle) {
    return (radius_ != aCircle.radius_) ? true : false;
}

int main() {
    int r1, r2, r3 = 0;
    cin >> r1 >> r2 >> r3;
    MyCircle c1, c2, c3;
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
