#include<iostream>
#include<string>
using namespace std;
string spell[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

int main() {
	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.size(); ++i)
		sum += str[i] - '0';
	string sumString=to_string(sum);//C++11特性
	int length = sumString.size();
	for (int i = 0; i < length; ++i) {
		cout << spell[sumString[i] - '0'];
			if (i != length - 1)
				cout << " ";
	}
	cout << endl;
	return 0;
}
