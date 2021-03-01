#include <iostream>

using namespace std;
string reverse(string n)
{
    for (int i=0;i<n.length();i++)
    {
        char tmp=n[0];
        n[0]=n[n.length()-1];
        n[n.length()-1]=tmp;
    }
    return n;
}
int main ()
{
    int n;
    cin >>n;
    string M[n];
    for (int i=0;i<n;i++)
    {
        cin >>M[i];


    }
    int k;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {

            if (M[i]==reverse(M[j]))
            {
                k=i;
            }
        }
    }
    cout <<M[k].length()<<" "<<M[k][M[k].length()/2];
    return 0;


}
