#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="kkkkkkkkt";
string s2="kkk";
int m=s.length();
int n=s2.length();
int count[256]={0},count2[256]={0};
int c=0;
for(int i=0;i<n;i++)
{   count[s[i]]++;
    count2[s2[i]]++;
}
int flag=0;
for(int i=n;i<m+1;i++)
{
    flag=0;
    for(int j=0;j<255;j++)
    {   
        if(count[j]==count2[j])
    {
        flag=1;
        continue;
    }
    else
    {
        flag=0;
        break;
    }
    }
    
if(flag)
    c++;
 if(i<m)
{
     count[s[i]]++;
    count[s[i-n]]--;

}


   
    }
    cout<<"No of anagrams: "<<c;
    
    
}