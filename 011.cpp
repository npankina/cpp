#include <iostream>
double farlong_to_metres(double);
double farlong_to_yards(double);

int main()
{
    using namespace std;
    double farl;
    cout << "Enter farlong in here: ";
    cin >> farl;
    double metres = farlong_to_metres(farl) ;
    double yards = farlong_to_yards(farl) ;
    cout << farl << " farlong is " << metres << " metres." << endl;
    cout << farl << " farlong is " << yards << " yards." << endl;
    return 0; 
}
double farlong_to_metres(double n)
{
    return n * 220;
}
double farlong_to_yards(double n)
{
    return n * 201168;
}