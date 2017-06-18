//
//  Operation.cpp
//  STL_Function
//
//  Created by Pepi on 5/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"

Operation::Operation(){}

void Operation:: stlFunctionInList(){
    list<int> integers;
    int number = 1;
    
    cout << "0 (Zero) Terminates:"<<endl;
    
    while (number != 0)
    {
        if (number < 0)
        {
            cerr << "Error! Number is below Zero (0)."<<endl;
            cerr << "Terminating";
            break;
        }
        
        cout << "Enter Number: ";
        cin >> number;
        integers.push_back(number);
    }
    
    list<int>::const_iterator it;
    
    double sum = 0;
    double counter = 0;
    
    for (it = integers.begin(); it != integers.end() ; it++)
    {
        sum+=*it;
        counter++;
    }
    
    counter-=1;
    cout << "Sum from list is: "<<sum<<endl;
    cout << "Average from list is: "<<sum/counter<<endl;
    
}
void Operation::stlMapCountNumbers(){
    
    int array[9] = {3, 4, 4, 2, 3, 3, 4, 3, 2};
    typedef multiset< int, less< int > > Ims;
    Ims intMultiset;
    ostream_iterator< int > output( cout, " " );
    intMultiset.insert( array, array + 9 );
    cout << "Inserting array in Multiset...\n";
    copy( intMultiset.begin(), intMultiset.end(), output );
    cout<<endl;
    cout << "2 -> " << intMultiset.count(2) << " times\n";
    cout << "3 -> " << intMultiset.count(3) << " times\n";
    cout << "4 -> " << intMultiset.count(4) << " times\n";
    
}
void Operation:: stlVectorCountNumbers(){
    list<int> numbers;
    int number = 1;
    cout << "0 (ZERO) ending the sequence !!!" << endl;
    
    while (number != 0) {
        cout << "Enter a value: ";
        cin >> number;
        if (number != 0) {
            numbers.push_back(number);
        }
    }
    
    vector<string> countNumbers;
    countNumbers.push_back("");
    
    int count = 0;
    
    for (list<int>::iterator i = numbers.begin(); i != numbers.end(); i++) {
        for (list<int>::iterator k = numbers.begin(); k != numbers.end(); k++) {
            if (*i == *k) {
                
                count++;
            }
        }
        bool check = true;
        string result;
        
        stringstream num;
        stringstream counter;
        
        num << *i;
        counter << count;
        result.append(num.str() + " is found " + counter.str());
        
        counter << "";
        num << "";
        for (unsigned j = 0; j < countNumbers.size(); j++) {
            
            if (result == countNumbers[j]) {
                check = false;
                break;
            }
            
        }
        
        if (check == true) {
            countNumbers.push_back(result);
        }
        result = "";
        count = 0;
        check = true;
        
    }
    for (unsigned j = 0; j < countNumbers.size(); j++) {
        cout << countNumbers[j] << endl;
    }

}

