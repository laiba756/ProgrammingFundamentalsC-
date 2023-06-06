//1
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "I am starting coding"<<endl;
//	cout<<"InshaAllah";
//	return 0;
//}

//2
//#include <iostream> 
//using namespace std;
//int main()
//{
//	cout << "The works of Wolfgang\ninclude the following";
//	cout << "\nThe Turkish March" << endl;
//	cout << "and Symphony No. 40 ";
//	cout << "in G minor." << endl;
//	return 0;
//}

//variable and literal
//#include <iostream> 
//#include<string>
//using namespace std;
// int main()
//{
//	 char n_b;
//	 n_b = 70;
//	 int h = 8, n = 3;
//	 string j = "grapes";
//
//	 cout << "The value in number is " << n_b <<endl<< h<<endl<<n<<j;
//	 return 0;
//	 }

//bool
//#include<iostream>
//using namespace std;
//int main() {
//	bool boolValue;
//	boolValue = true;
//	cout << boolValue<<endl;
//	cout << sizeof(double)<< endl;
//	boolValue = false;
//	cout << boolValue;
//	return boolValue;
//}

//Auto
//#include<iostream>
//using namespace std;
//int main() {
//	auto number = 9;
//	auto alphabet = 'g';
//	auto j = 7;
//	//auto j=7,9 ;   //won't work        
//	//auto keyword cannot be used for replacement of bool
//	cout  << number << alphabet <<j<< endl;
//	//uper cout mein variable likh kr neechay declare aur initialize nai kr sktay
//	//j = 8;   //won't work          //scope
//	return 0;
//}

//UNARY.....-5...REQUIRE ONE OPERAND
//BINARY.....+,-,*,/,% REQUIRE TWO OPERANDS
//TERNARY.........DON'T KNOW YET
//#include<iostream>
//using namespace std;
//int main() {
//	int a = 9;
//	int b = 6;
//	int sum = a + b;
//	int sub = a - b;
//	int mul = a * b;
//	int quo = a / b;
//	int mod = a % b;
//	cout << sum << endl << sub << endl << mul << endl << quo << endl << mod;
//}

//Wages
//#include<iostream>
//using namespace std;
//int main() {
//	double basePayRate =18.25 ,
//    regularHours = 40.0,           //per month
// regularWages = basePayRate * regularHours;
//	double	overTimePayRate = 27.78,
//		overTimeHours = 10,
//		overTimeWages = overTimePayRate * overTimeHours;
//		double	totalWages= regularWages+ overTimeWages;            //per month
//	cout <<"RS." << totalWages;
//	return 0;
//}

//*****************PROGRAMMING CHALLENGES******************//
//1. SUM
//#include<iostream>
//using namespace std;
//int main() {
//	int x = 50, y = 100;
//	int sum = x + y;
//	cout << "sum" << sum;
//}

//2.Sales Prediction
//#include<iostream>
//using namespace std;
//int main() {
//	 double totalsalesper = .58;
//	 double salesthisyear = 8.6e6;
//	 double salesperthisyear = totalsalesper * salesthisyear;  //total=overall% * salesofyear asked
//	 cout << "Sales of company this year in per are $" << salesperthisyear << endl;
//}

//3. Sales Tax
//#include<iostream>
//using namespace std;
//int main() {
//	float pur = 95;
//	float x = .02;     //yeh khayal rakho percent mein /100 hota
//	float y = .04;
//	double total = x * pur;
//	double total2 = y * pur;
//	cout << "Total country sales tax of this year on"<<x<<" per is $" << total << endl;
//	cout << "Total state sales tax of this year on" << y << " per is $" << total2 << endl;
//}

//4.. Restaurant Bill 
//#include<iostream>
//using namespace std;
//int main() {
//	float tax_per = 0.0675;
//	float tip_per = 0.20;
//	float meal_char = 88.67;
//	float tax = (tax_per * meal_char);
//	float tip = tip_per* meal_char;
//	float total = tax + tip + meal_char;
//	cout << total;
//}

//5.average
//#include<iostream>
//using namespace std;
//int main() {
//	int x = 50, y = 100;
//	int sum = x + y;
//	float ave = sum / 2;
//	cout << "sum" << sum<<endl;
//	cout << "ave" << ave;
//}

//6. Annual Pay
//#include<iostream>
//using namespace std;
//int main() {
//	int payAmount = 2200;
//	int payperiod = 26;
//	int totalamount = payAmount * payperiod;
//	cout << totalamount;
//}

