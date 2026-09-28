#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Pizza\n2. Burger\n3. Pasta\nChoose item: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Pizza selected"; break;
        case 2: cout << "Burger selected"; break;
        case 3: cout << "Pasta selected"; break;
        default: cout << "Invalid choice";
    }
}