void Operation::stlVectorRemoveNegativNumbers(){
    
    vector<int> numbers;
    int number = 1;
    
    cout << "Enter a positive/negative integer: " << endl << "(0)-Zero Breaks" <<endl;
    
    while (number != 0)
    {
        
        cout << "Number :";
        cin >> number;
        
        if (number == 0)
        {
            break;
        }
        
        numbers.push_back(number);
        
    }
    
    cout << "Removing negative numbers..." <<endl;
    
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < 0)
        {
            numbers.erase(numbers.begin() + i);
            i--;
        }
    }
    
    cout << "Printing Positive Integers: ";
    
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i]<<" ";
    }
    
    
}
void Operation:: stlVectorRemoveChar(){
    vector<string> numbers;
    string number ;
    
    cout << "Enter a text: " << endl << "(end)-end Breaks" <<endl;
    
    while (number !=  "end")
    {
        
        cout << "words :";
        cin >> number;
        
        if (number == "" )
        {
            break;
        }
        
        numbers.push_back(number);
        
    }
    
    cout << "Removing words" <<endl;
    
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == "text")
        {
            numbers.erase(numbers.begin() + i );
            i--;
        }
    }
    
    cout << "Printing anoder word: ";
    
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i]<<" ";
    }
    
}
void Operation::stlRemoveOddNunbersFromList(){
    list<int> numbers;
    
    numbers.push_back(4);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(2);
    
    int counter = 0;
    list<int> newList = numbers;
    
    cout << "Old list: ";
    
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        for(list<int>::iterator jt = numbers.begin(); jt != numbers.end(); jt++)
        {
            if(*it == *jt)
            {
                counter++;
            }
        }
        
        if(counter % 2 != 0)
        {
            newList.remove(*it);
        }
        cout << *it << " ";
        counter = 0;
    }
    
    cout << "\nThe new list: ";
    
    for(list<int>::iterator it = newList.begin(); it != newList.end(); it++)
    {
        cout << *it << " ";
    }

    
}
void Operation::stlCountWordExam(){
    
    map<string, int> countWords;
    set<string,greater<string> > sortedWords;
    
    ifstream readText("text.txt", ios::in);
    
    if (!readText)
    {
        ofstream writeText("text.txt", ios::out);
        writeText << "Imalo edno vreme edin zaek i edna dobra kostenurka.\nZaeka iskal da se syztezava s kostenurkata.\nKostenurkata se syglasila.\nI pobedila zaeka.";
        writeText.clear();
        writeText.seekp(0);
        cerr << "Creating file text.txt"<<endl<<"Please restart the program.";
        exit(1);
    }
    
    string text;
    string word;
    
    while (readText >> word){
        text.append(word + " ");
    }
    
    size_t position = text.find_first_of(".,?!-:();\"", 0);
    
    
    while (position != string::npos){
        
        text.replace(position, 1, "");
        position = text.find_first_of(".,?!-:();\"", position);
    }
    
    for (size_t i = 0; i < text.size(); i++){
        char ch = text.at(i);
        ch = tolower(ch);
        text.at(i) = ch;
    }
    
    stringstream ss;
    ss.str(text);
    
    
    string wordFromFile;
    
    while (ss >> wordFromFile)
    {

        countWords[wordFromFile]++;
   
    }
    
    //dotuk
    readText.clear();
    readText.seekg(0);
    
    map<string, int>::iterator it;
    
    size_t K,P;
    cout <<"Enter K:";
    cin >> K;
    
    cout <<"Enter P:";
    cin >> P;
    cout <<endl;
    
    int counterKP = 0;
    
    string kpwords;
    
    for (it = countWords.begin(); it != countWords.end(); it++)
    {
        string word = it->first;
        
        if (word.size() >= K && word.size() <= P)
        {
            counterKP++;
            kpwords += it->first + " ";
        }
        
        stringstream aa;
        stringstream bb;
        string result;
        aa << it->first;
        bb << it->second;
   result.append(bb.str() + "->" + aa.str());
        sortedWords.insert(result);
        aa<<"";
        bb<<"";
        result = "";
        
    }
    
    for (set<string>::iterator it= sortedWords.begin() ; it != sortedWords.end() ; it ++)
    {
        
        cout << *it << endl;
    }
    
    cout << "There are: "<< counterKP << " words that is > K & < P"<<endl;
    cout << "The words are: " << kpwords;
}

