#include <iostream>
using namespace std;
int main() {
	int period;
	cin >> period;
	int treatedPatient=0;
	int untreatedPatient = 0;
	int countOfDoctor = 7;
	for (int day = 1; day <= period; day++) {
		int currentPatients;
		cin >> currentPatients;
		if ((day % 3 == 0) && (untreatedPatient > treatedPatient)) {
			countOfDoctor++;
		}
		if (currentPatients > countOfDoctor) {
			treatedPatient += countOfDoctor;
			untreatedPatient += currentPatients - countOfDoctor;
		}
		else {
			treatedPatient += currentPatients;
		}
	}
		cout << "Treated patients: " << treatedPatient<<"." << endl;
		cout << "Untreated patients: " << untreatedPatient<<"."<< endl;
}
