//FUNCTIONS
// 2 fun are used
//#include<iostream>
//using namespace std;
//void displayMsg() {     //fun header
//	cout << "HI iam from display msg." << endl;
//}
//int main() {
//	cout << "Mein main hun."<<endl;
//		 displayMsg();       //fun call
//		 cout << "Mera yaqeen kro mein man hun.";
//}

//loops and 3 fun are used
//#include<iostream>
//using namespace std;
//void displayMsg() { 
//	//fun header
//	for (int i=0;i < 5;i++) {
//		cout << "HI iam from display msg." << endl;
//	}
//}
//void displayMsg2() {
//	cout << "Ben de burda yiyim..HI" << endl;
//}
//int main() {
//	cout << "Mein main hun." << endl;
//	displayMsg();
//	displayMsg2();//fun call
//		cout << "Mera yaqeen kro mein man hun.";
//}

//BETA, BAAP, DADA FUN
//#include<iostream>
//using namespace std;
//void beta() {
//	cout << "HUM BAAP K BETAY HAIN" << endl;
//	cout << "HUMAIN HAMARAY BAPU BULAY HAIN" << endl;
//}
//void baap() {
//	cout << "hum dada k betay aur betay k baap hain" << endl;
//	cout << "HUMAIN ABA BULAY HAIN" << endl;
//	cout << "Hum apnay betay ko bulatay hain abhi" << endl;
//	beta();
//}
//int main() {
//	cout << "Mein dada hun aur baap baap abhi betay k bap ko bulata hun wo khud hi betay ko bula day ga." << endl;
//	baap();
//}

//use of fun prototypes----in ko void beta(datatype) likhtya hain
//#include<iostream>
//using namespace std;
//void beta();
//void baap();
////ta k main ko uper likh skain kiun declaration zaroori hoti hain functional calling k liyay
//int main() {
//	cout << "Mein dada hun aur baap baap abhi betay k bap ko bulata hun wo khud hi betay ko bula day ga." << endl;
//	baap();
//}
//void beta() {
//	cout << "HUM BAAP K BETAY HAIN" << endl;
//	cout << "HUMAIN HAMARAY BAPU BULAY HAIN" << endl;
//}
//void baap() {
//	cout << "hum dada k betay aur betay k baap hain" << endl;
//	cout << "HUMAIN ABA BULAY HAIN" << endl;
//	cout << "Hum apnay betay ko bulatay hain abhi" << endl;
//	beta();
//}

//SEND DATA INTO A FUNCTION
//JO VALUES PASS HOTI HAIN UNKO ARGUMENTS KEHTAY HAIN
//CHALO DEKHTAY HAI YEH KESAY HOTA..HUNH
//PARAMETERS:passed values ko hold/accept krnay walay variables hotay hain

//ONE PARAMETER
//#include<iostream>
//using namespace std;
//void displaymsg(int);
//int main() {
//	cout << "Meri taqat mein shamil hai k meinb dosray functions ko value pass krun ga" << endl;
//	displaymsg(5);        //argument---idhr datatype nai likhtray
//	displaymsg(8);
//	displaymsg(3 + 9);       //in donon ka sum jay ga 
//	displaymsg(5.7);        //sirf 5 pass hoga kiun k agay int hai
//	cout << "dEKH LIYA MERA KAMAL" << endl;
//}
//void displaymsg(int num) {        //parameter
//	int p = num * num;
//	cout <<"num is " << num<<endl;
//	cout << "Product is:" << p << endl;
//}

