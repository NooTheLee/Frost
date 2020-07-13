#include <stdio.h>
#include <iostream>

using namespace std;
int Test(string str)
{
    string s1,s2;
    int k1=0,k2=0,dem=0,dem2=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==32)
        {
            k1++;
        }
        if(k1>=5)
        {
            s1[dem]=str[i+1];
            dem++;
            if(str[i+2]=='/')
            {
                break;
            }
        }
        
    }

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==32)
        {
            k2++;
        }
        if(k2>=10)
        {
            s2[dem2]=str[i+1];
            dem2++;
            if(str[i+2]==32)
            {
                break;
            }
        }
    }
    char ch[15]={'l','q','r','t','p','s','d','g','h','k','x','c','b','n','m'};
    int bg1=0,bg2=0;
    for(int i=0;i<dem;i++)
    {
        for(int j=0;j<14;j++)
        {
            if(s1[i]==ch[j])
            {
                bg1++;
            }
        }
    }
    for(int i=0;i<dem2;i++)
    {
        for(int j=0;j<14;j++)
        {
            if(s2[i]==ch[j])
            {
                bg2++;
            }
        }
    }
    int check=1;
    for(int i=bg1;i<dem;i++)
    {
        //cout << "s1=" << s1[i] <<endl;
        for(int j=bg2+i-bg1;j<dem2;j++)
        {
            //cout << "s2=" << s2[j];
            if(s1[i]!=s2[j])
            {
                check=0;
            }
            break;
        }
    }
    return check;
}
main()
{
    int a;
    cin >> a;
    int so[a];
    fflush(stdin);
    string str;
    for(int i=0;i<a;i++)
    {
        getline(cin,str);
        /*for(int j=0;j<str.length();j++)
        {
            cout << str[j];
        }
        //cout << endl;*/
        so[i]=Test(str);
        //cout << i << " " << so[i];
    }
    for(int i=0;i<a;i++)
    {
        if(so[i]==1)
        {
            cout << "TRUE" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }
    }
}