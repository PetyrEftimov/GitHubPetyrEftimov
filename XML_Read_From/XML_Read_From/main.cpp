
#include "Student.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
using namespace std;

vector<Student> LoadFromXmlToVector(string file)
{
    vector<Student>v_students;
    pugi::xml_document doc;
    if (!doc.load_file("Student.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    pugi::xml_node nodeObjekt = doc.child("STUDENTS");
    
    for (pugi::xml_node student = nodeObjekt.child("STUDENT");student;student = student.next_sibling("STUDENT")) {
        
        Student st1;
        st1.setFName(student.child("FIRSTNAME").text().as_string());
        st1.setLName(student.child("LASTNAME").text().as_string());
       // st1.setPrice(cd.child("PRICE").text().as_double());
       // st1.setSize(cd.child("ARTIST").first_attribute().as_int()); //tova raboti
        st1.setTel(student.child("LASTNAME").attribute("TEL").as_int());
        for (pugi::xml_attribute attr=student.child("LASTNAME").first_attribute();   attr;    attr = attr.next_attribute())
        {
            //st1.setTel(attr.as_int());
          //  cout << attr.value() << attr.name()<<endl;
        }
        
        
        v_students.push_back(st1);
        
    }
    
    if (v_students.size() != 0) {
        cout << "vector is ok"<<endl;
    }
    
    else{
        cerr<<"vector is empty";
    }
    
    

    
    
    return v_students;
}



int main()
{
    
    vector<Student> v_students = LoadFromXmlToVector("Student.xml");
    for (int i = 0 ; i < v_students.size(); i++)
    {
        cout <<  v_students.at(i).getFName()<<endl;
        cout<<v_students.at(i).getLName()<< endl ;
        cout<<v_students.at(i).getTel()<<endl;
    }
    

    return 0;
}
