//
//  Header.h
//  Function_Overloadet
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include<cmath>



template <class T>
T calculateDistance(T x1 , T x2 , T y1, T y2) {
    return  sqrt ((x2 - x1 )*(x2 - x1)+(y2 - y1)*(y2 - y1));
}




#endif /* Header_h */

