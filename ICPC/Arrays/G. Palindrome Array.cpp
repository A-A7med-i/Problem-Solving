#include <iostream>
using namespace std;

int ispalindrome(long long n,long long numbers[]){
  for(int i=0;i<n;i++){
    cin>>numbers[i];
  }
  int j=0;
  int count =n-1;
  while(count>j){
    if(numbers[j]!=numbers[count]){
      return false;
    }
    j++;
    count--;
  }
    return true;
}


int main(){
  long long n;
  cin>>n;
  long long numbers[n];
  bool is_palindrome=ispalindrome(n,numbers);
  if(is_palindrome){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}