//With three parameters
//#include<iostream>
//using namespace std;
//void showProduct(int, int, int);
//int main() {
//     //values ko declare main mein nahi krna--------nahi aesay nahi hota blk values ko idr declare krtay hain aur kisi dosray 
//	//...name say parameter bnatay hain
//	int v1, v2, v3;
//	
//	cout << "Enter three values and I will use my power to call other function to display their product." << endl;
//	cin >> v1 >> v2 >> v3;
//	showProduct(v1, v2, v3);
//	cout << "Enter three values and I will use my power to call other function to display their product." << endl;
//	cin >> v1 >> v2 >> v3;
//	showProduct(v1, v2, v3); 
//	//yeh uper jo kiya wo sahi lekin agr values donon ki aik hi bar lenay k bad display kro gay to donon mein pehlay wali ain gi
//	cout << "Enter three values and I will use my power to call other function to display their product." << endl;
//	cin >> v1 >> v2 >> v3;
//	showProduct(v1, v2, v3);
//	showProduct(v1, v2, v3);
//	//yeh 2 bar aik hi product diplay kray ga
//	int v4, v5, v6;      //matlab ap do variables ko aik hi parameter mein store kra sktay ho
//	cout << "Enter three values and I will use my power to call other function to display their product." << endl;
//	cin >> v4 >> v5 >> v6;
//	showProduct(v4, v5, v6);
//	cout << "Dekha main mian ka kamal." << endl;
//	return 0;
//} 
//void showProduct(int n1, int n2, int n3) {       //compiler error ata hai agr  -->void showProduct(int n1,  n2, int n3)
//	//same name ka parameter bhi rkh sktay v1 waghaira warna beshak change bhi kr lo
//	int Product = n1 * n2 * n3;
//	cout << "Product of those values that you had given in main function instead of me jis ka dukh hua is:" << Product << endl;
//}

//PASSING DATA BY VALUE
//----------------------------------------------------//
//BHALA KESAY??
//DEKHTAY HAIN
//AGR HUM KOI ARGUMENT KISI PARAMETER KO PASS KR RAHAY HAIN AUR US PARAMETER KO KOI VALUE ASSIGN KR DETAY HAIN TO ARGUMENT 
//....MAIN FUNCTION MEIN AA KR KOI EFFECT NAHI HOGA kiun us k pass argument ki sirf aik copy hoti hai
//#include<iostream>
//using namespace std;
//void displaymsg(int);
//int main() {
//	cout << "Meri taqat mein shamil hai k meinb dosray functions ko value pass krun ga" << endl;
//	displaymsg(5);        //argument---idhr datatype nai likhtray
//	displaymsg(8);
//	displaymsg(3 + 9);       //in donon ka sum jay ga 
//	displaymsg(5.7);        //sirf 5 pass hoga kiun k agay int hai
//	cout << "dEKH LIYA MERA KAMAL" << endl;
//}
//void displaymsg(int num) { //parameter
//	num = 2;
//	int p = num * num;
//	cout << "num is " << num << endl;
//	cout << "Product is:" << p << endl;
//}

//FUNCTIONS USED IN MENU-DRIVEN PROGRAMS
//JAZZ MENU ITERATION
/*#include<iostream>
#include<string>
using namespace std;
void showMenu();
int main() {
	string code;
	int choice;
	const int Top_offers = 1;
	const int All_in_one_offers = 2;
	const int Super_4G_Data_offers = 3;
	const int QUIT_CHOICE = 0;
	do {
		cout << "Enter code on KeyPad:" << endl;
		cin >> code;

		if (code == "*444#")
			do {
				showMenu();
				cin >> choice;
				if (choice == QUIT_CHOICE)
					break;
				if (choice == Top_offers) {
					cout << "1 hour 1 GB @Rs.21" << endl;
				}
				else if (choice == All_in_one_offers) {
					cout << "1 day 2 GB @Rs.41" << endl;
				}
				else if (choice == Super_4G_Data_offers) {
					cout << "3 hour 1 GB @Rs.31" << endl;
				}
				else
					cout << "Invalid choice" << endl;
			} while (choice<Top_offers || choice>Super_4G_Data_offers || choice != QUIT_CHOICE);
		else
			cout << "Invalid Code. Try Again" << endl;
	} while (code != "*444#");
}
	void showMenu() {
		cout << "1:Top_offers" << endl;
		cout << "2:All_in_one_offer" << endl;
		cout << "3:Super_4G_Data_offers" << endl;
		cout << "0:QUIT_CHOICE" << endl;
		cout << "Enter choice:";
	} */         //MASHAALLAH CANIM BN GAYA FUNCTION
	//MASHAALLAH CANIM VERY WELL ITS A SMALL CONTRIBUTION TOWARDS YOUR SUCCESS VERY GOOD
         //WITH WKW'S HELP YOU HAVE COMPLETED YOUR PROGRAM MASHAALLAH

