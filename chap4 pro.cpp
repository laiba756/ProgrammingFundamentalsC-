//without if-else
//#include<iostream>
//using namespace std;
//int main(){
//	bool trueValue, falseValue;
//	int x = 6, y = -5;
//	trueValue = x > y;
//	falseValue = x == y || x < y;
//	cout << "True is:" << trueValue<<endl;
//	cout << "False is:" << falseValue;
//}

// This program demonstrates how floating-point round-off errors can make equality operations unreliable. 
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int a = 1.5, b = 1.5;
//	a += 0.1;
//	//if (a == b)      to prevent same statements use > or <
//	if(a>b)               //kuch ajeeb si cheezain ho rahi
//		cout << "both a and b are same";
//	else
//		cout << "a and b are not same";
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int funny = 7, serious = 15;
//	funny = serious % 2;
//	if (funny != 1)
//	{
//		funny = 0;
//		serious = 0;
//	}
//	else if (funny == 2)
//	{
//		funny = 10;
//		serious = 10;
//	}
//	else
//	{
//		funny = 1;
//		serious = 1;
//	}
//	cout << funny << "" << serious << endl;
//}

//FLAG
//#include<iostream>
//	using namespace std;
//	bool isPrime(int n) {
//		bool flag = true;
//		if (n <= 1)
//			return false;
//		for (int i = 2;i < n;i++) {
//			if (n % i == 0) {
//				flag = false;
//				break;
//			}
//		}
//		return flag;
//	}
//	int main() {
//		if (isPrime(4))
//			cout << "Prime";
//		else
//			cout << "Not Prime";
//		return 0;
//	}

//JAZZ PACKAGE MENU
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string code;
//	int choice;
//	const int Top_offers = 1;
//	const int All_in_one_offers = 2;
//	const int Super_4G_Data_offers = 3; {
//		cout << "Enter code on KeyPad:" << endl;
//		cin >> code;
//
//		if (code == "*444#") {
//			cout << "1:Top_offers" << endl;
//			cout << "2:All_in_one_offer" << endl;
//			cout << "3:Super_4G_Data_offers" << endl;
//			cout << "Enter choice:";
//			cin >> choice;
//			if (choice == Top_offers) {
//				cout << "1 hour 1 GB @Rs.21";
//			}
//			else if (choice == All_in_one_offers) {
//				cout << "1 day 2 GB @Rs.41";
//			}
//			else if (choice == Super_4G_Data_offers) {
//				cout << "3 hour 1 GB @Rs.31";
//			}
//			else
//				cout << "Invalid choice";
//		}
//		else
//			cout << "Invalid Code. Try Again";
//	}                    //MASHAALLAH CANIM VERY WELL ITS A SMALL CONTRIBUTION TOWARDS YOUR SUCCESS VERY GOOD
//}

//CONDITIONAL OPERATOR
//#include<iostream>
//using namespace std;
//int main() {
//	int x = 18;
//	int y = 15;
//	int z;
//	if (x > y) {
//		z = 1;
//		cout << z;
//	}
//	else {         //MASHAALLAH
//		z = 20;
//		cout << z;
//	}
//}
////BY CONDITIONAL OPERATOR
//#include<iostream>
//using namespace std;
//int main() {
//	int x = 8;
//	int y = 15;
//	int z;
//	bool flag1 = false;
//	bool flag2 = true;
//	z=(x > y) ? flag1 : flag2;
//	cout << z;               //MASHAALLAH LAIBA GREAT JOB
//}

//SWITCH STATEMENTS
//#include <iostream> 
//using namespace std;
//int main()
//{
//	int selection;
//	cout << "Which formula do you want to see?\n\n";
//	cout << "1. Area of a circle\n";
//	cout << "2. Area of a rectangle\n";
//	cout << "3. Area of a cylinder\n";
//	cout << "4. None of them!\n";
//	cin >> selection;
//	switch (selection) {
//	case 1:
//			cout << "Pi times radius squared\n";
//			break;
//	case 2:
//			cout << "Length times width\n";
//			break;
//	case 3:
//		cout << "Pi times radius squared times height\n";
//		break;
//	case 4:
//			cout << "Well okay then, good bye!\n";
//			break;
//	default:
//			cout << "Not good with numbers, eh?\n";
//	}
//	return 0;
//}

