#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of the rows : ";
    cin>>n;
    cout<<"enter the no of the colums : ";
    cin>>m;

    vector<vector<int>> a(n,vector<int> (m));

    cout<<endl<<"enter the elements of the matrix  :"<<endl;
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cin>>a[i][j];
        }
    }

    //finding the prefix sum of rows.
    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j<a[i].size();j++)
        {
            a[i][j] = a[i][j-1] + a[i][j];
        }
    }

    //printing the prefix sum of the rows .

    cout<<"the prefix sum along its rows is : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }


    int max_sum = a[0][0];

    for(int i=0;i<a.size();i++)
    {
        for(int j=a[i].size()-1;j<a[i].size();j++)
        {
            if(a[i][j]>max_sum)
            {
                max_sum = a[i][j];
            }
        }
    }


    cout<<endl<<"the max sum is : "<<(max_sum)<<endl;

    return 0;


}