#include <iostream>
using namespace std;

int perms(int n){

	if(n == 0) return 1;

	int ans = 0;
	for(int i = n-1; i >= 0; i--){
		ans += perms(i);
	}

	return ans;
}

int main() {
	
	for(int i = 1; i <= 10; i++){
		int ans = perms(i);
		cout<<ans<<endl;
	}
	return 0;
}
