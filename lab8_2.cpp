#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Grade Function
char findGrade(float point){
    char Grade;
    if(point>90){
        Grade = 'A';
    }else if(point<=90&&point>75){
        Grade = 'B';
    }else if(point<=75&&point>60){
        Grade = 'C';
    }else if(point<=60&&point>45){
        Grade = 'D';
    }else{
        Grade = 'F';
    }
    return Grade;
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into a box (Array)
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
        getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}