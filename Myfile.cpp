#include <iostream>
#include <fstream>

using namespace std;

int main (){
//create and open my text file
ofstream Myfile;

Myfile.open("example.text");

if(Myfile.is_open()){
    Myfile << " Hello My file.! " << endl;

    //close the file
    Myfile.close();
}

else
    cout << "ERROR...!!" << endl;


return 0;



}