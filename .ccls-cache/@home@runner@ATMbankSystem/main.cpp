#include <iostream>
using namespace std;

void showOption() {
  cout << "***********MENU***********" << endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "**************************" << endl;
}

int main() {

  int option;
  double balance = 500, depositAmount, withdrawAmount;

  do {
    showOption();
    cout << "CHOOSE AN OPTION: ";
    cin >> option;

    switch (option) {

      system("cls");

    case 1:
      cout << "YOUR CURRENTLY BALANCE IS $" << balance << endl;
      break;
    case 2:
      cout << "DEPOSIT AMOUNT $";
      cin >> depositAmount;

      if (depositAmount <= 0) {
        cout << "YOU CAN'T ADD THAT AMOUNT";
      } else {
        balance += depositAmount;
        cout << "YOUR BALANCE NOW IS $" << balance << endl;
      }
      break;
    case 3:
      cout << "WITHDRAW AMOUNT $";
      cin >> withdrawAmount;

      if (withdrawAmount <= balance) {
        balance -= withdrawAmount;
        cout << "YOUR BALANCE NOW IS $" << balance << endl;
      } else {
        cout << "NOT ENOUGH MONEY" << endl;
      }
      break;
    }
  } while (option != 4);
}