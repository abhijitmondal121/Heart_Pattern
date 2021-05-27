#include<iostream>
using namespace std;
int main(){
	int sp=3,st=3,st2=10;
	cout<<endl<<" -:THIS IS FOR YOU:-"<<endl<<endl;
	for(int i=st;i<=5;i++){
		for(int j=sp;j>=1;j--){
			cout<<" ";
		}
		for(int k=1;k<=st;k++){
			cout<<"* ";
		}
		for(int j=sp;j>=2;j--){
			cout<<"  ";
		}
		for(int k=1;k<=st;k++){
			cout<<"* ";
		}
		
		cout<<endl;
		sp--;
		st++;
	}
	
	     for(int i=st2;i>=1;i--){
        for(int space=i;space<=st2;space++){
            cout<<" ";
        }
        for(int j=1;j<=(i-1);j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
	return 0;
	
}
