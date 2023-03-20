#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of rows : ";
    cin>>n;
    cout<<"enter the no of colums : ";
    cin>>m;

    vector<vector<int>> a(n,vector<int> (m));

    cout<<endl<<"enter the elements of the vector : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<endl;
    cout<<"entered 2d array is : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<"the needed matrix is : "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==1)
            {
                sum += a[i][i];
                break;
            }
            else{
                sum += a[i][j];
            }
        }


    }

    cout<<"the sum is : "<<(sum)<<endl;
    return 0;
}