//--------------------------------------------------------//

//CHECKPOINTS
//--------------------------------------------------------//
//6.8
//#include <iostream> 
//using namespace std;
//void showDouble(int); // Function prototype 
//int main()
//{
//	int num;
//	for (num = 0; num < 10; num++)
//		showDouble(num);
//	return 0;
//}
//// Definition of function showDouble. 
//void showDouble(int value)
//{
//	cout << value << "\t" << (value * 2) << endl;
//}

//---------------------------------------------------------//
//6.9
//#include <iostream> 
//using namespace std;
//void func1(double, int); // Function prototype 
//int main()
//{
//	int x = 0;
//	double y = 1.5;
//	cout << x << " " << y << endl;
//	func1(y, x);
//	cout << x << " " << y << endl;
//	return 0;
//}
////www.TechnicalBooksPdf.com
////322 Chapter 6 Functions
//void func1(double a, int b)
//{
//	cout << a << " " << b << endl;
//	a = 0.0;
//	b = 10;
//	cout << a << " " << b << endl;
//}
//----------------------------------------------//
//-------------------------------------------------//

//RETURN STATEMENT ----JB RETURN AJATA HAI TO US K BAD KI STATEMENTS AGR HON BHI TO EXECUTE NAHI HOTI BLK HOLD MAIN K PASS CHALA JATA
// This program uses a function to perform division. If division 
// by zero is detected, the function returns. 
 //#include <iostream>
 //using namespace std;
 //// Function prototype. 
 //void divide(double, double);
 //int main()
 //{
 //double num1, num2;
 //cout << "Enter two numbers and I will divide the first\n";
 //cout << "number by the second number: ";
 //cin >> num1 >> num2;
 //divide(num1, num2);
 //return 0;
 //}
////*************************************************************** 
//// Definition of function divide. * 
// // Uses two parameters: arg1 and arg2. The function divides arg1 * 
// // by arg2 and shows the result. If arg2 is zero, however, the * 
// // function returns. * 
// //*************************************************************** 
//
// void divide(double arg1, double arg2)
// {
// if (arg2 == 0.0)
// {
// cout << "Sorry, I cannot divide by zero.\n";
// return;
// }
// cout << "The quotient is " << (arg1 / arg2) << endl;
// }

//--------------------------------------------//
//RETURNING A VALUE FROM A FUNCTION
//RETURN TYPE-->INT, DOUBLE, BOOL
//CALLED FUNCTION MEIN BHI SUM BAGHAIR RETURN K KRA SKTAY-->US KO COUT MEIN LIKHO JESAY UPER K PROGRAMS MEIN LIKHA HAI
//LEKIN AB SUM KR K USAY MAIN MEIN RETURN KRAO AUR WAHAN COUT MEIN LIKHO TA K PATA CHALAY
//------------------------------------------//
//#include<iostream>
//using namespace std;
//int sum(int, int);
//int product(int, int);
//int main() {
//	int v1 = 5;
//	int v2 = 4;
//	sum(v1,v2);
//	int p=product(v1,v2);   //formula is written in function
//	cout << "Product is:" << p << endl;
//}
//int sum(int n1, int n2) {
//	int s = n1 + n2;
//	cout << "sum is:" << s << endl;  
//	return s;
//}
//int product(int num1,int num2) {
//	return num1 * num2;
//}

//AREA OF CIRCLE 
//#include<iostream>
//#include<iomanip>
//using namespace std;
//double getRad();        //get function mein koi argument nahi kiun k hum user ko value enter krnay ka kahain gay
//double square(double);
//int main() {
//	const double PI = 3.14;
//	double rad;
//	cout << "I will display area of radius of your choice. Azma k dekh lo." << endl;
//	rad=getRad();     
//	double area = PI * square(rad);
//	cout << "Area wo bhi apk marzi k radius ka:" << area << endl;
//}
//double getRad() {
//	double r;      //yahan pay r local variable hai jisay yahin pay declare krna zaroori hai
//	cout << "Enter radius:" << endl;
//	cin >> r;
//	return r;
//}
//double square(double r) {       
//	return r * r;
//}

