#include "solution.hpp"
#include "student.hpp"
#include <string>
#include <fstream>


Student ReadStudentRecFromStream(std::istream& is) {
  char comma;
  Student student {}; 
  std::string first_name;
  std::string last_name;

  if (!(is >>  first_name) || !(is >> last_name)) {
    return Student{};
  }
  if (!(is >> student.uin)) {
    return Student{};
  }
  if (!(is >> comma) || comma != ',') {
    return Student{};
  }
  if  (!(is >> student.gpa)) {
    return Student{};
  }
  if (last_name.back() == ',') {
    last_name.pop_back();
  } else {
    return Student{};
  }
  student.full_name = first_name + " " + last_name;
  if (is.fail()) {
    return Student{};
  }

  return student;
}