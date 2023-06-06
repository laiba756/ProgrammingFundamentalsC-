//ARRAYS K CONCEPTS INSHAALLAH GHOL K PEE JANAY HAIN
// //-----------------------------//
//==TO THINK TOPIC IS HELPFUL IN DOING IMPORTANT TASKS==//
//AGR TUMHEIN 3 VARIABLES MEIN SAY MAX FIND KRNA TO COMPARISON SAY KR SKTAY , 10 KA BHI HO SKTA, 1000 KA TIMETAKING HAI PR KR....
//...LEKIN 10,000 PAY ZIADA TIME LAGAY GA TO ARRAY ISTEMAL KR K FORAN FIND KR SKTAY LIKE TUMHEIN KISI KO STALK KRNA BAJAY INSTA K 
//K HR ACCOUNT PAY DEKHO K WO KIS KIS KO LIKE KR RAHA BEHTR HAI KOI AESA ALGORITHM BNAO K JIN POSTS KO WO LIKE KR RAHA , JLDI ..
//TUMHEIN MIL JAIN TO HUI NA ARRAYS INTERESTING
//---LEKIN YEH AIK AESA BAG HOGA JIS MEIN ALOO HAIN TO SIRF ALOO AUR PIYAZ HAIN TO SIRF PIYAZ
// ----------------------------//
// ---------------------------//
//**TO HOLD DATA OF SAME DATA TYPE**//
//**ADJACENT MEMORY CELLS**//

//DECLARATION-->KHALI GARBAGE VALUE MILTI HAIN
//int Followers[154];

//AGR DECLARATION K SIZE SAY ZIADA WALAY KO PRINT KRNAY KI KOSHISH KRO GAY TO AP KO WARN KIYA JAY GA
//#include<iostream>
//using namespace std;
//int main() {
//	int num[17];
//	cout << num[15]<<endl;
//	cout << num[25]; //yeh to declare hi nahi hai--->matlab agr tumari following nein follow hi nahi kiya kisi
// //....to wo us ki following list mein kesay ayay ga
//}

//ACCESSING ARRAY ELEMENTS-->INDEX K ZARIAY INDEX YANI US ADDRESS PAY PARRAY ELEMENTS KO ACCESS KRTAY
//int Followers[154];  cout<<Followers[1];
//--------------//
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	const int FOLLOW_NAME = 3;
//	string Followers[FOLLOW_NAME];
//	cout << "Enter name of my " << FOLLOW_NAME << "  Followers:" << endl;
//	cin >> Followers[0];
//	cin >> Followers[1];
//	cin >> Followers[2];
//	cout << "My followers are:"<<endl;
//	cout << Followers[0] << endl;
//	cout << Followers[2] << endl;
//	cout << Followers[1] << endl;
//}
//---------//
//LOOP USE KR K APNAY KAM KO AUR ASAN BNAYA JA SKTA HAI
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	const int FOLLOW_NAME = 3;
//	string Followers[FOLLOW_NAME];
//	cout << "Enter name of my " << FOLLOW_NAME << "  Followers:" << endl;
//	    for (int i = 0;i < FOLLOW_NAME;i++) {
//		   cin >> Followers[i];
//	}
//	
//	cout << "My followers are:" << endl;
//		for (int i = 0;i < FOLLOW_NAME;i++){
//		   cout << Followers[i] << endl;
//	}	
//}
//********************************//

//READING ARRAY ELEMENTS FROM A FILE
// This program reads data from a file into an array. 
//#include <iostream> 
// #include <fstream>
// using namespace std;
// int main()
// {
// const int ARRAY_SIZE = 10; // Array size 
// int numbers[ARRAY_SIZE]; // Array with 10 elements 
// int count = 0; // Loop counter variable 
// ifstream inputFile; // Input file stream object 
// // Open the file. 
// inputFile.open("TenNumbers.txt");  
// //filhal mein nein kuch file mein nahi likha hua is liyay garbage value aa rahi
// // Read the numbers from the file into the array. 
//  while (count < ARRAY_SIZE && inputFile >> numbers[count])
// count++;
// // Close the file. 
// inputFile.close();
// // Display the numbers read: 
// cout << "The numbers are: ";
// for (count = 0; count < ARRAY_SIZE; count++)
// cout << numbers[count] << " ";
// cout << endl;
// return 0;
// }       //simple si bat hai k khud file bna k us say data read nahi krna ata..huh

//NO BOUND CHECKING IN ARRAYS-->baqi garbage ayay ga
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 3;
//	int array[SIZE];  //WAISAY AGR SIZE WALA KRO GAY TO YEH MASLA NAHI AYAY GA ALBATA AGR AGR SIZE KI
//	//........BAJAY 3 LIKHTAY AUR i<5 krtay to yeh masla aa skta tha
//	for (int i = 0;i < SIZE;i++) {
//		array[i] = 100;
//		cout << array[i] << endl;
//	}
//}

  //CHECKPOINT 7.6
