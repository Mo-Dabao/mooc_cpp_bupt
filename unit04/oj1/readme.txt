用户从键盘输入形式如 12-45 这样的“数值范围”字符串，代表从12到45这个范围。
请你编写一个类 Parse，可以解析这个字符串。然后提供两个函数，能够获取字符串中的第一个整数和第二个整数。（10分）
题目内容：
Parse类要提供一个有参构造函数，接收一个字符串参数；
Parse类要提供一个 int getFirst() 函数，返回“数值范围”字符串中的前面的整数；
Parse类要提供一个 int getLast() 函数，返回“数值范围”字符串中的后面的整数；
程序的主函数如下，请将主函数代码拷贝到你的开发环境中，但是不要修改主函数内部的代码：
#include <iostream>
#include <string>
int main() {
  std::string s{};
  std::cin >> s;  // 用户输入一个范围字符串
  Parse p(s);     // 构造Parse对象p，同时解析字符串 s
  std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
  return 0;
}
要求：
1. 不要使用C语言的字符串处理函数
2. 使用string类自带的函数，或者标准库中的函数
提示：
1. 在string中找'-'字符，可以使用string类中的find函数，或者find_first_of()函数。find_first_of()的说明：https://zh.cppreference.com/w/cpp/string/basic_string/find_first_of
2. 当然，你也可以用 find_last_of()或者rfind()函数。find_last_of()的说明：https://zh.cppreference.com/w/cpp/string/basic_string/find_last_of；rfind()的说明：https://zh.cppreference.com/w/cpp/string/basic_string/rfind
3. 将字符串的一部分提取出来，需要使用 substr() 成员函数。substr()的说明：https://zh.cppreference.com/w/cpp/string/basic_string/substr
4. 将字符串转换为整数，可以使用标准库的 std::stoi() 函数。std::stoi的说明：https://zh.cppreference.com/w/cpp/string/basic_string/stol
警告1：
不要在主函数的返回语句前加 std::cin.get(); 否则无法通过本作业的测试用例
警告2：
请不要使用C++14或者C++17的特性。本OJ还不支持这两个标准。比如将函数返回值写为 auto (C++14的特性)
警告3：
请不要添加额外信息的输出（比如输出提示等）。额外输出的信息会导致OJ系统无法判别你的结果
输入格式:
用英文连字符分隔的两个整数构成的字符串
输出格式：*
两个整数，中间用1个空格分隔。第二个整数后面没有空格或者换行
输入样例：
12345-54321
输出样例：
12345 54321
时间限制：500ms  内存限制：32000kb
