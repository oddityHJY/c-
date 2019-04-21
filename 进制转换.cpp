#include <iostream>
using namespace std;

class Number {
public:
	Number(int x, int y) {
		n = x;
		b[100] = { 0 };
		i = 0;
	};
	void converto(int a);
	void show() {
		for (i = i - 1; i >= 0; i--) {
			std::cout << b[i];
		}
		std::cout << endl;
	};
private:
	int n, i;
	int b[100];
};
int main() {
	int n, n1, n2;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1, 10);//n1是10进制正整数;
		no1.converto(n2);
		Number no3 = no1;  //no3是n2进制的正整数
		no3.show();     //输出结果
	}
}

void Number::converto(int a) {
	for (i = 0; n != 0; i++) {
		b[i] = n % a;
		n = n / a;
	}
}