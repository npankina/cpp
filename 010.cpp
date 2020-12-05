#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << endl << "Hello, " + name + "! Nice to meet you dev!" << endl;
    cout << "Enter your address: ";
    string address;
    cin >> address;
    cout << "You live in " + address + "! Now we know a lot about you dev =) Have fun with us and prog a lot!!" << endl;
    return 0;
}