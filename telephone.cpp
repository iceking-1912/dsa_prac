#include <iostream>
using namespace std;
class node {
	string name;
	long int tel;
	int id;

public:
	node()
	{
		tel = 0;
		id = 0;
	}
	friend class hashing;
};

class hashing {
	node data[100];
	string n;
	long int t;
	int i, index;
public:
	hashing()
	{
		i = 0;
                         t = 0;
	}

	
	void create_record(int size)
	{
		
		i = 4;

		
		n = "XYZ Gupta";

		
		t = 23451234;
		cout << "\nEnter id :";
		cout << " \t\t\t"
			<< i;
		cout << "\nEnter name :";
		cout << " \t\t\t " << n;
		cout
			<< "\nEnter telephone";
		cout << " number :\t"
			<< t;
		index = i % size;

		

		for (int j = 0; j < size; j++) {
			if (data[index].id == 0) {
				data[index].id = i;
				data[index].name = n;
				data[index].tel = t;
				break;
			}
			else
				index
					= (index + 1) % size;
		}
	}

	
	void search_record(int size)
	{
		int index1, key, flag = 0;
		key = 4;
		cout << "\nEnter record";
		cout << " id to search : "
			<< key;
		index1 = key % size;

		
		for (int a = 0; a < size; a++) {
			if (data[index1].id == key) {
				flag = 1;
				cout << "\nRecord found:";
				cout << "\n\tID ";
				cout << "\tNAME ";
				cout << "\t\tTELEPHONE ";
				cout << "\n\t"
					<< data[index1].id
					<< " \t"
					<< data[index1].name
					<< " \t"
					<< data[index1].tel;
				break;
			}
			else
				index1
					= (index1 + 1) % size;
		}
		if (flag == 0)
			cout << "\nRecord";
		cout << " not found";
	}

	
	void delete_record(int size)
	{
		int index1, key, flag = 0;
		key = 4;
		cout << "\nEnter record";
		cout << " id to delete : "
			<< key << "\n ";
		index1 = key % size;
		

		for (int a = 0; a < size; a++) {
			if (data[index1].id
				== key) {
				flag = 1;
				data[index1].id = 0;
				data[index1].name = " ";
				data[index1].tel = 0;
				cout << "\nRecord";
				cout << " deleted";
				cout << " successfully";
				break;
			}
			else
				index1
					= (index1 + 1) % size;
		}
		if (flag == 0)
			cout << "\nRecord";
		cout << " not found";
	}

	
	void update_record(int size)
	{
		int index1, key, flag = 0;
		key = 4;
		cout << "\nEnter record";
		cout << " id to update : "
			<< key;
		index1 = key % size;
		// Traversing the directory
		// linearly inorder to search
		// record detail
		for (int a = 0; a < size; a++) {
			if (data[index1].id
				== key) {
				flag = 1;
				break;
			}
			else
				index1
					= (index1 + 1) % size;
		}
		

		if (flag == 1) {
			n = "XYZ Agarwal";
			t = 23413421;
			data[index1].name = n;
			data[index1].tel = t;
			cout << "\nEnter";
			cout << " name: \t\t\t"
				<< n;
			cout << "\nEnter";
			cout << " telephone number: \t"
				<< t;
			cout << "\nDetails updated: ";
			cout << "\n\tID \tNAME";
			cout << " \t\tTELEPHONE ";
			cout << "\n\t"
				<< data[index1].id
				<< " \t"
				<< data[index1].name
				<< " \t"
				<< data[index1].tel;
		}
	}

	void display_record(int size)
	{
		cout << "\n\tID \tNAME";
		cout << " \t\tTELEPHONE ";
		
		for (int a = 0; a < size; a++) {
			if (data[a].id != 0) {
				cout << "\n\t"
					<< data[a].id
					<< " \t"
					<< data[a].name
					<< " \t"
					<< data[a].tel;
			}
		}
	}
};

int main()
{
	
	int size;
                  hashing s;
	size = 20;

	cout << "\n1.CREATE record ";
	s.create_record(size);

	cout << "\n\n\n\n2.DISPLAY";
	cout << " record ";
	s.display_record(size);

	cout << "\n\n\n\n3.SEARCH";
	cout << " record";
	s.search_record(size);

	cout << "\n\n\n\n4.UPDATE";
	cout << " record ";
	s.update_record(size);
                 cout << "\n\n\n\n5.DELETE";
	cout << " record ";
	s.delete_record(size);

	return 0;
}

