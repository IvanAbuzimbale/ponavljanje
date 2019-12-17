#include <iostream>
using namespace std;
int main (){
	int n, brojac=1;
	cout<<"Unesi broj: ";
	cin>>n;
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
	a[i][j]=brojac;	
	cout<<a[i][j]<<" ";
	brojac++;
	}	
	cout<<endl;
	}
	

	system("PAUSE");
	
}
