#include <iostream>
using namespace std;

int mySqrt(int x) {
        int start = 0, end = x;
        int mid = start + (end-start)/2 ; 

        int ans = -1;
        while(start <= end){
            int product = mid*mid;
            if (product == x){
                ans = mid;
                return ans;
            }
            if (product < x){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid - 1;
            }

            mid = start + (end-start)/2 ;
        }
        return ans;
    }

int main(){

    int n;
    cin >> n;
    int sqrt = mySqrt(n);

    cout<<sqrt<<endl;
    return 0;
}
