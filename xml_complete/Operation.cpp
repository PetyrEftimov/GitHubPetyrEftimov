//
//  Operation.cpp
//  XML_Chetene_Generirane
//
//  Created by Pepi on 5/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "CD.hpp"
using namespace std;

Operation::Operation(){}


void Operation:: checkCdFile(){
    pugi::xml_document doc;
    if (!doc.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
        }
    else{
        cout <<"File is ok"<<endl;
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
    
    if (v_cds.size() != 0) {
        cout << "vector is ok";
    }
    
    else{
        cerr<<"vector is empty";
    }
    
    double price1 = 0.0;
    
    for (size_t i = 0 ; i < v_cds.size(); i++) {
        v_cds.at(i).cdInfo();
        price1 = price1 + v_cds.at(i).getPrice();
        cout << price1;
        
        
    }
    
}



void Operation:: workWithAttribute(){
    pugi::xml_document doc2;
    
    if (!doc2.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    pugi::xml_node nodeObjekt = doc2.child("CATALOG");
    pugi::xml_node cd = nodeObjekt.child("CD");
  
    
    for (pugi::xml_node cd = nodeObjekt.first_child(); cd;
         cd = cd.next_sibling("CD")) {
        cout << "CD :";
        
        cout<<cd.attribute("color").value();
        
        for (pugi::xml_attribute attr = cd.first_attribute(); attr;attr = attr.next_attribute()) {
            cout<< " " << attr.name() << "=" << attr.value();
        }
    }
    
    //first last child example//
    
    cout << "Last child: "<< nodeObjekt.last_child().child("COMPANY").text().as_string()<<endl;
    cout <<nodeObjekt.first_child().child("TITLE").text().as_string()<<endl;
    cout << nodeObjekt.first_child().child("ARTIST").attribute("name").value()<<endl;
    cout << cd.child("ARTIST").last_attribute().value()<<"*******"<<endl ;
    
}

void Operation:: workWithAttributeValue(){
 
    pugi::xml_document doc4;
    
    if (!doc4.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    
    pugi::xml_node nodeObjekt = doc4.child("CATALOG");
    pugi::xml_node cd = nodeObjekt.child("CD");
   

        
    for (pugi::xml_node cd = nodeObjekt.child("CD"); cd;
             cd = cd.next_sibling("CD")) {
        
        cout<<";;;;";
        
        cout << "CD " << cd.attribute("id").value();
        
        cout << ", Telefon " << cd.child("ARTIST").attribute("tel").value();
        cout << ", ??? '" << cd.child_value("ARTIST")
        << "'\n";
        
        }
}

void Operation:: findChildByAttribute(){
    pugi::xml_document doc5;
 
    if (!doc5.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
        
        
    }
    
    pugi::xml_node nodeObjekt = doc5.child("CATALOG");
   // pugi::xml_node cd = nodeObjekt.child("CD");

    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
        
        cout <<"------"<< cd.find_child_by_attribute("ARTIST", "name", "pepi").attribute("tel").value() << "\n";
        
    }
    
    for (pugi::xml_node cd = nodeObjekt.child("CD"); cd;
         cd = cd.next_sibling("CD")) {
        cout << "ARTIST " << cd.child("ARTIST").attribute("tel").value() << "\n";
    }
    
}

void Operation:: changeModify(){
    
    pugi::xml_document doc5;
    if (!doc5.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    
    if (!doc5.load_string("<node id='123'>text</node><!-- comment -->",
                          pugi::parse_default | pugi::parse_comments)){
        cerr<<"No such file"<<endl;
    }
    else{
        cout << "File Found "<<endl;
    }
        
        
    
    // tag::node[]
    pugi::xml_node node = doc5.child("node");
    
    // change node name
    cout << node.set_name("new_Pepi");
    cout << ", new node name: " << node.name() << endl;
    
    // change comment text
    cout << doc5.last_child().set_value("useless comment");
    cout << ", new comment text: " << doc5.last_child().value()
    << endl;
    
    // we can't change value of the element or name of the comment
    cout << node.set_value("1") << ", " << doc5.last_child().set_name("2")
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
    // add node with some name
    pugi::xml_node appendNode = doc5.append_child("node");
    
    
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
    
    doc5.print(cout);
    doc5.save_file("XML_test.xml");
    doc5.load_string("<foo bar='baz'><call>hey</call></foo>");
    
}

void Operation::saveToFile(){
    
    pugi::xml_document doc6;
    
    doc6.load_string("<foo bar='baz'>hey</foo>");
    
    
    cout << "Saving result: " << doc6.save_file("save_file_output.xml")
    << endl;
}

void Operation:: createNewXmlDocWithCode(){
    pugi::xml_document doc6;
    pugi::xml_node appendNode1 = doc6.append_child("Students");
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
    
    doc6.print(cout);
    doc6.save_file("Student.xml");
    // chetene ot xml-a koito syszdadohme
    //display info from tag with name: Name
    
    for (pugi::xml_node student = singleStudent ; student; student= student.next_sibling("Student")) {
        cout <<"------------" <<"Name " << student.child("Name").text().as_string()<<"Tel" <<student.child("Tel").text().as_string()<<endl;
    }
    
  //ciklene po vytreshni chaildove
  // display all attribute
    for (pugi::xml_node student = singleStudent; student; student=student.next_sibling("Student")) {
        for (pugi::xml_node  exam = student.child("exams").child("exam") ; exam; exam = exam.next_sibling("exam")) {
            for (pugi::xml_attribute attr = exam.first_attribute(); attr; attr = attr.next_attribute()) {
                cout<<attr.name()<<":"<<attr.value()<<endl;
                
                
            }
        }
    }
    
    // ciklene po vytreshni childove pushvane vyv vektor na stoinosti//
    //sredno aritmetichno za ocenkite za student//
    vector<double> ocenki;
    for (pugi::xml_node student = singleStudent; student; student=student.next_sibling("Student")) {
        cout <<"---+---"<< student.child("exams").find_child_by_attribute("exam", "name", "himiq").attribute("ocenka").value() << "\n";
        
        for (pugi::xml_node  exam = student.child("exams").child("exam") ; exam; exam = exam.next_sibling("exam")) {
            
            ocenki.push_back(exam.attribute("ocenka").as_double());
            
        }
    }
    double sum , avr = 0 ;
    for (int i = 0; i < ocenki.size(); i++) {
        sum += ocenki.at(i);
    }
    
    avr = sum / ocenki.size();
    
    cout << "Average" <<avr;
    
    
}

void Operation::readFromVectorWriteToBinFile(){
    ofstream outCdFile("newCDFile.txt",ios::out);
    string title;
    string artist;
    double price;
    
    pugi::xml_document doc;
    if (!doc.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    
    pugi::xml_node nodeObjekt = doc.child("CATALOG");
    pugi::xml_node cd = nodeObjekt.child("CD");
    
    vector<Cd>v_cds;
    //child example//
      // Cd vecPtr;
    Cd cd1;
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
       
        
        Cd cd1;
        
        cd1.setTitle(cd.child("TITLE").text().as_string());
        cd1.setArtist(cd.child("ARTIST").text().as_string());
        cd1.setPrice(cd.child("PRICE").text().as_double());
        
        v_cds.push_back(cd1);
        
    }

    
//    
//    for (int i = 0 ;i < v_cds.size(); i++) {
//        title = v_cds.at(i)->getTitle();
//        artist = v_cds.at(i)->getArtist();
//        price = v_cds.at(i)->getPrice();
//        outCdFile <<" "<<title<<" "<<artist<<" "<<price;
//    }
//
    
    
    for (int i = 0 ;i < v_cds.size(); i++) {
        title = v_cds.at(i).getTitle();
        artist = v_cds.at(i).getArtist();
        price = v_cds.at(i).getPrice();
       // outCdFile <<title<<" "<<artist<<" "<<price;
        
        
        outCdFile<< setw(13) <<"  "<< title<< setw(10)<<"  "<<artist<<setw(13)<<"  "<<price<<endl;
        
        
    
        
    }
    
}
















 Operation operation1;
