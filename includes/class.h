#ifndef CLASS_H
#define CLASS_H

#include <string>

class TestClass {
    private: 
        std::string m_name; 
        int m_number;
    
    public: 
        TestClass(std::string name, int number); 
        const std::string& get_name(); 
        const int& get_number(); 
};

#endif