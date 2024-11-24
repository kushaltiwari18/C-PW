#include<iostream>


void first_last_idx(std::string s, char ch, int *first, int *last){

    for(int i=0; i<s.size(); i++){
        if(s[i] == ch){
            *first = i;
            break;
        }
    }

    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == ch){
            *last = i;
            break;
        }
    }
}

int main(){

    std::string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    first_last_idx(s, ch, pf, pl);

    std::cout<<*pf<<" "<<*pl<<"\n";
    std::cout<<first<<" "<<last<<"\n";

    return 0;
}