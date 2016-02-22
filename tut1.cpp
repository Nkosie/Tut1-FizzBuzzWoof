#include <iostream>

using namespace std;
int main()
{
	int a, b,i ,c;
	a = 3;
	b = 5;
	c = 7;
																																																													

	for (i = 1; i <= 50;i=i+1)
	{
		if (i % a == 0 && i % b == 0)   /*checking i is divisable by a, b and c*/
		{
			if (i % c == 0)
			{
				cout << "Fizz  Buzz Woof" << endl;
			}
			
		}
		else
		{
			if (i % a == 0 && i % b == 0) /*checking i is divisable by a and b*/
			{
				cout << "Fizz Buzz" << endl;
			}
			else
			{
				if (i % a == 0 && i % c == 0)    /*checking i is divisable by a and c*/
				{
					cout << "Fizz Woof" << endl;
				}
				else
				{
					if (i % b == 0 && i % c == 0)  /*checking if i is divisable by b and c*/
					{
						cout << "Buzz Woof" << endl;
					}
					else                                /*checking if "i" is divisable by a, b and c individually*/
					{
						if (i % a == 0)
						{
							cout << "Fizz" << endl;
						}
						if (i % b == 0)
						{
							cout << "Buzz" << endl;
						}
						if (i % c == 0)
						{
							cout << "Woof" << endl;
						}
						if (i % a != 0 && i % b != 0 && i%c !=0)
						{
						printf("%d\n", i);
						}
					}
					
				}
				
			}
		
		}

		
	}
}