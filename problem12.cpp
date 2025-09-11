#include <iostream>

int main() {
    // Problem 11
    double var1 = 1.13e3;
    double var2 = 411e-4;

    std::cout << var1 << " " << var2 << std::endl;

    // Problem 12
    int totalStudents;
    std::cout << "Enter the number of admitted students: ";
    std::cin >> totalStudents;

    int numGroups = 11;
    int studentsPerGroup = totalStudents / numGroups;
    int remainingStudents = totalStudents % numGroups;

    std::cout << "In first group: " << studentsPerGroup + remainingStudents << std::endl;
    std::cout << "In last group: " << studentsPerGroup << std::endl;

    return 0;
}
