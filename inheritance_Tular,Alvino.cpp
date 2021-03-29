#include <iostream>

using namespace std;

class person {
	protected :
		string name;
		char gender;
	public :
		Person(){
		};
		void setname (string nm){
			name = nm;
		}
		void setGender(char setGender){
			gender = setGender;
		}
		string getName(){
			return name;
		}
		char getGender(){
			return gender;
		}
};

class teacher{
	private :
		int nik;
		string faculty;
	public :
		void setNik(int setNik){
			nik = setNik;
		}
		void setFaculty(string setFac){
			faculty = setFac;
		}
		int getNik(){
			return nik;
		}
		void setData(){
			
		}
		void displayData(){
			
		}
};

class student{
	private :
		int nim;
		string registration_number;
		string prodi;
	public :
		void setNim(int setNim){
			nim = setNim;
		}
		void setRegistrationNumber(string setRegNum){
			registration_number = setRegNum;
		}
		void setProdi(string setProdi){
			prodi = setProdi;
		}
		int getNim(){
			return nim;
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi(){
			return prodi;
		}
};

int main(){
	return 0;
}
