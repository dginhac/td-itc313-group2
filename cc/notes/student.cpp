/*
* @Author: Dominique Ginhac <d0m>
* @Date:   2021-11-26 14:22:25
* @Last Modified by:   d0m G
* @Last Modified time: 2021-12-07 14:50:32
*/

#include "student.h"


Student::Student(std::string name, double mark) : _name(name), _mark(mark) {}

std::string Student::name() const {
	return _name;
}

double Student::mark() const {
	return _mark;
}

void Student::update_mark(double mark) {
	_mark = mark;
}


std::ostream& operator<< (std::ostream& os, const Student& student) {
	os << student.name() << " - " << student.mark() << std::endl;
	return os;
}


std::ostream& operator<< (std::ostream& os, const std::vector<Student>& students) {
	for (auto student : students) {
		os << student;
	}
	return os;
}

double mean(const std::vector<Student>& students) {
	double m = 0.0;
	for (auto s: students) {
		m+=s.mark();
	}
	/*
	for (auto i=0; i<students.size(); i++) {
		m+=students.at(i).mark();
	}
	for (auto it=students.begin(); it!=students.end(); ++it) {
		m+=(*it).mark();
	}
	*/
	m=m/students.size();
	return m;
}

std::vector<Student> update_marks(const std::vector<Student>& students, double diff) {
	std::vector<Student> output;
	for (auto i=0; i<students.size(); i++) {
		Student new_student = students.at(i);
		new_student.update_mark(students.at(i).mark() + diff);
		output.push_back(new_student);
	}
	return output;
}

void sort(std::vector<Student>& input) {
	std::sort(input.begin(),input.end(),
		[]
		(const Student& s1, const Student& s2)
		{return s1.mark() < s2.mark();}
		);
}
