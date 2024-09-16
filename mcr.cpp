//XuLingxi write patch.
#include <iostream>

int main() {
    int num1, num2, sum;

    // 提示用户输入两个整数
    std::cout << "请输入第一个数字: ";
    std::cin >> num1;

    std::cout << "请输入第二个数字: ";
    std::cin >> num2;

    // 计算和
    sum = num1 + num2;

    // 输出结果
    std::cout << "两个数字的和是:  " << sum << std::endl;

    return 0;
}
