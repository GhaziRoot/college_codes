#include <iostream>
using namespace std;

double calculateTax(double income);
double roundTax(double tax);
double calculateNetIncome(double income, double tax);
void showResults(double income, double tax, double netIncome);

double roundManual(double value) {
    if (value >= 0)
        return (int)(value + 0.5);
    else
        return (int)(value - 0.5);
}

int main() {
    double income;
    cin >> income;

    double rawTax = calculateTax(income);
    double finalTax = roundTax(rawTax);
    double netIncome = calculateNetIncome(income, finalTax);

    showResults(income, finalTax, netIncome);

    return 0;
}


double calculateTax(double income) {
    double tax;

    if (income <= 85528) {
        tax = income * 0.18 - 556.02;
    } else {
        tax = 14839.02 + 0.32 * (income - 85528);
    }

    if (tax < 0)
        tax = 0;

    return tax;
}

double roundTax(double tax) {
    return roundManual(tax);
}

double calculateNetIncome(double income, double tax) {
    return income - tax;
}

void showResults(double income, double tax, double netIncome) {
    cout << "The tax is: " << tax << " thalers "
         << "Your income after tax is: " << netIncome << " thalers";
}
