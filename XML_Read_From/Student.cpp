
#include "Student.hpp"
Student::Student()
{
    
}
void Student:: setFName(string fName)
{
    m_fName = fName;
}
void Student:: setLName(string lName)
{
    m_lName = lName;
}
void Student:: setTel(int tel)
{
    m_tel = tel;
}

string Student:: getFName()
{
    return m_fName;
}
string Student:: getLName()
{
    return m_lName;
}
int Student::   getTel()
{
    return m_tel;
}

