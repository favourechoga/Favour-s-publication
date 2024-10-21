#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int attempts = 3;
int correctPin = 1104; // Change this to your desired PIN
double balance = 10000.00; // Initial account balance

cout << " Favour Echoga BU/23B/IT/8410 Welcome to Favour's Bank!" << endl;

while (attempts > 0) {
int pin;
cout << "Please enter your PIN: ";
cin >> pin;

if (pin == correctPin) {
cout << "PIN accepted. Your current balance is: $" << fixed << setprecision(2) << balance << endl;

double withdrawalAmount;
cout << "Enter the amount to withdraw: $";
cin >> withdrawalAmount;

if (withdrawalAmount > balance) {
cout << "Insufficient balance. Withdrawal failed." << endl;
} else {
balance -= withdrawalAmount;
cout << "Withdrawal successful. Remaining balance: $" << fixed << setprecision(2) << balance << endl;
cout << "Congratulations! Your withdrawal transaction is complete." << endl;
}

break;
} else {
attempts--;
if (attempts > 0) {
cout << "Wrong PIN. " << attempts << " attempts remaining." << endl;
} else {
cout << "sorry you entered a wrong pin. Maximum attempts reached. I cannot proceed." << endl;
}
}
}

cout << "Thank you for using this ATM!" << endl;

return 0;
}