//#include <iostream> 
//using namespace std;
//int main()
//{
//	//YOU CAN USE VARIABLES WITH SAME NAME BUT THEIR SCOPE MATTERS
//	int code;
//	cout << "Enter code";
//	cin >> code;
//	switch (code) {
//	case 5:
//		cout << "Which formula do you want to see?\n\n";
//		cout << "1. Area of a circle\n";
//		cout << "2. Area of a rectangle\n";
//		cout << "3. Area of a cylinder\n";
//		cout << "4. None of them!\n";
//		cout << "Enter number" << endl;
//		cin >> code;
//		switch (code){
//		case 1:
//			cout << "Pi times radius squared\n";
//			break;
//		case 2:
//			cout << "Length times width\n";
//			break;
//		case 3:
//			cout << "Pi times radius squared times height\n";
//			break;
//		case 4:
//			cout << "Well okay then, good bye!\n";
//			break;
//		default:
//			cout << "Not good with numbers, eh?\n";
//		}
//		break;
//	default:
//		cout << "TATA";
//	}
//	return 0;
//}            //MASHAALLAH VERY WELLDONE YOU CAN DO IT LAIBA BUS COMSISTENCY K SAATH KRTI JAO

//*******EXERCISE**********//

//1. MAX/MIN
//#include<iostream>
//using namespace std;
//int main() {
//	int a, b = 0;
//	cout << "I will tell greater and smaller numbers:)" << endl;
//	cout << "Enter 1st num:" << endl;
//	cin >> a;
//	cout << "Enter 2nd num:" << endl;
//	cin >> b;
//	if (a > b) {
//		cout << a << " is greater than " << b;
//	}
//	else if (a == b) {
//		cout << a << "=" << b << endl;
//	}
//	else
//		cout << b << " is greater than " << a;
//}

//2. Roman
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "HI! I WILL TELL YOU ROMAN NUMERAL OF YOUR NUMBER " << endl;
//	int num;
//	cout << "Enter number b/w 1 and 10:" << endl;
//	cin >> num;
//	
//	if (num < 1 || num > 10) {
//		cout << "Invalid num. Enter b/w 1 and 10:" << endl;
//		cin >> num;
//	}
//	else {
//		switch(num) {
//		case 1:
//			cout << "i";
//			break;
//		case 2:
//			cout << "ii";
//			break;
//		case 3:
//			cout << "iii";
//			break;
//		case 4:
//			cout << "iv";
//			break;
//		case 5:
//			cout << "v";
//			break;
//		case 6:
//			cout << "vi";
//			break;
//		case 7:
//			cout << "vii";
//			break;
//		case 8:
//			cout << "viii";
//			break;
//		case 9:
//			cout << "ix";
//			break;
//		case 10:
//			cout << "x";
//			break;
//		}
//	}
//}

//3.Magic Dates
//#include<iostream>
//using namespace std;
//int main() {
//	int d;
//	int m;
//	int y;
//	cout << "I AM GOING TO TELL WHETHER DATE YOU ARE ENTERING IS MAGICAL OR NOT:)" << endl;
//	cout << "Enter date:" << endl;
//	cin >> d;
//	if (d > 31||d<1) {
//		cout << "Enter valid date:" << endl;
//		cin >> d;
//	}
//	cout << "Enter month:" << endl;
//	cin >> m;
//	if (m < 1 || m>12) {
//		cout << "Enter valid month:" << endl;
//		cin >> m;
//	}
//	cout << "Enter year of two digits:" << endl;
//	cin >> y;
//	if (y < 1) {
//		cout << "Enter valid year:" << endl;
//		cin >> y;
//	}
//    if (d * m == y)  {    //yahan pay else if nahi hoga
//		cout << "Date is magical" << endl;
//	}
//	else
//		cout << "Date is not magical" << endl;
//}

