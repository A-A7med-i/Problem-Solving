#include <iostream>
using namespace std;

int main(){
  char s;
  long long n;
  cin>>s>>n;
  for(int i=1;i<=n;i++){
    long long number;
    cin>>number;
    if(s=='+'){
      for(int j=1;j<=number;j++){
        cout<<'+';
      }
      cout<<"\n";
    }

    else if(s=='-'){
      for(int k=1;k<=number;k++){
        cout<<'-';
      }
      cout<<"\n";
    }

    else if(s=='*'){
      for(int l=1;l<=number;l++){
        cout<<'*';
      }
      cout<<"\n";
    }

    else if(s=='/'){
      for(int m=1;m<=number;m++){
        cout<<'/';
      }
      cout<<"\n";
    }


  }
}