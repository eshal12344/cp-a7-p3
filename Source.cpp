#include<iostream>
using namespace std;
int sum(int &i, int& e) {
	int result = i + e;
	return result;
}
float summ(float &s, float &h) {
	return s + h;
}
int main() {
	int i, e;
	float s, h;
	cout << "Enter thr first integer value=" << endl;
	cin >> i;
	cout << "Enter the second integer value=" << endl;
	cin >> e;
	cout << "Sum of integers=" << sum(i, e) << endl;
	cout << "----------------------------------------" << endl;
	cout << "Enter the first float value=" << endl;
	cin >> s;
	cout << "Enter second float value=" << endl;
	cin >> h;
	cout << "Sum of values=" << summ(s, h) << endl;
	return 0;

}