//
//  main.cpp
//  XML_Chetene_Vector
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "CD.hpp"
#include "pugixml.hpp"
using namespace std;

void addInVector();

int main(){
    
    
    
    
    
    pugi::xml_document doc;
    if (!doc.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
        
    }
    
    pugi::xml_node nodeObjekt = doc.child("CATALOG");
    pugi::xml_node cd = nodeObjekt.child("CD");
    
    vector<Cd>v_cds;
  //child example//
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
        Cd cd1;
        cd1.setTitle(cd.child("TITLE").text().as_string());
        cd1.setArtist(cd.child("ARTIST").text().as_string());
        cd1.setPrice(cd.child("PRICE").text().as_double());
        
        v_cds.push_back(cd1);
        
    }
    
    double price1 = 0.0;
    
    for (size_t i = 0 ; i < v_cds.size(); i++) {
        v_cds.at(i).cdInfo();
        price1 = price1 + v_cds.at(i).getPrice();
        cout << price1;
        
        
    }
    
 //atribute example//
    
    for (pugi::xml_node cd = nodeObjekt.first_child(); cd;
         cd = cd.next_sibling()) {
        cout << "CD :";
        
        cout<<cd.attribute("color").value();
        
        for (pugi::xml_attribute attr = cd.first_attribute(); attr;attr = attr.next_attribute()) {
             cout << " " << attr.name() << "=" << attr.value();
        }
    }
    
   //first last child example//
    
    cout << "Last child: "<< nodeObjekt.last_child().child("COMPANY").text().as_string()<<endl;
    cout <<nodeObjekt.first_child().child("TITLE").text().as_string()<<endl;
    cout << nodeObjekt.first_child().child("ARTIST").attribute("name").value()<<endl;
    cout << cd.child("ARTIST").last_attribute().value()<<"*******"<<endl ;
/////////////////////////////////////////////////////////////////////////////////////////////////
    
    for (pugi::xml_node cd = nodeObjekt.child("CD"); cd;
         cd = cd.next_sibling("CD")) {
        cout << "CD " << cd.attribute("id").value();
      //  cout << ": AllowRemote "
       // << tool.attribute("AllowRemote").as_bool();
        cout << ", Telefon " << cd.child("ARTIST").attribute("tel").as_int();
        cout << ", ??? '" << cd.child_value("ARTIST")
        << "'\n";
        // object creation
        // add to vector/map
    }
    
 ///////////////////////////////////////////////////////////////////////////////////////////////////
    // finding a node/attribute with the correct name
    // tag::contents[]
    //find_child_by_attribute
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling()) {
        
    
        cout <<"------"<< cd.find_child_by_attribute("ARTIST", "name", "pepi").attribute("tel").value() << "\n";
        
    }
    
    for (pugi::xml_node cd = nodeObjekt.child("CD"); cd;
         cd = cd.next_sibling("CD")) {
        cout << "ARTIST " << cd.child("ARTIST").attribute("tel").value() << "\n";
    }


/////////////////////////////////////////////////////////////////////////////////////////////////////////
//modify


pugi::xml_document doc1;


if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                     pugi::parse_default | pugi::parse_comments))
    return -1;
    
    // tag::node[]
    pugi::xml_node node = doc1.child("node");
    
    // change node name
    cout << node.set_name("new_Pepi");
    cout << ", new node name: " << node.name() << endl;
    
    // change comment text
    cout << doc1.last_child().set_value("useless comment");
    cout << ", new comment text: " << doc1.last_child().value()
    << endl;
    
    // we can't change value of the element or name of the comment
     cout << node.set_value("1") << ", " << doc1.last_child().set_name("2")
    << endl;
    // end::node[]
    
    // tag::attr[]
    pugi::xml_attribute attr = node.attribute("id");
    
    // change attribute name/value
    cout << attr.set_name("key") << ", " << attr.set_value("345");
    cout << ", new attribute: " << attr.name() << "=" << attr.value()
    << endl;

    // we can use numbers or booleans
    attr.set_value(1.234);
    cout << "new attribute value: " << attr.value() << std::endl;
    
    // we can also use assignment operators for more concise code
    attr = true;
    cout << "final attribute value: " << attr.value() << std::endl;
    // end::attr[]
    // add new attributes/nodes
   // pugi::xml_document doc1;
