//
//  ClientData.hpp
//  Chetene_Pisane_Ot_Filove
//
//  Created by Pepi on 5/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef ClientData_hpp
#define ClientData_hpp
#include <stdio.h>

#include <string>
using std::string;

class ClientData
{
public:
    
    ClientData( string = "", string = "", string = "");
    
   
    void setAccountNumber( int );
    int getAccountNumber() const;
    

    void setLastName( string );
    string getLastName() const;
    

    void setFirstName( string );
    string getFirstName() const;
    
  
    void setBalance( double );
    double getBalance() const;
private:
    int accountNumber;
    char lastName[ 15 ];
    char firstName[ 10 ];
    double balance;
};




#endif /* ClientData_hpp */
