#include <iostream>
using namespace std;
int main()
{
	int n,sindex;
	cout << "Enter the size of the array : ";
	cin >> n;
	int ar[n];	
	try 
	{
    	cout << "Enter the selected index: ";
    	cin >> sindex;
    	if(sindex >= n)
        	throw "Invalid Index (Terminating) \n";
    	else
    	{
        	cout << "Enter the value at selected index " << sindex << " : ";
        	cin >> ar[sindex];
        	cout << "The value at selected index is: " << ar[sindex] << endl;
    	}
    }
	catch  (char const * e)
	{
		cout << e;
	}
}