//TO CONVERT SOMETHING
//#include<iostream>
//using namespace std;
//void showIntro();
//int getCups();
//int CupsToOunces(double);
//int main() {
//	double cups;
//	showIntro();
//	cups = getCups();
//	double Ounces = CupsToOunces(cups);
//	cout << cups << "cups equals to " << Ounces << " Ounces." << endl;
//
//}
//void showIntro() {
//	cout << "This program converts measurements\n"
//		<< "in cups to fluid ounces. For your\n"
//		<< "reference the formula is:\n"
//		<< " 1 cup = 8 fluid ounces\n\n";
//}
//int getCups() {
//	double numCups;
//	 cout << "Enter the number of cups: ";
//	 cin >> numCups;
//	 return numCups;
//}
//int CupsToOunces(double numCups) {
//	return numCups * 8.0;
//}

//RETURNING BOOLEAN VALUE
//TO CHECK IT IS EVEN OR ODD
//#include<iostream>
//using namespace std;
//bool isEven(int);
//int getVal();
//int main() {
//	int value;
//	value = getVal();
//	cout << "Value is" << value<<endl;
//	if (isEven(value)) {
//		cout << "Value is even"<<endl;
//	}
//	else
//		cout << "Value is odd"<<endl;
//}
//int getVal() {
//	int val;
//	cout << "Enter value to check whether it is even or odd:" << endl;
//	cin >> val;
//	return val;
//}
//bool isEven(int val) {
//	bool status;
//	if (val % 2 == 0) {
//		status = true;
//	}
//	else
//		status = false;
//	return status;
//}

//To check it is prime or not
//#include<iostream>
//using namespace std;
//bool isPrime(int);
//int getVal();
//int main() {
//	int value;
//	value = getVal();
//	cout << "Value is" << value << endl;
//	if (isPrime(value)) {
//		cout << "Value is Prime" << endl;
//	}
//	else
//		cout << "Value is not Prime" << endl;
//}
//int getVal() {
//	int val;
//	cout << "Enter value to check whether it is prime or not:" << endl;
//	cin >> val;
//	return val;
//}
//bool isPrime(int val) {
//	bool status=true;
//	
//	for (int i = 2;i < val;i++) {
//		if (val % i == 0 || val<=1)
//			status = false;
//	
//	}
//	return status;
//}

//LOCAL VARIABLES:----is ki theory blabla
//#include<iostream>
//using namespace std;
//void another(int &num) {   //khali & laga denay say ap main k arguments by reference yahan la sktay ho        
//	int num = 2;   //local---->pasing val by ref mein redefinition of num nahi krtay
//	cout << "In another, num is" << num << endl;
//	num++;
//	cout << "In another, num++ is" << num << endl;      //idhr 5 anay ki waja say back in main mein bhi 5 ho jay ga
//}
//int main() {
//	int num = 4;  //local
//	cout << "In main, num is" << num << endl;
//	another(num);
//	cout << "Back in main, num is" << num << endl;
//}

////GLOBAL AUR LOCAL KA NAME SAME HOSKTA HAI
//// CONSTANTS KO GLOBAL KR DO TA K SB FUNCTIONS K LIYAY ACCESSIBLE HON
////Global Variable-------blabla
//#include<iostream>
//using namespace std;
////int num = 5;   //----is initialized     //global
//int num;          //default=0;
//void another() {
//	cout << "In another,global num is" << num << endl;
//	int num = 2;   //local
//	cout << "In another, num is" << num << endl;
//}
//int main() {
//	cout << "In main,global num is" << num << endl;
//	int num = 4;  //local
//	cout << "In main, num is" << num << endl;
//	another();
//	cout << "Back in main, num is" << num << endl;
//}

