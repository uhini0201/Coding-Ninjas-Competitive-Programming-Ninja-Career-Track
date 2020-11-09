#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  	float s,e,w;
    int c;
    cin>>s;
    cin>>e;
    cin>>w;
    while(s<=e){
        c=(s-32)/1.8;
        cout << s << "	" << c << endl;
        s+=w;
    }
}


