//Find the second largest element without sorting
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class Slar{
    public:
    int second_largest(vector<int> &x)
    {
        int largest = INT_MIN;
        int sec = INT_MIN;
        for(int i = 1; i<x.size();i++)
        {
            if(x[i]>largest)
            {
                sec = largest;
                largest = x[i];
            }else if(x[i]>sec && x[i]!= largest){
                sec = x[i];
            }
        }
        return sec;
    }
    int second_smol(vector<int> &y)
    {
        int smol = INT_MAX;
        int sec_smol = INT_MAX;
        for(int i = 1;i<y.size();i++)
        {
            if(y[i]<smol)
            {
                sec_smol = smol;
                smol = y[i];
            }else if(y[i]< sec_smol && y[i] != smol)
            {
                sec_smol = y[i];
            }
        }
        return sec_smol;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    Slar s;
    int result = s.second_largest(arr);
    cout<<"Second Largest element is: "<<result<<endl;
    result = s.second_smol(arr);
    cout<<"Second Smallest element is: "<<result;
}