//7.Ocean Levels 
//#include<iostream>
//using namespace std;
//int main() {
//	float current_level = 1.5e-3;
//	float x= current_level*5;
//	float y = current_level * 7;
//	float z = current_level * 10;
//	cout << "After 5 yrs:" << x << endl;
//	cout << "After 7 yrs:" << y << endl;
//	cout << "After 10 yrs:" << z << endl;
//}

//8. Total Purchase
//#include<iostream>
//using namespace std;
//int main() {
//	int x = 34;
//	int y = 4;
//	int s = x + y;
//	float tax_per = 0.07;
//	float total = s * tax_per;
//	cout << total;
//}

//9.Cyborg Data Type Sizes
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "Size of float " << sizeof(float) << endl;
//	cout << "Size of int " << sizeof(int) << endl;
//	cout << "Size of char " << sizeof(char) << endl;
//	cout << "Size of double " << sizeof(double) << endl;
//}

//10.Miles per Gallon
//#include<iostream>
//using namespace std;
//int main() {
//	float gallon = 15;
//	float meters = 372;
//	float distance = meters / gallon;
//	cout << "A car can travel through meters by 1 gallon:" << distance << endl;
//}

//11. Distance per Tank of Gas
//#include<iostream>
//using namespace std;
//int main() {
//	float mil_t = 23.5;
//	float mil_h = 28.5;
//	int gallon = 20;
//	float d_t = mil_t / gallon;
//	float d_h = mil_h / gallon;
//	cout << "Car traveling distance when driven in town:" << d_t <<"miles/gallon" << endl;
//	cout << "Car traveling distance when driven on highway:" << d_h <<"miles/gallon"<< endl;
//}

//12.Land Calculation
//#include<iostream>
//using namespace std;
//int main() {
//	int one_acre = 43560;
//	int given_acre = 391876;
//	int num_acre = given_acre / one_acre;
//	cout << "The number of acres in a tract of land with" << given_acre << "square feet is:" << num_acre << endl;
//}

//13.Circuit Board Price
//#include<iostream>
//using namespace std;
//int main() {
//	float profit_per = 0.35;
//	int price = 14.95;
//	float pro = price * profit_per;
//	float total = pro + price;
//	cout << "Price including profit amount of Circuit board on"<<profit_per*100<<"percent is:" << total << endl;
//}

//14. Personal Information 
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string myname = "Laiba";
//	string mynumber = "0301537804";
//	cout << "Name:" << myname << "\n" << "Number:" << mynumber << endl;
//}

//15.Triangle Pattern
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "  *  " << endl;
//	cout << " * * " << endl;
//	cout<< "* * *" << endl;
//}

//16. Diamond Pattern
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "  *  " << endl;
//	cout << " * * " << endl;
//	cout << "* * *" << endl;
//	cout << " * * " << endl;
//	cout << "  *  " << endl;
//}

//17.Stock Commission 
//#include<iostream>
//using namespace std;
//int main() {
//	float shares = 750;
//	float one_share_pri = 35;
//	float shares_pri = shares * one_share_pri;
//	float commision = 0.02;
//	float comm_shares_pri = shares_pri * commision;
//	float total_shares_pri = shares_pri * comm_shares_pri;
//	cout << " The amount paid for the stock alone (without the commission):" << shares_pri << endl;
//	cout << " The amount of the commission :" << comm_shares_pri << endl;
//	cout << "The total amount paid (for the stock plus the commission) :" << total_shares_pri << endl;
//}

//18. Energy Drink Consumption
//#include<iostream>
//using namespace std;
//int main() {
//	float cus = 16500;
//	float dri_cus_per = 0.15;
//	float dri_cus = cus * dri_cus_per;
//	float cit_dri_cus_per = 0.58;
//	float cit_dri_cus = dri_cus * cit_dri_cus_per;
//	cout << " The approximate number of customers in the survey who purchase one or more";
//	cout << "energy drinks per week:" << dri_cus << endl;
//	cout << " The approximate number of customers in the survey who prefer citrus-flavored energy ";
//		cout<<"drinks"<< cit_dri_cus;
//}

//ALHAMDULILLAH AJ YEH CHAP 2 K PROGRAMS BHI KR LIYAY MASHAALLAH BEST OF LUCK FOR NEXT TIME
//INSHAALLAH YOU WILL DO THE BEST
//AB TO SCENERIOS KI PRACTICE BHI SHURU KR DI HAI
//29/july/2022--->12:54