//#include<iostream>
//using namespace std;
//int main() {
//	int values[5], count;
//	for (count = 0; count < 5; count++)
//		values[count] = count+1 ;
//	for (count = 0; count < 5; count++)
//		cout << values[count] << endl;
//}

//CHECKPOINT 7.7
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 20;
//	int i;
//	int fish[SIZE];
//	cout << "Enter number of fish caught by each fishermen b/w 1 to 20:" << endl;
//	for (i = 0;i < SIZE;i++) {
//		cout << "fisherman" << i << endl;
//		cin >> fish[i];
//	}	
//}

//INITIALIZATION  OF ARRAYS
//#include<iostream>
//using namespace std;
//int main() {
//	const int MONTHS = 12;
//	int days[MONTHS] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0;i < MONTHS;i++) {
//		cout << "Days in " << i << "th month are:" << days[i] << endl;
//	}
//}

//FOR STRINGS
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	const int FOLLOWERS = 3;
//	string myFoll[FOLLOWERS] = { "Liaba","lyba","kaisj" };
//	for (int i = 0;i < FOLLOWERS;i++) {
//		cout << "My insta followers are: " << myFoll[i] << endl;
//	}
//}

// This program uses an array of ten characters to store the 
 // first ten letters of the alphabet. The ASCII codes of the 
 // characters are displayed. 
 //#include <iostream>
 //using namespace std;
 //int main()
 //{
 //const int NUM_LETTERS = 10;
 //char letters[NUM_LETTERS] = { 'A', 'B', 'C', 'D', 'E',
 //'F', 'G', 'H', 'I', 'J' };
 //cout << "Character" << "\t" << "ASCII Code\n";
 //cout << "---------" << "\t" << "----------\n";
 //for (int count = 0; count < NUM_LETTERS; count++)
 //{
 //cout << letters[count] << "\t\t";
 //cout << int(letters[count]) << endl;//aesay bhi likh sktay ya --->static_cast<int>(letters[count])
 //}
 //return 0;
 //}

//INITIALIZATION WITH ZERO
//#include<iostream>
//using namespace std;
//int main() {
//	const int MONTHS = 12;
//	int days[MONTHS] = { 0 };  //SSARAY ZERO HO JAIN GAY
//	for (int i = 0;i < MONTHS;i++) {
//		cout << "Days in " << i << "th month are:" << days[i] << endl;
//	}
//}

//INIIALIZATION WITH ANY OTHER VALUE OTHER THAN ZERO----->neechay walay pro mein jahan tk initialization krtay ho
// //....wahan tk values ati aur baqi sara zero
//PARTIAL INITIALIZATION OF ARRAY--->BAQION MEIN ZERO HOGA
//#include<iostream>
//using namespace std;
//int main() {
//	const int MONTHS = 12;
//	int days[MONTHS] = { 31,29,31,30,31,30,31,31,30 };
//	for (int i = 0;i < MONTHS;i++) {
//		cout << "Days in " << i << "th month are:" << days[i] << endl;
//	}
//}

//MAKING FUNCTIONS TO MERGE TWO PRO TA K KAM BOHAT SADA ASAN SA HOJAY--->ARRAYS WITH FUNCTIONS
// //filhal extra hai han bad mein FUNCTION AS ARGUMENT POORA TOPIC HAI
//#include<iostream>
//using namespace std;
////void printArray(int[], int); //prototyping of array abhi nahi ati is liyay filhal void fun ko main k uper hi likho
//void printArray(int arr[], int SIZE) {
//	cout << "I am going to print array" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//    const int SIZE = 5;
//	int onearr[SIZE] = { 2,8 };
//	printArray(onearr, 5);
//
//	//const int SIZE = 5;
//	int secarr[SIZE] = { 0 };
//	printArray(secarr, 5);
//
//	//const int SIZE = 10;
//	int thirdarr[SIZE] = { 1,2,3,4,5};
//	printArray(thirdarr, 5);
//}

//ARRAY OF CHAR FUNCTION SAY NAHI HO SKTI K HUM SIRF UDHR INT HI PASS KRA SKTAY GHALBAN...LETS SEE:
//#include<iostream>
//using namespace std;
//void printArray(char arr[], int SIZE) {
//	cout << "Printing char arr" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//	const int SIZE = 5;
//		char chararr[SIZE] = { 'a', 'b', 'e', 'l', 't'};
//		printArray(chararr, 5);   //ho jati hai ajeeb-----love babbar kehta aesa nahi ho skta pr mera aesay ho raha
//}

//IMPLICIT ARRAY SIZING---->AGR INITIALIZED ARRAY MEIN SIZE DECLARE NAHI BHI KRTAY TO KUCH NAHI HOTA
//#include<iostream>
//using namespace std;
//int main() {
//	//const int MONTHS = 12;
//	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0;i < 12;i++) {
//		cout << "Days in " << i << "th month are:" << days[i] << endl;
//	}
//}

