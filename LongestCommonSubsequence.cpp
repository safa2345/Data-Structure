#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1,string &s2,string &s3,int i,int  j,int k){


    if(i==0 || j==0 || k==0){
        return 0;
    }

if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){

    return 1+lcs(s1,s2,s3,i-1,j-1,k-1);



}

int l=lcs(s1,s2,s3,i-1,j,k);
int r=lcs(s1,s2,s3,i,j-1,k);
int p=lcs(s1,s2,s3,i,j,k-1);
return max({l,r,p});



}

int main(){

string s1,s2,s3;
cin>>s1>>s2>>s3;
cout<<lcs(s1,s2,s3,s1.size(),s2.size(),s3.size());

return 0;






}
