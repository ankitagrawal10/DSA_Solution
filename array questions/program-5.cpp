// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int N, int item)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == item)
			return i;
	return -1;
}

// Driver's code
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int item = 10;
    int N = 5;
	//int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, item);
	if(result==-1){
        cout<<"item is present"<<endl;
    }
    else{
        cout<<"item is  present at index :"<<result<<endl;
    }
	return 0;
}
