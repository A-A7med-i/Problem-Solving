#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;


int binarySearch(int n, int q, vector <ll> numbers){

  for(int i = 0; i < n; ++i){

    ll num;cin>>num;
    numbers.push_back(num);

  }

  sort(numbers.begin(),numbers.end());


  while (q--)
  {

    ll number;cin>>number;

    int start=0;

    int end=numbers.size()-1;

    bool found=false;

    while( start <= end ){

      int mid = (start+end)/2;

      if(number == numbers[mid]){
        found=true;
        break;
      }

      else if(number < numbers[mid]){
        end=mid-1;
      }

      else if(number > numbers[mid]){
        start=mid+1;
      }

    }

    if(found){
      cout<<"found\n";
    }

    else{
      cout<<"not found\n";
    }

  }


  return 0;
}



int main(){

  int n,q;cin>>n>>q;

  vector<ll>numbers;

  binarySearch(n,q,numbers);


  return 0;

}