#include<iostream>
using namespace std;

int main(){
	int n,temp,a[1000],k=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n-1;j++){
		for(int i=0;i<n-j-1;i++){
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}