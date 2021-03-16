#include <iostream>

using namespace std;

class GradeSystem{
	private:
		int studentAtt;
		int studentQuiz;
		int studentAssig;
		int studentMid;
		int studentFinal;
		int studentTotal;
		string studentLetter;
		
	public:	
		void gradeSystemTotal(int att, int quiz, int assig, int mid, int final);
		void gradeSystemGrading();
		void gradeSystemDisplay(int x);
		
};

void GradeSystem::gradeSystemTotal(int att, int quiz, int assig, int mid, int final){
	studentAtt 		= (att*10)/100;
	studentQuiz		= (quiz*10)/100;
	studentAssig	= (assig*20)/100;
	studentMid		= (mid*30)/100;
	studentFinal	= (final*30)/100;
}


void GradeSystem::gradeSystemGrading(){
	studentTotal = studentAtt + studentQuiz + studentAssig + studentMid + studentFinal;
	if (studentTotal >= 91 && studentTotal <=100){
		studentLetter = "A";
	}
	else if (studentTotal >= 85 && studentTotal <=90){
		studentLetter = "A-";
	}
	else if (studentTotal>= 82 && studentTotal <=84){
		studentLetter = "B+";
	}
	else if (studentTotal>= 78 && studentTotal <=81){
		studentLetter = "B";
	}
	else if (studentTotal>= 75 && studentTotal <=77){
		studentLetter = "B-";
	}
	else if (studentTotal>= 70 && studentTotal <=74){
		studentLetter = "C+";
	}
	else if (studentTotal>= 67 && studentTotal <=69){
		studentLetter = "C";
	}
	else if (studentTotal>= 60 && studentTotal <=66){
		studentLetter = "C-";
	}
	else if (studentTotal>= 40 && studentTotal <=59){
		studentLetter = "D";
	}
	else if (studentTotal>= 0 && studentTotal <=39){
		studentLetter = "F";
}
}
void GradeSystem::gradeSystemDisplay(int x){
	cout << x << ".		" << studentTotal << "(" << studentLetter << ")" << endl;
}

int main()
{
	int x;
	int att;
	int quiz;
	int assig;
	int mid;
	int final;
	cout << "    Grading System v1.0    " << endl;
	cout << "===========================" << endl;				
	cout << "Enter number of Students : "; 
	cin >> x;
	GradeSystem student[x+1];

	for(int i=0; i<x; i++) {
		cout << "===========================" << endl;	
		cout << "Enter Grade For Student " << i+1 << endl;
		cout << "===========================" << endl;	
		cout << "Attendace	: "; 
		cin >> att;
		cout << "Quiz		: "; 
		cin >> quiz;
		cout << "Assigment	: "; 
		cin >> assig;
		cout << "Mid		: "; 
		cin >> mid;
		cout << "Final		: "; 
		cin >> final;
		student[i].gradeSystemTotal(att, quiz, assig, mid, final);	
		student[i].gradeSystemGrading();
	}
	

	
	cout << "===========================" << endl;	
	cout << "       Student Grade       " << endl;
	cout << "===========================" << endl;		
	for(int j=0; j<x; j++){
		student[j].gradeSystemDisplay(j+1);
	}
	
	
	return 0;
}