void Operation:: stlCountWord(){
    map<string , int > mapCountWord;
    
    ifstream readText("text.txt" , ios::in);
    
    if(!readText)
    {
        ofstream writeText("text.txt" ,  ios::out);
        writeText<<"Imalo edno vreme edin zaek i edna dobra kostenurka.\nZaeka iskal da se syztezava s kostenurkata.\nKostenurkata se syglasila.\nI pobedila zaeka.";
        writeText.clear();
        writeText.seekp(0);
        cerr<<"Creatin new File " <<endl<< "Restart the program " ;
        
    }
    
    string m_text;
    string m_word;
    
    while (readText >> m_word) {
        m_text.append(m_word + " ");
    }
    
    size_t m_position = m_text.find_first_of(".,?!-:();\"",0);
    
    while (m_position != string::npos) {
        m_text.replace(m_position, 1, "");
        m_position = m_text.find_first_of(".,?!-:();\"",m_position);
    }
    
    for (size_t i = 0 ; i < m_text.size(); i++) {
        char ch = m_text.at(i);
        ch = towlower(ch);
        m_text.at(i) = ch;
    }
    
    stringstream ss;
    ss.str(m_text);
    string wordFromFile;
    
    while (ss >> wordFromFile) {
        mapCountWord[wordFromFile]++;
    }
    
    for (map<string, int>::iterator it = mapCountWord.begin(); it != mapCountWord.end(); it++) {
        cout << it -> second <<":"<< it -> first<<endl;
    }
    
    
}

void Operation:: stlCountwordWithMapAndSortWithSet(){
    map<string , int > mapCountWord;
    set<string , less<string>> sortedWord;
    
    ifstream readText("text.txt" , ios::in);
    
    if(!readText)
    {
        ofstream writeText("text.txt" ,  ios::out);
        writeText<<"Imalo edno vreme edin zaek i edna dobra kostenurka.\nZaeka iskal da se syztezava s kostenurkata.\nKostenurkata se syglasila.\nI pobedila zaeka.";
        writeText.clear();
        writeText.seekp(0);
        cerr<<"Creatin new File " <<endl<< "Restart the program " ;
        
    }
    
    string m_text;
    string m_word;
    
    while (readText >> m_word) {
        m_text.append(m_word + " ");
    }
    
    size_t m_position = m_text.find_first_of(".,?!-:();\"",0);
    
    while (m_position != string::npos) {
        m_text.replace(m_position, 1, "");
        m_position = m_text.find_first_of(".,?!-:();\"",m_position);
    }
    
    for (size_t i = 0 ; i < m_text.size(); i++) {
        char ch = m_text.at(i);
        ch = towlower(ch);
        m_text.at(i) = ch;
    }
    
    stringstream ss;
    ss.str(m_text);
    string wordFromFile;
    
    while (ss >> wordFromFile) {
        mapCountWord[wordFromFile]++;
    }
    map<string, int>::iterator it;
    
    for (it = mapCountWord.begin(); it != mapCountWord.end(); it++) {
       // cout << it -> second <<":"<< it -> first<<endl;
    
    
    stringstream aa;
    stringstream bb;
    string       result;
    aa << it -> first;
    bb << it -> second;
    result.append(bb.str() + "->" + aa.str());
    sortedWord.insert(result);
    aa<<"";
    bb<<"";
    result = "";
    }
    for (set<string>::iterator it = sortedWord.begin(); it != sortedWord.end();it++) {
        cout<<*it<<endl;
     //   cout<<it->length()<<endl;
        
    }
}