//LOCAL VARIABLES FUNCTION TERMINATION K TIME DESTROY HO JATAY HAIN
//#include <iostream> 
// using namespace std;
//// Function prototype 
// void showLocal();
// int main()
// {
// showLocal();
// showLocal();
// return 0;
// }
// void showLocal()
//	  {
//	  int localNum = 7; // Local variable 
//	// int localNum; //------uper walay ko comment kr k is ko uninitialize nahi chorr sktay yeh mazay global mein hi hotay hain
//	 cout << "localNum is " << localNum << endl;
//	 localNum = 99;
//	 }//-----------yahan pay asoolan jb function dosri bar call hota to val==99 hoti lekin aesa nahi hota reason uper hai..hah
// //--------------------------------------//

// //HR MASLAY KA HAL HOTA HAI BACHA
// //-----------------------------------------------------------//
//STATIC VARIABLE
//---GENERAL USE--->AGR FUNCTIONS TERMINATE HO K DOBARA BHI CALL HON TO STATIC AIK HI VALUE KI BAJAY INCREMENT WAGHAIRA HO SKTA
//SF--0 SAY BY DEFAULT INITIALIZE HOTA HAI
//---------------------------------//
//#include<iostream>
//using namespace std;
//void showStatic();
//int main() {
//	for (int i = 0;i < 4;i++) {
//		showStatic();
//	}
//}
//void showStatic() {
//    static int statNum ;        //by default 0 hota hai wagarna koi bhi value day sktay ho     //static likhna lazmi hai
//	cout << "StatNum is:" << statNum << endl;
//	statNum++;
//}

//DEFAULT ARGUMENTS--->YEH ISTEMAL KUCH YUN HOTAY K WESAY TO HUM JB FUNCTION MAIN MEIN CALL KR RAHAY HOTAY HAIN TO KOI VALUES AS ARGUMENT PASS KRTAY HAIN LEKIN AGR HUM...
//...PROTOTYPE MEIN KOI VALUE AS DEFAULT ARGUMENT DAY DEIN AUR FUNCTION CALL K WAQT KUCH NA DEIN TO YEH DEFAULT VALUES JATI HAIN.
//#include<iostream>
//using namespace std;
//void showStar(int = 10, int = 1);
//int main() {
//	showStar();
//	cout << endl;
//	showStar(5);
//	cout << endl;
//	//showStar(, 8);   //error
//	showStar(7, 3);
//	cout << endl;
//}
//void showStar(int n, int n2) {
//	cout << "n is:" << n << "\t\t" << "n2 is:" << n2 << endl;
//}

//REFERENCE VARIABLES AS PARAMETERS--->yeh value yani 7 waisay main k bahir accessible nahi hoti lekin agr reference as parameter ho to value same rehti hai
// //is mein argument ki copy nahi blk us ka address pass hota hai
//#include<iostream>
//using namespace std;
//void refFun(int &);
//int main() {
//	int val = 7;
//	cout << "In main val is:" << val << endl;
//	refFun(val);
//	cout << "Now double val is:" << val << endl;     //agr ampersant nahi daltay 
//}
//void refFun(int &parRef) {
//	cout << "In refFun, val is:" << parRef << endl;
//	parRef *= 4;
//}

//----------------------//
//CheckPoint 6.23
//#include <iostream> 
//using namespace std;
//void getfunc1(int&, int&);
//void func2(int&, int&, int&);
//void func3(int, int, int);
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	cout << x << " " << y << " " << z << endl;
//	getfunc1(x, y);
//	cout << x << " " << y << " " << z << endl;
//	func2(x, y, z);
//	cout << x << " " << y << " " << z << endl;
//	func3(x, y, z);
//	cout << x << " " << y << " " << z << endl;
//	return 0;
//}
//void getfunc1(int& a, int& b)    //agr & na hota to hamari dali huii values uper accessible na oti
//{
//	cout << "Enter two numbers: ";
//	cin >> a >> b;
//}
//void func2(int& a, int& b, int& c)     //agr & na hota to hamari dali huii values uper accessible na oti
//{
//	b++;
//	c--;
//	a = b + c;
//}
//void func3(int a, int b, int c)         //agr & na hota to hamari dali huii values uper accessible na oti--ab is mein & nahi hai to 
////second function wali jo values uper stord wohi is mein bhi aa jain gi
//{
//	a = b - c;
//}

