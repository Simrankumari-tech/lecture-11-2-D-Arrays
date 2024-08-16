#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int row,col;
    cout << "enter a row and col : ";
    cin >> row >> col;
    for(int i=0; i<row; i++){
        for(int j=0; j<col ; j++){
            cin >> a[i][j];
        }

    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}