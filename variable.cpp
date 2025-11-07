#include <iostream>
using namespace std;

int main()
{
    // student data
    string name = "peter mugambi";
    string course = "computer science";
    string school = "karatina university";
    string year = "second year";
    string semester = "first semester";
    bool isGraduated = false;
    double points = 78.56;
    int studentID = 23456;
    int studentAge = 23;
    float studentFee = 4500.50;
    char studentGrade = 'A';

    // print variables using cout
    cout << "Student Name: " << name << endl;
    cout << "Student Course: " << course << endl;
    cout << "Student School: " << school << endl;
    cout << "Academic Year: " << year << endl;
    cout << "Semester: " << semester << endl;
    cout << "Is Graduated: " << (isGraduated ? "Yes" : "No") << endl;
    cout << "Student Points: " << points << endl;

    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl;

    return 0;
}
