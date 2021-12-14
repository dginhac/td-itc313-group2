#include <iostream>
#include "student.h"
#include <vector>

int main(int argc, char const *argv[])
{
    Student s1("S. Jobs", 6.5);
    Student s2("D. Ginhac", 18.5);
    Student s3("B. Gates", 8);
    Student s4 ("E. Musk", 19);
    Student s5 ("M. Zuckerberg", 4.5);
    std::cout << s2.name() << "-" << s2.mark() << std::endl;

    std::vector<Student> students;
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
    double m = mean(students);
    double diff = 12 - m;
    std::cout << "moyenne = " << mean(students) << std::endl;
    std::vector<Student> new_students = update_marks(students, diff);

    m = mean(new_students);
    std::cout << "moyenne = " << m << std::endl;
    std::cout << "\n avant tri" << std::endl;
    std::cout << students;
    sort(students);
    std::cout << "\n apres tri" << std::endl;
    std::cout << students;

    return 0;
}