#include <iostream>
using namespace std;

string Encryption(string text)
{
  string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string encryption_text = "";

  for (char s : text)
  {
    int index = original.find(s);
    encryption_text += key[index];
  }

  return encryption_text;
}

string Decryption(string text)
{
  string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string decryption_text = "";

  for (char s : text)
  {
    int index = key.find(s);
    decryption_text += original[index];
  }

  return decryption_text;
}

int main()
{
  int q;
  cin >> q;
  string s;
  cin >> s;

  if (q == 1)
  {
    string text = Encryption(s);
    cout << text;
  }

  else
  {
    string text = Decryption(s);
    cout << text;
  }

  return 0;
}