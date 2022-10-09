/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

bool rotation(string s1, string s2){
    if(s1.size()!=s2.size())
    return false;
    
    int size=s1.size();
    int index=0;
    for(int i=0; i<size; i++){
        if(s1[0]==s2[i])
        {
            index=i;
            break;
        }
    }
    int count=0;
    for(int i=0; i<size; i++){
        count=0;
        if(s1[i]!=s2[(index+i)%size])
        return false;
        else
        count++;
    }
    
    if(count!=0)
    return true;
    else
    return false;
}

int main()
{
    string s1="ABCD";
    string s2="CDAB";
    
    cout<<rotation(s1, s2);

    return 0;
}
