//
//  main.cpp
//  Core_Array_Vectors_1
//
//  Created by Pepi on 4/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <iostream>




//void staticArrayInIt(void);
//void automaticArrayInIt(void);


using namespace std;
int main(){
    
    
   // const int x = 12;
    
//    cout << x ;
    
    
 //   x = 25;                    // const promenliva ne moje da si promenq stoinosta //
    
  ////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // da si opravq //
/*
    const int arraySize = 11;
    int n[arraySize]={0,0,0,0,0,0,5,2,5,4};
    
   // int arr[arraySize]={6,7,8,9};
    
    for (int i = 0 ; i < arraySize; i++){
        if (i == 0) {
            cout << " " <<i * 10 << "  - "<<(i * 10 ) + 9 ;
        }
        else{
            if (i == 10 ) {
                cout << "      " <<i* 10 ;
            }
            else{
                
            
            cout << " " << i * 10 << " - " << (i * 10 ) + 9 ;
            }
            }
            
        
        
        
    
   for (int stars = 0 ; stars < n[i]; stars ++) {
       cout << "*" ;
    }
        cout << endl;
    
    }
 */
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
  /*
    int array[10] = {0};
    
    
    for (int i = 0 ; i < 10 ; i++) {
      //  array[i] = 0;
        cout << "element :  " << i <<  "value is: " << array[i]  << endl ;
    }
    
 */
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    //kogato razmera na masiva e konstanta  ne mojeme da go promenqme //
    
 /*
    const int arraySize = 10 ;
    
    int Array[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        Array[i] = 2 + 2*i;
        cout << i << " " << Array[i] << endl ;
    }
    
    
 */
    
   /////////////////////////////////////////////////////////////////////////////////////////////////////
    // izpolzvane na const Array Size
    
   /*
    
   const int arraySize = 10 ;
    int Array[]={10,23,456,16,123,345,567,432,445,66};
    int total  = 0;
    
    for (int i = 0 ; i < arraySize; i++) {
        total = Array[i] + total;
      
    }
      cout << total << endl ;
    
  */
    
 ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // izpolzvane na masivi za izprintirane na grafiki chrez zvezdichki ;
/*
    const int arraySize = 11;
    int Array[11]={0,2,0,0,0,3,4,7,6,5,9};
    for (int i = 0 ; i < arraySize; i++) {
        //cout << Array[i]<< endl ;
        
        if (i == 0) {
            cout << " 0 - 9  :  " << endl;
        }
        else if (i == 10){
            cout << "    100 :" << endl ;
        }
        else{
            cout << i * 10 << " - " <<(i*10)+9<< " : " << endl ;
        }
        
        for (int j = 0 ; j < Array[i]; j++) {
            cout << "*" ;
        }
        
    }
    
 */
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // zadacha : rolvame 6000000 pyti zarche s funkcii srand za random
 /*
    const  int arraySize = 7 ;
    int  frequency[7];
    
    srand(time(0));               // taka polzvame random funkciq vyrzana kym time //
    
    
    for (int roll = 1 ; roll <= 6000000; roll++) {
        frequency[1 + rand() % 6 ]++;
        
      //  cout <<frequency[roll] << endl ;
    }
    
    for (int face = 1 ; face < arraySize; face++) {
        cout << face << " : " << frequency[face]<<endl ;
  }
  */
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    // otgovor na studenti za kachestvoto na hranata //
 
    
    
    const int responseSize = 40 ;
    const int friquencySize = 11;
    
    
    const int response[responseSize] = {2,4,5,4,2,4,5,6,7,8,5,3,4,5,6,7,8,9,6,5,4,1,4,5,7,5,8,8,5,4,3,3,4,5,6,7,4,6,7,6};
    
    
    
    int friquency[friquencySize] = {0};
    
    //  cout << friquency[friquencySize];
    
    for (int answerd = 0 ; answerd < responseSize; answerd++) {
        friquency[response[answerd]]++;
  //  cout << friquency[answerd]<< endl;
    
    }
    
    for (int raiting  = 1; raiting < friquencySize ; raiting++) {
        cout << raiting << "  : " <<friquency[raiting]<< endl ;
    }
    

    
 ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // podavane na masiv kym funkciq // deklaraciqta na funkciite e nad main ///
    
    
 //   void staticArrayInIt(void);       nad main sa deklarirani funkciite
 //   void automaticArrayInIt(void);    // a razpisvaneto e pod main // mnogo e vajno da pogledna //
 /*
    int salary[10];
    int hard=200,gross,sum=0;
    double percent=0.09;
    int counter2=0,counter3=0,counter4=0,counter5=0,counter6=0;
    int counter7=0,counter8=0,counter9=0,counter10=0;
    
    for (int i=0;i<=9;i++)
    {
        cout<<"Enter Gross: ";
        cin>>gross;
        salary[i]=hard+(percent*gross);
    }
    
    for (int i=0;i<=9;i++)
    {
        sum+=salary[i];
        
        if (200 < salary[i] && 299 > salary[i] )
        {
            counter2++;
        }
        
        if (300 < salary[i] && 399 > salary[i] )
        {
            counter3++;
        }
        
        if (400 < salary[i] && 499 > salary[i] )
        {
            counter4++;
        }
        
        if (500 < salary[i] && 599 > salary[i] )
        {
            counter5++;
        }
        
        if (600 < salary[i] && 699 > salary[i] )
        {
            counter6++;
        }
        
        if (700 < salary[i] && 799 > salary[i] )
        {
            counter7++;
        }
        
        if (800 < salary[i] && 899 > salary[i] )
        {
            counter8++;
        }
        
        if (900 < salary[i] && 999 > salary[i] )
        {
            counter9++;
        }
        
        if (salary[i]>=1000)
        {
            counter10++;
        }
    }
    
    cout<<"Earnings between 200-299$ are: "<<counter2<<endl;
    cout<<"Earnings between 300-399$ are: "<<counter3<<endl;
    cout<<"Earnings between 400-499$ are: "<<counter4<<endl;
    cout<<"Earnings between 500-599$ are: "<<counter5<<endl;
    cout<<"Earnings between 600-699$ are: "<<counter6<<endl;
    cout<<"Earnings between 700-799$ are: "<<counter7<<endl;
    cout<<"Earnings between 800-899$ are: "<<counter8<<endl;
    cout<<"Earnings between 900-999$ are: "<<counter9<<endl;
    cout<<"Earnings of 1000 and more $ are: "<<counter10<<endl;
    cout<<"Total earnings are: "<<sum<<endl;
    
    
    
  */
    
    
    
    
    
    return 0;
}


