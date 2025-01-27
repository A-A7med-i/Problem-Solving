#include <iostream>

using namespace std;



int main(){
    int test;cin>>test;

    while (test--){
        int sz;cin>>sz;
        int num;

        int numbers[sz];

        for (size_t i = 0; i < sz; i++){
            cin>>numbers[i];

            cout<<numbers[i]<<" ";    
        }


        int idx = 0 , zdx = 0 , mx;

        while (true){

            if(zdx == sz-1){
                break;
            }

            if(idx == zdx){
                mx = max(numbers[idx] , numbers[idx+1]);
            }

            else{
                mx = max(mx , numbers[idx+1]);
            }
            
            cout<<mx<<" ";
            idx++;

            if(idx == sz-1){
                zdx++;
                idx = zdx;
            }

        }
        cout<<endl;
    }
    
}