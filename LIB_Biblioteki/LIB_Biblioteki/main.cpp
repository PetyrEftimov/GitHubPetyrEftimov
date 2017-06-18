#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <vector>


using namespace std;

int main()
{
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
    
    
//    
//        std::map<int, int, std::less<int> > counters;
//        std::map<int, int>::iterator it;
//    
//        int array[] = {2,5,79,66,55,2,66,5,66,1};
//        for (int i  = 0 ; i < 10; i++) {
//            int key = array[i];
//            it =  counters.find(key);
//            if (it != counters.end()) {
//             // ima - takova chislo v map-a//
//                counters[key]++;
//            }
//            else{
//                // nqma takova chislo v map-a//
//                counters[key] = 1 ;
//            }
//    
//        }
//        cout << "Number" <<"\t" << "Document"<< endl ;
//        for (it = counters.begin(); it != counters.end(); it++) {
//            cout << it -> first <<  "\t   " << it->second << endl ;
//        }
    
//    map<int, int, std::less<int> > counters;
//    map<int, int>::iterator it;
//    int array[] = {2,5,79,66,55,2,66,5,66,1};
//    vector<int>vectors(&array[0], &array[0]+10);
//    vector<int>::iterator itv;
//    //vector<int> vectors;
//    
//    for (size_t i = 0 ; i < vectors.size(); i++) {
//        int key = vectors[i];
//        it = counters.find(key);
//        if (it != counters.end()) {
//            counters[key]++;
//        }
//        else{
//            counters[key]= 1;
//        }
//    }
//    for (it = counters.begin(); it != counters.end(); it++) {
//        cout << it -> first << " \t " << it -> second << endl ;
//        
//    }
//    for (int i = 0 ; i < vectors.size(); i++) {
//        if (counters[vectors[i]] % 2 != 0) {
//            vectors.erase(vectors.begin()+ i);
//            i--;
//        }
//    }
//    
//    for (unsigned int i  = 0; i < vectors.size(); i++) {
//        cout << vectors.at(i)<< "  ";
//    }
//    
//    
//    
//    
    
    
    
    
    
    
    return 0;
}
