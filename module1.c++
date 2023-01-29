#include<iostream>
using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies;
    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of nickels: ";
    cin >> nickels;
    cout << "Enter number of pennies: ";
    cin >> pennies;
    int total = 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    cout << "The total amount is" << (total / 100) << "dollars and " << (total % 100) << "cents." << endl;
    return 0;
}
