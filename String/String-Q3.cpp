#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
  string password;
  cin>>password;
  int upper = 0,lower = 0,digit=0,special=0;
  for(char ch:password){
    if(isupper(ch)) upper++;
    else if (islower(ch)) lower++;
    else if (isdigit(ch)) digit++;
    else if(ispunct(ch)) special++;
  }
  cout<< upper <<" " << lower << " " << digit << " " << special << endl;
  return 0;
}