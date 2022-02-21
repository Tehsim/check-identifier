#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    int i=1,c;

    cout<<" Enter an identifier: ";
    getline(cin,s);

    if(isalpha(s[0]) || s[0]=='_')
    {
        c=1;
    }

    while(s[i]!='\0')
    {
        if(!isdigit(s[i]) && !isalpha(s[i]) || s[i]==' ')
        {
            c=0;
            break;
        }

        i++;
    }

    if(c==1)
    {
        cout<<endl<<" Valid identifier"<<endl;
    }
    else
    {
        cout<<endl<<" Not a Valid identifier"<<endl;
    }

    return 0;

}
