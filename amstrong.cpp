#include <iostream>

#include <string>

#include<math.h>

using namespace std;



string armstrong(int x) {

	    int a = x;

	        int b = x;

		    int times = 0;

		        int Sum = 0;



			    while (a > 0) {

				            a = a / 10;

					            times++;

						        }

			        for (int i = times; i > 0; i--) {

					        Sum = Sum + (int)(pow(b%10,times));

						        b = b / 10;

							    }

				    if (Sum == x) {

					            return "Armstrong";

						        }

				        else {

						        return "Not Armstrong";

							    }

}



int main()

{

	    int num;

	        cout << "Input a number";

		    cin >> num;

		        cout << num << " is " << armstrong(num);

}


