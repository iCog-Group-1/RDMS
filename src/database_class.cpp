#include "../include/header.h"
//#include <boost/filesystem.hpp>
set<vector<string>> database;

template <class T>
bool RDatabase<T>:: create_Database (T name)
{
   cout<<"The name of database is:"<<name<<endl;
   
};

template <class T>
bool RDatabase<T>::create_Table(T name,vector<T>attribute ){
int n;

cout<<"Enter the size of attributes:  ";
cin>>n;
   
for(int i = 0; i<3; i++){
//enter the name, attribute, value for the table
  cin>>name;
  attribute.push_back(name);
  //set<vector<string>> table;
  //table.insert(name);
  }
  //database.insert(pair<string, set<vector<string>>> (name, table));

};
 
string value;
template <class T>
bool RDatabase<T>::create_Table_populated( set<T> &n_tuple){

cout<<endl<<"Populated the table with your data:  ";
for(int i=0; i<3; i++){
  cin>>value;
  n_tuple.insert(value);
}}

 



