//Cmath libraray for pow fun and ave
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int radius = 3;
//	const float PI = 3.14;
//	double area = pow(radius, 2) * PI;
//	cout << area;
//	return 0;
//
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//void main() {
//	float num1, num2, ave;
//	num1 = 9, num2 = 8;
//	ave = (num1 + num2) / 2;
//	cout << ave;
//}

//Vol of cylinder=pi*pw(r,2)*h;

//OVERFLOW AND UNDERFLOW
//#include<iostream>
//using namespace std;
//int main() {
//	short testVar1 = 32767;             short testVar2 = 32767;
//	cout << testVar1 << endl;
//	testVar1 = testVar1 + 9;    //Overflow       //lowest possible value
//	cout << testVar1 << endl;  
//	cout << testVar2 << endl;
//	testVar2 = testVar2 - 3;    //Undererflow
//	cout << testVar2 << endl;
//	return 0;
//	//book mein aik aik hi variable mein di hui thi mein nein do variables mein aik hi value store kra k 
//	//aik pay of aur dosray pay uf kiya.
//}

// This program can be used to see how your system handles 
// floating point overflow and underflow. 
//#include <iostream> 
//using namespace std;
// int main()
// {
//	 float test;
//	 test = 2.0e38 * 1; // Shouldnot overflow test. 
//	 cout << test << endl;
//	 test = 2.0e38 * 1000; // Should overflow test. 
//	 cout << test << endl;
//	 test = 2.0e-38 / 2; // Shouldnot underflow test. 
//	 cout << test << endl;
//	 test = 2.0e-38 / 2.0e38; // Should underflow test. 
//	 cout << test << endl;
//	 return 0;
// }

//Type Casting
//newVariable or final variable of formula //like area=static_cast<datatype>(variable1 //like radius)
//#include <iostream> 
// using namespace std;
// int main()
// {
//	 float books; // Number of books to read 
//	 int months; // Number of months spent reading 
//	 double perMonth; // Average number of books per month 
//	
//	 cout << "How many books do you plan to read? ";
//	 cin >> books;
//	 cout << "How many months will it take you to read them? ";
//	 cin >> months;
//	 perMonth = static_cast<int>(books) / months;
//	 cout << "That is " << perMonth << " books per month.\n";
//	 return 0;
//	 }

//IOMANIP is used for formatting for using setw()
//setprecision()----------point k bad jitnay digits anay chahiyay
//both are written in couts
//#include <iostream> 
// #include <iomanip>
// using namespace std;
// int main()
// {
// double day1, day2, day3, total;
// // get the sales for each day. 
// cout << "enter the sales for day 1: ";
// cin >> day1;
// cout << "enter the sales for day 2: ";
// cin >> day2;
// cout << "enter the sales for day 3: ";
// cin >> day3;
// // calculate the total sales. 
// total = day1 + day2 + day3;
// // display the sales figures. 
//cout << "\nsales figures\n";
// cout << "-------------\n";
// cout << setprecision(2);         //is mein precision bohat km kr di to answer exponent form mein aaraha
// cout << "day 1: " << setw(8) << day1 << endl;
//	 cout << "day 2: " << setw(8) << day2 << endl;
//	 cout << "day 3: " << setw(8) << day3 << endl;
//	 cout << "total: " << setw(8) << total << endl;
//	 cout << setprecision(8);           //is mein precise ho jay ga
//	 cout << "day 1: " << setw(8) << day1 << endl;
//	 cout << "day 2: " << setw(8) << day2 << endl;
//	 cout << "day 3: " << setw(8) << day3 << endl;
//	 cout << "total: " << setw(8) << total << endl;
//	 cout << setprecision(2)<<fixed;         //fixed ki waja say exponent nahi ata
//	 cout << "day 1: " << setw(8) << day1 << endl;
//	 cout << "day 2: " << setw(8) << day2 << endl;
//	 cout << "day 3: " << setw(8) << day3 << endl;
//	 cout << "total: " << setw(8) << total << endl;
//	 return 0;
//	 }

