#include <iostream>
using namespace std;

int main() {
    int totalStudents, teams;
    cin >> totalStudents >> teams;
    int studentsPerTeam = totalStudents / teams;
    int leftOut = totalStudents % teams;
    cout << studentsPerTeam <<endl<< leftOut << endl;
    return 0;
}