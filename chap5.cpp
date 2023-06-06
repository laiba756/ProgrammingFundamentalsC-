//INCREMENT AND DECREMENT OPERATORS
//#include<iostream>
//using namespace std;
//int main() {
//	int num = 4;
//	cout << "num is:" << num<<endl;
//	cout<<num++<<endl;      //pehlay same phir increase
//	cout << "After post increment num is:" <<num<< endl;
//	cout<<++num<<endl;      //direct increase
//	cout << "After pre increment num is:" << num << endl;
//	cout<<num--<<endl;       //pehlay same phir decrease
//	cout << "After post decrement num is:" << num << endl;
//	cout<<--num<<endl;       //direct decrease
//	cout << "After pre decrement num is:" << num << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int num = 4;
//	int num1 = 7;
//	int sum1 = num1 + num;
//	cout << "num is:" << num << endl;
//	cout << sum1<<endl;
//	cout << num++ << endl;      //pehlay same phir increase
//	cout << "After post increment num is:" << num << endl;
//	int sum2 = num1 + num;
//	cout << sum2 << endl;
//	cout << ++num << endl;      //direct increase
//	cout << "After pre increment num is:" << num << endl;
//	int sum3 = num1 + num;
//	cout << sum3<<endl;
//	cout << num-- << endl;       //pehlay same phir decrease
//	cout << "After post decrement num is:" << num << endl;
//	int sum4 = num1 + num;
//	cout << sum4 << endl;
//	cout << --num << endl;       //direct decrease
//	cout << "After pre decrement num is:" << num << endl;
//	int sum5 = num1 + num;
//	cout << sum5 << endl;
//}

//CONDITIONALS

//#include<iostream>
//using namespace std;
//int main() {
//	int num = 4;
//	num++;
//	if (num > ++num)
//		cout << "n++ is greater than num";
//	else if (num == ++num)
//		cout << "Equal equal";
//	else
//		cout << "Wrong ho bhaya";
//	return 0;
//}

//SIMPLE WHILE
//#include<iostream>
//using namespace std;
//int main() {
//	int num=-6;
//	/*while (num < 5) {
//		cout << "LALA" << endl;
//		num++;
//	}
//	cout << "bus bohat hogaya"<<endl;
//	
//	while (num < 25) {
//		cout << "nana" << endl;
//		num++;
//	}
//	cout << "bus chup"<<endl;
//	
//	while (num < 5) {
//		cout << "hah" << endl;
//		num++;
//	}
//	cout << "Ab aur nai dekh skti";*/
//	/*while (num < 5) {     //Infinite loop
//		cout << "hah" << endl;
//		
//	}*/
//	while (num < 5) 
//		cout << "hah" << endl;     //INFINITE LOOP CZ NO BRACES
//		num++;
//	return 0;}
	
	//USE OF EQUAL OPERATOR INSTEAD OF EQUAL EQUAL
//#include<iostream>
//using namespace std;
//int main() {
//	//int num=1;        //Infinite loop chal raha hai jb num=1 diya
//	//int num = 2;    //koi statement execute nahi ho rahi kiun k remainder=1 nai hai
//	int num=2;
//	int remainder=num % 2;
//	while (remainder == 1){//sirf equal laganay say memory pay farq parrta hai 
//		cout << "Number:";
//		cin >> num;     //Number do to bar bar number poochay ga lekin agr number nahi deti to bus poochay baghair infinte loop chalta jay ga
//		cout << "." << endl;
//	}
//	cout << "Remainder 1 nahi aya" << endl;
//	return 0;
//}   //GREAT JOB LAIBA AFTER SERVING SOMETIME YOU HAVE EXECUTED YOUR PROGRAM SUCCESSFULLY MASHAALLAH ALHAMDULILLAH //AJEEB COMMENTS MEIN BHI EMOJIS NAHI DALNAY DETAY:)

//#include<iostream>
//using namespace std;
//int main() {
//	float sub_temp;
//	float temp_C = 102.5;
//	cout << "Enter substance's temperature:" << endl;
//	cin >> sub_temp;
//	while (sub_temp > temp_C) {
//		cout << "Temperature is too high." << endl;
//		cout << "Turn the thermostat downand wait 5 minutes." << endl;
//		cout<<"Then take the Celsius temperature again." << endl;
//		cout << "and enter it here: " << endl;
//		cin >> sub_temp;
//	}
//	cout << "The temperature is acceptable.";
//    cout << "Check it again in 15 minutes.";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int number;
//	cout << "Enter a number in the range 1-100: ";
//	cin >> number;
//	while (number < 1 || number > 100)
//	{
//		cout << "ERROR: Enter a value in the range 1-100: ";
//		cin >> number;
//	}
//	return 0;
//}

//NO. OF TEAMS WE CAN MAKE FROM AVAILABLE NUMBER OF PLAYERS
//#include<iostream>
//using namespace std;
//int main() {
//	int MIN_PLAYERS = 9;
//	int MAX_PLAYERS = 15;
//	int num_team;
//	int leftOver;
//	int players;
//	int teamplayers;
//	cout << "How many players are available:" << endl;
//	cin >> players;
//	while (players <= 0) {
//		cout << "Enter positive players kiun k hamain negative log nahi rakhnay." << endl;
//		cin >> players;
//	}
//	cout << "How many players you want in a team:" << endl;
//	cin >> teamplayers;
//	while (teamplayers<MIN_PLAYERS || teamplayers>MAX_PLAYERS) {
//		cout << "You can choose only between 9 and 15." << endl;
//		cout << "How many players you want in a team:" << endl;
//		cin >> teamplayers;
//	}
//	num_team= players / teamplayers;
//	leftOver = players % teamplayers;
//	cout << "Ap ki " << num_team << "ap k available" << players << "say bn skti aur" << leftOver << "baqi bach gay hain unko zaleel mt karain." << endl;
//
//}

//Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’, 'yes' or 'no'.
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	char c;
//	string s;
//	cout << "Enter y, Y, N ya n";
//	cin >> c;
//	while (c != 'y' && c != 'Y' && c != 'N' && c != 'n') {
//		cout << "Dobara entry kro" << endl;
//		cin >> c;
//	}
//	cout << "Enter yes or no";
//	cin >> s;
//	while (s != "yes" && s != "no") {
//		cout << "Dobara shabash" << endl;
//		cin >> s;
//	}
//}

//COUNTERS
//#include<iostream>
//using namespace std;
//int main() {
//	int MIN_NUM = 1;
//	int MAX_NUM = 10;
//	int i = MIN_NUM;
//	while (i <= MAX_NUM) {
//		cout << i << "\t\t\t\t" << i * i << endl;
//		i++;
//	}
//}

//DO-WHILE LOOP
//#include<iostream>
//using namespace std;
//int main() {
	/*int i = 1;*/
	/*do {
		cout << i << endl;
		i++;
	} while (i < 3); */      //yeh aik try kia jis mein 1, 2 nikla ab isi expression mein dosri value dal rahi hun.
	//do {
	//	cout << i << endl;
	//	i++;              //agr i++ nahi daltay to yeh infinite loop bn jay ga 11111............
	//} while (i < 10);          //idhr 9 tk aa rahay
	//int i1 = 9;
	//while (i1 > 3) {              //idhr greater than hai is liyay infinite looop chal raha
	//	cout << i1;
	//	i1++;
	//}
	//while (i1 <13) {              //idhr greater than hai is liyay infinite looop chal raha
	//	cout << i1<<endl;
	//	i1++;
	//}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n1, n2, n3;
//	double ave;
//	char c;
//	do {
//		cout << "Enter number you have got in three subjects:" << endl;
//		cin >> n1 >> n2 >> n3;
//		ave = (n1 + n2 + n3) / 3.0;
//		cout << "average is:" << ave << endl;
//		cout << "Do you want calculate ave again?" << endl;
//		cin >> c;
//	} while (c == 'y' || c == 'N' || c = 'n'||c=='Y');
//}

//JAZZ MENU ITERATION
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string code;
//	int choice;
//	const int Top_offers = 1;
//	const int All_in_one_offers = 2;
//	const int Super_4G_Data_offers = 3; 
//	const int QUIT_CHOICE = 0;
//	do{
//		cout << "Enter code on KeyPad:" << endl;
//		cin >> code;
//	
//			if (code == "*444#") 
//			do{
//				cout << "1:Top_offers" << endl;
//				cout << "2:All_in_one_offer" << endl;
//				cout << "3:Super_4G_Data_offers" << endl;
//				cout << "0:QUIT_CHOICE" << endl;
//				cout << "Enter choice:";
//				cin >> choice;
//			 if (choice == QUIT_CHOICE)
//				break;
//				if (choice == Top_offers) {
//					cout << "1 hour 1 GB @Rs.21" << endl;
//				}
//				else if (choice == All_in_one_offers) {
//					cout << "1 day 2 GB @Rs.41" << endl;
//				}
//				else if (choice == Super_4G_Data_offers) {
//					cout << "3 hour 1 GB @Rs.31" << endl;
//				}				
//			else 
//					cout << "Invalid choice" << endl;			
//			} while (choice<Top_offers || choice>Super_4G_Data_offers||choice!=QUIT_CHOICE);			
//		else
//			cout << "Invalid Code. Try Again"<<endl;
//	} while (code!="*444#");                   //MASHAALLAH CANIM VERY WELL ITS A SMALL CONTRIBUTION TOWARDS YOUR SUCCESS VERY GOOD
//}         //WITH WKW'S HELP YOU HAVE COMPLETED YOUR PROGRAM MASHAALLAH
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
	/*int count = 10;
	do
	{
		cout << "Hello World\n";
		count++;
	} while (count < 1);*/
	/*int v = 10;
	do
		cout << v << endl;
	while (v < 5);*/
	/*int v = 10;
	do {
		cout << v << endl;
		v++;
	}
	while (v < 5);*/
	/*int v = 10;
	do {
		cout << v << endl;
		v++;
	} while (v < 15);*/
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	/*int count = 0, number = 0, limit = 4;
//	do
//	{
//		number += 2;
//		count++;
//	} while (count < limit);
//	cout << number << " " << count << endl;*/
//	int num = 0;
//	int i = 0;
//	int limit = 8;
//	do {
//		num += 2; i++;      //jb limit 0 hai to i!<limit is liyay loop aik hi bar chalay ga
//		//num will be 2 and i will be incremented only once
//		//jb limit 1 hai to i<limit to 2 time increment hoga aur num mein 2 bar addition hogi
//		//jb limit 4 hai to i<limit to 4 time incr aur num 4 bar addition ho k 8 hojay ga
//		//...........................
//	} while (i < limit);
//	cout << num<<" "<<i;
//}

//FOR LOOP->used for count-controlled loops
//#include<iostream>
//using namespace std;
//int main() {
//	int MIN_NUM = 1;
//	int MAX_NUM = 10;
//	int num;
//	for (num = MIN_NUM;num <= MAX_NUM;num++) {
//		cout << num << "\t\t" << num * num << endl;
//	}
//}
 
