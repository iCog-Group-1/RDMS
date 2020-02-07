#include <iostream>
#include <vector>
#include <string>
#include <set>
using std::vector;
using std::set;
using namespace std;

template <class T>
class RDatabase{
   

    private:
             int name;
             
    public:
       bool create_Database(T name);
       bool create_Table(T name,vector<T>attribute );
       bool create_Table_populated( set<T> &n_tuple );
};


 

 