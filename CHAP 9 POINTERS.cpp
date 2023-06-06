//************************POINTERS**************************//
//BISMILLAH
//GETTING ADDRESS OF VARIABLE
//#include<iostream>
//using namespace std;
//int main() {
//	int num1 = 9,
//		num2 = 6,
//		num3 = 8,
//		num4 = 2;
//	cout << &num1<<" "<<&num2<<" "<<&num3<<" "<< & num4<<endl;
//	//different address jahan pay variables store hain
//	char a1 = 'A',
//		a2 = 'a',
//		a3 = 'h';
//	cout << &a1 << " " << &a2 << " " << &a3<<endl;  //waisay char mein addresses barray ganday aa rahay..akh
//	cout << "Size of a1 is:" << sizeof(char) << endl;
//	cout << "Value of a1 is:" << a1<<endl;
//	cout << "Address of num1 is:" << &num1 << endl;
//	cout << "Size of num1 is:" << sizeof(int) << endl;
//	cout << "Value of num1 is:" << num1 << endl;
//}

//AESAY KEH SKTAY K JB ARRAYS AS REFERENCE USE HOTI HAIN TO AUTOMATICALLY ADDRESSES K SAATH DEAL HO JATA HAI AUR
//..JB REFERENCES ISTEMAL KRTAY HAIN TO BHI ASAANI SAY SB KAM KHUD BAKHUD HO JATA LEKIN POINTERS JO K OOP AUR
//...DYNAMIC MEMORY ALLOCATION MEIN ZAROORI HAIN UN KO ADDRESS KHUD SPECIFY KRNAY PARRTAY AUR YEH ADDRESS OF VARIABLES
//...KO HOLD KRNAY K LIYAY USE HOTAY HAIN

//CREATING AND USING POINTERS
//#include<iostream>
//using namespace std;
//int main() {
//	int num=5;
//	int* ptr=nullptr;   //ptr is being used to hold address of int 
//	cout << ptr << endl;;
//	ptr = &num;          //ptr ko nitialize na krna achi bat bilkul bhi nahi hai--->int *ptr=nullptr; bhi likh sktay
//	cout << &num << endl;         //add
//	cout << num << endl;           //val
//	cout << ptr << endl;           //add
//	cout << *ptr << endl;          //val
//}

//INDIRECTION OPERATOR---------DEREFERENCE OPERATOR
//Ap jb DO istemal krtay ho to pointer pay changes ki waja say actual value mein bhi change la sktay ho
//chalo dekhtay hain kesay
//#include<iostream>	
//using namespace std;
//int main() {
//	int num = 5;
//	int* ptr=nullptr;
//	ptr = &num;
//	cout << num << endl;        //5
//	cout << *ptr << endl << endl;     //5
//    *ptr = 100;       //value us int mein bhi change ho jay gi jis ka address point kr raha hai 
//	cout << num << endl;          //100
//	cout << *ptr << endl << endl;         //100
// //* is being used to display value ptr is pointing to
//}

//POINTER VARIABLE REFERENCING DIFFERENT VARIABLES
//#include<iostream>
//using namespace std;
//int main() {
//    int x = 25, y = 50, z = 40;
//    int* ptr = nullptr;
//    cout << x << endl << y << endl << z << endl;
//    ptr = &x;
//    *ptr += 10;
//    ptr = &y;
//    *ptr += 10;
//    ptr = &z;
//    *ptr  += 10;
//    cout << "after changes to values being pointed bbby pointer baba:" << endl;
//    cout << x << endl << y << endl << z << endl;
//}

//  RELATIONSHIP BETWEEN ARRAYS AND POINTERS
//*************NOTE************88//
//1.Array ka name as ponter use ho skta hai
//2. Pointrs as array name use ho sktay ai
//#include<iostream>
//using namespace std;
//int main() {
//	int array[4] = { 3,4,6,7 };
//	cout << array << endl;     //is say pehlay matlab 0 index ka address display ho ga na k parri hui value
//	cout << array[0] << endl;      //0 pay parri val display hogi
//	cout << *array << endl;       //0 pay parri val display hogi------->1.array being used as ptr constant
//	//cout << *array[2] << endl;--------->error
//	int* arrptr = array;
//	cout << arrptr[2] << endl;    //2.ptr being used as array name
//	//LEKIN AGR JO HUM NEIN DEKHO UPER 3 MEIN JB *array likha TO PEHLAY INDEX WALA AYA TO ARRAY K CASE MEIN *(array+1)=4 display hoga
//	cout << *(array + 1) << endl;      //yeh 1*size hota hai na k 3 mein aik add ho k 4 ajata blk aglay index pay parri val ati
//	cout << *array + 1 << endl;           //ab 3+1 hua hai
//}

