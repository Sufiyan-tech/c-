#include <iostream>
#include <cstring>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(){}
        CWH(string title , float rating){
            this->title = title;
            this->rating = rating;
        }            

        virtual void display()=0;
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string title , float rating , float videoLength) : CWH(title , rating){
            this->videoLength = videoLength;
        }
        
        void display(){
            cout << "The Title Of Video Tuturial Is : " << title << endl;
            cout << "The Rating Of Video Tuturial Is : " << rating << endl;
            cout << "The Length Of Video Tuturial Is : " << videoLength << endl;
        }
};

class CHWText : public CWH{
    int words;
    public:
        CHWText(string title , float rating , int words) : CWH(title , rating){
            this->words = words;
        }

        void display(){
            cout << "The Title Of Text Tuturial Is : " << title << endl;
            cout << "The Rating Of Text Tuturial Is : " << rating << endl;
            cout << "The Words Of Text Tuturial Is : " << words << endl;
        }
};


int main(){
    string title;
    float rating,videoLength;
    int words;

    title = "Django Video Tutorial";
    rating = 4.85;
    videoLength = 14.5;
    CWHVideo chwVideo(title , rating , videoLength);
    chwVideo.display();

    title = "Django Text Tuturial";
    rating = 4.1;
    words = 455;
    CHWText chwText(title , rating , words);
    chwText.display();


    CWH *ptr[2];


    *ptr = &chwVideo;
    *(ptr+1) = &chwText;

    ptr[0]->display();
    ptr[1]->display();


    return 0;
}
