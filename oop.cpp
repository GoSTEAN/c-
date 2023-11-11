// #include <iostream>

// using namespace std;

// int sum_of_natural_numbers(int n) {
//   return n * (n + 1) / 2;
// }

// int main() {
//   int n;
//   cout << "Enter the number of natural numbers to sum: ";
//   cin >> n;

//   int sum = sum_of_natural_numbers(n);
//   cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

//   return 0;
// }

#include <iostream>
#include <chrono>




int sum_of_natural_numbers(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

using namespace std;
double calculate_execution_time(int n) {
  using namespace chrono;

  auto start = high_resolution_clock::now();
  sum_of_natural_numbers(n);
  auto end = high_resolution_clock::now();

  duration<double, milliseconds> duration = duration_cast<milliseconds>(end - start);
  double execution_time = duration.count();

  return execution_time;
}

int main() {
  int n;
  cout << "Enter the number of natural numbers to sum: ";
  cin >> n;

  int sum = sum_of_natural_numbers(n);
  cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

  double execution_time = calculate_execution_time(n);
  cout << "Execution time: " << execution_time << " milliseconds" << endl;



  return 0;
}

// #include <iostream>
// using namespace std;
// int main () {
//     int x =100;
//     int *ptr;
//     ptr = &x;
//     *ptr = 150;
//     cout<<"Value of x is "<<x;
//     cout <<"\nAddress of x is "<<&x;
//     cout <<"\n Data where ptr is pointing "<<*ptr;
//     cout<<"\nAddress of ptr is "<<&ptr;
//     cout<<"\nAddress stored in the pointer is "<<ptr<<endl;
//     system ("pause");
//     return 0;
// // }

// #include <iostream>

// using namespace std;

// // Function to calculate the average of the elements of an array
// double arr_avg(int arr[], int size) {
//   double sum = 0;
//   for (int i = 0; i < size; i++) {
//     sum += arr[i];
//   }
//   return sum / size;
// }

// // Function to display the elements of an array
// void arr_display(int arr[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int main() {
//   // Create an array of type int having 6 elements
//   int arr[6] = {1, 2, 3, 4, 5, 6};

//   // Display the elements of the array
//   cout << "The elements of the array are: ";
//   arr_display(arr, 6);

//   // Calculate the average of the elements of the array
//   double average = arr_avg(arr, 6);

//   // Display the average of the elements of the array
//   cout << "The average of the elements of the array is: " << average << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;

// float arr_avg(int* , int);
// void arr_display(int[], int);
// int main ()
// {
//     int arr[6] = {1,2,3,4,5,6};
//     cout <<"The average of the array enteries is"<<arr_avg(arr,6);
//     cout <<"\nThe array contains values";
//     arr_display(arr,6);
//     return 0;
// }

// float arr_avg(int *aptr, int size)
// {
//     float average = 0;
//         for(int i=0; i<size; i++)
//         {
//             average += aptr[i]; 
//         }
//     return (average/size);
// }
// void arr_display(int aptr[], int size)
// {
//     for(int i=0; i<size; i++)
//     {
//         cout <<endl<<aptr[i]<<endl;
//     }
// }


// #include <iostream>

// using namespace std;

// // Function to calculate the average of the elements of an array
// double arr_avg(int* arr, int size) {
//   double sum = 0;
//   for (int i = 0; i < size; i++) {
//     sum += arr[i];
//   }
//   return sum / size;
// }

// // Function to display the elements of an array
// void arr_display(int* arr, int size) {
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int main() {
//   // Create an array of type int having 6 elements
//   int* arr = new int[6] {1, 2, 3, 4, 5, 6};

//   // Display the elements of the array
//   cout << "The elements of the array are: ";
//   arr_display(arr, 6);

//   // Calculate the average of the elements of the array
//   double average = arr_avg(arr, 6);

//   // Display the average of the elements of the array
//   cout << "The average of the elements of the array is: " << average << endl;

//   // Deallocate the memory allocated for the array
//   delete[] arr;

//   return 0;
// }


