#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double heritage;
	int yearToLive;
	cin >> heritage;
	cin >> yearToLive;
	double year = 18;
	cout.setf(ios::fixed);
	cout.precision(2);
	for (int currentYear = 1800; currentYear <= yearToLive; currentYear++) {
		if (currentYear % 2 == 0) {
			heritage -= 12000;
		}
		else {
			heritage -= (12000 + 50*year);
		}
		year++;
	}
	if (heritage>=0) {
		cout<<"Yes! He will live a carefree life and will have "<<
		      heritage<<" dollars left."<<endl;
	}
	else{
		cout <<"He will need "<< abs(heritage) <<" dollars"
			<< " to survive." << endl;
	}
}
