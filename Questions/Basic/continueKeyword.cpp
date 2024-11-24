#include<iostream>
using namespace std;

int main(){

    int i=1;
    while(i<=6){
        if(i==3){
            i++;
        continue;
        
        } 
        cout<<i<<endl;
        i++;
        
    }
    
    return 0;
}