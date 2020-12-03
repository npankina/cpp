// Вывести число пи на экран с тремя цифрами в дробной части, текст '3.142' не использовать.
#include <iostream>
#include <iomanip>

int main(void)
    {
        using namespace std;
        double pi = 3.1415926;
        cout << setprecision(4) << pi << endl;
        double e = 2.71828;
        cout << setprecision(2) <<e << endl;
        return 0;
    }