//LOOP WON'T BE ITERATED:---)
//#include<iostream>
//using namespace std;
//int main() {
//	int num = 6;
//	for (int i = num;i >= 10;i++) {
//		cout << "Mein kiun loop ko iterate honay dun chalo chutti kro" << endl;
//	}
//}

//Avoid modufication of loop
//#include<iostream>
//using namespace std;
//int main() {
//	int num = 9;     //8 k liyay 5 bar aya--------9 k liyay 5 bar aya
//	for (int i = 0;i <= num;i++) {
//		cout << "JI THEEK HAI" << endl;
//		i++;     //hain ab khali 6 k bajay 3 bar iterate kia haw hay---kiun x ko 2 bar consider kr raha is liyay adhi output ayay gi.
//	}
//}

//Other updates
//#include<iostream>
//using namespace std;
//int main() {
//	/*int num = 99;
//	for (int i = 0;i < num;i += 3) {
//		cout << i<<endl;
//	}*/
//	/*for (int i = 10;i >=8;i--) {
//		cout << i << endl;
//	}*/
//}

//User-controlled for loop
//#include<iostream>
//using namespace std;
//int main() {
//	int MIN_NUM;
//	int MAX_NUM;
//	cout << "Enter min num:" << endl;
//	cin >> MIN_NUM;
//	cout << "Enter max num:" << endl;
//	cin >> MAX_NUM;
//	for (int i = MIN_NUM;i <= MAX_NUM;i++) {
//		cout << i << "\t\t" << i * i << endl;
//	}
//}

//MULTIPLE VARIABLE' UPDATES IN FOR LOOP
//#include<iostream>
//using namespace std;
//int main() {
//	int x, y;
//	/*for (x = 1, y = 1;x <= 7;x++) {
//		cout << x << "\t\t\t"<<y << endl;
//	}*/
//	/*for (x = 1, y = 1;x <= 7; y++) {
//		cout << x << "\t\t\t" << y << endl;
//	}*/               //INFINITE LOOP FOR Y BUT X WILL ALWAYS REMAIN 1
//	/*for (x = 1, y = 1;x <= 7;x++,y++) {
//		cout << x << "\t\t\t" << y << endl;
//	}*/
//	/*for (x = 1, y = 1;x <= 7,y=10;x++) {
//		cout << x << "\t\t\t" << y << endl;
//	}*/                //infinite for x
//	/*for (x = 1, y = 1;x <= 7,y<=5;x++,y++) {
//		cout << x << "\t\t\t" << y << endl;
//	}*/
//}

//#include<iostream>
//using namespace std;
//int main() {
//	//int maxValue = 10;
//	//int num = 1;
//	//for (; num <= maxValue; num++)      //INITIALIZE OUTSIDE THE LOOP
//	//	cout << num << "\t\t" << (num * num) << endl;
//	//-----------------------------------------------------------------------------//
//	//int maxValue = 10;
//	//int num = 1;
//	//for (; num <= maxValue;) {                     //UPDATE INSODE FOR LOOP
//	//	cout << num << "\t\t" << (num * num) << endl;
//	//	num++;
//	//}
//	//---------------------------------------------------------------------------//
//	for (; ;) {
//		cout << "LAIBA" << endl;          //INFINITE LOOP
//	}
//
//}

