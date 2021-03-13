#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> NhapMang(int n)
{
    vector <int> M;
    int a;
    for (int i=0;i<n;i++)
    {
        cin >>a;
        M.push_back(a);
    }
    return M;
}
int main() {
    int n;
    cin >>n;
    vector<int> A=NhapMang(n);

    vector<int> B=NhapMang(n+1);

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int j=n;
    for (int i=0;i<n+1;i++)
    {
        if (A[i]!=B[i])
        {
            j=i;
            break;
        }
    }
    cout <<B[j];
    return 0;
}
