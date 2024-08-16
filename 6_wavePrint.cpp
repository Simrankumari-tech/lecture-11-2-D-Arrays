// #include <iostream>
// using namespace std;

// int main() {

	// int a[][3] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9},
	// 	{13, 14, 15}
	// };
	// int m = 3, n = 4;
	// for (int col = 0; col < m; ++col)
	// {
	// 	if (col % 2 == 0) { // Column is even
	// 		for (int row = 0; row < n; ++row)
	// 		{
// 				cout << a[row][col] << " ";
// 			}
// 		}
// 		else { // Column is odd
// 			for (int row = n - 1; row >= 0; --row)
// 			{
// 				cout << a[row][col] << " ";
// 			}
// 		}
// 	}

// 	cout << endl;
// 	return 0;
// }




#include<iostream>
using namespace std;
int main(){
int a[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int m= 3, n=3;

for(int col= 0; col<m; col++){

    if(col % 2 == 0){
        for(int row=0; row<n; row++){
            cout << a[row][col]<< " ";
        }
    }
    else{
        for(int row=n-1; row>= 0; row--){
            cout << a[row][col]<< " ";
        }
    }
}
cout << endl;
    return 0;
}