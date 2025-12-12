#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  float a;
  cin>>a;
  cout<<int(a)<<endl;
  cout<<fixed<<setprecision(1)<<ceil(a)<<endl;
  cout<<fixed<<setprecision(1)<<floor(a)<<endl;
}