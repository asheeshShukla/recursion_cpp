#include<iostream>
using namespace std;
//using recursion
void rev(string &str,int start,int end){
    if(start>=end)//base condition
        return ;

char c=str[start];
str[start]=str[end];
str[end]=c;
rev(str,start+1,end-1);
    
}
int main(){
string str="rohit";
rev(str,0,4);
cout<<str<<endl;
}