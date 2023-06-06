//1.OPEN THE FILE--->WILL CREATE CONNECTION B/W PROGRAM AND FILE
//2.PROCESS THE FILE---->EITHER TO WRITE DATE**-->MAATLAB JO PROGRAM K OUTPUT MEIN LIKHO WO FILE MEIN BHI LIKHA
//OR TO READ DATE**-->MATLAB K JO FILE MEIN PEHLAY DATA STORE KRAYA HAI NA K US FOLLOWING KI POSTS STALK MARNI HAIN BUS ..
//...US DATA KO UTHA LO AUR DOBARA STALK START KR DO
//CLOSE THE FILE--->TO DISCONNECT FILE AND PROGRAM
//*******************************//
//TOOLS//
//*******************//
//NOTEPAD-->FOR TEXT FILES//
// //****************//
//1.FSTREAM
//2.IFSTREAM------>INPUT---READ
//3.OFSTREAM---------->OUTPUT------WRITE
//IN KI OPENING AUR CLOSING KO BHI TEST KIYA JATA HAI
//****************************************************//
//    ***************************************      //
//           *****************           //
//               *********          // 

//TO WRITE DATA->3 PROGRAMS

// This program writes data to a file. 
//#include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// ofstream outputFile;
// outputFile.open("C:/Users/USER/OneDrive/Desktop/NOTEPAD/Filesch5.txt"); //idhr hum nein waqai aik file ka path specify kr diya hai
// cout << "Now writing data to the file.\n";
// // Write four names to the file. 
// outputFile << "Khadeeja\n";
// outputFile << "Eman\n";
// outputFile << "Habiba\n";
// outputFile << "Kaif\n";
// outputFile << "Aliha\n";
// //han to krtay yun hain keh file ko ctrl+o kr k yahin khol letay hai abhi us ko close krnay say pehlay cool
// // //data enter kiya aur run kiya akhir kar jugarron k bad ho hi gaya Alhamdulillah
// // Close the file 
// outputFile.close();
//  cout << "Done.\n";
// return 0;
// }

//-----TO WRITE USER INPUT TO FILE---//
//#include <iostream> 
// #include <fstream>
// using namespace std;
// int main()
// {
// ofstream outputFile;
// int num1, num2, num3;
// // Open an output file. 
// outputFile.open("Numbers.txt");      //aesay kro to file khud bakhod create ho jati hai
// // Get three numbers from the user. 
// cout << "Enter a number: " << endl;;
// cin >> num1;
// cout << "Enter another number: "<<endl;
//cin >> num2;
// cout << "One more time. Enter a number: "<<endl;
// cin >> num3;
//// Write the numbers to the file. 
//	 outputFile << num1 << endl;
//	 outputFile << num2 << endl;
//	 outputFile << num3 << endl;
//	 cout << "The numbers were saved to a file.\n";
//	 // Close the file 
//	 outputFile.close();
//	 cout << "Done.\n";
//	 return 0;
//	 }

//TO WRITE DATE
//#include <iostream> 
//#include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
// ofstream outputFile;
// string name1, name2, name3;
// // Open an output file. 
// outputFile.open("Friends.txt");  //yeh file tb khud bakhud create hogi jb run krnay say pehlay save kro
//// Get the names of three friends. 
//	 cout << "Enter the names of three friends.\n";
//	 cout << "Friend #1: ";
//	 cin >> name1;
//	 cout << "Friend #2: ";
//	 cin >> name2;
//	 cout << "Friend #3: ";
//	 cin >> name3;
//	 // Write the names to the file. 
//	 outputFile << name1 << endl;
//	 outputFile << name2 << endl;
//	 outputFile << name3 << endl;
//	 cout << "The names were saved to a file.\n";
//	 // Close the file 
//	 outputFile.close();
//	return 0;
//	 }


//TO READ DATE FROM FILES
// This program reads data from a file. 
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
 int main()
 {
 ifstream inputFile;
 string name;
 inputFile.open("Friends.txt");
 cout << "Reading data from the file.\n";
 inputFile >> name; // Read name 1 from the file 
 cout << name << endl; // Display name 1 
 inputFile >> name; // Read name 2 from the file 
 cout << name << endl; // Display name 2 
 inputFile >> name; // Read name 3 from the file 
 cout << name << endl; // Display name 3 
 inputFile.close(); // Close the file 
 return 0;    //GOOD HOGAYA 
 }

//Aur bhi kuch cheeezain hai pr filhal mera maqsad yeh pata lagana tha k read and write hoti kesay hain
//ALHAMDULILLAH MASHAALLAH

//14.Student Line Up 
//is mein alphabetically names ko number k according read krana hai logic cheat kr k samajhni parray gi
//#include <iostream>
// #include <fstream>
//#include<string>
// using namespace std;
// int main()
// {
// 
//  int num_stu;
//  string name, first, last;
//  cout << "Enter number of students you want to aline b/w 0 and 8" << endl;
//  cin >> num_stu; 
//  while (num_stu < 0 || num_stu>8){//||!(cin>>num_stu)) {
//	  cout << "Error:Enter a num b/w 0 and 8:";
//	  cin >> num_stu;
//	  //cin.clear();
//	  //cin.ignore(123, 'n');  //yeh naya concept seekha hai
//  }
//  cout << "Entr name of stu 1:"<< endl;
//  cin >> name;
//  first = last = name;
//  if (name < first)
//	  first = name;
//  if (name > last)
//	  last = name;
//  for (int i = 1;i <= num_stu;i++) {
//	  cout << "Entr name of stu " << i+1 << endl;
//	  cin >> name;
	//  	  if (name < first)
	//	  first = name;
	//  if (name > last)
	//	  last = name;
 // }
 //
 // cout << "First student in line:" << first << endl;
 // cout << "Last student in line:" << last << endl;
 //return 0;
 //}


