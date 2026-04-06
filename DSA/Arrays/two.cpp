#include<iostream>
using namespace std;

int main(){
    int i,j;
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    cout << "Matrix: \n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j< 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}