//4.Area of rectangle
//#include<iostream>
//using namespace std;
//int main() {
//	int l1,l2,w1, w2;
//	cout << "Enter l of r1:" << endl;
//	cin >> l1;
//	cout << "Enter w of r1:" << endl;
//	cin >> w1;
//	cout << "Enter l of r2:" << endl;
//	cin >> l2;
//	cout << "Enter w of r2:" << endl;
//	cin >> w2;
//	int a1 = l1 * w1;
//	int a2 = l2 * w2;
//	if (a1 > a2) {
//		cout << "r1 is greater than r2" << endl;
//	}
//	else if (a1 == a2) {
//		cout<< "r1 is equal to r2" << endl;
//	}
//	else
//		cout<< "r2 is greater than r1" << endl;
//}
//

//23. GEOMETRY CALCULATOR-->filhal loops nahi use kr rahay to invalid choice k bad sirf aik hi bar hum doba
//..choice lay sktay hain
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int choice;
//	{
//		cout << "Geometry Calculator" << endl;
//		cout << "	1. Calculate the Area of a Circle" << endl;
//		cout << "	2. Calculate the Area of a Rectangle" << endl;
//		cout << "	3. Calculate the Area of a Triangle" << endl;
//		cout << "	4. Quit" << endl;
//		cout << "	Enter your choice(1 - 4) :" << endl;
//		cin >> choice;
//	}
//	if (choice < 1 || choice>4) {
//		cout << "Enter valid choice b/w 1 and 4:" << endl;
//		cin >> choice;
//	}
//	switch (choice) {
//	case 1:{
//			int r;
//			const double PI = 3.14159;
//			cout << "Enter r:" << endl;
//			cin >> r;
//			double a1 = PI * pow(r, 2);
//			cout <<"a of circle:"<< a1;
//		}
//	case 2:{
//		int l, w;
//		cout << "Enter l:" << endl;
//		cin >> l;
//		cout << "Enter w:" << endl;
//		cin >> w;
//		int a2 = l * w;
//		cout <<"a of rec:"<< a2;
//	}
//		  break;
//	case 3:{
//		int l1, h;
//		cout << "Enter l:" << endl;
//		cin >> l1;
//		cout << "Enter h:" << endl;
//		cin >> h;
//		int a3 = l1 * h / 2;
//		cout <<"a of tri"<< a3;
//	}
//		  break;
//	case 4:
//		break;
//	}
//}

//5.BMI
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	double w, h;
//	cout << "BMI CALCULATOR" << endl;
//	cout << "Enter w in pounds:" << endl;
//	cin >> w;
//	cout << "Enter h in inches:" << endl;
//	cin >> h;
//	if (h <= 0) {
//		cout << "Enter correct height" << endl;
//		cin >> h;
//	}
//	double B = w * 703 / (pow(h, 2));
//	if (B > 18.5 && B < 25) {
//		cout << "You are normal acc to your height.";
//	}
//	else if (B < 18.5) {
//		cout << "You are underweight." << endl;
//	}
//	else
//		cout << "You are overweight" << endl;
//}

//6. Mass and Weight
//#include<iostream>
//using namespace std;
//int main() {
//	double m;
//	cout << "ENter m in kg" << endl;
//	cin >> m;
//	double w = m * 9.8;
//	if (w > 100) {
//		cout << "Mass of weight:" << w << "(N) is too heavy." << endl;
//	}
//	else if (w < 10) {
//		cout << "Mass of weight:" << w << "(N) is too light." << endl;
//	}
//}

//7.Time Calculator
//#include<iostream>
//using namespace std;
//int main() {
//	float s;
//	cout << "Enter no. of seconds:" << endl;
//	cin >> s;
//	if (s < 0) {
//		cout << "Enter valid sec" << endl;
//		cin >> s;
//	}
//    if (s >= 60) {
//		float m = s / 60;
//		cout << m << " mins in " << s << " sec " << endl;
//	}
//	else if (s >= 3600) {
//		float h = s / 3600;
//		cout << h << " hrs in " << s << " sec " << endl;
//	}
//	else if (s >= 86400) {
//		float d = s / 86400;
//		cout << d << " days in " << s << " sec " << endl;
//	}
//	else if (s <= 60) {
//		cout << s << " sec " << endl;
//	}
//}

