	#include <iostream>
	using namespace std;
	int main(){
		int n;
	     cin>>n;
		if (n % 2 !=0){
		cout<<"n is odd"<<endl;
	}
		else if (n % 2 == 0 && ( 2 <= n && n <= 5)) {
		cout<<"n is even and b/n 2 and 5"<<endl;
	}
		else if (n % 2 == 0 && (6 <= n && n <= 20)) {
		
		cout<<"n is even and b/n 6 and 20"<<endl;
	}
    else {
		
		cout<<"n is even and above 20"<<endl; 
	
	}
		return 0;
	}
