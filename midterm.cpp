
#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

LinkedList createList(vector<int> v)
{
	int unsigned counter = 0;
	LinkedList l;




	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (v[i] == v[j]) {

				counter++;
				l.addnode(v[i]);


			}
		}
		counter = 0;
	}
	


	return l;
}





// using template so the function could be used with all varaibles
template<class t>
void insertAfter(t firstValue, t secondValue, vector<t>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == firstValue) 
		{

			v.insert(v.begin()+i+1, secondValue);

		}

	}
}

int main()
{

	LinkedList list;
	list.addnode(1);
	list.addnode(2);
	list.addnode(3);
	list.addnode(4);
	list.addnode(5);

	cout << "the list after adding 5 nodes to the front of the list (add to the front)" << endl;
	list.print();
	cout << "----------------------------------------------------------" << endl;


	list.addnodelast(69);


	cout << "list after adding number (69) at the end of the list (add to the back)" << endl;
	list.print();
	cout << "----------------------------------------------------------" << endl;

	list.addnodeBefore_I(3, 13);

	cout << "list after adding number (13) before the number (3) in the list" << endl;
	list.print();
	cout << "----------------------------------------------------------" << endl;

	list.deleteI(4);
	list.deleteI(69);

	cout << "List after deleting nodes with data (4) and (69)" << endl;
	list.print();
	cout << "----------------------------------------------------------" << endl;


	
	cout << endl;


	cout << "sum is " << list.sum() << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------" << endl;


	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(70);


	LinkedList l=createList(vec);

	cout << "printing the list after taking the vector and transforming it to a list" << endl;
	cout << "each vector element repeated also is reflected in its repeating in the list" << endl;
	l.print();
	

	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;


	cout << "This is the testing of the insertAfter function " << endl;

	int n = 0;
	cout << "Please enter the number of elements" << endl;
	cin >> n;
	vector <int> v;
	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		cout << "enter the element number " << i + 1 << endl;
		cin >> v[i];
	}

	cout << "the vector before applying the function" << endl;
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	cout << "What is the number you want to look for? " << endl;
	int n1;
	cin >> n1;
	cout << "What is the number you want to put after the number you chose? " << endl;
	int n2;
	cin >> n2;
	insertAfter(n1, n2, v);

	cout << "the vector after applying the function" << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}

