//This code is to cheak weather an array is sorted or not
#include<iostream>
#include<vector>
using namespace std;

class Cheak_Sort{
    public:
    bool cheak(vector<int> &ok)
    {
        for(int i =1;i<ok.size();i++)
        {
            if(ok[i-1]<ok[i]){
                continue;
            }else{
                return false;
            }
        }
        return true;
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
    Cheak_Sort cs;
    bool result = cs.cheak(arr);
    if(result)
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";
    cout<<"End"<<endl;
    
}
