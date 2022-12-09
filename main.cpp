#include <iostream>
#include "lib.h"
using namespace std;

int main(){
   int a=0;
    cin>>a;
    if (converti_lettera(a)){
        cout<<a<<endl;
    }else{
        cout<<"errore"<<endl;
    }
  return 0;
}
