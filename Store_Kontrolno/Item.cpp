//
//  Item.cpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//


#include "Item.hpp"
#include "pugixml.hpp"

using namespace std;
Item::Item()
{
    
}

Item::Item(string name , string brand , string model , int quantity , double price )
{
    m_name = name;
    m_brand = brand;
    m_model = model;
    m_quantity = quantity;
    m_price = price;
    
}

void Item:: setName(string name)
{
    m_name = name;
}
void Item:: setBrand(string brand)
{
    m_brand = brand;
}
void Item:: setModel(string model)
{
    m_model = model;
}
void Item:: setQuantity(int quantity)
{
    m_quantity = quantity;
}
void Item:: setPrice(double price)
{
    m_price = price;
}


string Item:: getName()
{
    return m_name;
}
string Item:: getBrand()
{
    return m_brand;
}
string Item:: getModel()
{
    return m_model;
}
int Item::   getQuantity()
{
    return m_quantity;
}
double Item:: getPrice()
{
    return m_price;
}

Item:: ~Item()
{
    
}





//
//void Item:: ReadFromFilePushInVectors()
//{
//   
//    //load xml 1
//    pugi::xml_document document;
//    document.load_file("store_1.xml");
//   
//    //  if(!document.load_file("store3.xml")) {
//  //      cout << "here";
//  //  }
//    
//    pugi::xml_node items = document.child("ITEMS");
//    
//    for (pugi::xml_node it = items.child("ITEM"); it ; it = it.next_sibling("ITEM"))
//    {
//        Item item1 ( it.child_value("NAME") , it.child_value("BRAND"), it.child_value("MODEL"), it.child("QUANTITY").text().as_int() ,  it.child("PRICE").text().as_double() );
//       
//        v_itemM1.push_back(item1);
//        
//    }
//    
//    if (v_itemM1.size() != 0) {
//        cout << "vector is ok";
//    }
//    else{
//        cerr<<"vector is empty";
//    }
//    
//    
//    pugi::xml_document document2;
//    document.load_file("store_2.xml");
//    
//    //  if(!document.load_file("store3.xml")) {
//    //      cout << "here";
//    //  }
//    
//    pugi::xml_node items1 = document2.child("ITEMS");
//    
//    for (pugi::xml_node it = items1.child("ITEM"); it ; it = it.next_sibling("ITEM"))
//    {
//        Item item1 ( it.child_value("NAME") , it.child_value("BRAND"), it.child_value("MODEL"), it.child("QUANTITY").text().as_int() ,  it.child("PRICE").text().as_double() );
//        
//        v_itemM2.push_back(item2);
//        
//    }
//    
//    
//    
//    pugi::xml_document document3;
//    document.load_file("store_3.xml");
//    
//    pugi::xml_node items1 = document3.child("ITEMS");
//    
//    for (pugi::xml_node it = items1.child("ITEM"); it ; it = it.next_sibling("ITEM"))
//    {
//        Item item1 ( it.child_value("NAME") , it.child_value("BRAND"), it.child_value("MODEL"), it.child("QUANTITY").text().as_int() ,  it.child("PRICE").text().as_double() );
//        
//        v_itemM3.push_back(item1);
//        
//    }
//    
//}
//


Item shop1;

