#include <iostream>
#include <stack>

using namespace std;

int main(){

    int sz; cin >> sz;

    string str; cin >> str;

    stack <char> s;

    s.push(str[0]);
  
    for (size_t i = 0; i < sz; i++){
        if (s.top() != str[i]) s.push(str[i]);
    }

    cout << s.size() <<endl;

    return 0;
}