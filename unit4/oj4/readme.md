考虑创建一个绘图程序。程序中需要有一个类Screen用来表示绘图时所用的屏幕

这个屏幕有一些基本属性，比如宽和高；有一些基本操作，比如获取屏幕的宽和高（10分）


**题目内容：**



1. Screen类有两个私有的int型数据成员，分别代表屏幕的宽和高
2. Screen类的有参构造函数：
    1. 有两个整型参数，分别是屏幕的宽和高（以像素为单位）
    2. 构造函数将屏幕的宽和高存储在类的私有数据域中
3. Screen类的无参构造函数
    1. Screen类的默认构造函数将屏幕宽和高分别设置为640和480，也可以使用C++11的就地初始化设置屏幕宽和高
    2. 构造函数将屏幕的宽和高存储在类的私有数据域中
4. Screen类的所有构造函数均应输出字符串“screen”并换行，代码中的换行需使用 cout::endl
5. 为私有数据成员提供getter和setter函数，如有必要，则增加其他数据成员及函数成员。函数原型如下

```cpp
int getWidth();
int getHeight();
int setWidth(int width);    //return width
int setHeight(int height);  //return height
```

6. 代码所用的主函数如下（不得做更改）：

```cpp
int main() {
  int width, height;
  std::cin >> width >> height;
  Screen screen1 (width, height);
  Screen screen2;
   
  screen2.setWidth(800);
  screen2.setHeight(600);
   
  // 下面两行代码所输出的宽和高之间有一个空格字符分隔
  std::cout << screen1.getWidth() << ' ' << screen1.getHeight() << std::endl;
  std::cout << screen2.getWidth() << ' ' << screen2.getHeight();
 
  return 0;
}
```



**输入格式:**



两个由空格分隔的整数，代表屏幕的宽和高



**输出格式：**



构造函数所输出字符串“screen”，字符串后换行

两个不同屏幕对象的宽和高，由空格分隔，第一个屏幕对象的宽和高输出后换行



**输入样例：**

`320 240`



**输出样例：**

```
screen
screen
320 240
800 600
```



***注意*** ：上述输出一共4行，最后一行后面 **没有** 换行



时间限制：500ms  内存限制：32000kb