//SPEEDOMETER
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main() {
//	const int MIN_SPEED_kph = 60;                //ERROR DAY RAHA HAI----------PROGRAM PAY LOGIC TO TUM NEIN LAGA LI PR SMART LOGIC NAHI LAGA PA RAHI---BUT GOOD LUCK
//	const int MAX_SPEED_kph = 130;
//	const double CONVERSION_FACTOR = 0.6214;
//	cout << fixed << showpoint << setprecision(1);
//	cout << "KPH" << "\t\t\t\t\t" << "MPH" << endl;
//	for(int kph = MIN_SPEED_kph;kph<= MAX_SPEED_kph;kph += 10) {     
//		//idhr increment kiun k constant hai is liyay is ko pehlay initialize kr sktay       
//		double mph = kph * CONVERSION_FACTOR;
//		cout << kph << "\t\t\t\t\t" << mph << endl;
//	}
////	const int START_KPH = 60, // Starting speed 
////		 END_KPH = 130, // Ending speed 
////		 INCREMENT = 10; // Speed increment 
////	
////		 // Constant for the conversion factor 
////		 const double CONVERSION_FACTOR = 0.6214;
////	
////		 // Variables 
////		 int kph; // To hold speeds in kph 
////	 double mph; // To hold speeds in mph 
////	
////		 // Set the numeric output formatting. 
////		 cout << fixed << showpoint << setprecision(1);
////	
////		 // Display the table headings. 
////		 cout << "KPH\tMPH\n";
////	 cout << "---------------\n";
////	
////		 // Display the speeds. 
////		 for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
////		 {
////		 // Calculate mph 
////			 mph = kph * CONVERSION_FACTOR;
////		
////			 // Display the speeds in kph and mph. 
////			 cout << kph << "\t" << mph << endl;
////		
////			 }
////	 return 0;
////	
////
//}

//-------------CHECKPOINTS-----------------//
//#include<iostream>
//using namespace std;
//int main() {
//	//5.8a
//	 for (int count = 0; count < 6; count++)
//		cout << (count + count)<<endl;
//	 //5.8b
//	 for (int value = -5; value < 5; value++)
//		 cout << value<<endl;
//	 //5.8c
//	 int x;
//	 for (x = 5; x <= 14; x += 3)
//		 cout << x << endl;        //8, 11, 14
//	 cout << x << endl;     //condition 14 tk thi lekin yh 17 display kray ga
//	 //5.9
//	 for (int i = 1;i <= 10;i++) {
//		 cout << "I will be the best program INSHAALLAH." << endl;
//	 }
//	 //5.10
//	 for (int num = 1;num <= 50;num += 2) {
//		 cout << num << endl;
//	 }
//	 //5.11
//	 for (int i1 = 0;i1 <= 100;i1 += 5) {
//		 cout << i1 << endl;
//	 }
//}

//Accumulators-----matlab k total
//#include<iostream>
//using namespace std;
//int main() {
//	int days;
//	double total=0.0;           //always set accumulator to zero
//	cout << "Enter days you want to have sales figure:" << endl;
//	cin >> days;
//	for (int i = 0;i <= days;i++) {
//		double sales;
//		cout << "Enter sales of day" << i << ":" << endl;
//		cin >> sales;
//		total += sales;
//	}
//	cout << "Total sales of " << days << " is:" << total << endl;
//}


////Senitals
//#include<iostream>
//using namespace std;
//int main() {
//	int game = 1,
//		points,
//		total = 0;
//	cout << "Enter number of points your team has earned so far in the season, then enter -1 to terminate the loop" << endl;
//	cout << "Enter points for game" << game << endl;
//	cin >> points;
//	while (points >= (0)) {    //ajeeb bat hai 0 >= hai lekin 0 pay condition fulfil nahi ho rahi
//		total += points; 
//		game++;
//		cout << "Enter points for game" << game << endl;
//		cin >> points;
//	}
//	cout << "The points total are:" << total << endl;
//	}

//CHECKPOINTS
//5.12
//#include<iostream>
//using namespace std;
//int main() {
//	int total = 0;
//	int num;
//	for (int i = 0;i <= 7;i++) {
//		cout << "Enter num" << i << endl;
//		cin >> num;
//		total += i;
//	}
//	cout << "The total is" << total;
//}

//5.13 and 5.15
//#include<iostream>
//using namespace std;
//int main() {
//	int a{} /*array of a*/, x, y = 0;
//	for (x = 0; x < 10&&a>=-1; x++)
//	{
//		cout << "Enter a number: ";
//		cin >> a;
//		y += a;
//	}
//	cout << "The sum of those numbers is " << y << endl;
//}

//Lab tasks of series question

//for 1+3+5................+45
//#include<iostream>
//using namespace std;
//int main() {
//	int n1 = 1;
//	int n2 = 45;
//	int total = 0;
//	cout << "sequence of numbers:";
//	for (int i = n1; n1 <= n2; n1 += 2) {
//		cout << n1 << ",";
//		total += n1;
//	}
//	cout << "Sum of series is:" << total;
//}

//Write a program using while loop to find the sum of the following series.
//1 + 1 / 2 + 1 / 3 + …..1 / 45
//#include<iostream>
//using namespace std;
//int main() {
//	int i;
//	float sum = 0.0, n1, n2;
//	cout<<"\n Enter the value of number: ";
//	cin>>i;
//	cout << "sequence of numbers:";
//	for ( n2 = 1; n2<= i;n2++ ) {
//	n1=1/n2;
//				cout << n1 << ",";
//				sum += n1;
//	}
//				cout << "Sum of series is" << sum;
//	return 0;
//			}
	
//NESTED LOOPS
//USED IN DIGITAL CLOCKS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	cout << fixed << right;
//	cout.fill('0');     //waisay 0:00:00 ata lekin for 00:00:00.
//	for (int hr = 0;hr < 24;hr++) {
//		for (int min = 0;min < 60;min++) {
//			for (int sec = 0;sec < 60;sec++) {
//				cout << setw(2) << hr << ":";
//				cout << setw(2) << min << ":";
//				cout << setw(2) << sec << endl;
//			}
//		}
//	}
//}       //han kabhi kabhi yeh akhri horrible bracket na lagana bhi khatray say khali nahi hota

//LAB#08
//TASK 5 TO PRINT STERIC PATTERNS USING NESTED FOR LOOPS
// --------------------------------------------------//
// 1--to display numbers in some pattern *****\t*****\t*****\t*****\t*****
//#include<iostream>
//using namespace std;         //idhr semi colon na lagao to shadeed maslay kharray ho sktay hain
//int main() {
//	//count rows
//	for (int x = 1;x <= 5;x++) {
//		//count max cols
//		for (int j = 1;j <= 5;j++) {
//			cout << " * " << "\t";
//			
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

////2--to display numbers in some pattern 12345\t12345\t12345\t12345\t12345
//#include<iostream>
//using namespace std;         //idhr semi colon na lagao to shadeed maslay kharray ho sktay hain
//int main() {
//	//count rows
//	for (int x = 0;x <5;x++) {
//		//count max cols
//		for (int j = 0;j < 5;j++) {
//			cout <<j+1 << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

//3--to display numbers in some pattern 12345\t12345\t12345\t12345\t12345-----reverse of this
//#include<iostream>
//using namespace std;         //idhr semi colon na lagao to shadeed maslay kharray ho sktay hain
//int main() {
//	//count rows
//	for (int x = 0;x < 5;x++) {
//		//count max cols
//		for (int j = 5;j > 0;j--) {
//			cout << j  << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

//----------------------------------------//
// STEPS TO FOLLOW//
// 1. COUNT NO. OF ROWS AND MAKE LOOP
// 2.COUNT MAX COL AND WRITE LOOP
// ---------------//
//1. TO DISPLAY
// *
// **
// ***
// ------------//
// LOGIC:JITNI ROWS HAIN UTNAY COL HON ----ROW<=ROW-----1ST ROW MEIN 1 COL
//#include<iostream>
//using namespace std;         
//int main() {
//	//count rows
//	for (int x = 1;x <= 5;x++) {
//		//count max cols
//		for (int j = 1;j <= x;j++) {       
//			cout << " * " << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

//-----------------------------//
//2. TO DISPLAY
//1
//12
//123
//#include<iostream>
//using namespace std;
//int main() {
//	//count rows
//	for (int x = 1;x <= 5;x++) {
//		//count max cols
//		for (int j = 1;j <= x;j++) {
//			cout << j << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

////-------------------//
////3. TO DISPLAY
////321
////32
////1
//#include<iostream>
//using namespace std;
//int main() {
//	//count rows
//	for (int x = 1;x <= 5;x++) {
//		//count max cols
//		for (int j =5;j >=x;j--) {
//			cout << j << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

//-------------------//
//4. TO DISPLAY
//***
//**
//*
//#include<iostream>
//using namespace std;
//int main() {
//	//count rows
//	for (int x = 1;x <= 5;x++) {
//		//count max cols
//		for (int j = 5;j >= x;j--) {
//			cout << "*" << "\t";
//
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}

