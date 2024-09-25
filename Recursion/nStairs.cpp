#include <iostream>
using namespace std;

int Totaljump(int end){

    if(end<0){
        return 0;
    }
    if(end==0){
        return 1;
    }
    return Totaljump(end-1)+Totaljump(end-2);
}

int main(){
    

    int end;
    cout << "Enter end: ";
    cin >> end;

    int jump=Totaljump(end);

    cout << "Jumps = "<<jump << endl;
    return 0;
}