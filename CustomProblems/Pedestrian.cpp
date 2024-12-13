//
// Created by User on 12/13/2024.
//



#include <bits/stdc++.h>

using namespace std;

// if the fact >= 1000 then print the fact until that loop
int main(){

    int d,c,b,e,w;

    cin>>d>>c>>b>>e>>w;
    int energyUsed = 0;

    while(w>0 && d-b>0) {
        d -= b; //by bus
        if(d-e>0) {
            d-=e;
            energyUsed+=e;
        }else {
            energyUsed+=d;
            d=0;
        }
        w-=c;
    }

    if(w<=0&&d>0) {
        energyUsed = -1;
        cout<<energyUsed;
    }else {
        cout<<energyUsed;
    }


    return 0;
}