//---------------------//
//6. TO DISPLAY
//  *
// **
//***
//TO BE CONTINUED INSHAALLAH

//PROGRAMMING CHALLENGES
// 1. Sum of Numbers 
/*#include<iostream>
using namespace std;
int main() {
	int max_num;
	int min_num = 1;
	int total=0;
	cout << "Enter max_num upto which you want to calculate sum:" << endl;
	cin >> max_num;
	while (max_num < 0) {
		cout << "Enter positive num:" << endl;
		cin >> max_num;
	}
	for (int i=min_num;i <= max_num;i++) {
		total += i;
	}
	cout << total;
}*/ //COOL ALHAMDULILLAH MASHAALLAH

// 2. Characters for the ASCII Codes
/*#include<iostream>
using namespace std;
int main() {
	char ASCII;
	
		for (int i = 0;i <= 127;i++) {
			ASCII=i;
			cout <<ASCII<< " ";
			if (ASCII % 16 == 0) {
				cout << endl;
			}
		}
		cout << endl << endl;
		return 0;
} */  //Amm waisay kiya to aj bhi yeh dekh k hi hai lekin aj yeh horrible program samajh aa gay MASHAALLAH ALHAMDULILLAH

//3. Ocean Levels
//#include<iostream>
//using namespace std;
//int main() {
//	float r_per_y = 1.5;
//	int i = 0;
//	while (i <= 25) {
//		cout <<"Ocean level after "<<i<<" year will be :"<< i * r_per_y<<" mililiters"<<endl;
//		i++;
//	}
//}

// 4. Calories Burned 
//#include<iostream>
//using namespace std;
//int main() {
//	const float c_bur = 3.6;
//	int i = 0.0;
//	while (i <= 30) {
//		cout << "Calories burned after " << i << " min are: " << i * c_bur << endl;
//		i+=5;    //acha waisay agr ap ka answer points mein na aa raha ho to qasoor mathematicians ka hoga k answer asal wala points mein nahi hai
//	}
//}

//5. Membership Fees Increase 
//#include<iostream>
//using namespace std;
//int main() {
//	int c_c = 100;
//	float per = 0.04;
//	int i = 0;
//	while (i <= 6) {
//		cout << "Membership in next " << i << " year will be: $" <<c_c+(i*0.04*100) << endl;
//		i++;
//	}
//}
//

// 6. Distance Traveled
//#include<iostream>
//using namespace std;
//int main() {
//	float t;
//	float s;
//	cout << "Distance calculator:" << endl;
//	do {
//		cout << "Enter no. of hrs you have travelled:" << endl;
//		cin >> t;
//	} while (t < 0);
//	do {
//		cout << "Enter the speed you have travelled with:" << endl;
//		cin >> s;
//	} while (s < 0);
//	for (float i = 0;i<=t;i++) {
//		float d=0;
//		d+= s;
//		cout << "Distance you have travelled for "<<i<<" hr is:" << d*(i) << " m" << endl;
//	 }
//}

// 7. Pennies for Pay
//pehay din--->1 penny
//akhri din--->total penny
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	float penny = 1;
//	int d;
//	float total_penny = 0;
//	do {
//		cout << "Enter number of days you have worked:" << endl;
//		cin >> d;
//	} while (d < 0);
//	float i = 1;
//	while (i <= d) {
//		cout << "penny got on " << i << " day is:" << i * penny << endl;
//		  //days tk to thek bat hai
//		//ab total pennian btani hain
//		total_penny += (i*penny);
//		i++; //MASHAALLAH yeh increment accumulator say neechay latay hain
//	}
//	cout << total_penny<<endl;
//	float dollar = total_penny * 0.01;
//	cout << setprecision(2) << fixed;
//	cout << "At end, you have " << dollar << " dallars" << endl;
//}