//   OVERLOADED FUNCTIONS-----SAME NAME K FUNCTION LEKIN DIFFERENT NO. OF PARAMETERS YA DIFFERENT DATATYPES K PARAMETERS
//  FUNCTION SIGNATURE-----FUNCTION NAME AUR US K UNDR MOJOUD DATATYPE HOTI HAI

////EXIT FUNCTIONS
////---CSTDLIB IS USED AND THIS FUNCTION IS USED TO TERMINATE THE PROGRAM 
//// This program shows how the exit function causes a program 
//// to stop executing. 
// #include <iostream>
// #include <cstdlib> // Needed for the exit function 
// using namespace std;
// void function(); // Function prototype 
// int main()
// {
//	 cout << "I am exiting rogram in main.Meri marzi." << endl; //aesay bhi kr sktay k main mein hi exit kr do.
//	
//	 
// function();
// return 0;
// }
// //*********************************************************** 
// // This function simply demonstrates that exit can be used * 
// // to terminate a program from a function other than main. * 
// //*********************************************************** 
// void function()
// {
// cout << "This program terminates with the exit function.\n";
 //cout << "Bye!\n";
 //
 //exit(EXIT_FAILURE); //EXIT HO HI JAY GA LEKIN UNSUCCESSFUL SA AJEEB-------: Generally, the exit code is important only if you know it will be tested outside 
 ////........the program.If it is not used, just pass zero, or EXIT_SUCCESS
 //cout << "This message will never be displayed\n";
 //cout << "because the program has already terminated.\n";
 //}

////-----CP--6.25-----//
////What is the output of the following program ?
//#include <iostream> 
//using namespace std;
//int manip(int);
//int manip(int, int);
//int manip(int, double);
//int main()
//{
//	int x = 2, y = 4, z;
//	double a = 3.1;
//	manip(x);
//	cout << x << endl;    
//	manip(x, y);
//	cout << x <<"\t\t" << y << endl;
//	manip(y, a);
//	cout << y << "\t\t" << a << endl;         
//	z = manip(x) + manip(x, y) + manip(y, a);
//	cout << z << endl;
//	return 0;
//}
//int manip(int val)
//{
//	cout<< val + val * 2<<endl;
//
//	return val + val * 2;
//}
//int manip(int val1, int val2)
//{
//	cout<< (val1 + val2) * 2<<endl;
//	return (val1 + val2) * 2;
//}
//int manip(int val1, double val2)
//{
//	cout<< val1 * static_cast<int>(val2)<<endl;
//	return val1 * static_cast<int>(val2);
//}
////IS PROGRAM SAY JO CHEEZAIN SAMAJH AI K DOSRAY SPECIFIC FUNCTIONS MEIN TO SPECIFIC FUNCTIONS PERFORM HOTAY HAIN LEKIN MAIN..
////..MEIN VAUE SAME REHTI HAI

//STUBS AND DRIVERS BHI SAMAJH AA GAY

//**************PROGRAMMING CHALLENGES INSHAALLLAH*****************************//
//********************************************************************************//

//1. Markup
//yeh aik code khud likhnay wali aur saath hilario k codes bhi hon gya

#include <iostream>
#include <iomanip>
using namespace std;
double calculateRetail(double, double);
double inputValidate(double);
int main()
{
	double wholesale_cost,
		markup_percent,
		retail_price;

	cout << "Enter wholesale cost: ";
	wholesale_cost = inputValidate(wholesale_cost);

	cout << "Enter it's markup perwcentage: ";
	markup_percent = inputValidate(markup_percent) * .01;

	retail_price = calculateRetail(wholesale_cost, markup_percent);

	cout << "Markup percentage = %"
		<< (markup_percent / .01)
		<< endl;

	cout << setprecision(2) << fixed

		<< "Wholesale cost    = $"
		<< wholesale_cost
		<< endl

		<< "Retail price      = $"
		<< retail_price
		<< endl;

	return 0;
}

double calculateRetail(double num1, double num2)
{
	return (num1 * num2) + num1;
}

double inputValidate(double num)
{
	while  (num < 0)
	{
		cout << "Error. An integer above 0 must be entered: ";
		cin >> num;
	}
	return num;
}

