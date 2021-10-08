#include<iostream>

using namespace std;

int main(){

  int savings;
  cin>>savings;

  if (savings>5000){
      if (savings>10000){
          cout<<("shopping with neha");
      }else{
          cout<<("Roadtrip with neha ");
      }

  } else if ( savings<100){
      cout<<("pooja\n");
  }

  else{
      cout<<("friends\n");
  }
  return 0; 

}