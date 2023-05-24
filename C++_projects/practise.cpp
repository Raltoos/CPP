#include <iostream>
#include <vector>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    vector<int> nums1(m+n);
    vector<int> nums2(n);

    for(int i = 0; i < m+n; i++){
        int element;
        cout<<"> ";
        cin>>element;
        nums1.push_back(element);
    }cout<<"**************"<<endl;
    for(int i = 0; i < n; i++){
        int element;
        cout<<"> ";
        cin>>element;
        nums1.push_back(element);
    }cout<<"**************"<<endl;

    cout<<nums1.size()<<endl;
    cout<<m<<" "<<n<<endl;

    nums1[3] = nums2[0];
    nums1[4] = nums2[1];

    // int counter = 0;
    // for(int i = m; i < m+n; i++){
    //     nums1[i] = nums2[counter];

    //     // int temp = nums1[i];
    //     // int r = i - 1;
    //     // while(nums1[r] > nums1[i]){
    //     //     nums1[r+1] = nums1[r];
    //     //     r--;
    //     // }
    //     // nums1[r+1] = temp;

    //     counter ++;
    // }

    for(int i = 0; i < m+n; i++){
        cout<<nums1[i]<<" ";
    }

}