//8. Color Mixer
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string c1, c2;
//	cout << "Enter primary color :" << endl;
//	cin >> c1;
//	cout << "Enter another primary color :" << endl;
//	cin >> c2;
//	if (c1 == "red" && c1 == "Red" && c1 == "RED" && c1 == "blue" && c1 == "Blue" && c1 == "BLUE" && c2 == "blue" && c2 == "Blue" && c2 == "BLUE" && c2 == "red" && c2 == "Red" && c2 == "RED") {
//		cout << "By mixing " << c1 << " and " << c2 << ", you get purple.";
//	} //pehlay or operator jis say kuch bhi enter krtay to ho jata
//	else if (c1 == "red" && c1 == "Red" && c1 == "RED" && c1 == "Yellow" && c1 == "yellow" && c1 == "YELLOW" && c2 == "yellow" && c2 == "Yellow" && c2 == "YELLOW" && c2 == "red" && c2 == "Red" && c2 == "RED") {
//		cout << "By mixing " << c1 << " and " << c2 << ", you get orange.";
//	}
//	else if (c1 == "blue" && c1 == "Blue" && c1 == "BLUE" && c1 == "Yellow" && c1 == "yellow" && c1 == "YELLOW" && c2 == "yellow" && c2 == "Yellow" && c2 == "YELLOW" && c2 == "blue" && c2 == "Blue" && c2 == "BLUE") {
//		cout << "By mixing " << c1 << " and " << c2 << ", you get green.";
//	}
//	else
//		cout << "Error";
//}

//9.Change for a dollar game
// LIKE IS KO APP KISI BHI USER ENTERED VALUES ADD KRNAY SAY KUCH OUTPUT PAY CONDITION LAGANAY K LIYAY USE KR SKTAY
//bat aesi hai k if else to samajh aa gai lekin different scenerios practice krnay say programming ati hai
//#include<iostream>
//using namespace std;
//int main() {
//	float DOLLAR = 1.00;
//	float PENNY = 0.01;
//	float NICKEL = 0.05;
//	float DIME = 0.10;
//	float QUARTER = 0.25;
//	float p, n, d, q;
//	cout << "Let see, if your coins equal one dollar or not" << endl;
//	cout << "How many pennies you have:" << endl;
//	cin >> p;
//	cout << "How many nickel you have:" << endl;
//	cin >> n;
//	cout << "How many dime you have:" << endl;
//	cin >> d;
//	cout << "How many quarter you have:" << endl;
//	cin >> q;
//	float total_coin = 0;
//	total_coin+= ((p *= PENNY) + (n *= NICKEL) + (d *= DIME) + (q *= QUARTER));
//	if (total_coin == 1.00) {
//		cout << "Congratulations!You have won the game.";
//	}
//	else if (total_coin < 1.00 || total_coin>1.00) {
//		cout << "OOPS. Try Again.";
//	}
//}

//10. Days in a Month
//#include<iostream>
//using namespace std;
//int main() {
//	int m,y;
//	cout << "Enter m:" << endl;
//	cin >> m;
//	if (m < 1 || m>12) {
//		cout << "Enter valid m b/w 1 and 12:" << endl;
//		cin >> m;
//	}
//	cout << "Enter y:";
//	cin >> y;
//	if (y < 1) {
//		cout << "Enter valid year:" << endl;
//		cin >> y;
//	}
//	switch (m) {
//	
//	case 2: //main focus -->smart approach rakho-->abhi ghalat ho raha 
//			//lets do a cool approach
//	{
//		if (y % 4 == 0) {
//			if (y % 100 == 0) {
//				if (y % 400 == 0) {
//					cout << "29 DAYS";
//				}
//				else {
//					cout << "28 Days";
//				}
//			}
//			else {
//				cout << "29 Days";
//			}
//		}
//		else {
//			cout << "28 Days";
//		}
//	}
//	break;
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		cout << "31 days";
//		break;
//	case 11:
//	case 9:
//	case 6:
//	case 4:
//		cout << "30 days";
//		break;
//	default:
//		cout << "Error";
//	}
//}