//ACCESSING SAME ARRAY ELEMENT USING DIFF TECHNIQUES
//#include<iostream>
//using namespace std;
//int main() {
//	int array[4] = { 8,5,3,2 };
//	cout << array[1] << endl;          //array name and []
//	cout << *(array + 1) << endl;       // array name and subscript arithmetic
//	//AMMM WE CAN SAY array[i]==*(array+i)
//	int* arrptr = array;
//	cout << *(arrptr + 1) << endl;          //ptr to arr and subscript arithmetic
//	cout << arrptr[1] << endl;         //ptr to array and []
//}

//AMM ABHI JO PROGRAMS KRNAY WALAY HAIN UNKA CONCEPT HAI BUS UNKO IMPLEMENT KRNA HAI
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 5;
//	int array[SIZE];
//	cout << "Enter " << SIZE << " elements:" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cin >> *(array + i);
//	}
//	cout << "Elements you entered are:"<<endl;
//		for (int i = 0;i < SIZE;i++) {
//			cout<< *(array + i) << endl;
//		}
//}

//USING SUBSCRIPT NOTATION WITH POINTER VARIABLE & POINTER NOTATION WITH ARRAY NAME
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 5;
//	int array[SIZE] = { 3,4,5,6,7 };
//	int* arrptr = array;
//	cout << "ELEMENTS BEING DISPLAYED WHEN SUBSCRIPT NOTATION WITH POINTER VARIABLE IS USED:" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cout << *(arrptr + i)<<endl;
//	}
//	cout << "ELEMENTS BEING DISPLAYED WHEN POINTER NOTATION WITH ARRAY NAME IS USED:" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cout << *(array + i);
//	}
//}

//POINTER BEING USED TO PRINT ADDRESSESS OF ARRAY
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 5;
//	int array[SIZE] = { 3,5,7,8,4 };
//	int* arrptr = nullptr;
//	for (int i = 0;i < SIZE;i++) {
//		arrptr = &array[i];
//		cout << "Addresses of elements: " << *(array+i) << " are: " << (arrptr+i) << endl;
//	}
//
//}
//NOICE MASHAALLAH achi cheez hai himat e mardan madad e khuda...ALLAHUAKBAR

//****************POINTER ARITHMETIC*******************//
// //******ALLOWED: ++,--,+=,-=
// ********NOT ALLOWED::* AND /
//array ko backwaard order mein pointer k zariay process kr sktay hain
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 5;
//	int array[SIZE] = { 3,5,7,8,3 };
//	int* arrptr = nullptr;
//	arrptr = array;
//	int i;
//	cout << "The values in array are:"<<endl;
//	for ( i = 0;i < SIZE;i++) {
//		cout << *arrptr << endl;;
//		arrptr++;     //hoping to see incremented values
//	}
//	cout << "The backward values of array are: "<<endl;
//	for ( i = 0;i < SIZE;i++) {
//		arrptr--;
//		cout << *arrptr << endl;
//	}
//	return 0;
//}      //kabhi kabhi banda first aur last same dekh k confuse ho jata hai koi nhi 

//COMPARING POINTERS
//AS THE ELEMENTS IN ARRAY ARE STORED IN CONSECUTIVE MEMORY LOCATION THEREFORE ADDRESS OF FIRST IS LESS THAN ITS NEXT
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 5;
//	int array[SIZE] = {3,4,5,2,1};
//	cout << "Lets do some comparisons:)" << endl;
//	int* arrptr = array;
//	bool Bool=true;
//	//1st comparison
//	if (&array[1] < &array[0]) {
//		cout << "Hence proved that address of first index is less than second and so on.." << endl;	
//	}
//	else
//	cout << "pehla ka address km hota hai bhaiya" << endl;
//	//2nd
//	if (array == &array[0]) {
//		cout << "0 index ka address aesay hi array ko print krnay say aa jata hai yeh prove ho gaya " << endl;
//}
//	else
//		cout << "bhaia man lo han 0 index ka address aesay hi array ko print krnay say aa jata ha" << endl;
//	if (&array[2] != &array[4]) {
//		cout << "Addresses equal nahi hotay hence proved hah" << endl;
//	}
//}

