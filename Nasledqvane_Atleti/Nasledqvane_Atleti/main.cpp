//
//  main.cpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Athletes.hpp"
#include <vector>
#include <string>
#include "Disciplines.hpp"
#include "Start.hpp"
using namespace std;
/* Да се направи приложение "Съзтезание по лека атлетика".
Имаме атлети (име, фамилия, най-добро постижение, националност), дисциплини (име, световен рекорд, рекорд на съзтезанието), стартове (дата, час, дисциплина, участници в старта, тип (квалификация, четвъртфинал, полуфинал, финал))

След всеки старт трябва да се пази информация за постиженията на атлетите и съответно кой продължава напред.
Накрая да се изведе крайно класиране.

Да има търсене по име на атлет, по име на дисциплина (да се извеждат всички стартове и атлети за тази дисциплина в съзтезанието). Да се изведе класиране по медали по държави.

*/


int main(){
    Athletes at1("Muto" , "Mutov" ," bg" , 9.12);
    Disciplines discp1("100m", 8.12 , 8.98);
    Start start1("12.11.2017", "11.25","semifinal",discp1 , at1);
    //start1.disciplineWinner();
    
    vector<Start> starts(3);
    
    starts.at(0).addAthlet("Muto","Mutov","bg",8.5);
    starts.at(1).addAthlet("Lubo","Petrov" , "bg",8.4);
    
    
    

    
  
    
    

    
    
    


    return 0 ;
}
