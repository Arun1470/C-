#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string rio;
  cin>>rio;
  reverse(rio.begin(),rio.end());
  cout<<"The reversed String is "<<rio<<"."<<endl;
}