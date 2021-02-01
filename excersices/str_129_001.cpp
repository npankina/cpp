// Напишите короткую программу, которая запрашивает рост в дюймах и преобразует их в футы и дюймы. Программа должна использовать символ подчеркивания для обозначения позиции, где будет производиться ввод. Для представления коэффициента преобразования используйте символьную константу const. 

#include <iostream>

int main()
{
    using namespace std;
    const int Inches_per_foot = 12;
    int height;

    cout << "Enter your height in inches: ";
    cin >> height;
    int feet = height / Inches_per_foot;
    int inches = height % Inches_per_foot;
    cout << "Your height is " << feet << " feet " << inches << " inches." << endl;
    return 0;
}