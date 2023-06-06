//I MAY SAY SEARCHING IS MY FAVOURITE KAM//
//IT IS GOING TO BE DONE BY A PROFESSIONAL STALKER//
//I HOPE I WILL ENJOY DOING SEARCHING INSHAALLAH//
//******************************************//
//SEARCH--------?LINEAR AND BINARY
//SORTING---------?>BUBBLE AND SELECTION
//********************************************//

//*********LINEAR SEARCHING******************//
//APNAY DIMAGH MEIN INSTA PAY STALK MARNAY K LIYAY KISI KA NAME ZEHN MEIN RAKHO//
//#include<iostream>
//using namespace std;
//int LinearsearchList(int arr[], int, int);
//int main() {
//	const int SIZE = 5;
//	int ATIF[SIZE] = { 3,7,5,3,2 }; //ATIF ALI, ATIF AWAN, ATIF MALIK, ATIF KHAN, ATIF AHMED
//	int val;
//	//val = searchList(ATIF, SIZE, 4);
//	val = LinearsearchList(ATIF, SIZE, 7);
//	if (val == -1)
//		cout << "YOU HAVE SUCCESSFULLY WASTED YOUR TIME." << endl;
//	else
//		cout << "CONGRATULATIONS YOU HAVE FOUND ATIF AWAN ON INDEX" << val + 1 << endl;
//
//}
//int LinearsearchList(int arr[], int SIZE, int val) {
//	int i = 0; //index
//	int position = -1; //yeh tb -1 ho ga jb ap ko ap ka matlooba shaks nahi milta
//	bool found = false;
//	while (!found && i < SIZE) {
//		if (arr[i] == val) {
//			found = true;
//			position = i;
//		}
//		i++; //nahi milta to aglay pay chalo
//	}
//	return position; //kuch bhi nahi to -1 to hai hi na
//}

//*******************BINARY SEARCH*******************//
//#include<iostream>
//using namespace std;
//int binarysearchList(int arr[], int, int);
//int main() {
//	const int SIZE = 5;
//	//int ATIF[SIZE] = { 3,8,5,9,2 }; 
//	//where i am getting true vlue are 3,5,9
//	//I could not get correct results on entering 8 and 2 actually on index 2 and index 5
//	//GOT THE POINT ALHAMDULILLAH K BINARY LIST KO HAMESHA SORTED HONA 
////UNSORTED SO WON'T WORK
////ATIF ALI, ATIF AWAN, ATIF MALIK, ATIF KHAN, ATIF AHMED
//	int ATIF[SIZE] = { 2,3,5,8,9 };
//	int val;
//	
//	val = binarysearchList(ATIF, SIZE, 7);
//	if (val == -1)
//		cout << "YOU HAVE SUCCESSFULLY WASTED YOUR TIME." << endl;
//	else
//		cout << "CONGRATULATIONS YOU HAVE FOUND ATIF AWAN ON INDEX " << val + 1 << endl;
//	return 0;
//}
//int binarysearchList(int arr[], int SIZE, int val) {
//	int first = 0, //index
//	 last = SIZE - 1,
//	 middle,
//	 position = -1; //yeh tb -1 ho ga jb ap ko ap ka matlooba shaks nahi milta
//	bool found = false;
//	while (!found && first <= last) {
//		middle = (first + last) / 2;
//		if (arr[middle] == val) {
//			found = true;
//			position = middle;
//		}
//		else if (arr[middle] > val) {    //value is in pichla half
//			last = middle - 1;
//		}
//		else {
//			first = middle + 1;     //value is in agla half
//		}
//		
//	}
//	return position; //kuch bhi nahi to -1 to hai hi na
//}

