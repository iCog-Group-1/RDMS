#include <iostream>
#include <string>
#include <vector>
#include "database_class.cpp"
#include "utility.cpp"

using namespace std;
typedef RDatabase<string> Database;
void create_query(vector<string> query_segment){
  Database data;
  string table_name = query_segment[2];
  cout << "\t\t =========created " + table_name + "=======" << endl;
  string sub_separator = "comma";
  vector<string> sub_query_segment = parse_query(query_segment[3], sub_separator);
  data.create_Table(table_name, sub_query_segment);
  //show_table(table_name);
}

void query(string query){
  string separator = "space";
  vector<string> query_segment = parse_query(query, separator);
  int query_lenght = query_segment.size();
  if ( query_lenght == 0){
      cout << "No query entered, Enter valued query" << endl;
  // 1 - creation queries
  }else if (query_segment[0] == "create") {
      if (query_lenght < 4){
        cout << "\t\t invalid create table query, Enter valued query \n";
      }else{
        create_query(query_segment);
      }
  
  } 
   }

