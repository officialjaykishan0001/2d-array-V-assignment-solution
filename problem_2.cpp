#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"enter the value of m : ";
    cin>>m;

    vector<vector<int>> a(n,vector<int> (m));

    cout<<endl<<"enter the elements of the 2d array  : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cin>>a[i][j];
        }
    }

    //evaluating  the prefix sum of the rows

    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j<a[i].size();j++)
        {
            a[i][j] = a[i][j-1]+a[i][j];
        }
    }

    //printing the prefix sum of the rows.
    cout<<endl<<"the prefix sum of the rows : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    //evaluating the prefix sum of the colums .

    for(int i=1;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            a[i][j] = a[i-1][j] + a[i][j];
        }
    }

    //printing the prefix of the colums and also this is our final answer . .
    cout<<endl<<"the final answer is : "<<endl;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}