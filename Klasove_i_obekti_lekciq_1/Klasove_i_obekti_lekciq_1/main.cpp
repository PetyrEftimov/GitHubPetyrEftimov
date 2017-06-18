//
//  main.cpp
//  Klasove_i_obekti_lekciq_1
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

class Dog{
private:                        // specifikaor za dostyp //
    
    string name ;             //poleta na klasa//
    int age ;
    string breed;
    int weight;
public:
    Dog(){
        this->name=" sharo";
        this-> age = 0;
        this-> breed = " ulichna";                // ako ne znameme nishto za obekta //
        this ->weight = 0 ;
    }
    
    Dog(string name , int age,string  breed, int weight){
        this -> name = name;
        this -> age = age;
        this -> breed =breed;
        this -> weight = weight;
        
    }
    
    
    
    void setName(string name){
        
        this->name = name ;
    }
    
    void setAge(int age){
        this->age = age;
    }
    
    void setBreed(string breed){
        this->breed = breed;
    }
    void setWeight(int weight){
        this->weight = weight;
    }
    
    int getAge(){
        return this->age;
        
    }
    int getWeight(){
        
        return this->weight;
    }
    string getName(){
        return this-> name;
        
    }
    
    string getBreed(){
        return this -> breed;
    }
    
    
};


int main(){
    
    
    
    
    
    
    string name ;
    int age;
    string breed ;
    int weight ;
    
    
    cout << "enter firs dog age" << endl;
    cin>> age;
    cout << "enter breed"<< endl ;
    cin >> breed;
    cout <<"enter name"<<endl;
    cin >>name;
    cout<<"enter weight" << endl;
    cin>>weight;
    
    Dog doggy1(name, age,breed,weight);
    
    
    
    
    
 
    doggy1.setAge(age);
    doggy1.setBreed(breed);
    doggy1.setName(name);
    doggy1.setWeight(weight);
 
    cout << "dog age is : " <<doggy1.getAge()<<endl;
    cout << "breed is  : " << doggy1.getBreed()<<endl;
    cout<<" name is : " << doggy1.getName()<<endl;
    cout<<"weight is :" <<doggy1.getWeight()<<endl;
    
    int newAge;
    cin >> newAge;
    
    doggy1.setAge(newAge);
    
cout <<
    

    return 0;
}
