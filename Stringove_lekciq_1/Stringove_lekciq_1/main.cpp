//
//  main.cpp
//  Stringove_lekciq_1
//
//  Created by Pepi on 4/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cmath>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main(){
  
    
 //   string firsMyString = " Hello Pepi :)" ;
   
 //   int len = firsMyString.length()-1;   // s lenght()-1 -> zapochvame da broime ot 1 element a ne ot ////nula //
    
 //   char len = firsMyString.at(1);
    
   //  cout << len << endl ;
    
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
    
 /*
    
    string mySecondString = " from now i understand string " ;
    
  
    
    cout << "  mSs is  - " << mySecondString<< endl;
    
    cout << mySecondString.length();
    cout << mySecondString.size();
    
    for (int i = 0 ; i < mySecondString.length(); i++) {
       // cout << i<< endl;                                  // indeksa na stringa//
      cout << mySecondString.at(i)<< endl ;               //    charovete vytre
        
    }
  */
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //// Tyrsene v string !!!!!!!
    
  /*
    string myTyrthString = " find some in c++ end string  " ;
    
    
    int index;
   index = myTyrthString.find("find");
   cout << index << endl;                        // 1
   index = myTyrthString.find("c++");
   cout << index << endl;                    // 14
   index = myTyrthString.find_last_of("i");
   cout << index << endl;                      // 25
    index = myTyrthString.find_first_of("i" , 6 );   // tyrsi bukvata i sled 6-ti znak;
   cout << index<<endl;
  */
    
  /////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    //
    
  //   string myStr = " pepi ";
  //  string myStr1 = " pepi ";

  //  cout << myStr<<"+"<<myStr1<< endl;
    
 //   cout << myStr1 << +" i"+" am" << endl ;      !!!!!!!!!!!!! ne raboti !!!!!!!!!
    
    
 //   cout << " enter name : " << endl;
    
 //   getline(cin , myStr1);                         // cin v string  pomni do  natiskaneto na enter
    
 //   cout << myStr1 << endl ;
    
   //////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////// nameri pyrvata v leksikografsko order ot daden string ;
    //
    
    /*

    string town[]{"sofia" , "varna" , "burgas" , "sofia" , "suzopol" , "sinemorec " , "ahtopol"};
    
    string firstTown = town[0];
    
    for (int i = 1 ; i < 7 ; i++) {
        string currentTown = town[i];
        if (currentTown.compare(firstTown)  < 0  ){
            firstTown = currentTown;
        }
    }
    cout << firstTown << endl ;
    */
    
   
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// koga se polzva append ; da se kopira neshto mnogokratno v masiva ;
 /*
    string app = "";
    
    for (int i = 0 ; i < 100; i++) {
        app = app.append("a");
        
        cout <<app;
    
    }
    
    
*/
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //////// tursene v stringa ;
 /*
    
     string search = " my string is the in fyrst that in search ";
        int index ;
    
    
   // index = search.find_first_of("that") ;
    index = search.find_last_of("search");
    cout << index <<endl ;
    
*/
    
    
   ////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    //zamestvane na stringove ;
  /*
    string coctail = " vodka + martini + tonik " ;
    int position ;
    position=coctail.find_last_of("+") ;
    
    while (position != string ::npos) {
        coctail.replace(position, 1, "and");
        position=coctail.find_last_of("+", position+1);
    }
    cout << coctail<<endl ;
*/
 //////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
    // задача 1 : да се написхе програма която прочита стринга и го изпринтира на обратно
 /*
     string myString = " sample ";
    
     string index  ;
    
    for (int i = myString.length()-1; i >= 0; i--) {
        
    
        cout <<myString.at(i);
    
    }

  */
    
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////
    //  Z_2  • Преди initiali2. Напишете програма, за да се провери дали в даден израз скобите са поставени правилно. Пример на правилната експресия: ((А + В) / 5 г). Пример на неправилна експресия:    ) (А + В)).
   /*
 
    
    string myString ;
    int openBraket =  0;
    int  closeBraket =  0;
    
    
    
    
    cout << " enter  simbol :" << endl ;
    
    getline(cin, myString);
    
    
    for (int i = 0 ; i < myString.length(); i++) {
        if (myString.at(i) == '('   ) {
            openBraket++;
            //cout << openBraket;
  
        }
        if (myString.at(i) == ')'   ) {
            closeBraket++;
         //   cout << openBraket;
            
        }
        
    }
  
    cout << "my string is: " << myString << endl;
    
    if(openBraket == closeBraket)
    {
        cout << "correct";
    }else {
        cout << "incorrect";
    }
   
   
    */
 
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // z_4. Напишете програма, която ви позволява въвеждане потребителското низ от максимум 20 символа. Ако дължината на низа е по-малко, а останалата част от героите трябва да бъдат запълнени с "*". Печат на низа в конзолата.
 /*
    
    string myString;
    
    
    cout << " enter simbol  :  " << endl;
    
    
    getline(cin,myString);
    for (int i = 0; i < myString.length(); i++) {
        cout << myString.at(i);
    }
    
    
    
        
        
  //  cout << myString.length();
    
    for (int i = myString.length(); i < 20 ; i++) {
        cout << "*" ;
    }
 */
 
    /////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////
    //
    
    
    
    
    
    
    
    
    
    return 0;

}
