#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,str3="and";
    int k, MAX, MAX1,i,j,m;

    getline(std::cin, s);
    //s = "hello and he";

    for (k = 0; s[k] != '\0'; ++k)
	MAX = k;
	cout<<"MAX="<< MAX<<endl;

	size_t found = s.find(str3);
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;
    found +=5;
    cout<<found<<endl;

    string str2 = s.substr (found,(MAX));
    cout<<str2<<endl;

    string str4= s.substr(0, (found-5));
    cout<<str4<<endl;

    for (m = 0; str2[m] != '\0'; ++m)
	MAX1 = m;
	cout<<"MAX1="<< MAX1<<endl;

    /*char c = str2[0];
    char c1 = str2[1];
    char c2 = str2[2];*/

    /*str4.erase(remove(str4.begin(), str4.end(), c), str4.end());
    str4.erase(remove(str4.begin(), str4.end(), c1), str4.end());
    str4.erase(std::remove(str4.begin(), str4.end(), c2), str4.end());*/
    for(i=0;i<MAX1;i++)
    {
        char c=str2[i];
        str4.erase(remove(str4.begin(), str4.end(), c), str4.end());
    }



    /*for(i=0;i<2;i++)
    {
        for(j=0;i<MAX;j++)
        {
            if(str2[i]==s[j])
                {
                    s.erase(j-1);
                }
        }
    }*/

    cout<<endl<<str4;



}
