//
//  main.cpp
//  Kontrolno_XML_13.06
//
//  Created by Pepi on 6/13/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
map<int,int> countInts(vector<int> ints){
    map<int, int> countedInts;
    for(int i=0; i<ints.size();i++)
    {
        int cnt = ints[i];
        if(countedInts.find(cnt) == countedInts.end())
        {
            countedInts[cnt]=1;
        }else{
            countedInts[cnt]=countedInts[cnt]+1;
        }
    }
    
    return countedInts;
}

int main()
{
    

}
