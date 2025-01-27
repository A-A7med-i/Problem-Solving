#include <iostream>
#include <cmath>
using namespace std;

int main(){
int A,B;
cin>>A>>B;
cout<<"floor "<<A<<" / "<<B<<" = "<<floor(static_cast<double>(A) / B)<<endl;
cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(static_cast<double>(A) / B)<<endl;
cout<<"round "<<A<<" / "<<B<<" = "<<round(static_cast<double>(A) / B)<<endl;
}