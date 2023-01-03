#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\033[31m欢迎使用自定义ANSI前景色C++版\033[0m" << endl;
    string n, str;
    cout << "\033[34m请输入您想要的颜色：\033[0m";
    getline(cin, n);
    if (n == "红" || n == "红色" || n == "Red" || n == "red" || n == "RED") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[41m" << str << "\033[0m" << endl;
    } else if (n == "绿" || n == "绿色" || n == "Green" || n == "green" || n == "GREEN") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[42m" << str << "\033[0m" << endl;
    } else if (n == "棕" || n == "棕色" || n == "Brown" || n == "Brown" || n == "BROWN") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[43m" << str << "\033[0m" << endl;
    } else if (n == "蓝" || n == "蓝色" || n == "Blue" || n == "blue" || n == "BLUE") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[44m" << str << "\033[0m" << endl;
    } else if (n == "品红" || n == "粉红" || n == "品红色" || n == "粉红色" || n == "Pinkish red" || n == "pinkish red" || n == "Pinkish Red" || n == "PINKISH RED" || n == "PINKISHRED" || n == "pinkishred") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[45m" << str << "\033[0m" << endl;
	} else if (n == "孔雀蓝" || n == "孔雀蓝色" || n == "Peacock blue" || n == "peacock blue" || n == "Peacock Blue" || n == "PEACOCK BLUE" || n == "PEACOCKBLUE" || n == "peacockblue") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[46m" << str << "\033[0m" << endl;
	} else if (n == "白" || n == "白色" || n == "White" || n == "white") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[47m" << str << "\033[0m" << endl;
	} else cout << "\033[34m对不起，其他的颜色还未支持，敬请期待～\033[0m" << endl;
    return 0;
}