void Operation::stlMapFunctionInsertRemoveRead(){
   map<string, int> mapTest;
    map<int , int>   intMapTest;

    ifstream readText("text.txt" , ios::in);
    
    if (!readText) {
        cerr <<"not found text";
    }
    else{
       cout <<"text is ok";
    }
    
    
    
  
    
    
    mapTest.insert({"rrtt" , 1});
    mapTest.insert({"ass" , 2});
    mapTest.insert({"hasai" , 3});
    mapTest["hi"] = 7654321;
    
    
    map<string , int> :: iterator it ;
    it = mapTest.find("hi");
    
    
    cout << it -> second;
    
    mapTest.erase(it);
    
    for (it = mapTest.begin(); it != mapTest.end(); it++) {
        cout << it -> first <<":"<<it -> second<<endl;
    }
    
    
//    
//    for (it = mapTest.begin(); it != mapTest.end(); it++) {
//        cout << it ->  first<<"++"<< it-> second<<endl;
//    }
}
void Operation::stlMajorantNumberInArrayMoreThenHalfTime(){
    int array[9] = {2, 2, 3, 3, 2, 3, 4, 3, 3};
    int counter = 0 ;
    int maxCointer = 0 ;
    int majorian;
    for (int i = 0 ; i < 9; i++) {
        for (int j = 0 ; j < 9; j++) {
            if (array[i] == array[j]) {
                counter++;
            }
        }
        if (maxCointer < counter) {
            maxCointer = counter;
            majorian = array[i];
        }
        counter = 0;
    }
    int arraySize = sizeof(array) / sizeof*array;         // razmer na masiva
   
    if ((arraySize / maxCointer) <= 2) {
        cout << "the majoriant number is " << majorian ;
        cout << "he repeated "<<maxCointer<<"tims in array";
    }
}

void Operation::stlLongestSubsequenceOfGreaterValues(){
    int size = 9;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 4};
    
    list<int> integers;
    
    integers.insert(integers.begin(), arr, arr + size);
    
    int counter = 1;
    int previous = arr[0];
    int current;
    int max = 0;
    
    int counterIter = 0;
    int counterIterHolder = 0;
    
    list<int>::const_iterator iter;
    for(iter = integers.begin(); iter != integers.end(); iter++)
    {
        counterIter++;
        current = *iter;
        
        if(current > previous)
        {
            counter++;
            if(counter > max)
            {
                max = counter;
                counterIterHolder = counterIter;
            }
            
        }
        
        else
        {
            counter = 1;
        }
        previous = current;
    }
    
    cout<<"The longest subsequence is: ";
    for(int i = counterIterHolder - max + 1 ; i < counterIterHolder; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}

void Operation::stlMostExistingNumberInArray(){
    int size = 9;
    int arr[] = {8, 2, 8, 4, 5, 6, 7, 8, 4};
    map<int , int> m_map;
    for (int i = 0 ; i < 9 ; i++) {
        m_map[arr[i]]++;
    }
     map<int , int> ::const_iterator it ;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout << it->first<<"->"<<it->second<<endl;
    }
    
}

void Operation::stlCountCharInStrngWithMap(){
    string m_str="The longest subsequence is: ";
    map<char , int> m_map;
    
    for (int i = 0  ; i < m_str.length() ; i++) {
    
   // for(char i : m_str){                    // for za obhojdane na string po charove
   //     cout<<i;
        cout << m_str[i];
        m_map[m_str[i]]++;
    
    }
    
    map<char , int> ::const_iterator it ;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout << it->first<<"->"<<it->second<<endl;
    }
    
    
}

void Operation::stlReverseSentences(){
    string seintences;
    cout << "enter text " << endl;
    getline(cin , seintences);
    
    stringstream ss;
    ss.str(seintences);
    string wordFromFile;
    
    vector<string> m_vec;
    
    while (ss >> wordFromFile)
    {
         m_vec.push_back(wordFromFile);
    }
    
    vector<string>::const_iterator it ;
    
    for ( it = m_vec.begin(); it != m_vec.end(); it++) {
      //  cout << *it<<" ";
    }
    
    vector<string>::const_reverse_iterator iter;
    
    for (iter = m_vec.rbegin();iter != m_vec.rend(); iter++) {
        cout << *iter<<" ";
    }
    

}

