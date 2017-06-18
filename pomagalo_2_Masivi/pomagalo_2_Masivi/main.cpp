//
//  main.cpp
//  pomagalo_2_Masivi
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.


#include <cmath>
#include <iostream>
using namespace std;

int main(){
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////// da se iprintira sumata na vyvedenite stoinosti v masiva
    
    /*
     int n ;
     int sum = 0 ;
     cout <<" enter array size" << endl;
     cin >> n;
     int array[n];
     
     
     
     for (int i = 0 ; i < n ; i++) {
     cout<< "enter number"<< endl ;
     cin >> array[i];
     
     
     }
     
     for (int i = 0; i < n; i++) {
     sum = sum + array[i];
     
     
     // cout<<  sum << endl ;
     }
     cout<<  sum << endl ;
     
     */
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    // dadeni sa 20 rabotnika na kolko ot tqh zaplatata e 1200 //pravi se proverka za zaplata
    // pod 500 i za nad 2000//
    
    /*
     
     int people[10];
     int count = 0 ;
     
     for (int i = 0; i < 10; i++) {
     cout << " Enter salary  : " " " << endl ;
     cin >> people[i];
     }
     
     
     for (int i = 0 ; i < 10; i++) {
     if (!(people[i] >= 500 && people[i] <= 2000)) {       /// proverka
     //    salary[i] = 500;
     cout <<" salari is 500 " << endl ;
     
     }
     
     }
     
     for (int i = 0; i < 10 ; i++) {
     if (people[i] == 1200) {
     count ++;
     }
     }
     cout << "broikata e : " <<count << endl;
     
     */
    
    /////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    //1. Имаме едномерен масив А[n] и К. Да се намери и изведе позицията на първото срещане на К в масива, или -1 ако го няма. Масивът и К се въвеждат от потребителя.
    /*
     int n ;
     int missing = 0 ;
     cout<< " Enter size :  " << endl ;
     
     cin>> n ;
     
     int Array[n];
     
     
     for (int i = 0; i < n; i++) {
     cout<< " Enter number : "  << endl ;
     cin >> Array[i];
     }
     
     int k ;
     cout << " vuvedete chislo za sryvnenie  : "  << endl;
     
     cin >> k ;
     
     for (int i = 0; i < n ; i++) {
     if (Array[i] == k) {
     cout << "poziciqta e  broime ot 1 : "<< i + 1 << endl;
     missing = 1 ;
     }
     }
     if(missing == 0 )
     cout<< " -1 " << endl ;
     
     */
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////
    //2. Масив А[n]. Да се намери колко пъти се среща К. Масивът и К се въвеждат от потребителя.
    
    /*
     int n ;
     int count = 0 ;
     cout<< " Enter size : " << endl;
     cin >> n;
     
     int Array[n];
     
     for (int i = 0; i < n; i++) {
     cout <<  " enter number  : "  << endl ;
     cin >> Array[i];
     }
     int k ;
     cout << " Vyvedete chislo za sryvnenie : " << endl;
     cin >> k ;
     
     for (int i = 0; i < n ; i++) {
     if (Array[i] == k) {
     count ++;
     }
     
     }
     
     
     
     cout << "tolkova " << count << endl;
     
     */
    //////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////
    //3. Масив А[n]. Да се намери максималният  елемент и неговият индекс. Масивът се въвежда от потребителя.
    /*
     int n ;
     int max = 0;
     cout << "Enter size :  " << endl ;
     
     cin >> n ;
     
     int Array[n];
     
     for (int i = 0 ; i < n; i++) {
     cout << " Enter number  : " << endl ;
     
     cin >> Array[i];
     }
     
     for (int i = 0; i < n; i++) {
     cout << " elemen " << i << endl ;
     cout << " Stoinosta v kletkata " << Array[i] << endl ;
     if (Array[i] > max) {
     max = Array[i];
     }
     cout<<  "nai Golqma stojnost : " <<max<<  " indeksa e  : " <<Array[i] <<endl;
     }
     
     
     */
    
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //4. Масив А[n]. Да се намерят максималния и минималния елемент. Масивът се въвежда от потребителя.
    /*
     
     int n ;
     int max = 0 ;
     int min = 0 ;
     
     
     cout << "enter size : " << endl ;
     
     cin >> n;
     
     int Array[n];
     
     for (int i = 0 ; i < n; i++) {
     cout << " enter number : " << endl ;
     cin >> Array[i];
     }
     
     min = max = Array[0];  // kogato tyrsime maksimalen ili minimalen  element ot masiva izvejdame
     // promenlivata v koqto zapisvame stoinosta (min ili max) predi for-a
     // sys stoinost na kletkata ot masiva v slichaq s (0)
     
     
     for (int i = 0 ; i < n; i++) {
     
     
     
     if (Array[i] > max) {
     max = Array[i];
     }
     if (Array[i]  < min){
     min = Array[i];
     
     }
     
     }
     cout << " max is : " << max << endl ;
     
     cout << "min is :  " << min << endl ;
     
     */
    
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    //  5. Масив А[n]. Да се изведат всички елементи с най-малка стойност в масива. Масивът се въвежда от потребителя.
    
    
    /*
     
     
     int n ;
     int min = 0 ;
     
     
     cout << " enter size : " << endl ;
     
     cin >> n ;
     
     int Array[n];
     
     for (int i = 0; i < n ; i++) {
     cout << "enter number : " << endl ;
     cin >> Array[i];
     }
     min = Array[0];
     
     for (int i = 0 ; i < n ; i++) {
     if (Array[i] < min)  {
     min = Array[i];
     }
     
     }
     //    cout << "min is " << min << endl ;
     
     
     
     
     cout << "min is " << min << endl ;
     
     
     
     */
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    // zadacha za reverese na masiv
    
    /*
     int Array[5];
     
     for (int i  =  0; i < 5; i++) {
     cout << " write Element : " << i + 1  << endl ;
     cin >> Array[i];
     }
     
     int Reverse[5];
     for (int i = 0 ; i < 5 ; i++) {
     Reverse[5 - i - 1] = Array[i];
     }
     cout<< " the reverse array is" << endl ;
     
     for (int i = 0; i < 5 ; i++) {
     cout << Reverse[i] ;
     }
     
     
     */
    
    /////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    //domashno_29.03_z1
    //daden e ednimeren masiv A[n] vyvejda se ot potrebitelq . Da se nameri maksimalnoto chislo /////
    
   /*
   int n ;
    
    cout << "enter size  : " << endl ;
    
    cin >> n ;
    
    int Array[n] ;
    
    for (int i = 0 ; i < n ; i++) {
        cout <<  " Enter number : " << endl ;
        
        cin >> Array[i];
        
        
    }
    
    int max = Array[0] ;     // tuka se syzdava promenliva koqto e sys stoinos nulevata kletka na masiva//
    
    
    for (int i = 0 ; i < n ; i++) {
        
        
        if (Array[i]  > max) {
            max = Array[i];
            
            
        }
        
        
        
    }
    cout << " the max number is  : " " " << max <<   
   endl ;
    
    */
    
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //domashno_29.03_z2
    //daden e dvumeren masiv !! dannite se vkarvat ot potrebitelq !! da se nameri sumata na elementite
   // vyv vsichki redove v masiva
   
 /*
    
    int n ;
    int m ;
    
    cout << " Enter Rows : " << endl ;
    cin >> n ;
    cout << "enter Colons : " << endl ;
    cin >> m ;
    
    
    int Array[n][m];
    
    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m; j++) {
            
            cout << " Enter number  : " << endl ;
            
            cin >> Array[i][j];
            
        }
        
    }
    
    
    
    
    int sum2  ;
    for (int i = 0 ; i < n ; i++) {
        sum2 = 0;
        for (int j = 0 ; j < m ; j++) {
            sum2 = sum2 + Array[i][j];
            
        }
        
        
        
        cout << " sum  : "<< sum2<< endl ;
        
        
    }
  //  cout << " sum  : "<< sum2<< endl ;

   */
    
  
    
  //////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    // Dvumeren masiv (vyvejda se ot potrebitelq ) da se nameri za vsqka kolina proizvedenieto na chislata po otdelno
   // domashno_29.03_z3
    
  /*
    
    int n ;
    int m ;
    
    cout << " enter Row : " << endl ;
    cin >> n ;
    
    cout << "enter Colone  : "<< endl ;
    
    cin >> m ;
    
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m; j++) {
            cout << " Enter Number : " << endl ;
            cin >> Array[i][j];
        }
    }
    int product; ;
    
    for (int j = 0 ; j < m; j++) {
        product = 1 ;
        
        for (int i = 0 ; i < n ; i++) {
            product = product*Array[i][j];
        
        
        }
        cout << " pro = : " << product << endl ;
  
        
    }
    
  // cout << " pro = : " << product << endl ;
   
   */
 
 ////////////////////////////////////////////////////////////////////////////////////////////////////////
   //////////////////////////////////////////////////////////////////////////////////////////////////////
   //imame dvumeren masiv // da se mine po ramkata na masiva // i da se nameri sumata na krainite koloni i redove //
  /*
   
    int n ;
    int m ;
    
    cout << "enter Row : " << endl ;
    
    cin >> n ;
    
    cout << " enter Colone  : " << endl ;
    
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cout << " enter Number : "<<endl;
            cin >> Array[i][j];
        }
    }
    
    int sum1 =0;
    for (int i = 0 ; i < 1; i++) {
        
        
        for (int j = 0; j < m; j++) {
            
            sum1 = sum1 + Array[i][j];
            
        }
        cout << " Row one : " << sum1 << endl;
    }
    
    int sum2 = 0;
    for (int j = 0; j < 1; j++) {
        for (int i = 0 ; i < n ; i++) {
            sum2 = sum2 + Array[i][j];
        }
        cout << "Colone one : " << sum2 <<endl ;
    }
    
    int sum3 = 0 ;
    
    //za  vseki red[j], kato gledame samo posledniqt red
    for (int i = n-1; i < n ; i++) {
        //za vseki red otgore, za vsjka negova kolona
        for (int j = 0 ; j < m; j++) {
            sum3 = sum3 + Array[i][j];
        }
        cout << " Row  two  : " << sum3 << endl;
    }
    
    int sum4= 0 ;
    for (int j = m -1; j < m; j++) {
        for (int i = 0 ; i < n ; i++) {
            
            sum4 = sum4 + Array[i][j];
        }
        cout << " Colone two : " <<sum4 << endl ;
    }
    */
   
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //2. Намерете средния успех от 30 студенти. Използвайте масив за оценките.
    
  /*
    float Array[3];
    
    for (int i = 0; i < 3; i++) {
        cout<< " enter grandes : " << endl ;
        cin>>Array[i];
        
    }
    float count = 0 ;
    
    for (int i = 0 ; i < 3; i++) {
        count = Array[i] + count ;
        
    }
    
    
    cout << " obsht sbor : " << count << endl ;
    
    float gpa = count / 3 ;
    
    cout << gpa << endl ;
    
    return 0;
   */
  //////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    //масив [a][n] i k   Ako go ima k da nameri sredno aritmetichno
    
   /*
    
    int a ;
    int n ;
    int k;
    float count  = 0 ;
    float average = 0;
    
    cout << "entter row " << endl ;
    
    cin >> a ;
    
    cout << " enter colone " << endl ;
    
    cin >> n;
    
    int Array[a][n];
    
    
    for (int i = 0 ; i < a ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cout << "enter number : " <<  endl ;
            cin >> Array[i][j];
        }
    }
    
    cout <<" enter number :k " << endl;
    
    cin >> k;
    
    
    for (int i = 0 ; i < a ; i++) {
        for (int j = 0; j < n; j++) {
            count = Array[i][j]+count;
         //    cout <<  " :) "<< count  << endl;
            
            if (Array[i][j] == k ) {
                average = count / (n*a);
            }
        }
    }
    
    
    cout << " :)" << average << endl ;
    
    
    */
    
    //////////////////////////////////////////////////////////////////////////////////////////////////
    /////////masiv A[n][m] i chislo K ; namira li se k v edin red ili kolona ( se pravi s promqna na indexa na Array[i][j] ( Array[i+1][j+1] ) v razlichnite im kombinacii
    /*
    
    
    int n ;
    int m ;
    int k ;
    int count  = 0;
    
    cout << "enter row : " << endl ;
    cin >> n ;
    
    cout << " enter colon : " << endl ;
    cin >> m ;
    
    
     int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout <<  "enter number " << endl ;
            cin >> Array[i][j];
        }
    }
    
    cout << " enter number k :" << endl ;
    cin>> k ;
    
    for (int j =0; j < m ; j++) {
        for (int i = 0; i < n; i++) {
            
            if (Array[i][j] == k && Array[i+1][j] ) {
                count ++;
                
                
            }
      
        }
    }
    cout << count ;
    */
    
//////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
    // elementite predi poziciqta na K
    
    
    
/*
    
    int n ;
    int m ;
    int k ;
    int sum  = 0;
    
    cout << "enter row : " << endl ;
    cin >> n ;
    
    cout << " enter colon : " << endl ;
    cin >> m ;
    
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout <<  "enter number " << endl ;
            cin >> Array[i][j];
        }
    }
    
    cout << " enter number k :" << endl ;
    cin>> k ;

    
    for (int i = 0 ; i< n ; i++) {
        for (int j  = 0 ; j < m ; j++) {
            if (Array[i][j] != k) {
                    sum = sum + Array[i][j];
                
            }
            
            else{
                cout<< sum ;
            }
        }
        }
    
  */
  
    
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
    // masiv A[a][n] da se izvadqt vtorite stepeni na masiva
    
    
  /*
    
    
    
    
    
    
    
    
    
    int a;
    int b ;
    
    cin >> a;
    cin >> b ;
    
  int  Array[a][b];
    
    
    for (int i = 0 ; i < a; i++) {
        for (int j = 0 ; j < b  ; j++) {
            cout <<  "enter Number : " << endl;
                cin >>  Array[i][j];
        }
    }
    
    int pow;
    for (int i = 0 ; i < a; i++) {
        for (int j =0; j < b ; j++) {
          //  cout << Array[i][j];
            pow = Array[i][j]*Array[i][j];
            cout  <<"the pow of the Element is :"<< pow << endl ;

        }
    }
    
    
    
*/
    
////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////
   // masiv A[n][m] i K !!! kolko pyti k se sreshta v masiva
    
    
    
    int n ;
    int m ;
    int k ;
   // int p;
    cin >> n ;
    cin >> m ;
    
    int  Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << "enter number " << endl;
            cin >> Array[i][j];
        }
    }
    
    cout << "enter K" << endl ;
    cin >> k;
 //   cin >> p ;
    int  sumOfK = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0 ; j < n ; j++) {
            if ( Array[i][j] / k % 10 ==0) {
                //cout << i<<j<< endl ;
                sumOfK = Array[i][j]+sumOfK;
               // cout << "ima" << endl ;
                
            }
            
     //   else{
      //      cout << "nqma" << endl ;break;
        }
        }
   // }
   cout << sumOfK<< endl ;
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