//8. Math Tutor 
//#include<iostream>
//#include<iomanip>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main() 
//{
//	// Constants 
//	const int MIN_VALUE = 1; // Minimum die value 
//	const int MAX_VALUE = 100; // Maximum die value 
//	// Variables 
//	int n1; // To hold the value of die #1 
//	int n2; // To hold the value of die #2 
//	int choice;
//	// Get the system time. 
//	unsigned seed = time(0);
//	// Seed the random number generator. 
//	srand(seed);
//	cout << "Rolling the dice…\n";
//	n1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//	n2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//	cout << n1 << endl;
//	cout << n2 << endl;
//	const int ONE = 1;
//	const int TWO = 2;
//	const int THREE = 3;
//	const int FOUR = 4;
//	const int FIVE = 5;
//	do {
//		cout << "Enter what you want to do with numbers:" << endl;
//		cout << "1.Addition" << endl;
//		cout << "2.Subtraction" << endl;
//		cout << "3.Division" << endl;
//		cout << "4.Multiplication" << endl;
//		cout << "5. Quit" << endl;
//		cin >> choice;
//		if(choice==FIVE)
//			break;
//		if (choice == ONE) {
//			int s = n1 + n2;
//			cout << "sum:" << s << endl;
//		}
//		if (choice == TWO) {
//			int su = n1 - n2;
//			cout << "sub:" << su << endl;
//		}
//		if (choice == THREE) {
//			int m = n1 * n2;
//			cout << "mul:" << m << endl;
//		}
//		if (choice == FOUR) {
//			int d = n1 / n2;
//			cout << "div" << d << endl;
//		}		
//	} while (choice < ONE || choice>FOUR||choice!=FIVE);
//	return 0;
//}   //THIS IS COOL PRO DUDE AHAHA

//9. Hotel Occupancy
//#include<iostream>
//using namespace std;
//int main() {
//	//asking the user how many floors the hotel has
//	int f;
//	int r;
//	int o;
//	int total = 0;
//	int total_o = 0;
//	cout << "HOTEL LAE" << endl;
//	cout << "How many floors hotel has:" << endl;
//	cin >> f;
//	//iteration for each floor
//	
//	for (int i = 0;i < f;i++) {
//		if ((i + 1) == 3) {
//			cout << "lets skip floor"<<i+1 << "cz we have this no."<<endl;
//		}
//		else {
//			cout << "How many no. of rooms " << i + 1 << " floor has:" << endl;
//			cin >> r;                 //yahan pay foor 13 k liyay nahi lena
//			while (r < 10) {
//				cout << "floor " << i + 1 << " should have more than 10 rooms. Enter again:" << endl;
//				cin >> r;
//			}
//			total += r;
//			cout << "How many rooms are occcupied by floor" << i + 1 << " " << endl;
//			cin >> o;
//			while (o > r) {
//				cout << "Occupied rooms must be less than total rooms of floor " << i + 1 << endl;
//				cin >> o;
//			}
//			total_o += o;
//		}
//	}
//	float un_o = 0;
//	un_o = total-total_o;
//	float o_per = total_o / total;
//	cout << "Total no. of rooms hotel lae has:" << total << endl;
//	cout << "Number of rooms occupied are:" << total_o << endl;
//	cout << "Number of rooms left are:" << un_o << endl;
//	cout << "Percentage of occupied rooms is:" << o_per * 100 << "%" << endl;
//} //MASHAALLAH LAIBA

//10. Average Rainfall
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string months;
//	float r_per_m = 0;
//	float y;
//	float total_m = 0;
//	float total_r = 0;
//	float average = 0;
//	cout << "Enter number of years for which you want to know average rainfall : " << endl;
//	cin >> y;
//	while (y < 0) {
//		cout << "Enter positive year:" << endl;
//		cin >> y;
//	}
//	for (float i = 1;i <= y;i++) {
//		for (float m = 1;m <= 12;m++) {
//			do {
//				cout << "Enter rainfall(in inches) for the month " << m << "of year" << i << endl;
//				cin >> r_per_m;
//			} while (r_per_m < 0);
//				total_r += r_per_m;
//				total_m++;  //waisay yeh ajeeb hain
//				average = total_r / total_m;
//			
//		}
//	}
//	cout << "Total number of months:" << total_m << endl;
//	cout << "total rainfall(in inches):" << total_r << endl;
//	cout << "Average rainfal for " << y << " years is:" << average << endl;
//}	

//11. Population
// cout
//ask the user for the starting number of organisms, their average daily population increase(as a percentage),
//and the number of days they will multiply
//A loop should display the size of the population for each day.
//#include<iostream>
//using namespace std;
//int main() {
//	int start;
//	float a;
//	int d;
//	float size_per_d=0;
//	do {
//		cout << "starting number of organisms:" << endl;
//		cin >> start;
//	} while (start < 2);
//	do {
//		cout << "their average daily population increase(as a percentage):" << endl;
//		cin >> a;
//	} while (a < 0); //will have to convert
//	do {
//		cout << "the number of days they will multiply:" << endl;
//		cin >> d;
//	} while (d < 0);
//	for (int i = 0;i <= d;i++) {
//		//start mein agr 100 hain aur roz 2% increase hotay hain aur hamain 5 din ka display-->100,102,104,106,108..
//		cout << " the size of the population for day:" << i + 1 << " is:" << size_per_d << endl;
//		a *= .01;
//		size_per_d += start*a ; //formula mein problem hai
//	}
//}

//12.12. Celsius to Fahrenheit Table 
//#include<iostream>
//using namespace std;
//int main() {
//	float C_t=0;
//	for (float i = C_t;i <= 20;i++) {
//		cout << "Temp in Celcius" << "\t\t" << "Temp in Farenheit" << endl;
//		cout << "----------------" << "\t\t" << "-------------------" << endl;
//		float F_t = ((9 / 5) * i) + 32;
//		cout << i << "\t\t\t\t" << F_t << endl;
//	}
//}    MASHAALLAH 

