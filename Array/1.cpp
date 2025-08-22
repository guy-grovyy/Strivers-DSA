#include<iostream>
#include<vector>
using namespace std;

class Largest{
    public:
    int largestElement(vector<int> &arr){
        int largest = arr[0];
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;

    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i  =0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    Largest l;
    int x = l.largestElement(arr);
    cout<<x;
}
