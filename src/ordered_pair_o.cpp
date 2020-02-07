#include "database_class.cpp"

template<class T1, class T2 >
bool ordered_pair(vector<T1> first,vector<T2> second  ){
   vector<int>X;
    for(int i = 0; i<first.size();i++){
        X.push_back(first[i]);
        
    }
    for(int i = 0; i<second.size();i++){
        X.push_back(second[i]);
    }
    cout<<"(    ";
    for(int i = 0;i<X.size(); i++){
        cout<<X[i]<<"   " ;
    }
    cout<<")"<<endl;
   // return X;
}
int main(){
    int n;
    vector<int>X, Y;
    
    cout<<"Enter first element:     ";
    cin>>n;
    X.push_back(n);

    cout<<"Enter second element:     ";
    cin>>n;
    Y.push_back(n);
     
    
    ordered_pair(X,Y);
}