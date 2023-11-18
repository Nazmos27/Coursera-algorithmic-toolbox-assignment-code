#include <bits/stdc++.h>
#include <sstream>

using namespace std;


void selectionSort(int a[],int n){
  int minIndex = 0;
  for(int i = 0; i< n-1; ++i){
    minIndex = i;
    for(int x = i+1; x<n;++x){
      if(a[x]<a[minIndex]){
        minIndex = x;
      }
    }
    if(minIndex!=i){
      swap(a[minIndex],a[i]);
    }
  }
}

// Function to print an array
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    string input;
    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);

    // Use a stringstream to extract integers from the input
    istringstream iss(input);
    int number;
    int count = 0;

    // Count the number of elements
    while (iss >> number) {
        count++;
    }

    // Allocate an array of the required size
    int* a = new int[count];

    // Reset stringstream to read the numbers again
    iss.clear();
    iss.seekg(0);

    // Read the numbers into the array
    for (int i = 0; i < count; i++) {
        iss >> a[i];
    }

    // Function Call
    selectionSort(a, count);
    cout << "Sorted array: \n";
    printArray(a, count);

    // Deallocate the dynamically allocated memory
    delete[] a;

    return 0;
}
