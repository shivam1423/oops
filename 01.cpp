#include<iostream>
using namespace std;
void insert(string *p,int n){
	int i, k=0;
	for(i=0;i<n;i++){
		cin>>*(p+i);
		k++;
	}
	*(p+i)="\0";
}
void deletename(string *p,int n,int m){
	int k=m;
	for(int i=m;i<n-1;i++){
		*(p+k)=*(p+k+1);
	k++;}
	*(p+k)="\0";
}
void print(string *p){
	int k=0;
		while(*(p+k)!="\0"){
		cout<<*(p+k)<<'\n';
		k++;
	}
}
int main(){
	string a[100];
	string  b[100];
	int ch,k=0,n,m;
	while(ch!=0){

	cout<<"1)Enter a name"<<'\n';
	cout<<"2)Delete a name"<<'\n';
	cout<<"3)print names"<<'\n';
	cout<<"0)To end Program"<<'\n';
	cin>>ch;
	switch(ch){
		case 1:cout<<"enter how many names u wanna enter";
		 cin>>n;
			insert(a,n);
		break;
		case 2:cout<<"enter index u wanna delete";
		 cin>>m;
			deletename(a,n,m);
			n=n-1;
		break;
		case 3: print(a);
				break;
//		case3: print();
	}
}

}
