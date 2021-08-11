#include <iostream>
#include "stdio.h"
#include <utility>
#include <vector>

#define mp make_pair

using namespace std;



int checkx(vector<pair<double,double>> vp){


  return 0;
}

int main(int argc, char const *argv[]) {

  vector<pair<double,double>> vp;

  //for (int i = 0; i < 3; i++) {
   for (int i=0; i<3; i++){
     double a,b;
     cin>>a>>b;
     vp.push_back( mp(a,b) );
    }
    checkx(vp);

  //}
  return 0;
}
