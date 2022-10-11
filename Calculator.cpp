// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyCalculator.h"
using namespace std;

void orderOfCheck(double, double, double, char);
void checkIfValid(double a, double b);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);


double result = 0.0;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';


    cout << "Jesus' Simple Calculator" << endl << endl;
    cout << "Please enter the operation to perform.\nFormat: a+b | a-b | a*b | a/b" << endl << endl;

    orderOfCheck(x,y,result, oper);


    //MyCalculator c;
    //while (true)
    //{
    //    cin >> x >> oper >> y;
    //    checkIfValid(x, y);
    //    result = c.Calculate(x, oper, y);
    //    cout << "Result is: " << result << endl;

    //}
    system("pause");
    return 0;
}

void orderOfCheck(double x, double y, double result, char oper) {


    cin >> x >> oper >> y;
    if (oper == '+')
        cout << addition(x, y) << endl;
    else if (oper == '-')
        cout << subtraction(x, y) << endl;
    else if (oper == '*')
        cout << multiplication(x, y) << endl;
    else if (oper == '/')
        cout << division(x, y) << endl;
    else
        cout << "I don't know what to do..." << endl;
    cout << endl;
    orderOfCheck(x, y, result, oper);
}
void checkIfValid(double a, double b)
{
    if (isnan(a)) {
        cout << "Please make sure your inputs are both numbers.";
    }
    if (isnan(b)) {
        cout << "Please make sure your inputs are both numbers.";
    }
}

double addition(double a, double b)
{
    return result = a + b;
}

double subtraction(double a, double b) {
    return result = a - b;
}

double multiplication(double a, double b) {
    return result = a * b;
}

double division(double a, double b) {
    return result = a / b;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


