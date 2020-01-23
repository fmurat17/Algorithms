														ALGORITHMS 								

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
													SEARCHING ALGORITHMS
	
	
										################################################
										!!!!!!!!!!-------Linear Search--------!!!!!!!!!!
										################################################
	
	--> Simplest search algorithm is linear search, also know as sequential search.
	--> Time Complexity = O(n).
	Algorithm:
	
	*Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
	*If x matches with an element, return the index.
	*If x doesn’t match with any of elements, return -1.
	
	Code:
	
	int linearSearch(int array[], int size, int key){
		for(int i = 0; i < size; i++)
			if(array[i] == key)
				return i;		
		return -1;
	}
	
										################################################
										!!!!!!!!!!-------Binary Search--------!!!!!!!!!!
										################################################
										
	--> Time Complexity = O(log(n)).
	--> Search on sorted array.
	
	Code:
	
	int binarySearch(int arr[], int r, int l, int x){
    
		while(l <= r){
			
			int m = l + (r - l) / 2;
			
			if(arr[m] == x){
				return m;
			}
			if(arr[m] < x){
				l = m + 1;
			}
			else{
				r = m - 1;
			}
		}
		return -1;
	}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
															SORTING ALGORITHMS

										################################################
										!!!!!!!!!!-------Insertion Sort--------!!!!!!!!!!
										################################################															

	--> Time Complexity = O(n*2).
	
	Code : 
	
	int insertion(int arr[], int n){
    
		int i, j, key;
		
		for(i = 1; i < n; i++){
			
			key = arr[i];
			j = i - 1;
			
			while(j >= 0 && arr[j] > key){
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}
	
										################################################
										  !!!!!!!!!!-------Merge Sort--------!!!!!!!!!!
										################################################
										

	--> Time Complexity = O(n.log(n)).
	
	Code:
	
	void mergeSort(int *arr, int size){
		
		if(size <= 1) return;
		
		mergeSort(arr, size / 2);
		mergeSort(arr + size / 2, size - size / 2);
		
		int index = 0, left = 0, right = size / 2;
		int *temp = new int [size];
		
		while(left < size / 2 or right < size){
			if(right == size or (left < size / 2 and arr[left] < arr[right])){
				temp[index++] = arr[left++];
			}
			else{
				temp[index++] = arr[right++];
			}
		}
		for(int i = 0; i < size; i++){
			arr[i] = temp[i];
		}
		delete [] temp;
	}
	
										################################################
										  !!!!!!!!!!-------Quick Sort--------!!!!!!!!!!
										################################################
					
	
	--> Time Complexity = O(n.log()n) --> Worst Case = O(n * n).
	
	Code : 
	
	void quickSort(int *ar, int size){
		if(size <= 1) return;
		
		int position = 1;
		swap(ar[0], ar[rand() % size]);
		
		for(int i = 0; i < size; i++){
			if(ar[0] > ar[i]){
				swap(ar[i], ar[position++]);
			}
		}
		swap(ar[0], ar[position - 1]);
		
		quickSort(ar, position - 1);
		quickSort(ar + position, size - position);
	}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
															PRIME NUMBERS
	
	
	
										###########################################################
										!!!!!!!!!!-------Optimized Naive approach--------!!!!!!!!!!
										###########################################################
	--> Time Complexity = O(√n)																	
	
	Code:
		
	bool isPrime(int num){
		if(num == 0 || num == 1) return false;
		for(int i = 2; i * i <= num; i++)
			if(num % i == 0) return false;
		return true;		
	}
	
	
	
	
										##################################################################
										!!!!!!!!!!-------Sieve of Eratosthenes Approach---------!!!!!!!!!!
										##################################################################
	
	--> Time Complexity = O(n.log(logn))
	
	Code:
	
	#include <iostream>
	using namespace std;
	
	bool isPrime(int num){
			if(num == 0 || num == 1) return false;
			for(int i = 2; i * i <= num; i++)
				if(num % i == 0) return false;
			return true;		
	}
	
	void sieve(int array[], int n){
		
		for(int i = 2; i * i < n; i++){
			if(isPrime(i)){
				for(int j = i * 2; j < n; j+=i)
					array[j] = 0;
			}
		}
	}
		
	int main()
	{
		int number;
		cin >> number;
		int arr[100000];
		
		for(int i = 0; i < number; i++){
			arr[i] = i;
		}
		arr[1] = 0;
		sieve(arr, number);
		for(int i = 2; i < number; i++)
			if(arr[i] != 0) cout << arr[i] << " ";
			else continue;
		
		return 0;
	}
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
												#############################################
												!!!!!!!!!!-------Factorial---------!!!!!!!!!!
												#############################################
	
	--> Time Complexity = O(n)
	
	Code:
	
	int factorial(int n){
		if(n == 1) return 1;
		return n * factorial(n - 1);
	}
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------------

															GRAPHS
	
	
	
	
	
	