//RANGE BASED FOR LOOP-->IS KO COUNT KI VALUE NAHI BTANI PARRTI
// YEH RANGE BASED VARIABLE SIRF COPY KR SKTA NEECHAY K 2 PROGRAMS MEIN 
//#include<iostream>
//using namespace std;
//int main() {
//	int numbers[] = {3, 6, 9};
//	for (auto val : numbers) { //general syntax
//		cout << "Next value is:";
//		cout << val << endl;
//	}
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	//const int FOLLOWERS = 3;
//	string myFoll[] = { "Liaba","lyba","kaisj" };
//	for (string i: myFoll) {
//		cout << "My insta followers are: " << i << endl;
//	}
//}

//AGR NEW PARAMETERS LANAY JO ACTUAL ARGUMENT KO LAY TO REFERENCE VARIABLE BNA RANGE VARIABLE KO
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int main() {
//	string days[2];
//	for (auto &name : days) {       //idhr & lagao k to neechay display hoga
//		cout << "Enter name of day" << name;
//		cin >> name;
//	}
//	cout << "Here are the days you entered"<<endl;
//	for (auto name : days) {
//		cout << name<<endl;     //dekho tum normally kr rahi ho cout display nahi ho rahay blk & ki zaroorat hai
//	}
//	_getch();
//	return 0;
//}

//PROCESSING ARRAY ELEMENTS
//HA YEH TOPIC MUJHAY GANDALAGTA PR AJ INSHAALLAH KR LUN GI
//BISMILLAH
//INCREMENT/DECREMENT OPERATIONS ON ARRAY ARE SAME LIKE NORMAL VARIABLES
//#include<iostream>
//using namespace std;
//int main() {
//	const int NUM_EMP = 4;
//	int hrs[NUM_EMP];
//	const int pay_rate = 75;
//	int gross_pay;
//	cout<< "Enter the hours worked by "; 
//    cout << NUM_EMP << " employees who all\n";
//	cout << "earn the same hourly rate.\n";
//	for (int i = 0;i < NUM_EMP;i++) {
//		cout << "Enter hours of #" << i << " Employee" << endl;
//		cin >> hrs[i];
//	}
//	for (int i = 0;i < NUM_EMP;i++) {
//		gross_pay = hrs[i] * pay_rate;
//		cout << "Gross pay rate of #" << i << " Employee is " << gross_pay << endl;
//	}
//}

//CONTIONAL OPERATORS
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 4;
//	int arr[SIZE] = { 3,6,8,4 };
//	if (arr[1] > arr[3]) {
//		cout << "2nd element is greater than fourth." << endl;
//	}
//	else
//		cout << "4th is > than 2nd element.";
//}

//ARRAY ASSIGNMENT
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 3;
//	int budhi[SIZE] = { 3,8,5 };
//	int Navi[SIZE];
//	//budhi[SIZE] = Navi[SIZE];  //WON'T WORK
//	//cout << Navi[SIZE];  //WON'T WORK
//	for (int i = 0;i < SIZE;i++) {
//		Navi[i] = budhi[i];
//		cout << budhi[i] << "\t\t"<<Navi[i]<<endl;
//		
//	}
//}

//PRINTING CONTENTS OF ARRAY
//SIMPLE NUMBERS KI ARRAY PRINT NAHI KRA SKTAY BLK LOOP YA RANGE BASE LOOP LAGANA PARRTA HAI

//SUM OF VALUES OF ARRAY
//average
//HIGHEST VALUE--->BASIC LOGIC HOTI HAI WO YEH K KOI AIK NUMBER SUPPOSE 0 SAY HIGHEST KO INITIALIZE KRA DO
// ...AUR PHIR LOOP TO ARRAY MEIN HOTA HI SAATH LOOP K ANDR CONDITION LAGA DO K AGR VALUE HIGHEST SAY BARRI HAI
// .....TO WO HIGHEST HO JAY GI AND SO ON.. 
//LOWEST VALUE--->HIGHEST KI ULTI
//ALHAMDULILLAH AJ WO BAT SAMAJH AA GAI JIS NEIN MUJHAY ARRAYS SAY DRAYA HUA THA MASHAALLAH
// //------------------------------------------//
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 10;
//	float total=0; //is ko float krnay say aver bhi float mein ayay gi----->also total is accumulator so its initialization is imp
//	float average = 0.0; //AVE
//	int arr[SIZE] = { 3,7,2,4,5,7,2,5,3,8 };
//	int highest = arr[0]; //INITIALIZING MAX AS ZER0 say nahi blk jo zero index pay element parra ho us say
//	int lowest = arr[0]; //Initializing min as zero say nahi blk jo zero index pay element parra ho us say
//	for (int val : arr) {
//		total += val; 
//		average = total / SIZE;
//		//if for loop is used then total+=arr[i];
//		//TO FIND MAX
//		if (val > highest) {
//			highest = val;
//			cout << "Highest is: " << val << endl;  //ab is mein hua kuch yun hai k 3 values highest aa rahi
//			//....agr loop k andr likh rahi kiun k wo hr aik element ko pichlay say compare krta ja..incorrect approach	
//		}
//
//		//TO FIND MIN
//		if (val < lowest) {
//			lowest = val;
//		}
//	}
//	cout << "Sum of elements of array is: " << total<<endl;
//	cout << "Average of elements is:" << average << endl;
//	cout << "Highest is: " << highest << endl;       //accurate approach to find max
//	cout << "Lowest is: " << lowest << endl;
//	//ALHAMDULILLAH
//}

//PARTIALLY FILLED ARRAYS
//AGR UNKNOWN ELEMNT KI ARRAY BNANI HO TO BOHAT BARRI ARRAYS BNAI JATI HAIN
//hum counter lagatay hain jo memory deta jay ga yani counter + hoga aur wo 100 tk chal skta agr -1 ki condition
//...laga di yani 4th pay khatam krna to -1 laga k terminate kr do
//CRITICAL THINKING KI ZAROORAT HAI.NAHI WO NAHI KI KHUD HI HOGAYA SACH MEIN AJEEB
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 3;
//	int arr[SIZE];
//	int max = 0;
//	int num;
//	cout << "Enter a num or -1 to quit:" << endl;
//	cin >> num;
//	while (num != -1 && max < SIZE) {
//
//		max++;    //update in array to store valid sucscripts
//		arr[max - 1] = num;    //subscript 1 less than size of array
//		cout << "Enter any num or -1 to quit:" << endl;
//		cin >> num;
//	}
//		//cout << arr[num] << endl; //aesay nahi display kra sktay
//			for (int i = 0;i <max;i++) {
//				cout << arr[i] << endl;     //kuch problem abhi bhi ho rah
//		}
//	//WAHH NOICE KHUD BAKHUD HI JB MINUS 1 DALA TO PRINT HO GAYA AJEEB
//}

//NOW HUM 2 ARRAYS KO SAATH LAY K CHALNAY WALAY IS LIYAY ZARA HOSHIAR HO JAO
//COMPARING ARAYS
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 6;
//	int farr[SIZE] = { 3,6,4,2,1,7 };
//	int larr[SIZE] = { 3,5,2,4,6,7 };
//	int max = 0;
//	bool EqualArr = true;
//	while (EqualArr && max < SIZE) { //Then a while loop begins. The loop executes as long as arraysEqual is true and the 
//		//.....counter variable count is less than SIZE.
//		if (farr[max] != larr[max])   //jesay hi koi element match nahi hota loop terminate ho jay ga
//			EqualArr = false;
//			max++;
//	}
//	if (EqualArr)
//		cout << "Arrays are equal." << endl;
//	else
//		cout << "Arrays are not equal" << endl;
//}

//isi ko ulta perform krtay hain chalo
//#include<iostream>
//using namespace std;
//int main() {
//	const int SIZE = 6;
//	int farr[SIZE] = { 3,6,4,2,1,7 };
//	int larr[SIZE] = { 3,5,2,4,6,7 };
//	int max = 0;
//	bool EqualArr = false;
//	while (!EqualArr && max < SIZE) { //Then a while loop begins. The loop executes as long as arraysEqual is true and the 
//		//.....counter variable count is less than SIZE.
//		if (farr[max] == larr[max])   //jesay hi koi element match nahi hota loop terminate ho jay ga
//			EqualArr = true;
//		max++;
//	}
//	if (EqualArr)
//		cout << "Arrays are not equal." << endl;
//	else
//		cout << "Arrays are equal" << endl;
//}

//ooo pareshan nahi hona mujhay dekh k kam mein aur neechay wala aik hi kr rahay bus hum donon concept k liyay ayaay hain
//#include<iostream>
//using namespace std;
//int main() {
//	const int NUM_EMP = 4;
//	int hrs[NUM_EMP];
//	const int pay_rate = 75;
//	int gross_pay;
//	cout<< "Enter the hours worked by "; 
//    cout << NUM_EMP << " employees who all\n";
//	cout << "earn the same hourly rate.\n";
//	for (int i = 0;i < NUM_EMP;i++) {
//		cout << "Enter hours of #" << i << " Employee" << endl;
//		cin >> hrs[i];
//	}
//	for (int i = 0;i < NUM_EMP;i++) {
//		gross_pay = hrs[i] * pay_rate;
//		cout << "Gross pay rate of #" << i << " Employee is " << gross_pay << endl;
//	}
//}

//PARALLEL ARRAYS:koi bhi arrays k same subscripts pay parray data ko ap compare kr sktay ho
//#include<iostream>
//using namespace std;
//int main() {
//	const int NUM_EMP = 4;
//	int hrs[NUM_EMP];
//	int gross_pay;
//	int pay_rate[NUM_EMP]; //uper walay mein pay_rate aik hi lena tha user say is liyay ap nein khud hi set kr diya eshmart han
//	cout << "Enter the hours worked by ";
//	cout << NUM_EMP << " employees who all\n";
//	cout << "earn the same hourly rate.\n";
//	for (int i = 0;i < NUM_EMP;i++) {
//		cout << "Enter hours of #" << i+1 << " Employee" << endl; //i+1 is liyay k employee thori kabhi zero hua hai
//		cin >> hrs[i];
//		cout << "Enter payrate of #" << i+1 << " Employee" << endl;
//		cin >> pay_rate[i];
//	}
//	for (int i = 0;i < NUM_EMP;i++) {
//		gross_pay = hrs[i] * pay_rate[i];
//		cout << "Gross pay rate of #" << i << " Employee is " << gross_pay << endl;
//	}
//}

//CHECKPOINT 7.10
//#include<iostream>
//using namespace std;
//int main() {
//	int values[] = { 2, 6, 10, 14 };
//	//What does each of the following display ?
//		//A)
//	cout << values[2] << endl;
//	//B)
//	cout << ++values[0]<<endl;
//	//C)
//	cout << values[1]++<<endl;   //increment to ho jati pr value dikhti same hai kiun post hai
//	//D)
//	//int x = 2;
//	//cout << values[++x];      //it will be error i think------->yeh pata nahi kia hua hua aur aesay ho bhi nahi skta
//}

//****************************************************************//
//BISMILLAH
//ARRAY AS FUNCTION ARGUMENTS
//****************************************************************//
//pehlay uper walay program ko utha k la rahi hun is liyay ghabrana nahi hai
//******************************************************************//
//MAKING FUNCTIONS TO MERGE TWO PRO TA K KAM BOHAT SADA ASAN SA HOJAY--->ARRAYS WITH FUNCTIONS
// //filhal extra hai han bad mein FUNCTION AS ARGUMENT POORA TOPIC HAI
//#include<iostream>
//using namespace std;
////void printArray(int[], int); //prototyping of array abhi nahi ati is liyay filhal void fun ko main k uper hi likho
//void printArray(int arr[], int SIZE) {
//	cout << "I am going to print array" << endl;
//	for (int i = 0;i < SIZE;i++) {
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//    const int SIZE = 5;
//	int onearr[SIZE] = { 2,8 };
//	printArray(onearr, 5);
//
//	//const int SIZE = 5;
//	int secarr[SIZE] = { 0 };
//	printArray(secarr, 5);
//
//	//const int SIZE = 10;
//	int thirdarr[SIZE] = { 1,2,3,4,5};
//	printArray(thirdarr, 5);
//}

//DEKHO HUM DO DIFFERENT APPROACHES DEKH RAHAY AIK JIS MEIN LOOP MAIN MEIN LAGA ARR VALUES KO SHOW FUN MEIN PRINT KRAYA AUR
//..AUR DOSRA....GO FOR BELOW FIRST CZ YEH BOOK SAY BASIC SAY SEEKH RAHI INSHAALLAH AGAY AUR BHI AA JAIN GAY AUR SHAYAD 
//.UPER WALA BHI AYAY IS LIYAY JUST WAIT AND WATCH

//ab hum nein agr yeh program kiya hai to samjho adha kam to ho gaya han
//PASS THE NAME OF ARRAY AS ARGUMENT...HAINN
//PRO::::PASSING ELEMENTs OF ARRAY TO ANOTHER FUNCTION WILL BE LIKE PASSING OF VARIABLE
//#include<iostream>
//using namespace std;
////void showEle(int arr[])---->dekho uper btaya k as a value pass ho ga
//void showEle(int);
//int main() {
//	const int SIZE = 5;
//	int arr[SIZE] = { 3,5,6,4,3 };
//	for (int i = 0;i < SIZE;i++) {
//		showEle(arr[i]);
//	}
//}
//void showEle(int ele) {
//	cout << ele;        //IS MEIN WO ELEMENTS KO AS A PARAMETER LAY RAHA K UPER LOOP CHALTA AUR ACCEPT KRTAY JAO COPYS OF ARG
//}

//TAKING WHOLE ARRAY AS PARAMETER TO BHAYA YAHAN KA SYTAX TUM KO MALOOM HONAY
//yeh passing by value nahi blk jb array pass hoti hai na to is ko pass by reference bola jata hai is liyay aik program jo uper 
//....likha tha to & lagatay hi nahi hain
//to bhaiya uper k uper wala program idhr aa skta hai............lekin abhi to tum aik arr pay kam kr rahay aur PRACTICE bhi
//....is liyay chup kr k program likho shabash INSHAALLAH aik din bohat barra programmer bnana hai
//#include<iostream>
//using namespace std;
//void showEle(int array[], int SIZE) {     //is say yeh dekhna chahti k parameter ka name kuch bhi rkh sktay han ab ziada k liyay bhi likh skti hun
////void showEle(int arr[], int SIZE) {   
//	for (int i = 0;i < SIZE;i++)
//		cout << array[i];
//}
//int main() {
//	const int SIZE = 4;
//	int arr[SIZE] = { 2,4,5,6 };
//	cout << "Elements of array are: ";
//	showEle(arr, 4);
//}
// *******************************
//ziada k liyay uper likha hua hai
//********************************
// //array parameter k changes original array ko bhi effect krain gay
//**********//
 // This program uses a function to double the value of 
 // each element of an array. 
// #include <iostream>
// using namespace std;
// // Function prototypes 
// void doubleArray(int[], int);
// void showValues(int[], int);
// int main()
// {
// const int ARRAY_SIZE = 7;
// int set[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7 };
//// Display the initial values. 
// cout << "The array's values are:\n";
// showValues(set, ARRAY_SIZE);
// // Double the values in the array. 
// doubleArray(set, ARRAY_SIZE);
// // Display the resulting values. 
// cout << "After calling doubleArray the values are:\n";
// showValues(set, ARRAY_SIZE);
// return 0;
// }
// void doubleArray(int nums[], int size)
//	  {
//	  for (int index = 0; index < size; index++)
//	 nums[index] *= 2;
//	 }
// void showValues(int nums[], int size)
//	  {
//	  for (int index = 0; index < size; index++)
//	 cout << nums[index] << " ";
//	 cout << endl;
//	 }

//its good to use const keyword with parameter 
//baqi lowest, highest, total, average waghaira bhi ap nikaal sktay ho
//tumhein samajh ai hui and many many congratulations MASHAALLAH YOU HAVE DONE 1D ARRAYS 
//***********ALHAMDULILLAH************//

//*****************************************************************88888888888/
//888*****************************************************************************/
//*********************2 DIMENSIONAL ARRAYS********************************/
//WELL YEH MUJHAY SB SAY GANDI LAGTI HAIN LEKIN INSHAALLAH YEH ASAN HON GI AUR INTERESTING BHI//
// //**************************************************??//
//YEH MULTIPLE SET OF DATA KO HOLD KRTI HAIN MATLAB JESAY AIK HIGHLIGHTED COLOUMN BNAO STUDENTS K LIYAY AUR AIK
//..HIGHLIGHTED ROW BNAO SUBJECTS K LIYAY AUR UN MEIN COMMON STUDENTS K NUMBERS HONGAY
//******************************************************//
//1. DEFINITION OF 2D ARRAY:2 SIZE DECLARATORS-->ONE FOR ROW AND OTHER FOR COLUMN
//2. EACH ELEMENT HAS 2 SUBSCRIPTS--->ONE FOR ROW AND OTHER FOR COLUMN
//3. SUBSCRIPTED REFERENCES BHI 1 D KI TARAH USE HOTAY HAIN LEKIN IDHR ROWS AUR COLUMN DONON K LIYAY HOTAY HAIN
//************************************************************//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int ROWS = 4;
//	const int COLS = 3;
//	int arr[ROWS][COLS] = { 3,4,5,6,3,2,1,3,5,6,7,8 }; //3*4=12 Elements
//	for (int i = 0;i < ROWS;i++) {
//		for (int j = 0;j < COLS;j++) {
//			cout <<setw(4)<< arr[i][j]<<" ";
//		}
//		cout << endl;   //k aik row khatam hona
//	}
//}      //yeh to samajh aa gai ALHAMDULILLAH

//TO GET SALES AND DISPLAY THEIR TOTAL



//TO GET MARKS OF STUDENTS OF DIFFERENT SUBJECTS AND DISPLAY AVERAGE AND TOTAL
//#include<iostream>
//using namespace std;
//int main() {
//	const int STUDENT = 2;
//	const int SUBJECTS = 3;
//	int [STUDENT];
//	int [SUBJECTS];
//	int marks[STUDENT][SUBJECTS];
//	float total_marks = 0;
//	float average;
//	cout << "YOU WILL ENTER YOUR MARKS OF SUBJECTS OF ALL STUDENTS" << endl;
//	cout << "Enter your data here and I will tell average of class" << endl;
//	for (int i = 0;i < STUDENT;i++) {
//		for (int j = 0;j < SUBJECTS;j++) {
//			cout << " STUDENT " << i << "," << " SUBJECTS " << j << endl;
//			cin >> marks[i][j];
//			total_marks += marks[i][j];
//			average = total_marks / (SUBJECTS * STUDENT);
//		}
//		cout << endl;
//	}
//	cout << "Total marks are:" << total_marks << endl;
//	cout << "Average is " << average << endl;
//}     //DEKHO ALHAMDULILLAH MASHAALLAH TUM DARI NAHI HO AUR TUM NEIN KR LIYAY HAIN GREAT JOB

//ABHI TUMHARAY DIMAGH MEIN QUESTION TO AYA THA K KHALI ROWS KO YA KHALI COLUMNS KO KESAY SUM KIYA JAY AUR TUM WO CHORRNAY 
//...LAGI THI YEH ACHI BAT NAHI HAI BE CAREFUL AND BE PASSIONATE OK

//TO FIND SUM OF ONLY ROWS OF 2D ARRAY
//AUR JB LAB MEIN THA TO TUMHEIN KUCH SAMAJH NAHI AA RAHI THI TB SB NEIN 9 PROGRAMS KRNAY THAY ANF=D TUM SIRF 3 YA 3 PAY BUS HO
//...GAI THI LEKIN AB INSHAALLAH TUM THE BEST PROGRAMMER HO GI
//#include<iostream>
//using namespace std;
//int main() {
//	const int STUDENT = 2;
//	const int SUBJECTS = 3;
//	int marks[STUDENT][SUBJECTS];
//	float total_marks;
//	float average;
//	for (int i = 0;i < STUDENT;i++) {
//		float total_marks=0; //kiun k hr inner loop k bad usay zero hona hai
//		for (int j = 0;j < SUBJECTS;j++) {
//			cout << " STUDENT " << i << "," << " SUBJECTS " << j << endl;
//			cin >> marks[i][j];
//			total_marks += marks[i][j];
//			average = total_marks / SUBJECTS;     //COL SAY DIVIDE KR ...K LIYAY ROW KI AVE HOTA
//			
//		}
//		cout << "SCORE Average FOR STUDENT " << i + 1 << " is " << average << endl;     //great job MASHAALLAH
//		cout << endl;
//	}
//}     //DEKHO ALHAMDULILLAH MASHAALLAH TUM DARI NAHI HO AUR TUM NEIN KR LIYAY HAIN GREAT JOB

//FOR ALREADY ENTERED DATE
//#include<iostream>
//using namespace std;
//int main() {
//	const int NUM_STUDENTS = 3; // Number of students 
//	const int NUM_SCORES = 5; // Number of test scores 
//	double total; // Accumulator is set in the loops 
//	double average; // To hold each student's average 
//	double scores[NUM_STUDENTS][NUM_SCORES] = { {88, 97, 79, 86, 94},
//	 {86, 91, 78, 79, 84},
//	 {82, 73, 77, 82, 89} };
//	// Get each student's average score. 
//	for (int row = 0; row < NUM_STUDENTS; row++)
//	{
//		// Set the accumulator. 
//		total = 0;
//		// Sum a row. 
//		for (int col = 0; col < NUM_SCORES; col++)
//			total += scores[row][col];
//		// Get the average. 
//		average = total / NUM_SCORES;
//		// Display the average. 
//		cout << "Score average for student "
//			<< (row + 1) << " is " << average << endl;
//	}
//}

//TO FIND SUM OF COLS---------->DIVIDE BY ROWS
//#include<iostream>
//using namespace std;
//int main() {
//	const int STUDENT = 2;
//	const int SUBJECTS = 3;
//	int marks[STUDENT][SUBJECTS];
//	float total_marks;
//	float average;
//	for (int i = 0;i < STUDENT;i++) {
//		float total_marks=0; //kiun k hr inner loop k bad usay zero hona hai
//		for (int j = 0;j < SUBJECTS;j++) {
//			cout << " STUDENT " << i << "," << " SUBJECTS " << j << endl;
//			cin >> marks[i][j];
//			total_marks += marks[i][j];
//			average = total_marks / STUDENT;     //Roe SAY DIVIDE KR ...K LIYAY Col KI AVE HOTA
//			
//		}
//		cout << "Class Average FOR Subject " << i + 1 << " is " << average << endl;     //great job MASHAALLAH
//		cout << endl;
//	}
//} //MASHALLAH ALHAMDULILLAH

//PASSING 2 D ARRAY AS FUNCTION ARGUMENT
//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int COL = 3;
//const int ROW_T1 = 3;
//const int ROW_T2 = 4;
//void showArr(const int[][COL], int);
//int main() {
//	//aray yar LAIBA yeh rows hamesha pehlay likhtay hain aur columns bad mein
//	int T1[ROW_T1][COL] = {{7,8,9}, {5,8,9},{6,8,0}};       //{yeh brackets lazmi hoti hian}
//	int T2[ROW_T2][COL] = {{5,9,7},{8,5,3},{5,2,4},{6,2,1}};
//	cout << "CONTENTS OF TABLE ONE ARE:"<<endl;
//	 showArr( T1, ROW_T1);
//	cout << "********************" << endl;
//	cout << "CONTENTS OF TABLE TWO ARE:" << endl;
//	 showArr(T2, ROW_T2);
//}
//void showArr(const int arr[][COL], int rows) {      //kiun k rows 2 hain na
//	for (int i = 0;i < rows;i++) {
//		for (int j = 0;j < COL;j++) {
//			cout << setw(4) << arr[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}

//*****************3 DIMENSIONAL ARRAYS**************//
//in mein size declarators ki direct values dalo

//PROJECT RELATED TO ARRAYS
// This program is a driver that tests a function comparing the 
 // contents of two int arrays. 
// #include <iostream>
// using namespace std;
// // Function Prototype 
// bool testPIN(const int[], const int[], int);
//int main()
//{
//     const int NUM_DIGITS = 7; // Number of digits in a PIN 
//     int pin1[NUM_DIGITS] = { 2, 4, 1, 8, 7, 9, 0 }; // Base set of values. 
//     int pin2[NUM_DIGITS] = { 2, 4, 6, 8, 7, 9, 0 }; // Only 1 element is 
// // different from pin1. 
//     int pin3[NUM_DIGITS] = { 1, 2, 3, 4, 5, 6, 7 }; // All elements are 
// // different from pin1. 
//    if (testPIN(pin1, pin2, NUM_DIGITS))
//     cout << "ERROR: pin1 and pin2 report to be the same.\n";
//    else
//     cout << "SUCCESS: pin1 and pin2 are different.\n";
//    if (testPIN(pin1, pin3, NUM_DIGITS))
//     cout << "ERROR: pin1 and pin3 report to be the same.\n";
//    else
//     cout << "SUCCESS: pin1 and pin3 are different.\n";
//    if (testPIN(pin1, pin1, NUM_DIGITS))
//     cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
//    else
//     cout << "ERROR: pin1 and pin1 report to be different.\n";
//     return 0;
// }
//
////ww.TechnicalBooksPdf.com
//// If You Plan to Continue in Computer Science : Introduction to the STL vector 429
// //****************************************************************** 
// // The following function accepts two int arrays. The arrays are * 
// // compared. If they contain the same values, true is returned. * 
// // If they contain different values, false is returned. * 
// //****************************************************************** 
//
// bool testPIN(const int custPIN[], const int databasePIN[], int size)
//{
//	 for (int index = 0; index < size; index++)
//	 {
//	  if (custPIN[index] != databasePIN[index])
//	   return false; // We've found two different values. 
//	 }
//	   return true; // If we make it this far, the values are the same. 
//}

//***********SHUKAR ALHAMDULILLAH*************//
//1.highest/lowest
// aik array declare kra k 10 number input krao aur highest aur lowest k syntax copy krain gay
//#include<iostream>
//using namespace std;
//int main() {
//	int numbers[10];
//	int largest = 0;
//	int smallest = 0;
//
//	for (int i = 0; i <= 9; i++) {
//		cout << "Please enter number " << i + 1 << ": " << endl;
//		cin >> numbers[i];
//	}
//	smallest = numbers[0];
//	largest = numbers[0];
//
//	for (int i = 1; i <= 9; i++) {
//		if (numbers[i] < smallest)
//			smallest = numbers[i];
//		if (numbers[i] > largest)
//			largest = numbers[i];
//	}
//
//	cout << "Largest Value is: " << largest << endl;
//	cout << "Smallest Value is: " << smallest << endl;
//}

//2.2. Rainfall Statistics
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int MONTHS = 12;
//	int count = 0;
//	string name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//	double rain[MONTHS], avg, year = 0, highest, lowest;
//	string highMonth, lowMonth;
//
//	for (count = 0; count < MONTHS; count++) // ask user to enter amount of rainfall for each month
//	{
//		cout << "How many inches of rain does " << name[count] << " have? \n";
//		cin >> rain[count];
//		while (rain[count] < 0)
//		{
//			cout << "Please enter a number greater than 0." << endl;
//			cin >> rain[count];
//		}
//	}
//
//	highest = rain[0]; // finds month with the highest amount of rain
//	lowest = rain[0]; // finds month with the least amount of rain
//
//	for (count = 1; count < MONTHS; count++)
//	{
//		if (rain[count] > highest)
//		{
//			highMonth = name[count];
//			highest = rain[count];
//		}
//		else if (rain[count] < lowest)
//		{
//			lowMonth = name[count];
//			lowest = rain[count];
//		}
//	}
//
//	avg = year / MONTHS;
//
//	for (count = 0; count < MONTHS; count++)
//	{
//		year += rain[count];
//		cout << name[count] << "has " << rain[count] << " inches of rainfall.\n";
//	}
//
//	cout << endl << setprecision(2) << fixed;
//	cout << "Total Rainfall throughout the year is " << year << " inches" << endl;
//	cout << "The average monthly rainfall is " << avg << " inches" << endl;
//	cout << "The month with the highest amount of rainfall is " << highMonth << " with " << highest << " inches." << endl;
//	//agr same rainfall 3 maheenay k liayya ho to pehla as highest consider hoga
//	cout << "The month with the lowest amount of rainfall is " << lowMonth << " with " << lowest << " inches." << endl;
//}

//3. Chips and Salsa

