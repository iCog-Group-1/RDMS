#include "../include/header.h"

template<class T >
class n_tuples{
    private:
    public:
        set<T>get_first(set<T>tuple);
             
        set<set<T>>get_second(set<set<T>>tuple);
             
    
        };
template<class T> 
set<T>get_first(set<T>tuple){
      for(auto itr2 = tuple.begin(); itr2 != tuple.end(); ++itr2){
          
       //  cout <<"\n\t\t-----------------------------------------------\n";
      }

} 
template<class T> 
set<set<T>>get_second(set<set<T>>tuple){
set<string> first;

for( auto itr2 = tuple.begin(); itr2 != tuple.end(); itr2++){
          
          for(auto  itr3 = itr2->begin(); itr3 != itr2->end(); itr3++){
           //  get_first(first.insert(*itr3));
            cout << "\t\t" << *itr3 << "\t";
          }
           cout <<"\n\t\t----------------------------------------------\n";
      }
       get_first();
    //return get_second();
}
 
int main(){
    set<set<string>>tuple;
    
    set<string> first,second;
    string value1, value2;
    //for(int i=0;i<3; i++){
      cout<<"Enter the first element of the pair: ";
         cin>>value1;
         first.insert(value1);
      cout<<"Enter the second element of the pair: ";
        cin>>value2;
        second.insert(value2);
    //}
   
    
     

    tuple.insert(first);
    tuple.insert(second);

   // get_first(tuple);
    get_second(tuple);
   
}