//13. The Greatest and Least of These
//is mein series
//highest, lowest
//senital
//matlab condition lagao k jb tk user -99 enter nahi krta tb tk us say poochtay jao
//#include<iostream>
//using namespace std;
//int main() {
//	int i;
//	int total = 0;
//	int num=1;
//	int min, max;
//	cout << "Enter a series of numbers and I will tell you its sum, highest and lowest of it: " << endl;
//	cout << "num" << num << endl;
//	cin >> i;
//	min = max = i;
//	while (i != -99) {
//		total += i;
//		num++;
//		if (i < min) {
//			 min=i;
//		}
//		if (i > max) {
//			//i = max;  no
//			max = i;
//		}
//		cout << "num" << num << endl;
//		cin >> i;
//		
//	}
//	cout << "The points total are:" << total << endl;
//	cout << "Min" << min << endl;
//	cout << "Max" << max << endl;
//}

//14.Student Line Up 
//#include <iostream>
//#include <fstream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num_stu;
//	string name, first, last;
//	cout << "Enter number of students you want to aline b/w 0 and 8" << endl;
//	cin >> num_stu;   //agr 1 enter krtay hain to first aur last pay same hi ayay ga cool
//	while (num_stu < 0 || num_stu>8) {//||!(cin>>num_stu)) {
//		cout << "Error:Enter a num b/w 0 and 8:";
//		cin >> num_stu;       
//		//cin.clear();
//		//cin.ignore(123, 'n');  //yeh naya concept seekha hai
//	}
//	cout << "Entr name of stu 1:" << endl;
//	cin >> name; 
//	first = last = name;
//	if (name < first)
//		first = name;
//	if (name > last)
//		last = name;
//	for (int i = 1;i < num_stu;i++) {
//		cout << "Entr name of stu " << i + 1 << endl;
//		cin >> name;
//		if (name < first)
//			first = name;
//		if (name > last)
//			last = name;
//	}
//	cout << "First student in line:" << first << endl;
//	cout << "Last student in line:" << last << endl;
//	return 0;
//}

//20. Random Number Guessing Game
//21.to keep num of guesses--->KISI BHI NUMBER OF INPUTS KA RECORD RAKHNAY K LIYAY USE HOTA HAI
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
//	int n_g = 0; //to kep no. of guesses
//		// Get the system time. 
//	unsigned seed = time(0);
//	// Seed the random number generator. 
//	srand(seed);
//	cout << "Rolling the dice…\n";
//	n1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//	//cin
//	int ans;
//	cout << n1 << endl;    //is ko comment krna hai
//	cout << "Enter your answer:" << endl;
	//cin >> ans;
	//n_g++;
	//if (ans == n1) {
	//	cout << "Congratulations you have guessed correct answer in first try aha:)" << endl;
	//}
	//int max, min;
	//max = min = n1;
	////conditional
	//{
	//	//loop
	//	do {
	//		if (ans < min) {
	//			cout << "Too low:)" << endl;
	//			cout << "Try again:" << endl;
	//			cin >> ans;
	//			n_g++;
	//			if (ans == n1) {
	//				cout << "Congratulations you have guessed correct answer:)" << endl;
	//			}
	//		}
	//		else if (ans > max) {
	//			cout << "Too high, Better luck next time:)" << endl;
	//			cout << "Try again:" << endl;
	//			cin >> ans;
	//			n_g++;    //MASHAALLAH IDHR HUMAIN 3 BAR LAGANA THA
	//			if (ans == n1) {
	//				cout << "Congratulations you have guessed correct answer:)" << endl;
//				}
//			}
//			
//		} while (ans != n1);
//	}
//	cout << "no. of guesses:" << n_g <<endl;
//	return 0;
//}   //THIS IS COOL PRO DUDE AHAHA------>ALHAMDULILLAH MASHAALLAH YEH AESA PROGRAM HAI JIS MEIN TUM NEIN SARI LOGIC KHUD BNAI

//22.Square Display
//#include<iostream>
//using namespace std;         //idhr semi colon na lagao to shadeed maslay kharray ho sktay hain
//int main() {
//	//count rows
//	int n;
//	cout << "Enter no. of rows/col and I will make a square according to it:" << endl;
//	cin >> n;
//	for (int x = 1;x <= n;x++) {
//		//count max cols
//		for (int j = 1;j <= n;j++) {
//			cout << " * " << "\t";
//		}
//		cout << endl;     //yeh tumhein Malik shahzaib ki video say pata chala k aik row khatam honay k bad space lagani hoti
//	}
//	return 0;
//}
//

//19. Budget Analysis 
//#include<iostream>
//using namespace std;
//int main() {
//	int b;
//	int total_e=0;  //running total
//	int e = 0;
//	int num_of_expense = 0;
//	int bu_result;
//	cout << "Enter amount of money that you have spare for budget of month:" << endl;
//	cin >> b;
//	cout << "Enter number of expenses:" << endl;
//	cin >> num_of_expense;
//	for (int i = 1;i <= num_of_expense;i++) {
//		cout << "Enter amount of expense #" << i << ":" << endl;
//		cin >> e;
//		total_e += e;
//	}
//	bu_result = b - total_e;
//	if (total_e> b) {
//		cout << "Ap ka maheenay ka waisay kharcha " << total_e << " rupee hai." << endl;
//		cout << "Ap ka is maheenay ka amdani say ziada kharcha " << bu_result << " rupee hai. Sharam krain. Oho matlab tumhein itnay paisay kam krnay hon gay." << endl;
//	
//	}
//	else if (total_e < b) {
//		cout << "Ap ka maheenay ka waisay kharcha " << total_e << " rupee hai." << endl;
//		cout << "Ap ki is maheenay ki bachat " << bu_result << " rupee hai. You have done better cool." << endl;
//		
//	}
//	else if (total_e == b) {
//		cout << "Apka kharcha apk budget k mutabiq hai. Good hogaya g." << endl;
//	}
//}

