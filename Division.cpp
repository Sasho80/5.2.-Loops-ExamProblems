#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double n;
	cin >> n;
	cout.setf(ios::fixed);
	cout.precision(2);
	double divisibleBy2 = 0;
	double divisibleBy3 = 0;
	double divisibleBy4 = 0;
	int cntP1=0;
	int cntP2 = 0;
	int cntP3 = 0;
	for  (int i = 0; i <n; i++){
		int currentNumber;
		cin>> currentNumber;
		if (currentNumber%2==0){
			cntP1++;
		}
		if(currentNumber%3==0){
			cntP2++;
		}
		if (currentNumber%4==0){
			cntP3++;
		}
		divisibleBy2 = ((double)cntP1 / n) * 100;
		divisibleBy3 = ((double)cntP2 / n) * 100;
		divisibleBy4 = ((double)cntP3 / n) * 100;
	}
	cout << divisibleBy2<< "%" << endl;
	cout << divisibleBy3<< "%" << endl;
	cout << divisibleBy4 << "%" << endl;
}