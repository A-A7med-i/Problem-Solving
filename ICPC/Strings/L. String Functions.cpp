#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

  int size, query; cin >> size >> query;

  string value; cin >> value;

  string qu;

  int scope1, scope2;

  while(query--){
    cin >> qu;

    if(qu == "pop_back"){
      value.pop_back();
    } 
    
    else if (qu == "front"){
      cout << value.front() << endl;
    } 
    
    else if (qu == "back"){
      cout << value.back() << endl;
    }
    
    else if (qu == "sort"){ 
      cin >> scope1 >> scope2;

      sort(value.begin() + min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));

    }
    
    else if (qu == "reverse"){
      cin >> scope1 >> scope2;

      reverse(value.begin()+ min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));

    } 
    
    else if (qu == "print"){
      int pos ;cin >> pos;

      cout << value[pos - 1] << endl;

    }
    
    else if (qu == "substr"){
      cin >> scope1 >> scope2;

      for(int i = min(scope1, scope2) - 1;i <= max(scope1, scope2) - 1; i++){
        cout<<value[i];
      }

      cout<<endl;

    }
    
    else {
      char c; cin >> c;

      value.push_back(c);

    }

  }

  return 0;
}