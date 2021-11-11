基于本单元前一个作业【创建Screen类】，为Screen类增加一个私有函数，用于检测屏幕的宽与高是否符合逻辑（10分）
题目内容：
基于本单元作业【创建Screen类】，在Screen类中添加一个私有函数exitWhenInvalidScreen用于检测屏幕的宽与高是否 符合逻辑
1. 函数exitWhenInvalidScreen的返回值类型、参数的个数和类型请你自行指定。
2. 函数exitWhenInvalidScreen的判断逻辑如下：
    1. 宽度和高度均不得大于1000像素(可以等于1000像素)
    2. 宽度和高度必须大于0像素（不能等于0像素）
    3. 如果宽或者高不满足上述任一条件，则整个程序仅仅输出字符串"invalid screen size"，然后退出程序
3. 在Screen类的有参构造函数及Setter函数中，要调用exitWhenInvalidScreen函数检测屏幕的宽和高
4. 程序中的主函数如下（与前一作业【创建Screen类】完全相同）
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
5. 提示
提示1： exit() 函数可以强行退出程序，该函数在头文件 <cstdlib>中
提示2: 函数exitWhenInvalidScreen可以设计为拥有两个参数，分别为宽和高。当仅需 判断宽或者高二者之一是否符合逻辑时，可以给另一个参数随便赋一个符合逻辑的数
提示3: 当屏幕宽和高不符合逻辑时，仅输出规定的字符串，不要输出任何多余信息
输入格式:
空格分隔的两个整数，代表屏幕的宽和高
输出格式：
由输入的数据决定输出的内容。
有两种可能输出：
输出字符串"invalid screen size"。输出该字符串后不可以换行
或者
类似作业【创建Screen类】的输出格式
输入样例1：
320 2400
输出样例1：
invalid screen size
注意：上述输出只有一行，“invalid screen size”之后没有换行
输入样例2：
320 240
输出样例2：
screen
screen
320 240
800 600
注意：上述输出共4行。第4行之后没有换行
时间限制：500ms  内存限制：32000kb
