#include <iostream>

using namespace std;


int main(){
  
    long long a,b;
    string s;
    cin>>a>>b>>s;

    bool valid=true;

    if(s.size()!=a+b+1){
      valid=false;
    }

    else if(s[a]!='-'){
      valid=false;
    }

    else{
      for(int i = 0; i < s.size(); i++){
        if(a != i && !isdigit(s[i])){
          valid=false;
          break;
        }
      }
    }

    cout<<(valid ? "Yes" : "No");

    return 0;
}