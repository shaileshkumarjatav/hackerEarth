#include <iostream>
 
using namespace std;
 
int main() {
	int num;
	cin >> num;										
	for(int i=0;i<num;i++){
	    int input,output=0;
	    cin >> input;
	    for(int i=1;i*i<=input;i++){
	        if(input%i==0){
	            output += i;
	            output += (input/i);
	        }
	        if(i*i==input){
	            output-=i;
	        }
	    }
	    output -= input;
	    cout << output <<endl;
	}
	return 0;
}
