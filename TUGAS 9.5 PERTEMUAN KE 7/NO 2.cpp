#include <iostream>
using namespace std;

int main() {
   
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int A[11]; 
    int index = 0; 

    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[index] = data[i];
            index++;
        }
    }

    cout << "Isi array A yang hanya bilangan genap:\n";
    for (int i = 0; i < index; i++) {
        cout << A[i] << " ";
    }

    return 0;
}