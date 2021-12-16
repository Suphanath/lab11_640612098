#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int num = 1;
	do{
		string grade;
		cout << "Student [" << num << "]: ";
		cin >> grade;
		if(grade == "A"){ 
			count[0] += 1;
			num++; 
		}else if(grade == "B"){ 
			count[1] += 1;
			num++; 
		}else if(grade == "C"){ 
			count[2] += 1;
			num++; 
		}else if(grade == "D"){ 
			count[3] += 1;
			num++; 
		}else if(grade == "F"){
			count[4] += 1;
			num++; 
		}else if(grade == "0"){
			num--;
			break;
		}else{ 
		cout << "Wrong input. Please input again.\n";
		}
	}while(true);
	
	
	cout << "In total " << num << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
