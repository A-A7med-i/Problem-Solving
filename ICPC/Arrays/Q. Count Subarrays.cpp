#include <iostream>
using namespace std;

int main() {
  int test;cin>>test;
  while(test--){
    int size;cin>>size;

    int numbers[size];

    for(int i = 0; i < size; i++){

      cin>>numbers[i];
      
    }


    int count = 0;

    for(int i = 0; i < size; i++){

      int j = i;

      while(numbers[j] <= numbers[j+1] && j < size-1){

        j++;

      }

      count+=(j-i+1);
    }

    cout<<count<<endl;

  }

  return 0;
}