/** 
  * File:     student.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Student class
  */

#include <string>
#include <iostream>
#include <vector>

class Student {
public:
  Student(std::string name, double mark);
  std::string name() const;
  double mark() const;
  void update_mark(double mark);

	
private:
	std::string _name;
	double _mark;
};

std::ostream& operator<< (std::ostream& os, const Student& student);
std::ostream& operator<< (std::ostream& os, const std::vector<Student>& students) ;


double mean(const std::vector<Student>& students);

std::vector<Student> update_marks(const std::vector<Student>& students, double diff);


void sort(std::vector<Student>& input);