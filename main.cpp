#include <iostream>
using namespace std;

int main() {
int choice;
    cout << "\nChoose a genre:\n";
    cout << "1. Action\n2. Comedy\n3. Drama\n4. Horror\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice; 

    switch (choice) {
        case 1:
            cout << "\nRecommended: 'Extraction'\n";
            cout << "A high-octane rescue mission thriller.\n";
            break;
        case 2:
            cout << "\nRecommended: 'Murder Mystery'\n";
            cout << "A comedic whodunit on a European vacation.\n";
            break;
        case 3:
            cout << "\nRecommended: 'The Crown'\n";
            cout << "A dramatic look at the British royal family.\n";
            break;
        case 4:
            cout << "\nRecommended: 'Bird Box'\n";
            cout << "A survival horror in a world of the unseen.\n";
            break;
        default:
            cout << "\nInvalid choice. Please try again.\n";
    }
   return 0;
}