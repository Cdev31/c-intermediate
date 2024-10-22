#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

int main (){
    ifstream archiveHtml;
    string archiveName = "./archives/index.html";
    string line;
    regex pattern("(<p>.*</p>)\b");
    smatch coincidencia;

    archiveHtml.open( archiveName );

    if( archiveHtml.is_open() ){

        while( getline( archiveHtml, line ) ){
            if( regex_search( line, coincidencia, pattern ) ){
               cout << coincidencia[0] << endl;
               break;
            }
        }
        archiveHtml.close();
    }else {
        cout << "achive not found\n";
    }

}