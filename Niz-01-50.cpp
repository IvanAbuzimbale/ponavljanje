#include <iostream>
using namespace std;
int main (){
	int x,y;
	for (x=0;x<5;x++){
		for (y=0;y<10;y++){
			cout<<x<<"-"<<y<<endl;
			
			if (x==4 && y==9){
				cout<<x+1<<"-"<<y-9<<endl;
				
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