//15. Payroll Report----------->nahi hua mujh say huh---------->us hilario ka pro copy mar k dekhun gi INSHAALLAH
//#include<iostream>
//using namespace std;
//int main() {
//	//var input
//	int emp_num=1;     //senital
//	float g_p;
//	float s_t_p;
//	float f_t_p;
//	float FICA_w_h;
//	//accumulator
//	float t_g = 0;
//	float t_s = 0;
//	float t_f = 0;
//	float F_w_h = 0;
//	float n_pay = 0;
//	//ask
//	
//	cout << "Enter employee #(0 to end): " << endl;
//		cin >> emp_num;
//		while (emp_num < 0) {
//			cout << "Enter employee num greater than 0:" << endl;
//			cin >> emp_num;
//			/*cin.clear();
//			cin.ignore(123, '\n');*/ //kam nahi krtan filhal
//		}
//	//main logic
//	do {
//		emp_num++;
//		cout << "Gross_pay:" << endl;
//		cin >> g_p;
//		while (g_p < 0) {
//			cout << "Enter g_p greater than 0:" << endl;
//			cin >> g_p;
//			/*cin.clear();
//			cin.ignore(123, '\n');*/
//		}
//		t_g += g_p;
//		cout << "State tax percentage:" << endl;
//		cin >> s_t_p;
//		while (s_t_p < 0 ||s_t_p>g_p) {
//			cout << "Enter s_t_p greater than 0 and less than g_p:" << endl;
//			cin >> s_t_p;
//			/*cin.clear();
//			cin.ignore(123, '\n');*/
//		}
//		//t_s +=((s_t_p/100)*g_p);  //agr percentage na hoti to khal +=g_p hota
//		t_s += s_t_p;
//		cout << "Federal tax percentage:" << endl;
//		cin >> f_t_p;
//		while (f_t_p < 0  || f_t_p>g_p) {
//			cout << "Enter f_t_p greater than 0 and less than g_p:" << endl;
//			cin >> f_t_p;
//			/*cin.clear();
//			cin.ignore(123, '\n');*/
//		}
//		//t_f += ((f_t_p/100)*g_p);
//		t_f += f_t_p;
//		cout << "FICA with holding:" << endl;
//		cin >> FICA_w_h;
//		while (FICA_w_h < 0 || FICA_w_h>g_p) {
//			cout << "Enter FICA_w_h greater than 0 and less than g_p:" << endl;
//			cin >> FICA_w_h;
//			/*cin.clear();
//			cin.ignore(123, '\n');*/
//		}
//		F_w_h += FICA_w_h;
//		//sum
//		n_pay = t_s+t_f+ F_w_h;
//		//condition
//	//	while (n_pay > g_p) {
//	//		t_f -= ((s_t_p / 100) + g_p);
//	//		t_s -= ((f_t_p / 100) + g_p);
//	//		F_w_h -= FICA_w_h;
//	//		cout << "Total sum of state tax, federal tax, and FICA with holding is greater than gross pay. Re-enter the info again:"<<endl;
//	//		cout << "State tax percentage:" << endl;
//	//		cin >> s_t_p;
//	//		while (s_t_p < 0 || s_t_p>g_p) {
//	//			cout << "Enter s_t_p greater than 0 and less than g_p:" << endl;
//	//			cin >> s_t_p;
//	//			/*cin.clear();
//	//			cin.ignore(123, '\n');*/
//	//		}
//	//		t_s += s_t_p ;  //agr percentage na hoti to khal +=g_p hota
//	//		cout << "Federal tax percentage:" << endl;
//	//		cin >> f_t_p;
//	//		while (f_t_p < 0 || f_t_p>g_p) {
//	//			cout << "Enter f_t_p greater than 0 and less than g_p:" << endl;
//	//			cin >> f_t_p;
//	//			/*cin.clear();
//	//			cin.ignore(123, '\n');*/
//	//		}
//	//		t_f += f_t_p;
//	//		cout << "FICA with holding:" << endl;
//	//		cin >> FICA_w_h;
//	//		while (FICA_w_h < 0 || FICA_w_h>g_p) {
//	//			cout << "Enter FICA_w_h greater than 0 and less than g_p:" << endl;
//	//			cin >> FICA_w_h;
//	//			/*cin.clear();
//	//			cin.ignore(123, '\n');*/
//	//		}
//	//		F_w_h += FICA_w_h;
//	//		//sum
//	//		n_pay = t_s+t_f + F_w_h;
//	//		
//	//	}
//	} while (emp_num != 0);
//	//display
//		cout << "Total gross_pay= $" << t_g << endl;
//		cout << "Total state tax= $" << t_s << endl;
//		cout << "Total Federal tax= $" << t_f << endl;
//		cout << "Total FICA with holding tax=$" << F_w_h << endl;
//		cout << "Net pay= $" << n_pay << endl;
//}         nahi ho raha hilario ka code utha k run krun gi INSHAALLAH


