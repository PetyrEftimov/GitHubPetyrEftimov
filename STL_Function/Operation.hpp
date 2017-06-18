//
//  Operation.hpp
//  STL_Function
//
//  Created by Pepi on 5/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Operation_hpp
#define Operation_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ostream>
#include <cctype>
#include <array>
using namespace std;

class Operation{
public:
    Operation();
    
    void stlFunctionInList();
    void stlMapCountNumbers();
    void stlVectorCountNumbers();
    void stlVectorRemoveNegativNumbers();
    void stlVectorRemoveChar();
    void stlRemoveOddNunbersFromList();
    void stlCountWordExam();
    void stlCountWord();
    void stlCountwordWithMapAndSortWithSet();
    void stlMajorantNumberInArrayMoreThenHalfTime();
    void stlMapFunctionInsertRemoveRead();
    void stlSetFunctionInserRemoveRead();
    void stlLongestSubsequenceOfGreaterValues();
    void stlMostExistingNumberInArray();
    void stlCountCharInStrngWithMap();
    void stlReverseSentences();
    void stlFindAllEvenNumbers();
    void stlIztrivaneNaChisloKoetoSeSydyrjaTolkovaPytiKatoVkaranotoChislo();
    void stlIztrivaneNaDumaKqtoSeSydyjaNechetenBroiPyti();
    void Test();
    void TestNumbers();
  
};

extern Operation op1;

#endif /* Operation_hpp */
