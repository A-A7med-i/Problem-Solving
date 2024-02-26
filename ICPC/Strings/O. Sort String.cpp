#include <iostream>
using namespace std;


int main(){
    int size; cin >> size;

    int array[26] = {0};

    for(int i = 0;i < size; i++){
      char c; cin >> c;
      array[int(c)-97]++;
    }

    for(int i = 0; i < 26; i++){

      while(array[i] != 0){
        cout << char(i + 97);
        array[i]--;
      }
      
    }


    return 0;
}