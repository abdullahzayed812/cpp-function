#include <iostream>
#include <random>
using namespace std;

int menu() {
  int choice = -1;
  while (choice == -1) {
    cout << "\nEnter choice for calculation\n";
    cout << "Add enter 1\n";
    cout << "Subtract enter 2\n";
    cout << "Multiply enter 3\n";
    cout << "Divide enter 4\n";
    cout << "Exit enter 4\n";

    cin >> choice;
    if (!(choice >= 1 && choice <= 5)) {
      cout << "Invalid choice. Try again\n";
      choice = -1;
    }
  }
  return choice;
}

void read(double &num1, double &num2) {
  cout << "Enter two numbers\n";
  cin >> num1 >> num2;
}

void add(double a, double b) {
  cout << endl << a << " + " << b << " = " << a + b << endl;
}

void subtract(double a, double b) {
  cout << a << " - " << b << " = " << a - b << endl;
}

void multiply(double a, double b) {
  cout << a << " * " << b << " = " << a * b << endl;
}

void divide(double a, double b) {
  if (b != 0) {
    cout << a << " * " << b << " = " << a * b << endl;
  }
  cout << "Can't divide by zero\n";
}

int main() {
  cout << "\n                     ============= Welcome to calculator ===============\n";

  double num1, num2;

  while (true) {
    int choice = menu();
    if (choice == 5) {
      break;
    }
    
    read(num1, num2);

    if (choice == 1) {
      add(num1, num2);
    } else if (choice == 2) {
      subtract(num1, num2);
    } else if (choice == 3) {
      multiply(num1, num2);
    } else if (choice == 4) {
      divide(num1, num2);
    }
  }

  return 0;
}