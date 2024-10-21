#include <iostream>

using namespace std;

struct Page{
    string url;
    Page* next;
    Page* previus;

    Page( string _url ): url( _url ), next( nullptr ), previus( nullptr){}; 
};


class HistoryNavigation{

    private:
       Page* currentPage;

    public: 
       HistoryNavigation( ): currentPage( nullptr ){};

    void viewPage( string url ){
        Page* newPage = new Page(url);
        
        if( currentPage != nullptr ){
            currentPage->next = newPage;
            newPage->previus = currentPage;
        }
        currentPage = newPage;
        cout << "Estas en: " << newPage->url << endl;
    }

    void lastPage(){
        if( currentPage->previus != nullptr && currentPage != nullptr ){
            cout << "Ahora estas en" << currentPage->previus->url << "\n";
        }
    }

    void showCurrentPage(){}

    void enlisAllPages(){}   
};

int main(){

    HistoryNavigation start;

    start.viewPage("www.google.com");
    start.viewPage("www.youtube.com");
    start.viewPage("www.WhatsApp.com");

    //retroceder

    start.lastPage();
}