//SHOWPOINT MANIPULATOR:floating points mein point k bad anay walay zeros show nahi hotay 
// un ko show kranay k liyay SP use krtay hain
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float x1 = 976.0, y1 = 64.5;         ////Without ShP: .0 won't be displayed
//	cout << x1 << endl << y1<<endl;
//	float x2 = 976.0, y2 = 64.5;         ////With SetPrecision: Although there is space but .0 won't be displayed
//	cout <<setprecision(6)<< x2 << endl << y2<<endl;
//	float x3 = 976.0, y3 = 64.5;         ////With ShP: .0 would be displayed if setprecision is also written otherwise won't
//	cout << setprecision(6) <<showpoint<< x3 << endl << y3 << endl;
//	float x4 = 976.0, y4 = 64.5;         ////With ShP: .0 would be displayed if setprecision is also written otherwise won't--->waisay ho to jata hai
//	cout  << showpoint << x4 << endl << y4 << endl;
//	return 0;
//}

//RIGHT AND LEFT MANIPULATORS: waisay right side pay hotay hain
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	double x = 146.789, y = 24.2;
//cout << setw(10) << x << endl;
//cout << setw(10) << y << endl;
//cout<<left << setw(10) << x << endl;        //is line mein left likho to wo neechay walon pay bhi ho jay ga
//cout << setw(10) << y << endl;
//return 0;
//}

//getline(cin,inputline)
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string name, city,village;        //string library is must
//	cout << "Name:" << endl;
//	getline(cin, name);      //agr idhr cin krti ho simple aur Laiba Amber likhti ho to Laiba name ki jaga aur Amber automatically city ki jaga aa jay ga
//	cout << name << endl;
//	cout << "City:" << endl;
//	cin >> city;
//	cout << city << endl;
//	cout << "Village:" << endl;
//	getline(cin, village);
//	cout << village << endl;
//	return 0;
//}

//MIXING cin and cin.get()
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	char c;
//	cout << "n:";
//	cin >> n; 
//	//is k bad normally enter dabanay say c: mein cin nahi kr sktay blk agli statement display ho jay gi
//	cin.ignore();   //is ki waja say enter ignore ho jay ga
//	cout << "C:";
//	cin.get();
//	cout << "Mehrbani";
//	return 0;
//}

//STRING LIBRARY
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string name = "LAIBA";
//	int size = name.length();      //will tell size of string
//	cout << size;
//	return 0;
//}

//String operators
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string greeting = "HI! ";
//	string name1 = "Laiba";
//	string name2 = "Amber";
//	string greeting2 = greeting + name1 + name2;
//	cout << greeting2;       //there is no space //for space "HI!"->"HI! "
//}

