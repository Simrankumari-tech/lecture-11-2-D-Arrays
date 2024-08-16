#include<iostream>
using namespace std;
int main(){
int a[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
bool iskeyfound= false;
int row= sizeof(a)/ sizeof(a[0]);
int col = sizeof(a[0]) / sizeof(int) ,key= 5;
for(int i=0 ; i< row; i++){
    for(int j=0; j<col; j++){
        if(a[i][j]== key){
            cout << "key found : " <<i <<" ," << j<< endl;
            iskeyfound= true;
            break;
        }
    }
    if(iskeyfound){
        break;
    }

}
if(!iskeyfound){
    cout << "nahi hai";
}
    return 0;
}