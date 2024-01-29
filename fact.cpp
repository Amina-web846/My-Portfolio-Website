#include<iostream>
using namespace std;
int factorial(int x){
 	if(x==0||x==1){
 		return 1;
	 }
	 else{
	return x * factorial(x-1); 
	}
 }
int main(){
	int k = 8; 
	cout<< factorial(k);

}
