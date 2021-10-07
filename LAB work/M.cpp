#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[105],ch2[105];
    scanf ("%s" ,ch);
    int j=0,i;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]!='+'){
            st[j]=ch[i];
            j++;
        }
    }
    for (i=0;i<j;j++)
    {
        sort (st, st+j);
        if(i==j)
            printf("%c",ch[j]);
        elseprintf("%c",ch[i]);
    }

