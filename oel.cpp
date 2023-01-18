#include<iostream>
#include<direct.h>
#include<fstream>
#include "Library.cpp"

using namespace std;

int main() 
{
    if ( mkdir("Adeel")== -1) {
        cout<<"Enter  your Full name :";
        string name;
         try
        {
            cin>>name;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        
        cout<<"Fill your Enrollment Number: ";
        string enrollment;
                try
        {
            cin>>enrollment;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        ifstream data_file;
        data_file.open("Adeel \\"+enrollment+".txt");
        if(data_file){
        cout<<"Successfully Exist";

        }
        else{
        ofstream MyFile("Adeel\\newFile.txt");
        MyFile << name+"\n"+enrollment;
        MyFile.close();
        cout<<" File Successfully created";
        string line;
    ifstream ini_file{
        "Adeel\\newFile.txt"
    }; 
    ofstream out_file{ "Adeel\\"+enrollment+".txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        
    }
    else {
        printf("Reading  is failied try another way ");
    }
    ini_file.close();
    out_file.close();
    ofstream ofs;
    ofs.open("Adeel\\newFile.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    cout<<"\nEnter Full Amount:";
    double amount;
    cin>>amount;
    cout<<"Total Tax on your Current account Amount is :   "<<Calculate(amount);
    }
    }
    else {
        cout<<"Enter Full Name:";
        string name;
         try
        {
            cin>>name;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        
        cout<<"Enter Enrollment Number enrollment: ";
        string enrollment;
                try
        {
            cin>>enrollment;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        ifstream datafile;
        datafile.open("Adeel\\"+enrollment+".txt");
        if(datafile){
        cout<<"Successfully file exist";
        }
        else{
        ofstream MyFile("Adeel\\newFile.txt");
        MyFile << name+"\n"+enrollment;
        MyFile.close();
        cout<<"File Successfully created done";
        string line;
    ifstream ini_file{
        "Adeel\\newFile.txt"
    }; 
    ofstream out_file{ "\\"+enrollment+".txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout << "Finished newFile \n";
    }
    else {
        printf("Read Failed");
    }
    ini_file.close();
    out_file.close();
    ofstream ofs;
    ofs.open("Adeel\\newFile.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    }
    cout<<"Enter full Amount:";
    double amount;
    cin>>amount;
    cout<<" Total Tax on the Amount is "<<Calculate(amount);
}
}