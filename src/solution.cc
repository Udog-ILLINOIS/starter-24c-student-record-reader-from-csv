#include "solution.hpp"
#include "student.hpp"
#include <string>
#include <iostream>

Student ReadStudentRecFromStream(std::istream& is) {
  char comma;
  Student student {}; 
  std::string first_name;
  std::string last_name;

  is >> first_name;
  is >> last_name ;
  is >> student.uin;
  is >> comma >> student.gpa;

  last_name.pop_back();
  student.full_name = first_name + " " + last_name;

  return Student{};
}