////FOCUS ON PROBLEM SOLVING
////kuch na kuch tum nein program likha hai khud lekin kahin na kahin logic mein prolem hai
////.....ghalban main so let's see
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//const int SIZE = 9;   //SIZE=NUM_PRO
//const int MIN_PRONUM = 914;
//const int MAX_PRONUM = 922;
//int getPRONUM() {          //yeh bat maloom hotay huay bhi k get mein kuch nahi hota blk aik local variable declare krtay, usay user say get krtay aur return kra detay hian
//	int pronum;
//	cout << "Enter the number of product you want details of which to be displayed b/w"<<MIN_PRONUM<<"and"<<MAX_PRONUM << endl;
//	cin >> pronum;
//	//jb k tum nein yahan pay loop laganay ki koshish ki thi
//	while (pronum<MIN_PRONUM || pronum>MAX_PRONUM) {
//		cout << "Enter number in the range of " << MIN_PRONUM << " through " << MAX_PRONUM;
//		cin >> pronum; 
//	}
//	return pronum;
//}
//int binarysearch(const int arr[], int SIZE, int val) {
//	//int MIN_PRONUM = 0,            //unhon nein min 914 
//	 //MAX_PRONUM = SIZE - 1,        //max 922 and both of them ko con global bnaya hai
//	//yahan pay kia kiya k na jesay first aur last say binary search krtay ho na waisay hi continue rakho
//	int first = 0,
//		last = SIZE - 1,
//		middle,
//		position = -1;
//	bool found = false;
//	while (!found && MIN_PRONUM <= MAX_PRONUM) {
//	middle = (first + last) / 2;
//	//jb wo keh rahay k middle ko btao to sahi wo hai kia cheez
//
//	if (arr[middle] == val) {
//		found = true;
//		position = middle;
//	}
//	else if (arr[middle] > val)
//		last = middle - 1;
//	else
//		first = middle + 1;
//}
//return position;
//}
//void displayPro(const string tit[],const string des[],const double pri[], int index) {
//	cout << "The " << tit[index] << " named " << des[index] << " of price: $" << pri[index] << " on Index " << index << endl;
//}
//int main() {
//	//const int SIZE = 9;          //tum nein yahan 2 bnay like SIZE hai jis ko wo NUM_PRO bol rahay and is ko global variable bnaya hai
//	//INITIALIZE GIVEN 4 ARRAYS 
//	int id[SIZE] = { 914,915,916,917,918,919,920,921,922 };         //yahan pay yeh maloom hua k unhon nein to id array kahi thi blk arrays yani sb arrays ka unhon nein bola tha lekin tumhein statement hi samajh mein nahi ai
//
//	string title[SIZE] = { "Six Steps to Leadership",
//                           "Six Steps to Leadership",
//                           "The Road to Excellence",
//                           "Seven Lessons of Quality",
//                           "Seven Lessons of Quality",
//                           "Seven Lessons of Quality",
//                           "Teams Are Made, Not Born",
//                           "Leadership for the Future",
//                           "Leadership for the Future"
//                           };
//
//		string description[SIZE] ={ "Book", "Audio CD", "DVD","Book", "Audio CD", "DVD", "Book", "Book", "Audio CD" };
//
//		double price[SIZE] = { 12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95 };
//    //INITIALIZE VARIABLES
//	int PRO_NUM;
//
//	//PRO_NUM = getPRONUM(productnum,PRO_NUM,SIZE);     //YAHAN NAHI LIKHNA
//
//	int index;     //to hold search results yani index=val
//
//	//id = binarysearch(productnum, SIZE, 914);        //yahan nahi likhna
//	
//	char again;  
//
//	//ab atay hain do ki taraf to tum nein adatan aik cheez dekhi yani do dekha aur laga diya yeh achi bat nahi albata you tried so I appreciate you INSHAALLAH you will practice and will pave your way to be 
//	//..good programmer
//
//	do {
//		PRO_NUM = getPRONUM();  //aik yahan pay () na honay ki waja say chal hi nahi raha tha
//		index = binarysearch(id, SIZE, PRO_NUM);  //yeh calling sahi call ki lekin jo tum nein kiya us say to backend pay tum laga rahi thi tukay lekin hum nein to user say value get krni hai na
//		//ab yahan pay index==-1 lagana hai
//		if (index == -1) {
//			cout << "Enter valid product number from the list shown." << endl;
//		}
//		else
//			displayPro(title, description, price, index);   //wo sb jo tum us function mein day rahi ho
//		cout << "Would you like to look up another product? (y/n) ";
//	   cin >> again;
//	} while (again == 'y' || again == 'Y');
//		 return 0;
//}
//
//	//yeh jo tum nein itna lamba chorra kam kia unhon nein 3 arrays bna di kiun k parrallel subscripts kam krtay hain na you know this so lets make arrays blk yeh to question mein hi nahi warna arrays pay itna time laganay ka faida
//	/*if (id == -1) {
//		cout << "Enter valid product number from the list shown." << endl;
//	}
//	else {
//		do {
//			if (id == 914) {
//				title = "Six Steps to Leadership";
//				description = "Book";
//				price = 12.95;
//			}
//			else if (id == 915) {
//				title = "Six Steps to Leadership";
//				description = "Audio CD";
//				price = 14.95;
//			}
//			.....................
//			else if (id == 922) {
//				title = "Leadership for the Future ";
//				description = "Audio CD";
//				price = 16.95;
//			}
//		} while (id != -1);
//		displayPro(title, description, price);
//	}*/

//jo bhi bat hai krtay huay maza aya ALHAMDULILLAH MASHAALLAH
	


