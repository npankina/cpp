#include <iostream>
int stonetolb(int); //прототип функции
int main()
{
    using namespace std;
    int stone;
    cout << "Enter a weght in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
