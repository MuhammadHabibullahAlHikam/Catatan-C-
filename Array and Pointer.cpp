#include <iostream>>
using namespace std;


/*
//Example in an array with data type char
int main(){
	char name[20]; //jumlah data
	
	cout<< " ";
	cin>> name;
	cout << " " << name << "!" << endl;
} */

/*
int main(){
	int myArray[5] = {10,20,30,40,50};
	for (int i = 0; i<5; i++) {
		cout << "Value of element " << i << "is" << myArray[i] << endl;
	}
	return 0;
}
//In the example above, the myArray array contains 5 elements with initial values 10, 20, 30,
//40, and 50. In the for loop, we access each element in the array by using the index i from 0
//to 4, and display the value of each element by using cout. In this case the data structure.
*/


/*
//Arrays Two Dimensional
//The following is an example of using a two-dimensional array in C++:
int main(){
	//Entering values into the array one by one with input:
	int arr [3][4];
	for(int i = 0; i<3; i++){
			for(int j = 0; j < 4; j++){
					arr[i][j] = i * j;
					//Displays the output of the array that has been given the input:
	}
	cout << endl;
}


}
*/

int main(){
	int arr[5] = {10,20,30,40,50};
	int *ptr = arr; // ptr menunjuk ke alamat memori awal dari array
	
	for (int i = 0; i<5; i++) {
		cout << "Value of arr[ " << i << " ] = " << *ptr << endl;
		ptr++; // pindah ke alamat memori berikutnya
	}
	return 0;
}
//In the example above, `ptr` initially points to the starting memory address of the arr array.
//Then, we use the * dereferencing operator to access the value of each element in the array.
//At each iteration of the loop, `ptr `is increased to point to the memory address of the next
//array element. By using pointers and dereferencing, we can perform more flexible and
//efficient manipulation of arrays.

