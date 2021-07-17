/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: matij
 *
 * Created on July 12, 2021, 3:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) {
    // variable declaration
    char ch;
    string in;
    string out;
    // input and output files
    cout<<"Enter a file name for input: ";
    cin>>in;
    cout<<endl;
    cout<<"Enter a file for output: ";
    cin>>out;
    fstream fin, fout;
    fin.open(in, ios::in);
    fout.open(out, ios::out);
    //end of file
    while(!fin.eof())
    {
        fin.get(ch);
        fout.put(toupper(ch));
        fin.get(ch);
        while(ch !=  '.' )
        {
            //convert the letters to lowercase
            fout.put(tolower(ch));
            fin.get(ch);
        }
        fin.get(ch);
        
        fout<<endl;
    }
    //close file
    fin.close();
    fout.close();
    system("pause");
    return 0;
}//end