//11.Math Tutor
//#include<iostream>
//#include<iomanip>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main() {
//	// Constants 
//	const int MIN_VALUE = 1; // Minimum die value 
//	const int MAX_VALUE = 100; // Maximum die value 
//	// Variables 
//	int n1; // To hold the value of die #1 
//	int n2; // To hold the value of die #2 
//	// Get the system time. 
//	unsigned seed = time(0);
//	// Seed the random number generator. 
//	srand(seed);
//	cout << "Rolling the dice…\n";
//	n1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//	n2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//	cout << n1 << endl;
//	cout << n2 << endl;
//	cin.ignore();
//	int s = n1 + n2;
//	int ans;
//	cout << "Enter your answer:" << endl;
//	cin >> ans;
//	if (ans == s) {
//		cout << "Congratulations your answer is correct." << endl;
//	}
//	else
//	cout <<"Amm correct answer is "<< s;
//	return 0;
//}   //THIS IS COOL PRO DUDE AHAHA

//12. Software Sales
//#include<iostream>
//#include<conio.h>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int NINTYNINE = 99;
//	double d1 = 0.2, d2 = 0.3, d3 = 0.4, d4 = 0.5;
//	double unit;
//	
//	cout << "the number of units sold:" << endl;
//	cin >> unit;
//	if (unit < 0) {
//		cout << "Enter number greater than 0:" << endl;
//		cin >> unit;
//	}
//	double total_cost = 0;
//	if (unit >= 10 && unit <= 19) {
//		
//		total_cost = NINTYNINE * d1;
//	}
//	else if (unit >= 20 && unit <= 49) {
//		
//		total_cost = NINTYNINE * d2;
//	}
//	else if (unit >=50  && unit <=99 ) {
//	
//		total_cost = NINTYNINE * d3;
//	}
//	else if (unit >= 100) {
//	
//		total_cost = NINTYNINE * d4;
//	}
//
//	cout << setprecision(2) << fixed << showpoint;
//	cout <<"The price after discount is:"<< total_cost;
//	_getch();
//	return 0;
//}  //abhi filhal yeh pending hai lekin umeed hai k theek ho ga INSHAALLAH

//13. Book Club Points 
//#include<iostream>
//using namespace std;
//int main() {
//	int b;
//	cout << "Enter no. of books you have purchased:" << endl;
//	cin >> b;
//	if (b < 0) {
//		cout << "Enter no. greator than or equal to 0:" << endl;
//		cin >> b;
//	}
//	if (b == 0) {
//		cout << "0 points";
//	}
//	else if (b == 1) {
//		cout << "5 points";
//	}
//	else if (b == 2) {
//		cout << "15 points";
//	}
//	else if (b == 3) {
//		cout << "30 points";
//	}
//	else if (b >=4) {
//		cout << "60 points";
//	}
//}

//20. The Speed of Sound
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int choice;
//	float d;
//	float t;
//	float s1 = 1100, s2 = 4900, s3 = 16400;
//	cout << "Time teller for different distances travelled by sound" << endl;
//	cout << "1.Air" << endl << "2.Water" << endl << "3.Steel" << endl;
//	cout << "Enter choice:" << endl;
//	cin >> choice;
//	if (choice > 3 || choice < 1) {
//		cout << "Enter valid choice b/w 1 and 3:" << endl;
//		cin >> choice;
//	}
//	 {
//		cout << "Enter distance:" << endl;
//		cin >> d;
//		if (d < 0) {
//			cout << "Enter valid dis greater than 0:" << endl;
//			cin >> d;
//		}
//		else {
//			switch (choice) {
//			case 1: {
//				t = s1 * d;
//				cout << setprecision(4) << fixed;
//				cout <<"Time :"<< t;
//			}
//				  break;
//			case 2: {
//				t = s2 * d;
//				cout << setprecision(4) << fixed;
//				cout << "Time :" << t;
//			}
//				  break;
//			case 3: {
//				t = s3 * d;
//				cout << setprecision(4) << fixed;
//				cout << "Time :" << t;
//			}
//				  break;
//			}
//		}
//	}
//}      //is mein logical approach itni achi use nhi ki
//
//

//21. The Speed of Sound in Gases-->almost same as 20th.

//22. Freezing and Boiling Points
//#include<iostream>
//using namespace std;
//int main() {
//
//}
