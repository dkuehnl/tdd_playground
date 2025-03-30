#include <string>

#include "../includes/class.h"

TestClass::TestClass(std::string name, int number) 
    : m_name(name), m_number(number) {};

const std::string& TestClass::get_name() {
    return m_name;
}

const int& TestClass::get_number() {
    return m_number;
}
