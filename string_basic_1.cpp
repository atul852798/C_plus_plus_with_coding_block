#include<iostream>
using namespace std;

int main()
{
    char a[100][200];

    int n;
    cin>>n;

    cin.get();

    for(int i=0;i<n;++i)
        cin.getline(a[i],200);

    for(int i=0;i<n;++i)
        cout<<a[i]<<endl;

    return 0;
}
