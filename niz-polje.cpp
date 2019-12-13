#include <iostream>
using namespace std;
int main (){
    int i;
    cout<<"[";
    for (i=4;i<22;i++){
        if (i%2==0){
        cout<<i<<", ";
        }
    }
    cout<<i<<"]";
    
    system("PAUSE");
    return 0;
}