void Operation::stlFindAllEvenNumbers(){
    int numbers;
    cout << "enter numbers " << endl;
    
    vector<int> v_vec;
    while (numbers != -1) {
        cin >> numbers;
        v_vec.push_back(numbers);
    }
    
    vector<int>::const_iterator it ;
    for (it = v_vec.begin() ; it < v_vec.end(); it++) {
        if ((*it%2)==0){
            v_vec.erase(it);
        }
    }
    
    for (it = v_vec.begin(); it < v_vec.end(); it++) {
        cout << *it << " ";
    }
    
}
void Operation::stlIztrivaneNaChisloKoetoSeSydyrjaTolkovaPytiKatoVkaranotoChislo(){
    int number;
    cout<<"enter number";
    cin >> number;
    
    int size = 9;
    int arr[] = {8, 2, 8, 4, 5, 6, 7, 8, 4};
    map<int , int> m_map;
    for (int i = 0 ; i < 9 ; i++) {
        m_map[arr[i]]++;
    }
    map<int , int> ::const_iterator it ;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout << it->first<<"->"<<it->second<<endl;
        if (it -> second == number) {
            m_map.erase(it);
        }
    }
    cout<<"-------------"<<endl;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout<< it -> first<<"->"<<it -> second<<endl;
    }
    
    
}

void Operation:: stlIztrivaneNaDumaKqtoSeSydyjaNechetenBroiPyti(){
    string text;
    string word;
    cout  << "enter text " <<endl;
    getline(cin , text);
    cout << "enter word for erase " << endl;
    getline(cin , word);
    
    map<string, int> m_map;
    
    stringstream ss;
    ss.str(text);
    string wordFromFile;
    
    while (ss >> wordFromFile)
    {
        m_map[wordFromFile]++;
    }
    
    
    map<string , int> :: const_iterator it ;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        if (it -> first == word && (it ->second %2) != 0 ) {
            m_map.erase(it);
        }
    }
    
    
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout<<it->first <<"->"<< it -> second;
    }
    
    
}

void Operation:: Test(){
    string text;
    cout << "Enter text : " << endl ;
    getline(cin , text);
    map<string , int , greater<string>  > m_map;       // map with auto sorting //
    stringstream ss ;
    ss.str(text);
    string wordFromFile;
    while (ss >> wordFromFile) {
        m_map[wordFromFile]++;         // napylvame mapa s otdelni dumi//
    }
    
    map<string , int > ::const_iterator it ;
    for (it = m_map.begin(); it != m_map.end(); it++) {
        if (it -> second % 2 == 0) {
            m_map.erase(it);
        }
    }
    
    for (it = m_map.begin(); it != m_map.end(); it ++){
        cout<<it -> first <<"->"<< it ->second<<endl;
    }
    
    map <string, int>::reverse_iterator itr;
    for (itr = m_map.rbegin(); itr != m_map.rend(); itr++) {
        cout << itr->first<<" ";
    }
    

}

void Operation:: TestNumbers(){
    int numbers;
    multimap<int , int , greater<int>> m_map;
    int i = 1;
    cout << "enter numbers : " ;
   while (numbers != -1) {
       
    
       
        cin >> numbers;
       if (numbers != -1) {
           m_map.insert({numbers,i});
           //m_map[numbers]=i;
           i++;
       }
       
       
    }
    map<int,int> maps;
    multimap<int , int>::const_iterator it ;
    map<int , int>::const_iterator itr;
    
    for (it = m_map.begin(); it != m_map.end(); it++) {
        cout << it -> first <<"->"<<it -> second<<endl;
        maps[it->first]++;                    //vkaranite chisla//
        
    }
    
    cout <<"----------------"<<endl;
    for (itr = maps.begin(); itr != maps.end(); itr++) {
       // cout << itr -> first <<"->"<< itr -> second<<endl;
        if (itr->second == 3) {
            maps.erase(itr);
        }
    }
    
    for (itr = maps.begin(); itr != maps.end(); itr++) {
        cout <<itr -> first <<"->"<<itr->second<<endl;
    }
    
    
    
    
  

//    mapTest.insert({"hasai" , 3});
//    mapTest["hi"] = 7654321;
    
    
    
}



    Operation op1;
