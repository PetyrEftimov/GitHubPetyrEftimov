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
#include "Operation.hpp"
using namespace std;

void addInVector();
vector<Cd> loadXmlAndPushInVector(string loadXml)
{
    vector<Cd> v_cdInfo;
    pugi::xml_document doc;
    if (!doc.load_file("Cds.xml")) {
        cerr<<"file could not be readed " ;
    }
    else{
        cout <<"File is ok"<<endl;
    }
    
        pugi::xml_node nodeObjekt = doc.child("CATALOG");
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
        Cd cd1;
        cd1.setTitle(cd.child("TITLE").text().as_string());
        cd1.setArtist(cd.child("ARTIST").text().as_string());
        cd1.setPrice(cd.child("PRICE").text().as_double());
      //  cd1.setSize(cd.child("ARTIST").first_attribute().as_int());
        cd1.setSize(cd.child("ARTIST").attribute("size").as_int());
        
        
        v_cdInfo.push_back(cd1);
        
    }
    
    if (v_cdInfo.size() != 0) {
        cout << "vector is ok";
    }
    
    else{
        cerr<<"vector is empty";
    }

 
    return v_cdInfo;
    
}






int main(){
   
//    operation1.checkCdFile();
//    operation1.workWithAttribute();
//    operation1.workWithAttributeValue();
//    operation1.findChildByAttribute();
//    operation1.changeModify();
//    operation1.saveToFile();
//    operation1.createNewXmlDocWithCode();
//    operation1.readFromVectorWriteToBinFile();
//    operation1.iteratorExample();
//    operation1.test();
    
    cout <<"0000"<<endl;
    vector<Cd> v_cds = loadXmlAndPushInVector("Cds.xml");
    for (size_t i = 0 ; i < v_cds.size(); i++)
    {
        cout << v_cds.at(i).getPrice()<<v_cds.at(i).getSize()<<endl;
    }
    
    

    

    return 0;

    
}




