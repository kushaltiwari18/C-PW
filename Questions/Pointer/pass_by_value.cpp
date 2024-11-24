#include<iostream>

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){

    int x = 10;
    int y = 20;

    swap(x, y);
    std::cout<<x<<" "<<y;
    
    return 0;
}