//**********SOARTION OF ARRAYS***********************//
//DEKHO JB UPER TUMHEIN NAHI PATA THA K BINARY ARRAY SOARTED HONI CHAHIYAY LAZMI TO TUMHARAY UNSOARTED ARRAY
//...BANANAY PAY TUMHARAY RESULTS KHARAB AA RAHAY THAY
//...YANI TUMHEIN ATIF AWAN MIL TO SKTAY THAY LEKIN KAM ILMI KI WAJA SAY LIKE CSW KI BAJAY CEO 
//...SEARCH KRNAY SAY UNCLE THORRI MILNAY THAY
//TO SOARTION TUMHARI ASAANI K LIYAY BNI HAI//
//**************************************************//
//SOARTING K LIYAY MEIN UPER WALI ARRAY UTHAON GI JIS KO BINARY MEIN MUJHAY KHUD SET KRNA PARRA THA BHAI JB SOARTING AVAILABLE HAI TO KIUN NA US SAY FAIDA UTHAYA JAY
//BISMILLAH

//BUBBLE SORT
//ASCENDING OR DESCENDING ORDER--->PEHLA DOSRAY K SAATH AGR PEHLA BARRA HAI TO SWAP KR DO IN CASE OF ASCENDING, PHIR DOSRA TEESRAY K SAATH COMPARE KRO UPTIL SIZE-1 KIUN AGR SIZE
//..HOTA TO WO ARRAY SAY BAHIR K ELEMENTS K SAATH COMPARE KRNA SHURU KR DETA
//#include<iostream>
//using namespace std;
//void bsortarray(int[], int);
//void showarray(const int[], int);
//int main() {
//	const int SIZE = 5;
//	int ATIF[SIZE] = { 3,8,5,9,2 };
//	cout << "Unsoarted values of array are:" << endl;
//	showarray(ATIF, SIZE);
//	bsortarray(ATIF, SIZE);
//	cout << "Soarted values of array are:" << endl;
//	showarray(ATIF, SIZE);
//	return 0;
//}
//void bsortarray(int arr[], int SIZE) {
//	int temp;
//	bool swap;
//	do {
//		swap = false;
//		for (int i = 0;i < SIZE - 1;i++) {
//			if (arr[i] > arr[i + 1]) {
//                 temp= arr[i];
//				 arr[i] = arr[i + 1];
//				 arr[i + 1] = temp;
//				 swap = true;
//			}
//		}
//	} while ((swap));
//}
//void showarray(const int arr[], int SIZE) {
//	for (int i = 0;i < SIZE;i++) {
//		cout << arr[i] << " ";
//	}
//}
////AYAY HAY MASHAALLAH ho gai swapping by bubble soarting
//********************_**********************************//


//************************************************************//
//*************SELECTION SOARTING*****************************//
//***********WORKING***************//
//The smallest value in the array is located and moved to element 0. Then the next smallest value is located and moved to element 1.
//.....This process continues until all of the elements have been placed in their proper order.
//#include<iostream>
//using namespace std;
//void ssortarray(int[], int);
//void showarray(const int[], int);
//int main() {
//	const int SIZE = 5;
//	int ATIF[SIZE] = { 3,8,5,9,2 };
//	cout << "Unsoarted values of array are:" << endl;
//	showarray(ATIF, SIZE);
//	ssortarray(ATIF, SIZE);
//	cout << "Soarted values of array are:" << endl;
//	showarray(ATIF, SIZE);
//	return 0;
//}
//void ssortarray(int arr[], int SIZE) {
//	int i;
//	int MIN_IND;
//	int min_val;
//	
//		
//		for ( i = 0;i < SIZE - 1;i++) {     //SUPPOSE i=startscan
//			 MIN_IND=i;
//			min_val = arr[i];
//			for (int index = i + 1;index < SIZE;index++) {
//				if (arr[index] < min_val)
//					 {
//					 min_val = arr[index];
//					 MIN_IND = index;
//					 }
//			}
//			arr[MIN_IND] = arr[i];
//			 arr[i] = min_val;
//		}
//
//}
//void showarray(const int arr[], int SIZE) {
//	for (int i = 0;i < SIZE;i++) {
//		cout << arr[i] << " ";
//	}
//}            //logic samajh aa gai pr filhal syntax nahi samajh ai

//Here is the selection sort algorithm in pseudocode: 
//For startScan is set to each subscript in array from 0 through the
//next - to - last subscript
//Set index variable to startScan.
//Set minIndex variable to startScan.
//Set minValue variable to array[startScan].
//For index is set to each subscript in array from(startScan + 1)
//through the last subscript
//If array[index] is less than minValue
//Set minValue to array[index].
//Set minIndex to index.
//End If.
//End For.
//Set array[minIndex] to array[startScan].
//Set array[startScan] to minValue.
//End For