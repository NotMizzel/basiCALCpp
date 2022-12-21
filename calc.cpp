#include <iostream>

using std::cout;
using std::cin;
using std::string;
int main()
{
	int timesdone = 0;
	while(true)
	{
		double firstnum;
		cout << "Enter first number: ";
		cin >> firstnum;
		string op;
		cout << "Enter operator: ";
		cin >>  op;
		double secnum;
		cout << "Enter second number: ";
		cin >> secnum;
		if((op)=="*"){
			cout << firstnum * secnum << "\n";
		}
		else if((op)=="/"){
			cout << firstnum / secnum << "\n";
		}
		else if (op == "+") {
    			if (firstnum == 9 && secnum == 10) {
       				 timesdone++;
   		 	}

	    		if (timesdone == 3) {
        			cout << 21 << "\n";
  			     	timesdone = 0;
   			} else {
    		    		cout << firstnum + secnum << "\n";
    			}

		}
		else if((op)=="-"){
			cout << firstnum - secnum << "\n";
		}
		else{
		cout << "Error\n";
		}
	}
}

