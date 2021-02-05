// Напишите короткую программуб которая запрашивает рост в футах и дюймах и вес в фунтах. Программа должна выдавать индекс массы тела.

#include <iostream>
int main()
{
    using namespace std;
    const int inches_in_foot = 12;
    const float sm_in_inch = 2.54;
    const float m = 0.0254;
    const float kg = 2.2;
    float height, weight, bmi;
    
    cout << "Enter your height in feet and inches: ";
    cin >> height;
    height = (height * inches_in_foot) * m;
    cout << "Enter your weght in feet: ";
    cin >> weight;
    weight = weight / kg;
    bmi = weight / (height * 2);
    cout << "Your BMI = " << bmi << endl;
    return 0;
}