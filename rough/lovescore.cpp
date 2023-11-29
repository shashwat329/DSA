#include<iostream>
#include<string>
using namespace std;
int getlovescore(string name1,string name2){
    int score;
     int ctrue=0;
        int clove=0;
    // for(int i = 0; i < name1.length()&&name2.length(); i++)
    // {
       
    //     if((name1[i]||name2[i]=='t')||(name1[i]||name2[i]=='r')||(name1[i]||name2[i]=='u')||(name1[i]||name2[i]=='e')){
    //         ctrue++;
    //     }
    //     if((name1[i]||name2[i]=='l')||(name1[i]||name2[i]=='o')||(name1[i]||name2[i]=='v')||(name1[i]||name2[i]=='e')){
    //         clove++;
    //     }
    // }
    for(int i =0;i<name1.length();i++){
        if(name1[i]=='t'||name1[i]=='r'||name1[i]=='u'||name1[i]=='e'){
            ctrue++;
        }
        if(name1[i]=='l'||name1[i]=='o'||name1[i]=='v'||name1[i]=='e'){
            clove++;
        }
    }
    for(int i =0;i<name2.length();i++){
        if(name2[i]=='t'||name2[i]=='r'||name2[i]=='u'||name2[i]=='e'){
            ctrue++;
        }
        if(name2[i]=='l'||name2[i]=='o'||name2[i]=='v'||name2[i]=='e'){
            clove++;
        }
    }
    score = 10*ctrue+clove;
    return score;
}
int main(){
    string s1,s2;
    cout<<"enter the first name: ";
    getline(cin,s1);
    cout<<"enter the second name: ";
    getline(cin,s2);
    int score = getlovescore(s1,s2);
    if(score<10||score>90){
        cout<<"your score is "<<score<<" ,you go together like coke and mentos."<<endl;
    }
    else if(score>40||score<50){
        cout<<"your score is "<<score<<" you are alright together."<<endl;
    }
    else{
        cout<<"your score is "<<score<<endl;
    }
    return 0;

}