//Other mathematical formulas lallala
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main() {
//	int num;
//	cout << "num:";
//	cin >> num;
//	int a = abs(num);
//	cout << "Absolute of " << num << " is:" << a << endl;
//	int c = cos(num);
//	cout << "Cosine of " << num << " is:" << c << endl;
//	int e = exp(num);
//	cout << "Exponent of " << num << " is:" << e << endl;
//	int s = sqrt(num);
//	cout << "SQRT of " << num << " is:" << s << endl;
//	int t = tan(num);
//	cout << "Tan of " << num << " is:" << t << endl;
//	int si = sin(num);
//	cout << "Sin of " << num << " is:" << si << endl;
//	int l = log(num);
//	cout << "Log of " << num << " is:" << l << endl;
//	int l10 = log10(num);
//	cout << "Log10 of " << num << " is:" << l10 << endl;
//	//fmod ka nahi pata
//}

//RANDOM NUMBERS
//rand()
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main() {
//	int y = rand();  //same random numbers each time
//	cout << rand() << endl;
//	cout << rand() << endl;
//	cout << rand() << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main() {
//	unsigned seed = time(0);
//	srand(seed);//same random numbers each time nahi hon gay blk diff
//	cout << rand() << endl;
//	cout << rand() << endl;
//	cout << rand() << endl;
//	return 0;
//}

// This program simulates rolling dice. 
// #include <iostream>
// #include <cstdlib> // For rand and srand 
// #include <ctime> // For the time function 
// using namespace std;
////www.TechnicalBooksPdf.com
// int main()
// {
// // Constants 
// const int MIN_VALUE = 1; // Minimum die value 
// const int MAX_VALUE = 6; // Maximum die value 
// // Variables 
// int die1; // To hold the value of die #1 
// int die2; // To hold the value of die #2 
// // Get the system time. 
//unsigned seed = time(0);
//// Seed the random number generator. 
// srand(seed);
// cout << "Rolling the dice…\n";
// die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
// die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
// cout << die1 << endl;
// cout << die2 << endl;
 //return 0;
 //}

//*******PROGRAMMING CHALLENGES*******//
//1. Miles per Gallon
//#include<iostream>
//using namespace std;
//int main() {
//	float gallon=0;
//	float miles=0;
//	cout << "Enter gallons:" << endl;
//	cin >> gallon;
//	cout << "Enter miles:" << endl;
//	cin >> miles;
//	float miles_per_gal = miles / gallon;
//	cout << "Mile per gallon a car has travelled:" << miles_per_gal << endl;
//}

//2. Stadium Seating
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float CA = 15;
//	float CB = 12;
//	float CC = 9;
//	float t_A;
//	float t_B;
//	float t_C;
//	cout << "Enter tickets purchased by A:" << endl;
//	cin >> t_A;
//	cout << "Enter tickets purchased by B" << endl;
//	cin >> t_B;
//	cout << "Enter tickets purchased by C:" << endl;
//	cin >> t_C;
//	float t_A_Pri = CA * t_A;
//	cout << setprecision(2) << fixed<<showpoint; //main
//	cout << "Total price of tickets purchased by class A is $" << t_A_Pri << endl;
//	float t_B_Pri = CB * t_B;
//	cout << setprecision(2) << fixed << showpoint;
//	cout << "Total price of tickets purchased by class A is $" << t_B_Pri << endl;
//	float t_C_Pri = CC * t_C;
//	cout << setprecision(2) << fixed << showpoint;
//	cout << "Total price of tickets purchased by class A is $" << t_C_Pri << endl;
//}

//3. Test Average
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float t1 = 0;
//	float	t2 = 0;
//	float	t3=0;
//	cout << "Enter t1:" << endl;
//	cin >> t1;
//	cout << "Enter t2:" << endl;
//	cin >> t2;
//	cout << "Enter t3:" << endl;
//	cin >> t3;
//	float ave = (t1 + t2 + t3) / 3;
//	cout << setprecision(1) << fixed << endl; //main
//	cout << "The ave of test scores is:" << ave << endl;
//}

//4.Average Rainfall
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string months1;
//	float r_per_m1;
//	string months2;
//	float r_per_m2;
//	string months3;
//	float r_per_m3;
//	cout << "Enter month1:" << endl;
//	cin >> months1;
//	cout << "Enter rainfall (in inches) for the month " << months1 << endl;
//	cin >> r_per_m1;
//	cout << "Enter month2:" << endl;
//	cin >> months2;
//	cout << "Enter rainfall (in inches) for the month " << months2 << endl;
//	cin >> r_per_m2;
//	cout << "Enter month:" << endl;
//	cin >> months3;
//	cout << "Enter rainfall (in inches) for the month " << months3 << endl;
//	cin >> r_per_m3;
//	float average = (r_per_m1 + r_per_m2 + r_per_m3) / 3;
//	cout << "Average rainfall for months " << months1 << "," << months2 << "," << months3 << "is:" << average <<" inches" << endl;
//}

//5. Male and Female Percentages
//#include<iostream>
//using namespace std;
//int main() {
//	float total;
//	float male;
//	float female;
//	cout << "Enter students in SE_21:" << endl;
//	cin >> total;
//	cout << "Enter male_stu:" << endl;
//	cin >> male;
//	cout << "Enter female_stu:" << endl;
//	cin >> female;
//	float male_per = male / total;
//	cout << "Male per is:" << male_per *100<<"%" << endl;
//	float female_per = female / total;
//	cout << "Female per is:" << female_per*100<<"%" << endl;
//}

//6. Ingredient Adjuster
// //is ka formula muja nahi pata tha
//yeh program aesa hai jis cooking mein mera koi interest nahi
//#include<iostream>
//using namespace std;
//int main() {
//	float COOKIES = 48;
//	float SUGAR = 1.5;
//	float BUTTER = 1;
//	float FLOUR = 2.75;
//	float num_cookie = 0;
//	cout << "Enter no. of cookies you want to make:" << endl;
//	cin >> num_cookie;
//	float total_sugar = (SUGAR * num_cookie) / COOKIES;
//	float total_butter = (BUTTER * num_cookie) / COOKIES;
//	float total_flour = (FLOUR * num_cookie) / COOKIES;
//	cout << "You need " << total_sugar << " cups of sugar, " << total_butter << " cups of butter, " << " and ";
//	cout << total_flour << " cups of flour. PAKA K MUJHAY BHI BHEJ DENA." << endl;
//}

//24.WORD GAME
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string NAME;
//	string CITY;
//	int AGE;
//	string COLLEGE;
//	string PROFESSION;
//	string ANIMAL;
//	string PETNAME;
//	cout << "NAME:" << endl;
//	cin >> NAME;
//	cout << "CITY:" << endl;
//	cin >> CITY;
//	cout << "AGE:" << endl;
//	cin >> AGE;
//	cout << "COLLEGE" << endl;
//	cin >> COLLEGE;
//	cout << "PROFESSION" << endl;
//	cin >> PROFESSION;
//	cout << "ANIMAL:" << endl;
//	cin >> ANIMAL;
//	cout << "PETNAME:" << endl;
//	cin >> PETNAME;
//	cout << "There once was a person named " << NAME << " who lived in " << CITY << ".At the age of ";
//	cout << AGE << "," << NAME << " went to college at " << COLLEGE << "." << NAME << " graduatedand went to work";
//	cout << "as a " << PROFESSION << ".Then," << NAME << " adopted a(n)" << ANIMAL << " named " << PETNAME << ".They";
//	cout << " both lived happily ever after!" << endl;
//}

//7. Box Office
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//int main() {
//	float A_T_Per = 10.00;
//	float C_T_Per = 6.00;
//	float pro_per = 0.20;
//	string movie_n;
//	cout << "Enter Movie name:" << endl;
//	getline(cin, movie_n);
//	float T_A = 0;
//	float T_C = 0;
//	cout << "Enter tickets purchased by adults:" << endl;
//	cin >> T_A;
//	cout << "Enter tickets purchased by children:" << endl;
//	cin >> T_C;
//	float total = (T_A * A_T_Per) + (T_C * C_T_Per);
//	cout << "Movie name:" << setw(10) << movie_n << endl;
//	cout << "Adult tickets sold:" << setw(10) << T_A << endl;
//	cout << "Child tickets sold:" << setw(10) << T_C << endl;
//	cout << "Gross Box Office profit" << setw(10) << total << endl;
//	float theater_per = total * pro_per;
//	cout << "Net BOX OFFICE profit: " << setw(10) << theater_per << endl;
//	float dis_pro = total - theater_per;
//	cout << "Amount given to distributor is:" << setw(10) << dis_pro << endl;
//}

//8.How Many Widgets?
//#include<iostream>
//using namespace std;
//int main() {
//    float pall_wei;
//    float pall_with_wid_wei;
//    float one_wid=12.5;
//    cout << "Enter weight of pallet:" << endl;
//    cin >> pall_wei;
//    cout << "Enter weight of pallet with widgets:" << endl;
//    cin >> pall_with_wid_wei;
//    float wid_wei = pall_with_wid_wei - pall_wei;
//    int num_wid = wid_wei / one_wid;
//    cout << "Number of widgets stacked on pallet are:" << num_wid << endl;
//}

//9.How Many Calories?
//LOGIC SAHI BNAI MASHAALLAH
//#include<iostream>
//using namespace std;
//int main() {
//	float cookie_per_bag = 30;
//	float serving_per_bag = 10;
//	float callories_per_serving = 300;
//	float cookie_per_serving = cookie_per_bag / serving_per_bag;
//	float cookie_eaten;
//	cout << "Enter cookies eaten:" << endl;
//	cin >> cookie_eaten;
//	float serving_eaten=cookie_eaten/cookie_per_serving;
//	float callories_eaten=serving_eaten*callories_per_serving;
//	cout << "Servings for cookies entered:" << serving_eaten << endl;
//	cout << "Callories:" << callories_eaten << endl;
//}

//10. How Much Insurance?
//#include<iostream>
// #include<iomanip>
//using namespace std;
//int main() {
//	float r_c;
//	cout << "Enter replacement cost of building:" << endl;
//	cin >> r_c;
//	float am_ins = r_c * 0.80;
//	cout << setprecision(2)<<"The min amount of insurance you should buy for property is: Rs." << am_ins << endl;
//}

//11.Automobile costs
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	/*asks the user to enter the monthly costs for the following
//		expenses incurred from operating his or her automobile : loan payment, insurance, gas,
//		oil, tires, and maintenance*/
//
//	float l_p, i_p, g_p, o_p, t_p, m_p;
//	cout << "Enter loan payment:" << endl;
//	cin >> l_p;
//	cout << "Enter insurance payment:" << endl;
//	cin >> i_p;
//	cout << "Enter gas payment:" << endl;
//	cin >> g_p;
//	cout << "Enter oil payment:" << endl;
//	cin >> o_p;
//	cout << "Enter tires payment:" << endl;
//	cin >> t_p;
//	cout << "Enter maintainance payment:" << endl;
//	cin >> m_p;
//	//display the total monthly cost of these expenses,
//	float total_m = l_p + i_p + g_p + o_p + t_p + m_p;
//	cout << "the total monthly cost of these expenses is:" << total_m << endl;
//	//display the total annual cost of these expenses.
//	float total_a = 12 * total_m;
//	cout << "the total annual cost of these expenses is:" << total_a << endl;
//}
//
//

//12.. Celsius to Fahrenheit
//#include<iostream>
//using namespace std;
//int main() {
//	float C_t;
//	cout << "Enter temp in Celcius and I will tell its F value:" << endl;
//	cin >> C_t;
//	float F_t = ((9 / 5) * C_t) + 32;
//	cout << F_t << "F" << endl;
//}

//13. Currency
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float rup;
//	cout << "Enter rupee and I will convert into dollars:" << endl;
//	cin >> rup;
//	float dol =  rup/250;
//	cout <<setprecision(2)<<fixed<<showpoint<< "You have " << dol << " dollars." << endl;
//}

//ITS A GOOD PRACTICE THAT DO LOOK FOR VERBS
//14. Monthly Sales Tax
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const float s_t_p = 0.04;
//	const float c_t_p = 0.02;
//	const float sales_s_t_p = 0.06;
//	//asks for the month, the year,
//		//and the total amount collected at the cash register (that is, sales plus sales tax).
//	float m, y, t_a;
//	cout << "Enter month:" << endl;
//	cin >> m;
//	cout << "Enter year:" << endl;
//	cin >> y;
//	cout << "Enter amount collected:" << endl;
//	cin >> t_a;
//	//Cal
//	float sales = t_a / 1.06;
//	float c_s_t = sales * c_t_p;
//	float s_s_t = sales * s_t_p;
//	float total_s_t = sales * sales_s_t_p;
//	//Display
//	cout << setprecision(2) << fixed;
//	cout << "Month:" << m << endl;
//	cout << "--------------------" << endl;
//	cout << "Total Collected : $" << t_a << endl;
//	cout << "Sales : $" << sales << endl;
//	cout << "Country Sales Tax : $ " <<c_s_t<< endl;
//	cout << "State Sales Tax : $" <<s_s_t<< endl;
//	cout << "Total Sales Tax : $" <<total_s_t<< endl;
//}

//15. Property Tax
//#include<iostream>
//using namespace std;
//int main() {
//	//asks for the actual value of a piece of propertyand displays the assessment value and property tax.
//	float a_v;
//	cout << "Enter actual val of piece of property: $" << endl;
//	cin >> a_v;
//	float as_p = 0.6;
//  float HUNDRED=100;
//	float as_v = as_p * a_v;
//	cout << "Assessment val of property is : $" <<as_v << endl;
//	float tax_p = 0.75;
//	float tax = (as_v/HUNDRED) * tax_p; //mujhay nahi pata
//	cout << "Property tax is:" << tax << endl;
//}

//22. Angle Calculator
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main() {
//	//asks the user for an angle, entered in radians.
//	int r;
//	cout << "Enter radius:" << endl;
//	cin >> r;
//	float c = cos(r);
//	float s = sin(r);
//	float t = tan(r);
//	cout << setprecision(2) << fixed;
//	cout << "Cos of angle:" << c << endl;
//	cout << "Sin of angle:" << s << endl;
//	cout << "Tan of angle:" << t << endl;
//}

//16. Senior Citizen Property Tax
//THIS PRO WASN'T UNDERSTOOD BY ME WHEN HABIBA SENT IT TO ME SO I STARTED DOING PROGRAMMING CHALLENGES
//LUCKY PRO INSHAALLAH
//BACHA EVERYTHING IN PRO IS FOR SOME PUROSE OK
//#include<iostream>
//using namespace std;
//int main() {
//	const float ass_p = 0.60;
//	const int FIVE_THO = 5000;
//	const int HUNDRED = 100;
//	const int FOUR = 4;
//	float a_v;
//	float tax;
//	cout << "Enter actual val of piece of property:" << endl;
//	cin >> a_v;
//	cout << "Enter current tax rate:"<<endl;  //asking in percentage cz rate refers to per
//	cin >> tax;
//	float total_annual_pro_tax = (((a_v * ass_p) - FIVE_THO) / HUNDRED) * tax;
//	cout << "total_annual_pro_tax :" << total_annual_pro_tax << endl;
//	float quar = total_annual_pro_tax / FOUR;
//	cout << "Quarter of total_annual_pro_tax is:" << quar<<endl;
//}

//17. Math Tutor
//THIS IS ALSO MASHAALLAH LUCKY PRO KIUN YEH MUJHAY IS CHAP K COM PRO PAY WAPIS LAYA
//ALHAMDULILLAH
//IS MEIN RANDOM NUMBERS TO BE ADDED DISPLAY HON GAY PHIR MEIN SOCHON GI UN KA SUM AUR JB KOI KEY PRESS-->ANS
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
//	cout << s;
//	return 0;
//}   //THIS IS COOL PRO DUDE AHAHA

//18. Interest Earned
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//     float p;
//     float t_c;
//     float i_r;
//     cout << "Enter principal:" << endl;
//     cin >> p;
//     cout << "Enter times Compounded:" << endl;
//     cin >> t_c;
//     cout << "Enter interest rate:" << endl;
//     cin >> i_r;
//     //cal
//     //amount after a year
//     float amount = p * pow((1 + (i_r / 100) / t_c), t_c);
//         float interest = amount - p;
//     //display
//     cout << " Interest Rate :" << i_r << " %" << endl;
//     cout << " Times Compounded :" << t_c << endl;
//     cout << "   Principal : $" << p << endl;
//     cout << "    Interest : $" <<interest<< endl;
//     cout << "   Amount in Savings : $" << amount << endl;
//}

//19. Monthly Payments
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float l, i_r, n_p;
//	//ask
//	cout << "Enter loan :" << endl;
//	cin >> l;
//	cout << "Enter interest rate:" << endl;
//	cin >> i_r;
//	cout << "Enter number of payments:" << endl;
//	cin >> n_p;
//	//cal
//	//float payment = (i_r * pow(1 + (i_r), n_p) / (pow(1 + (i_r), n_p)) - 1) * l;
//	i_r /= 12;
//
//	i_r /= 100; // 4.25% == .0425
//	float payment= ((i_r)*pow(1 + (i_r), n_p) / (pow(1 + (i_r), n_p) - 1)) * l;
//	i_r *= 100;
//	float amount_paid_back = n_p * payment;
//	float interest_paid = (n_p * payment) - l;
//	//display
//	cout << setprecision(2) << fixed;
//	cout << "Loan Amount : $" << l << endl;
//	cout << "	Monthly Interest Rate :" << i_r << " %" << endl;
//	cout << "	Number of Payments :" << n_p << endl;
//	cout << "	Monthly Payment : $" <<payment<< endl;
//	cout << "	Amount Paid Back : $" << amount_paid_back<< endl;
//	cout << "	Interest Paid : $" << interest_paid<< endl;
//}

//20. Pizza Pi
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	/*The program should perform the following steps :
//	A) Ask the user for the diameter of the pizza in inches.
//	B) Calculate the number of slices that may be taken from a pizza of that size.
//	C) Display a message telling the number of slices.*/
//	const double PI = 3.14159;
//	double d;
//	cout << "the diameter of the pizza in inches:" << endl;
//	cin >> d;
//	double r = d / 2;
//	/*To calculate the number of slices that may be taken from the pizza, you must know
//		the following facts :
//	• Each slice should have an area of 14.125 inches.
//		• To calculate the number of slices, simply divide the area of the pizza by 14.125.
//		• The area of the pizza is calculated with this formula :*/
//	double area = PI * pow(r, 2);
//	double num_slices = area / 14.125;
//	cout << setprecision(1) << fixed;
//	cout << "Number of slices are:" << num_slices << endl;
//}

//21. How Many Pizzas?
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	/*The program should perform the following steps :
//	A) Ask the user for the diameter of the pizza in inches and number of people.
//	B) Calculate the number of slices that may be taken from a pizza of that size.
//	C) Display a message telling the number of slices and display number of pizza if one person eat 2 slice.*/
//	const double PI = 3.14159;
//	double d;
//	int num_person;
//	cout << "the diameter of the pizza in inches:" << endl; //hum jo medium waghaira khatay hain
//	cin >> d;
//	cout << "Number of persons attending party:" << endl;
//	cin >> num_person;
//	double r = d / 2;
//	/*To calculate the number of slices that may be taken from the pizza, you must know
//		the following facts :
//	• Each slice should have an area of 14.125 inches.
//		• To calculate the number of slices, simply divide the area of the pizza by 14.125.
//		• The area of the pizza is calculated with this formula :*/
//	double area = PI * pow(r, 2);
//	double num_slices = area / 14.125;  //waisay aesay nahi hota
//	cout << setprecision(1) << fixed;
//	cout << "Number of slices are:" << num_slices << endl;
//	float num_slices_needed = num_person * 2;
//	float num_piza = num_slices_needed / num_slices;
//	cout << "Number of pizzas you need for party are:" << num_piza << endl;
//}

//23. Stock Transaction Program
//Copied this code 
//#include <iostream>
//#include <iomanip>  // Formatting
//
//using namespace std;
//
//int main()
//{
//    // Variables
//    const float BROKER_COM_PER = .02,
//        PRICE_PAID_PER_SHARE = 45.50,
//        PRICE_SOLD_PER_SHARE = 56.90;
//
//    const int NUM_OF_SHARES = 1000;
//
//    float joes_stock_purchase,
//        total_com_paid_bought,
//        total_com_paid_sold,
//        amount_stock_sold_for,
//        amount_of_profit;
//
//    // Explain program
//    cout << endl;
//    cout << "*****************************************\n\n";
//    cout << "Last month Joe purchased some stock in \n";
//    cout << "Acme Software, Inc. Here are the details\n";
//    cout << "of the purchase: \n";
//    cout << "• The number of shares that Joe purchased\n";
//    cout << "  was 1,000.\n";
//    cout << "• When Joe purchased the stock, he paid \n";
//    cout << "  $45.50 per share.\n";
//    cout << "• Joe paid his stockbroker a commission \n";
//    cout << "  that amounted to 2% of the amount he \n";
//    cout << "  paid for the stock.\n\n";
//    cout << "Two weeks later Joe sold the stock. \n";
//    cout << "Here are the details of the sale:\n";
//    cout << "• The number of shares that Joe sold was\n";
//    cout << "  1,000.\n";
//    cout << "• He sold the stock for $56.90 per share.\n";
//    cout << "• He paid his stockbroker another\n";
//    cout << "  commission that amounted to 2% of the \n";
//    cout << "  amount he received for the stock.\n\n";
//    cout << "*****************************************\n\n";
//
//    // Calculate
//    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;
//
//    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;
//
//    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;
//
//    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;
//
//    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;
//
//    // Display information:
//    cout << setprecision(2) << fixed << endl;
//
//    cout << "Amount paid for the stock: ";
//    cout << joes_stock_purchase << endl;
//
//    cout << "Amount commission paid when bought stock: ";
//    cout << total_com_paid_bought << endl;
//
//    cout << "Amount Joe sold stock for: ";
//    cout << amount_stock_sold_for << endl;
//
//    cout << "Amount commission paid when stock sold: ";
//    cout << total_com_paid_sold << endl;
//
//    cout << "Amount of profit Joe made after selling stock and\n";
//    cout << "paying two commissions to broker ";
//    cout << amount_of_profit << '\n' << endl;
//    cout << "*****************************************\n\n";
//
//    return 0;
//}
//ALHAMDULILLAH MASHAALLAH AJ CHAP 3 POORA KR LIYA 12:04-->04-AUGUST-2022