//COMPARING POINTERS IS NOT SAME AS COMPARING VALUES THEY ARE POINTIING TO...LETS SEE
//For example, the following if statement compares the addresses
//stored in the pointer variables ptr1and ptr2 :
//if (ptr1 < ptr2)
//	The following statement, however, compares the values that ptr1and ptr2 point to :
//if (*ptr1 < *ptr2)
/*#include<iostream>
using namespace std;
int main() {
	int array[4] = { 4,6,3,2 };
	int* arrptr = array;
	if (arrptr[1] > arrptr[0]) {
		cout << arrptr[1] << ">" << arrptr[0] << endl;
	}
	int num1 = 3;
	int num2 = 4;
	int num3 = 8;
	int* ptr1 = nullptr;
	ptr1 = &num1;
	int* ptr2 = nullptr;
	ptr2 = &num2;
	int* ptr3 = nullptr;
	ptr3 = &num3;
	cout << "num1 " << num1 << " address " << ptr1 << endl;
	cout << "num2 " << num2 << " address " << ptr2 << endl;
	cout << "num1 " << num3 << " address " << ptr3 << endl;
	if (ptr1 < ptr2) {*/   //in k baray hum kuch keh nahi sktay blk aik aur exp krtay teesra num3 letay hain
//		cout << "dosray var ka address pehlay say barra hota hai." << endl;
//	}
//	if (ptr3 < ptr1) {
//		cout << "kuch bhi ho skta" << endl;
//	}
//	else
//		cout << "yeh prove ho gaya bad walay ka address hamesha barra hota hai";
//}

//	A program to check
//#include <iostream> 
//using namespace std;
// int main()
// {
// int set[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
// int* nums = set; // Make nums point to set 
// // Display the numbers in the array. 
// cout << "The numbers in set are:\n";
// cout << *nums << " "; // Display first element 
// //LET ME CHECK
// while (nums < &set[7])
// //while (nums > &set[7])
// /*while (&set[0] < &set[7]) */   //garrbarr hojati hai
//	  {
//	  // Advance nums to point to the next element. 
//	 nums++;
//	 // Display the value pointed to by nums. 
//	 cout << *nums << " ";
//	 }
//	  // Display the numbers in reverse order. 
//	 cout << "\nThe numbers in set backward are:\n";
//  cout << *nums << " "; // Display first element 
//  while (nums > set)
// {
//// Move backward to the previous element. 
// nums--;
// // Display the value pointed to by nums. 
// cout << *nums << " ";
// }
// return 0;
// }

//***********DYNAMIC MEMORY ALLOCATION*******************//
//BASIC PROGRAM for variable
//#include<iostream>
//using namespace std;
//int main() {
//	int* iptr = nullptr;
//	iptr = new int;
//	*iptr = 30;
//	cout << *iptr << endl;
//	cin >> *iptr;      //agr cin nahi krao gay to uper walay pay perform hon gay
//	cin >> *iptr;     //end pay anay walay pay perform hotay hain
//	int total=0;
//	total-= *iptr;     //uses new variable for upcoming operations to be performed
//	cout << total<<endl; 
//	//khud ki practice k liyay
//	total++;
//	cout << total << endl;
//	total--;
//	cout << total << endl;
//	//yahan tk allocation ka process tha ab hum memory deallocate bhi kr sktay hain
//	delete iptr;
//	total += 1;  
//	cout << total;        //waisay delete krnay k bad bhi operation to perform ho raha hai dekhtay hain reason
//}