//////////////////////////////////////////////////////////////////////////////////
    // tag::code[]
    // add node with some name
    pugi::xml_node appendNode = doc1.append_child("node");
    
    
    // add description node with text child
    pugi::xml_node descr = appendNode.append_child("description");
    descr.append_child(pugi::node_pcdata).set_value("Simple node");
    
    // add param node before the description
    pugi::xml_node param = appendNode.insert_child_before("param", descr);
    
    // add attributes to param node
    param.append_attribute("name") = "version";
    param.append_attribute("value") = 1.1;
    param.insert_attribute_after("type", param.attribute("name")) = "float";
    // end::code[]
    
    doc1.print(cout);
    doc1.save_file("XML_test.xml");
    doc1.load_string("<foo bar='baz'><call>hey</call></foo>");
    
    
    
    
//////////////////////////////////////////////////////////////////////////
//    // save to file
//    // get a test document
    pugi::xml_document doc2;
    doc2.load_string("<foo bar='baz'>hey</foo>");
    
    // tag::code[]
    // save document to file
    std::cout << "Saving result: " << doc.save_file("save_file_output.xml")
    << std::endl;
    // end::code[]
    
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  // crate new xml doc with c++ code
    
    pugi::xml_document doc3;
    pugi::xml_node appendNode1 = doc3.append_child("Students");
    appendNode1.append_attribute("xmlns")="http://www.w3.org/TR/html4/";
    
    pugi::xml_node singleStudent = appendNode1.append_child("Student");
    pugi::xml_node studentName = singleStudent.append_child("Name");
    studentName.append_child(pugi::node_pcdata).set_value("Yassen Petrov");
    pugi::xml_node studentTel = singleStudent.append_child("Tel");
    studentTel.append_child(pugi::node_pcdata).set_value("0887654321");
    pugi::xml_node studentBirdDate = singleStudent.append_child("Bird_Date");
    studentBirdDate.append_child(pugi::node_pcdata).set_value("04.07.1988");
    singleStudent.append_attribute("id=1");
     pugi::xml_node studentExams = singleStudent.append_child("exams");
     pugi::xml_node studentExam = studentExams.append_child("exam");
     pugi::xml_node studentExam1 = studentExams.append_child("exam");
     pugi::xml_node studentExam2 = studentExams.append_child("exam");
     pugi::xml_node studentExam3 = studentExams.append_child("exam");
    studentExam.append_attribute("teacher")="Iliev";
    studentExam1.append_attribute("teacher")="Ivanov";
    studentExam2.append_attribute("teacher")="Georgiev";
    studentExam3.append_attribute("teacher")="Petrov";
    studentExam.append_attribute("ocenka")="5";
    studentExam1.append_attribute("ocenka")="6";
    studentExam2.append_attribute("ocenka")="5";
    studentExam3.append_attribute("ocenka")="6";
    studentExam.append_attribute("name")="himiq";
    studentExam1.append_attribute("name")="bilogiq";
    studentExam2.append_attribute("name")="informatika";
    studentExam3.append_attribute("name")="matematika";
    studentExam.append_child(pugi::node_pcdata).set_value("ok");
    studentExam1.append_child(pugi::node_pcdata).set_value("ok");
    studentExam2.append_child(pugi::node_pcdata).set_value("ok");
    studentExam3.append_child(pugi::node_pcdata).set_value("ok");
    
    doc3.print(cout);
    doc3.save_file("Student.xml");
    
    
////////////////////////////////////////////////////////////////////////////////////////////////////////
   // chetene ot xml-a koito syszdadohme
    
    
    for (pugi::xml_node student = singleStudent.child("Name") ; singleStudent; singleStudent= singleStudent.next_sibling("name")) {
        cout <<"------------" <<"Name " << singleStudent.child("Name").text().as_string();
    }
    
    
    
 
    

    return 0;

    
}

void addInVector(){
    pugi::xml_document doc;
    pugi::xml_node nodeObjekt = doc.child("CATALOG");
    pugi::xml_node cd = nodeObjekt.child("CD");
    
    vector<Cd>v_cds;
    //child example//
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
        Cd cd1;
        cd1.setTitle(cd.child("TITLE").text().as_string());
        cd1.setArtist(cd.child("ARTIST").text().as_string());
        cd1.setPrice(cd.child("PRICE").text().as_double());
        
        v_cds.push_back(cd1);
        
    }
    
}



