/* FILE HANDLING:-is aprocess of reading and writing a data to files c++ file handling allow us to store output of a proramm in file and also 
read file data into console.
*/
//File is information stored on some specific location in secondary storage device is reffered by a name is called a file name.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream onfile;
	onfile.open("C:\\Users\\hp\\Documents\\Sunny.txt");
	cout<<"file has been created";
	onfile.close();
	return 0;
	
}
