										################################################
											!!!!!!!!!!-------Vector--------!!!!!!!!!!
										################################################
										

vector<int> my_vector;
vector<int> g (10); // 10 zero-initialized elements 
for(auto i : my_vector) cout << i << " ";
for(i = 0; i < my_vector.size(); i++) cout << my_vector[i] << " ";

 
---push_back()---
	
	for(i = 0; i < 5; i++){
		my_vector.push_back(i);
	}

---pop_back()---
	
	my_vector.pop_back();
	cout << my_vector.back();
	// Output : 3;

---begin(),end()---

	for(auto i = my_vector.begin(); i != my_vector.end(); i++){
		cout << *i << " ";
	}
	
---size()--- --> Returns the number of elements of the vector.

	cout << my_vector.size();
	//Output : 5
	
---capacity()--- --> Returns the size of the storage space currently allocated to the vector expressed as number of elements.

	cout << my_vector.capacity();
	// Output : 8
	
---max_size()--- --> Returns the maximum number of elements that the vector can hold.

	cout << my_vector.max_size();
	//Output : 4611686018427387903

---empty()--- --> Returns whether the container is empty. Returns boolean value (true or false).
	cout << my_vector.empty();
	// Output : 0
	
---resize()--- 

	my_vector.resize(2);
	for(auto i = my_vector.begin(); i != my_vector.end(); i++){
		cout << *i << " ";
	}
	// Output : 0 1
	
---at()--- --> You can access to the elements of the vector.

	cout << my_vector.at(2);
	my_vector.at(2) = 5;
	cout << " " << my_vector.at(2);
	// Output : 2 5

---front(), back()--- --> Returns the element at the beginning and at the end of the vector.

	for(int i = g.front(); i != g.back(); i++) cout << i << " ";
	// Output : 0 1 2 3 
	
---data()--- --> Returns a pointer that points to first element of the vector.
	
	int *pos = my_vector.data();
	cout << *(++pos);
	// Output : 1
	
---insert(), erase()--- --> Erasing an element, sets the element 0.
	
	my_vector.insert(my_vector.begin(), 5);
	cout << my_vector.front()) << " ";
	my_vector.erase(my_vector.begin());
	cout << my_vector.front();
	// Output : 5 0

---clear(),swap()---



