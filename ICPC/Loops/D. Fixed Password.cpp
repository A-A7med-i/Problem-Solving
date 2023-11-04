#include <iostream>
using namespace std;

int main(){
  int password=1999;
  int guess;
  while(true){
    cin>>guess;
    if(guess==password){
      cout<<"Correct"<<"\n";
      break;
    }
    else{
      cout<<"Wrong"<<"\n";
    }
  }
}