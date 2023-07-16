#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int countOfLoads;
	cin >> countOfLoads;
	double microbusTons=0;
	double truckTons = 0;
	double trainTons=0;
	double sumOfTons = 0;
	double percentLoadMicrobus = 0;
	double percentLoadTruck = 0;
	double percentLoadTrain = 0;
	double AveragePrice = 0;
	int priceMicrobus = 200;
	int priceTruck = 175;
	int priceTrain = 120;
	cout.setf(ios::fixed);
	cout.precision(2);
	for (int i=0; i < countOfLoads; i++){
		int tons;
		cin >> tons;
		if (tons<=3) {
			microbusTons += tons;
	    }
		if (tons>3&&tons<=11){
			truckTons += tons;
		}
		if (tons>11){
			trainTons += tons;
		}
	}
	sumOfTons = microbusTons+truckTons+trainTons;
	percentLoadMicrobus = (microbusTons / sumOfTons)*100;
	percentLoadTruck= (truckTons / sumOfTons)*100;
	percentLoadTrain = (trainTons / sumOfTons)*100;
	AveragePrice = (microbusTons * priceMicrobus +truckTons*priceTruck+
		+trainTons*priceTrain)/sumOfTons;
	cout << AveragePrice << endl;
	cout << percentLoadMicrobus<<" %"<< endl;
	cout << percentLoadTruck<<" %"<< endl;
	cout << percentLoadTrain<<" %"<< endl;
}