//DMA OF ARRAYS
//#include <iostream> 
// #include <iomanip>
// using namespace std;
// int main()
// {
// double* sales = nullptr, // To dynamically allocate an array 
// total = 0.0, // Accumulator 
// average; // To hold average sales 
// int numDays, // To hold the number of days of sales 
// count; // Counter variable 
//// Get the number of days of sales. 
// cout << "How many days of sales figures do you wish ";
// cout << "to process? ";
// cin >> numDays;
// // Dynamically allocate an array large enough to hold 
//  // that many days of sales amounts. 
// sales = new double[numDays];
// // Get the sales figures for each day. 
//cout << "Enter the sales figures below.\n";
//for (count = 0; count < numDays; count++)
//{
// cout << "Day " << (count + 1) << ": ";
// cin >> sales[count];
//}
//// Calculate the total sales 
// for (count = 0; count < numDays; count++)
// {
// total += sales[count];
//}
//// Calculate the average sales per day 
//  average = total / numDays;
//  // Display the results 
// cout << fixed << showpoint << setprecision(2);
// cout << "\n\nTotal Sales: $" << total << endl;
// cout << "Average Sales: $" << average << endl;
//// Free dynamically allocated memory 
// delete[] sales;
// sales = nullptr; // Make sales a null pointer. 
//return 0;
////IS KO DELETE KRNAY KA FAIDA WOHI HUA JO WO PITTAY REHTAY HAIN...HUH
// }

//UNIQUE POINTERS
//KHUD BAKHUD HI MEMORY DELETE KR SKTAY HAIN HAMAIN ZAROORAT NAHI PARRTI SEEKH LO FAIDAY KI CHEEZ HAI
//1. HEADER #INCLUDE<MEMORY>
//2. unique_ptr<int> ptr( new int ); 
//ptr-->name of pointer
//int-->data type of variable to which memory would be allocated
//new int --->memory allocation
// This program demonstrates a unique_ptr. 
// #include <iostream>
// #include <memory>
// using namespace std;
// int main()
// {
// // Define a unique_ptr smart pointer, pointing 
// // to a dynamically allocated int. 
// unique_ptr<int> ptr(new int);
// // Assign 99 to the dynamically allocated int. 
// * ptr = 99;
//// Display the value of the dynamically allocated int. 
// cin >> *ptr;               //******MATLAB AGR TO HUM APNI VALUE DENA CHAHTAY TO HAMARI VALUE KO PREFERENCE DI JAY GI
// cout << *ptr << endl;        //hamari wali
// *ptr = 100;
// cout << *ptr;       //100
// return 0;
// }

//POINTERS AS FUNCTION PARAMETERS--->YEH FUNCTIONS KO ORIGINAL ARGUMENTS TK ACCESS DETA HAI JESAY REFERENCE PARAMETERS KRTAY THAY
//ADDRESSES AS ARGUMENTS
//BUS SEEKHO KIUN K STRINGS K LIYAY PASS BY POINTER BEST HAI
//BASIC SA TRY KRTAY HAIN
/*#include<iostream>
using namespace std;
void doublenum(int* numptr) {
	*numptr *= 2;
}
int main() {
	int num = 8;
	cout << num << endl;
	doublenum(&num);
	cout << num << endl;
}    */ //NOICE

//AMM PROTOTYPES MEIN --->(int *)
//cin>>*ptr;--->hota hai
/*#include<iostream>
using namespace std;
void getnum(int*);
void doublenum(int*);
int main() {
	int num;
	getnum(&num);
	doublenum(&num);
	cout << "NUM after being doubled is:" << num << endl;
}
void getnum(int* numptr) {
	cout << "num:" << endl;
	cin >> *numptr;
}
void doublenum(int* numptr) {
	*numptr *= 2;
}*/  //interesting

//TO ACCEPT ADDRESS OF ARRAY
//#include<iostream>
//using namespace std;
//void getsales(int *,int);    //imp
//int totalsales(int*, int);   
//int main() {
//	const int SIZE = 5;
//	int array[SIZE];
//	getsales(array, SIZE);
//	cout << "Total sales for the year are $";
//	cout<<totalsales(array, SIZE) << endl;
//}
//void getsales(int* arrptr, int SIZE) {           //yahan pay ptr bnatay hain
//	for (int i = 0;i < SIZE;i++) {
//		cout << "Enter sales of " <<i+1  << " items:" << endl;
//		cin >> arrptr[i];           //amm yahan pay get krnay k liyay steric nahi lagta
//	}
//}
//int totalsales(int* arrptr, int SIZE) {
//	int sum = 0;
//	for (int i = 0;i < SIZE;i++) {
//		sum += *arrptr;
//		arrptr++;
//	}
//	return sum;
//
//}

//AMM FILHAL CONSTANT POINTERS CHORRAY HAIN
//RETURNING A POINTER FROM FUNCTION BHI ABHI NAHI KR RAHI.








