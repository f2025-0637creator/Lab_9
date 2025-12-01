#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    int columns;
    cout << "Enter number of Columns: ";
    cin >> columns;
    
    int sz = (rows*10)+columns;
    char arr [sz];
    for (int i = 0; i <= sz; i++){
        arr[i] = 'F';
    }
    
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            cout << "(" << i << "-" << j << "  " << arr[i*10+j]<< ")    ";
        }
        cout << endl;
    }
    
    int reservedSeat;
    cout << "Enter seat number: ";
    cin >> reservedSeat;
    
    while (reservedSeat != 0){
        arr[reservedSeat] = 'R';
        
        for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            cout << "(" << i << "-" << j << "  " << arr[i*10+j]<< ")    ";
        }
        cout << endl;
    }
        cout << "Enter another seat number: ";
    cin >> reservedSeat;
    }
    
    return 0;
}