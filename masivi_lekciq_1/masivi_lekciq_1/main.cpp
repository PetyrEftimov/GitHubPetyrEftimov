//
//  main.cpp
//  masivi_lekciq_1
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cmath>
#include <iostream>
using namespace std;
int main(){
    
    /*
     int n ;
     int sum = 0 ;
     cout <<" enter array size" << endl;
     cin >> n;
     
     
     
     
     for (int i = 0 ; i < n ; i++) {
     cout<< "enter number"<< endl ;
     cin >> grands[n];
     }
     
     for (int i = 0; i < n; i++) {
     sum = sum + grands[i];
     }
     cout<< "sim is " << sum << endl ;
     cout << sum / n << endl ;
     
     
     for (int i = 0 ; i < n ; i++) {
     cout<<grands[i]<<endl;
     
     
     
     
     
     }
     
     */
    
    
    /*
     int n ;
     int count = 1 ;
     
     cout<< " enter size " << endl ;
     cin >>n ;
     
     int myArrays[n];
     
     for (int i = 0 ; i < n; i++) {
     cout<< " enter Element " << i << endl ;
     cin >>myArrays[i];
     }
     for (int i = 0 ; i < n ; i++) {
     count = count * myArrays[i];
     }
     cout << count << endl ;
     
     // for (int i = 0 ; i < n ; i++) {
     //      cout<< myArrays[i] << endl ;
     //   }
     
     
     //  cout << count ;
     
     
     
     */
    
    /*
     int salary [2];
     int count = 0 ;
     
     for (int i  = 0 ; i < 2; i++) {
     cout << " enter salari " << i << endl ;
     // if salary >500 < 2000
     
     
     cin >> salary[i];
     
     if (!(salary[i] >= 500 && salary[i] <= 2000)) {
     salary[i] = 500;
     
     }
     
     
     }
     for (int i = 0 ; i < 2; i ++) {
     if (salary[i] == 1200) {
     
     cout << salary[i] << endl;
     count ++;
     }
     
     
     
     }
     
     
     cout << count << endl ;
     
     */
    /*
     int salary [2];
     int count = 0 ;
     
     for (int i = 0 ; i < 2 ; i++) {
     do {
     cout << " enter salary " << i << endl;
     
     }
     while (salary[i] < 500 && salary[i] > 2000);
     if (salary[i] == 1200) {
     count ++;
     }
     }
     cout << count ;
     
     
     */
    
    /*
     int array[2];
     int count ;
     int sum ;
     
     for (int i  = 0; i < 2 ; i++) {
     cout << "eneter : " << endl ;
     
     cin >> array[i];
     if (array[i] % 2 == 0) {
     count ++;
     
     }
     sum = count + array[i];
     
     
     
     
     }
     
     
     cout <<sum  << endl;
     
     
     */
    
    /*
     
     int n ;
     int count1= 0;
     int count2 = 0;
     
     cout << " enter size " << endl ;
     
     cin >> n ;
     
     
     int array[n];
     
     for (int i = 0; i < n ; i++) {
     cout << " enter  value  : " << endl ;
     cin >>array[i];
     }
     
     for (int i = 0 ; i < n ; i++) {
     
     if (array[i] < 0 ) {
     //  cout << "This is  -" << array[i]<< endl;
     count1++;
     }
     else{
     count2++;
     }
     //  cout << count1 ;
     //   cout << count2 ;
     }
     
     
     
     
     cout << count1 <<endl;
     cout << count2 << endl;
     
     
     
     
     */
    ///////////////////////////////////////////////////////////////////////////////////
    
    // masuv A[n] da se nameri broqt na elementite sumata na cifrite koito e == 9
    ////
    /*
     
     int n ;
     int number ;
     int digit;
     int sum = 0 ;
     int count ;
     
     cout  <<" enter size " << endl ;
     cin >> n ;
     int Array[n];
     
     
     
     for (int i = 0 ; i < n ; i++) {
     cout  <<"enter number " << endl ;
     cin >> Array[i];
     
     }
     
     
     for (int i = 0; i < n ; i++) {
     
     
     int number = Array[i];
     sum = 0;
     do {
     
     digit = number % 10;
     sum = sum + digit ;
     number = number / 10 ;
     
     } while (number > 0);
     
     if (sum == 9) {
     count++;
     // cout<< sum << endl ;
     }
     // cout<< " nqma suma ot 9 " << endl ;
     
     }
     
     cout<< count << endl ;
     
     */
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////
    
    // da se opredeli dali ima posledovatelni nulevi elementa v masiv A[n]//
    
    /*
     int n ;
     
     cout  <<"enter size"<< endl ;
     cin >> n ;
     int Array[n];
     
     for (int i = 0; i < n ; i++) {
     cout << " enter  number" << endl ;
     cin >>Array[i];
     
     }
     
     bool verify = false; // nqma
     for (int i = 0 ; i < n ; i++) {
     if (Array[i] == 0  ) {
     if (Array[i+1] == 0) {
     verify = true ; //ima
     // cout << "nulevi  ima " << endl;
     }
     
     }
     }
     if (verify) {
     cout<<"ima " << endl ;
     }
     else{
     cout << "nqma " << endl;
     }
     
     */
    
    
    // daden e celochislen masiv A s razmer N . Sformiraite nov masiv B  s vsichki chetni chisla v syshtiq red
    /*
     int n ;
     int even = 0 ;
     int count = 0 ;
     cout << "enter size " << endl ;
     
     cin >> n ;
     
     int Array [n];
     
     for (int i = 0 ; i < n ; i++) {
     cout << "enter number " << endl ;
     cin >> Array[i];
     }
     
     for (int i = 0; i < n ; i++) {
     
     if (Array[i] % 2 == 0) {
     
     count++;
     
     
     }
     
     
     //    int ArrayB[count] = ArrayB[i];
     
     
     }
     int arr2[count];
     int j = 0 ;
     
     for (int i = 0 ; i < n ; i++) {
     if (Array[i] % 2 == 0 ) {
     arr2[j] = Array[i];
     j++;
     }
     
     
     }
     for (int j = 0 ; j < count; j++) {
     cout << arr2[j];
     }
     */
    
    //////////////////////////////////////////////////////////////////////////////////
    /*   int n ,m ;
     
     cout << " enter rows" ;
     cin >> n ;
     cout << "enter colons";
     cin >> m ;
     
     int Array[n][m];
     int sum = 0 ;
     for (int i = 0 ; i < n; i++) {
     for (int j = 0; j < m ; j++) {
     cout << " enter " << endl ;
     cin >> Array[i][j];
     }
     }
     
     
     for (int i = 0 ; i < n ; i++) {
     for (int j = 0; j < m; j++){
     sum = sum + Array[i][j];
     cout << Array[i][j] << " " ;
     // cout<< endl;
     }
     cout<< endl;
     }
     
     */
    
  //////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
  /*dvumeren masiv da se nameri broq na elemntite  ot 1000 do 1500 vkuch i ot 3000 do 3200 vkluch //
    
    int n ;
    int m ;
    int count1 = 0;
    int count2 = 0;
    
    
    cout << " enter rows " << endl ;
    
    cin>> n ;
    
    cout <<" enter colons " << endl ;
    
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << " enter Number " << endl ;
            cin >> Array[i][j];
        }
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            if (Array[i][j] >= 1000 && Array[i][j] <= 1500) {
                count1++;
            }
        }
        
    }
    
    cout <<  " 1200 " << count1 << endl ;
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            if (Array[i][j] >= 3000 && Array[i][j] <= 3200) {
                count2++;
            }
        }
        
    }
    
    cout << "ot 3000 "<< count2 << endl ;
    
    
    
 */
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    // daden dvumeren masiv A[n][m] da se izvedyt vtorite stepeni na elementite na masiva//
    // includava se biblioteka///////////// #include <cmath>
    
 /*
    int n ;
    int m ;
    int square =1 ;
    
    cout << "enter Rows : " << endl ;
    
    cin >> n;
    
    cout << " Enter colon : " << endl ;
    
    cin >> m ;
    
    
    int Array[n][m];
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << " enter number  : " << endl ;
            
            cin >> Array[i][j];
            
        }
    }
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < m ; j++) {
            square = pow(Array[i][j], 2);
        
    
    cout << " pow is  : " << square << endl;
    }
    }
    
  */
    
 ////////////////////////////////////////////////////////////////////////////////////////////////////////
// masiv A [n][m] i edno chislo k . Da se vidi dali K se namira v masiva ;
    /*
    
    int n ;
    int m ;
    
    int k ;
    
    cout << " enter row  :" << endl ;
    
    cin >> n ;
    
    cout << " enter colon : " << endl ;
    
    cin >> m;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << " enter number for Arrays : " << endl ;
            cin >> Array[i][j];
        }
    }
    
    cout << " enter number K : " << endl ;
    
    cin >> k ;
    bool verify = false;                 // predi cikyla booleva promenliva da proveri uslovieto
    for (int i = 0; i < n; i++) {
        for (int j  = 0 ; j < m; j++) {
            if (k == Array[i][j]) {
                verify  = true;
                           }
        }
    }
    
    if (verify ) {                      // vyv if slagame bulevata //
        cout << " ima k " << k << endl;
    }
    else{
        cout << " nqma  k " << endl ;
    }
    */
    /////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
   
    // ima masiv A[n][m] i chisloto K ; Da se vidi kolko pyti se sydyrja chisloto k v masiva ;
   /*
    
    int n ;
    int m ;
    int k ;
    int count =0  ;
    
    
    
    cout << " enter Row " << endl ;
    cin >> n ;
    cout << " enter colon " << endl ;
    cin >> m ;
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0; j < m ; j++) {
            cout <<  "enter nomber " << endl;
            cin >>  Array[i][j];
        }
    }
    
    cout << "enter  number K :" << endl ;
    
    cin >> k ;
    
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            if (k == Array[i][j]) {
                count++;
            }
        }
    }
    cout << count << endl;
    
    
*/
    //////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
    // masiv A[a][n] i edno chislo  K ; dase nameri na koq poziciq e k;
    
  /*
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (Array[i][j] == k) {
                cout  << i <<j << endl ;
            }
        }
    }
    */
    
  /////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////
    //masiv A[n][m] i chislo K ; da se vidi ima li neposredstvenni sysedi sys stoinost K na edin red//
  
   /*
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    bool Neighbours = false;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m ; j++) {
            if (Array[i][j] == k && Array[i][j+1] == k ) {
                Neighbours = true;
               // cout << Array[i][j]<<  " " <<Array[i][j+1]<< endl;
            }
        }
    }
    if (Neighbours) {
        cout << "ima" << endl ;
    }
    else{
    cout << "nqma" << endl ;
    
    }
    */
    
   ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    // masiv A[i][j]  i chislo k ; da se vidi dali ima syseden elemen v edna kolona //
    
    
    /*
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    bool prov = false;
    for (int i = 0; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (Array[i][j] == k && Array[i+1][j]  == k){
                prov=true;
            }
        }
    }
    if(prov){
        cout << " ima "  << endl ;
    }
    else{
        cout <<" nqma "  << endl ;
    }
    
*/
    ///////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    // masiv A[n][m] i chisloto K ; da se vidi dali ima dva elementa k na edin red //
 /*
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    
    int count = 1;
    bool verify = false;
    for (int i = 0 ; i < n ; i++) {
        count = 0;
        for (int j = 0 ; j < m ; j++) {
            
            if (k == Array[i][j] ) {
            count++;
            }
        }
    
        
        if(count > 1){
            verify = true;
    }
    }
             if(verify == true){
        
        cout << "ima " << endl ;
    }
    else{
        cout << " nqma " << endl ;
    }
  */

//////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
  // masiv   A[][]  i chislo k dali ima  dva pyti k  ednakvi v kolona
  /*
    
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    
    int count = 0;
    bool verify = false;
    for (int j = 0; j < m ; j++) {
        count = 0;
        for (int i = 0; i < n ; i++) {
            if(k == Array[i][j]){
                count ++;
            }
        }
        
        if (count >1) {
            verify = true ;
        }
        }
        if (verify == true) {
            
            
            
            cout << " ima " << endl;
        }
        
        else{
            cout << " nqma " << endl ;
            
        }
*/
    
 ///////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
    // Masiv A[n][m] i chisla K i  P  ; K i P sysedi li sa na red ili kolona //
    
  /*
    
    int n ;
    int m ;
    int k ;
    int p ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl ;
    cin >> k ;
    
    cout << " enter numbr P " << endl ;
    
    cin >> p ;
    
    bool verify = false;       // mnogo vajni redove pri sryvnqvane na sledvash ili predishen elemen

    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            
            
                        if (Array[i][j] == k || Array[i][j+1] == p) {
                if (Array[i][j] ==k || Array[i+1][j]) {
                    
                    verify = true;
                    
                }
            }
        }
    }
    
    if (verify) {
        
        
        
        
        cout << " they are neighbors " << endl ;
    }
    else{
        cout << " the are not neighbors " << endl ;
        
    }
    
*/
    
    ///////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
    //masiv A[n][m] i chislo K ; da se nameri broq na elementite koito se delqt na K //
  /*
    int n ;
    int m ;
    int k ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    
    
    int count = 0 ;
    for (int i = 0; i < n ; i++) {
        
        for (int j = 0 ; j < m ; j++) {
            if (Array[i][j] % 9 ==0) {
                count++;
            }
        }
    }

    cout << " delqt se na 9 :  " << count << endl;
    
   */
 //////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    //Masiv a[n][m] i Chisla K i P ; da se nameri broq na chislata koito ne se delqt na K i P ;
    
 /*
    
    int n ;
    int m ;
    int k ;
    int p ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl ;
    cin >> k ;
    
    cout << " enter numbr P " << endl ;
    
    cin >> p ;
    
    
    int count = 0 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (Array[i][j]  % k !=  0  && Array[i][j] % p != 0 )  {
                count++;
            }
        }
    }
 
    cout << "  ne se delqt na K i P : " << count<< endl;
    
  */
    
  //////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////
    //Masiv A[n][m]  i chislo K ; Ako ima elemen s posled cifra kato K  DA se nameri proizvedenieto na vsichki cifri ot tozi red ;;
    
 /*
    
    int n ;
    int m ;
    int k ;
    
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
   
   
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    
    cout << " enter number K " << endl;
    cin >> k ;
    
    //Get framework sum from array
    
    int multiply = 1 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Array[i][j] % 10 == k)
            {
                for (int jm = 0; jm < m; jm++)
                {
                    multiply *= Array[i][jm];
                }
                j = m-1;
                cout << "There is K for last digit in Row : " << i+1 << " and multiply is : " << multiply << endl;;
            }
        }
        multiply = 1;
    }
    
    
    */
 
   ///////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // masiv A[n][m]  i chislo K ; ako ima element s preposlednata  cifra razlichna ot K ; da se nameri sumata na tazi kolona
   /*
    
    int n ;
    int m ;
    int k ;
    
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    cout << " enter number K " << endl;
    cin >> k;
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if ((Array[i][j] / 10 % 10) != k) {
                sum = 0 ;
                for (int in = 0 ; in < n; in++) {
                    //cout << in<<endl;
                    
                    sum +=Array[in][j];
                   // cout << "Array[in][j]: "<<Array[in][j] <<endl;
                }
                i = n-1;
                cout << "There is  !=K  prev last digit in colon : " << j+1 << " and sum is : " << sum << endl;;

            }
        }
    }
    
    
    



    
    
  */
    ////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////
    // imame masiv A[n][m] i cisloto K ; ako v masiva ima chisloto k ; da se smetne sredno aritmetichno;
   /*
    
    int n ;
    int m ;
    int k ;
    
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    cout << " enter number K " << endl;
    cin >> k;
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
            
        }
    }
    bool veryfy = true;
    int count = 0;
    for (int i = 0 ; i < n ; i++) {
        for (int j  = 0 ; j < m ; j++) {
            if (Array[i][j] != k) {
                //count= Array[i][j];
            }
          //  if (veryfy == true) {
          //      count=Array[i][j] + count;
         //   }
                                                // ne e reshena /////!!!!
            
            if (veryfy == true) {
                count=Array[i][j] + count;break;
            }
           
           // count= Array[i][j]+ count;
        }
    }
    cout  << ""  "" ":)"  <<count<< endl;
    
    
    
    
    */
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////
                  // zadacha 17 ot tel;
    
    
    
    int n ;
    int m ;
    int k ;
    int sum = 0 ;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    cout << " enter number K " << endl;
    cin >> k;
    
    bool goOutOfLoop = false;
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
        }
    }
    
            for(int i = 0 ; i < n ;i++){
                for (int j = 0; j < m ; j++) {
                    if (Array[i][j] != k) {
                        sum = sum + Array[i][j];
                    }
                    else{
                        
                        goOutOfLoop = true;
                        break;
                    }
                    
                    if(goOutOfLoop == true)
                    {
                        break;
                    }
                }
                if(goOutOfLoop == true)
                {
                    break;
                }
            
            }
    if(goOutOfLoop == false) {
        cout<<"No K";
    }else{
        cout << " :) " <<sum << endl;

    }
    
    
    return 0;
    
    
}
