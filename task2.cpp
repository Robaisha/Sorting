#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr=new int[10];
	for(int i=0;i<10;i++){
		cout<<"Enter elements "<<i+1<<" \n";
		cin>>ptr[i];
	}
	int temp1=0;
	for(int i=0;i<9;i++){ 
    	for(int j=0;j<9-i;j++){
 
		if(ptr[j]>ptr[j+1]){
			temp1=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp1;
	    	}
    	}
	}
	cout<<"ASCENDING ORDER\n";
	for(int i=0;i<10;i++){
		cout<<ptr[i]<<" ";
	}
	
	//Descending
	for(int i=0;i<9;i++){ 
    	for(int j=0;j<9-i;j++){
 
		if(ptr[j]<ptr[j+1]){
			temp1=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp1;
	    	}
    	}
	}
	cout<<"\nDESCENDING ORDER\n";
	for(int i=0;i<10;i++){
		cout<<ptr[i]<<" ";
	}
}
