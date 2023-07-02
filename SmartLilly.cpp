#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int age;
	double priceOfWashingMachine;
	int presentPrise;
	cin >> age;
	cin >> priceOfWashingMachine;
	cin >> presentPrise;
	int numberOfToys = 0;
	int saveMoney = 0;
	int moneyForBirthday = 10;
	int saveMoneyTotal = 0;
	int tookMoney = 0;
	for (int currentYear = 1; currentYear <= age; currentYear++) {
		if (currentYear % 2 == 0) {
			saveMoney += moneyForBirthday;
			saveMoneyTotal += saveMoney;
			tookMoney++;
		}
		else {
			numberOfToys++;
		}
	}
		saveMoneyTotal += (numberOfToys * presentPrise)-tookMoney;
		if (saveMoneyTotal>=priceOfWashingMachine) {
			cout << fixed << setprecision(2) << "Yes! "
				<< (saveMoneyTotal - priceOfWashingMachine) << endl;
		}
		else{
			cout << fixed << setprecision(2) << "No! "
				<< (priceOfWashingMachine - saveMoneyTotal) << endl;
		}
		return 0;
}