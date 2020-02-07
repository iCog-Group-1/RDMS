#include "query_parsing.cpp"

typedef RDatabase<string> Database;
int main(int argc, char const *argv[]){
    Database data;
    vector<string>attribute;
    set<string>n_tuple;
    string name;
    string column;

    cout<<"Enter the name of database:  " ;
    cin>>name;
    data.create_Database(name);
    
    //cout<<"Enter the name of the table: ";
    //cin>>name;
    display_query_syntax();
    bool terminate = false;
    while(!terminate){
      string input_query;
      cout << "Enter query: ";
      getline(cin, input_query);
      if (input_query == "quite" || input_query == "q"){
        terminate = true;
      }else{
        query(input_query);
      }
  }
    //data.create_Table(name, attribute);
    data.create_Table_populated(n_tuple);
    
}