//***************STRUCTURES***********//
//ABSTRACT DATA TYPES
//STRUCTS
//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//struct Student {
//    string name;
//    string id;
//    string age;
//};
//int main() {
//    Student s1 = { "Laiba","SE-37","18" };   //initialization of structure
//    Student s2;
//    cout << "Enter name of s2" << endl;
//    cin.ignore();
//    getline(cin, s2.name);
//    cout << "His Id" << endl;
//    cin >> s2.id;
//    cout<< "and his age" << endl;
//    cin >>  s2.age;
//    cout << s1.name << " " << s1.id << " " << s1.age << " " << endl;
//    cout << "s2:" << s2.name << " of id:" << s2.id << " of age:" << s2.age << endl;
// //Accession . say hoti hai
//}

//bhaiya ab INSHAALLAH hum arrays of structures krnay walay jo hamaray liyay bohat 
//..helpful hon gi
//BISMILLAH
//***********ARRAY OF STRUCTURE************//
#include<iostream>
using namespace std;
struct payinfo{
	int hrs;
	int payrate;
};
int main() {
	const int SIZE = 3;
	payinfo Employees[SIZE];
	int i;
	int grosspay;
	cout << "Enter the hrs and payrate of " << SIZE << " employees and i will calculate grosspay of each:" << endl;
	for (int i = 0;i < SIZE;i++) {
		cout << "Enter hrs worked by employee # " << i + 1 << endl;
		cin >> Employees[i].hrs;      //cin of array of structure
		cout << "Enter payrate of employess # " << i + 1 << endl;
		cin >> Employees[i].payrate;
		grosspay = Employees[i].hrs * Employees[i].payrate;
		cout << "Gross pay of employee # " << i + 1 << " is " << grosspay << endl;
	}
}

//INITIALIZATION OF ARRAY OF STRUCTURE WILL SAVE YOUR TIME
//#include<iostream>
//using namespace std;
//struct payinfo{
//	int hrs;
//	int payrate;
//};
//int main() {
//	const int SIZE = 3;
//	payinfo Employees[SIZE]={{12,83},
//		                     {52,93},
//		                     {42,92}};
//	int i;
//	int grosspay;
//	cout << "Enter the hrs and payrate of " << SIZE << " employees and i will calculate grosspay of each:" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		grosspay = Employees[i].hrs * Employees[i].payrate;
//		cout << "Gross pay of employee # " << i + 1 << " is " << grosspay << endl;
//	}
//}

//****************NESTED STRUCTURES******************//
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//struct day {
//	string date;
//	string month;
//	string year;
//};
//struct city {
//	string address;
//};
//struct Employeeinfo {
//	string name;
//	string age;
//	day birthdate; //nested structure
//	city residence;  //nested structure
//};
//int main() {
//	Employeeinfo manager;
//	cout << "Enter name:" << endl;
//	cin.ignore();
//	getline(cin, manager.name);  //id k output mein pehla ch display nahi horaha kiun cin.ignore() pehlay ko ignore kr deta hai
//	cout << "Enter age:" << endl;
//	cin >> manager.age;
//	cout << "Enter birthdate" << endl;
//	cin >> manager.birthdate.date >> manager.birthdate.month >> manager.birthdate.year;
//	cout << "Enter address:" << endl;
//	cin.ignore();
//	getline(cin,manager.residence.address);
//	cout << manager.name << endl;
//	cout << manager.age << endl;
//	cout << manager.birthdate.date << " : " << manager.birthdate.month << " : " << manager.birthdate.year << endl;
//	cout << manager.residence.address << endl;
//}

//******************STRUCTURES AS FUNCTION ARGUMENTS************************//
//#include<iostream>
//using namespace std;
//struct Box {
//	int length;
//	int width;
//	int area;
//};
//int getval(Box &r) {         //saath hi &r aik argument bnatay hain
//							 //jb hum get krtay to datatype structure hoti hai kiun k yeh user defined data type hai
//	cout << "Enter l:" << endl;
//	cin >> r.length;        //box say uthao structure argument.variables
//		cout << "Enter w:" << endl;
//		cin >> r.width;
//		return r.length ;
//		return r.width;
//}
//int multiply(int l, int w) {        //idhr int, int
//	return l*w;
//}
//void showval(Box &r) {          //jb hum show krtay to datatype structure hoti hai kiun k yeh user defined data type hai
//	cout << r.length << endl;
//	cout << r.width << endl;     //box say uthao structure argument.variables
//	cout << r.area << endl;
//}
//int main() {
//	Box Rectangle;
//	getval(Rectangle);           //yahan py function(obj);
//	Rectangle.area = multiply(Rectangle.length, Rectangle.width);      //obj.variable=.............
//	showval(Rectangle);
//}

//*********************RETURNING STRUCTURE FROM FUNCTION***********************//
//#include<iostream>
//using namespace std;
//struct Box {
//	int length;
//	int width;
//	int area;
//};
//Box getval() {         //saath hi &r aik argument bnatay hain
//	Box r;					 //jb hum get krtay to datatype structure hoti hai kiun k yeh user defined data type hai
//	cout << "Enter length:" << endl;
//	cin >> r.length;        //box say uthao structure argument.variables
//		cout << "Enter width:" << endl;
//		cin >> r.width;
//		
//		return r;
//}
//int multiply(int l, int w) {        //idhr int, int
//	return l*w;
//}
//void showval(Box &r) {          //jb hum show krtay to datatype structure hoti hai kiun k yeh user defined data type hai
//	cout << r.length << endl;
//	cout << r.width << endl;     //box say uthao structure argument.variables
//	cout << r.area << endl;
//}
//int main() {
//	Box Rectangle;
//	Rectangle = getval();
//	    //yahan py function(obj);
//	Rectangle.area = multiply(Rectangle.length, Rectangle.width);      //obj.variable=.............
//	showval(Rectangle);
//}
