#include<iostream>
#include <vector>
#include <map>
#include "algorithm"
#define ll long long
using namespace std;
int main()
{
    char c='*';
    ll min=-100000000000000;
    string s;
    bool flag=false;
    cin>>s;
    map<char,int>ch;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'||s[i]=='7'){
            ch[(s[i])]++;
        }
    }
    for(auto it=ch.begin();it!=ch.end();it++){
        if(it->second>min){
            c=it->first;
            min=it->second;
        }
        else if(min==it->second){
            c='*';
            flag=false;
        }
    }

    if(c=='*'){
        c='9';
        for(auto it=ch.begin();it!=ch.end();it++){
            if(it->first<c){
                c=it->first;
            }
        }
    }
    if(c=='4'||c=='7'){
        cout<<c<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}