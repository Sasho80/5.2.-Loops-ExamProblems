#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	double p1Percentage = 0;
	double p2Percentage = 0;
	double p3Percentage = 0;
	double p4Percentage = 0;
	double p5Percentage = 0;
	int cntP1 = 0;
	int cntP2 = 0;
	int cntP3 = 0;
	int cntP4 = 0;
	int cntP5 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int currentnumber;
		cin >> currentnumber;
		if (currentnumber < 200) {
			cntP1++;
		}
		else if (currentnumber >= 200 && currentnumber < 400) {
			cntP2++;
		}
		else if (currentnumber >= 400 && currentnumber < 600) {
			cntP3++;
		}
		else if (currentnumber >= 600 && currentnumber < 800) {
			cntP4++;
		}
		else {
			cntP5++;
		}
	}
		p1Percentage = cntP1 * 100.0 / n;
		p2Percentage = cntP2 * 100.0 / n;
		p3Percentage = cntP3 * 100.0 / n; 
		p4Percentage = cntP4 * 100.0 / n;
		p5Percentage = cntP5 * 100.0 / n;
		cout << fixed << setprecision(2) << p1Percentage << "%" << endl;
		cout << fixed << setprecision(2) << p2Percentage << "%" << endl;
		cout << fixed << setprecision(2) << p3Percentage << "%" << endl;
		cout << fixed << setprecision(2) << p4Percentage << "%" << endl;
		cout << fixed << setprecision(2) << p5Percentage << "%" << endl;
}
