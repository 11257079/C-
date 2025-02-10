		#include <iostream>
		using namespace std;
		
		int main() {
		    cout << "Hello world" << endl;
		    cout <<"I am a calculator:"<<endl;
		    cout <<"Please enter two integer number:"<<endl;
		    int a, b;  
		    cout << "Enter a: "; 
		    cin >> a;  
		    cout << "Enter b: ";
		    cin >> b;  
		    cout  << "addition="<<a + b<<";division="<<a/b<<";multiplication="<<a*b<<";subtraction="<<a-b << endl;  
		    // or
		    cout <<a+b<<endl;
		    cout <<a/b<<endl;
		    cout <<a*b<<endl;
		    cout <<a-b<<endl;
		    //The while statement: sum of 1 to 10
		    
			
		    int sum=0;
		    int e=1;
		    while(e<=10){
			
		    sum=sum+e;
		    ++e;
		}
		    cout <<"sum1="<<sum<<endl;
		    
		// write a program that uses a while to sum the numbers from 50 to 100
		    int su=50;
		    int d=1;
		    while(d<=100){
		    	su=su+d;
		    	++d;
		    	
			}
			cout <<"sum2="<<su<<endl;
			//for statement
			int s=0;
			for (int f=1;f<=10;++f){
				s+=f;
			}
		cout <<"sum3="<<s<<endl;
		    return 0;
		}

 
