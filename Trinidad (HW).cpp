#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{
	int m, d, y;
	bool abort = false;
	
	do
	{
		cout << "Enter Month: \n";
		cin >> m;
		
		cout << "Enter Day: \n";
		cin >> d;
		
		cout << "Enter Year: \n";
		cin >> y;
		
		if (m == 0 || m >= 13 || d == 0 || d >= 32 || y == 0 || m == 2 && d >= 29 || m == 1 && m == 3 && m == 5 && m == 7 && m == 8 && m == 10 && m == 12 && d >=31 || m == 4 && m == 6 && m == 9 && m == 11 && d >= 30)
		{
	
			cout << "\nInvalid date!" << endl;
		break;
	}

   switch(m)
   {
   	case 1: if (m=1)
  		cout<< "JANUARY " << d << ", " << y << endl;	
    	break;

   case 2: if (m=2)
   	{
		cout<< "FEBRUARY " << d << ", " << y << endl;
		break;
}

	case 3: if (m=3)
	{
		cout<< "MARCH " << d << ", " << y << endl;
		break;
}
	case 4: if (m=4)
	{
  		cout<< "APRIL " << d << ", " << y << endl;
		break;
}
	case 5: if (m=5)
	{
   		cout<< "MAY " << d << ", " << y << endl;
		break;
}
	case 6: if (m=6)
	{
   		cout<< "JUNE " << d << ", " << y << endl;
		break;
}
	case 7: if (m=7)
	{
   		cout<< "JULY " << d << ", " << y << endl;
		break;
}
	case 8: if (m=8)
	{
   		cout<< "AUGUST " << d << ", " << y << endl;
		break;
}
	case 9: if (m=9)
	{
   		cout<< "SEPTEMBER " << d << ", " << y << endl;
		break;
}
	case 10: if (m=10)
	{
   		cout<< "OCTOBER " << d << ", " << y << endl;
		break;
}
	case 11: if (m=11)
	{
   		cout<< "NOVEMBER " << d << ", " << y << endl;
		break;
}
	case 12: if (m=12)
		{
   		cout<< "DECEMBER " << d << ", " << y << endl;
		break;
}
	
}		

} while (!abort);
	_getch ();
   return 0;
}
