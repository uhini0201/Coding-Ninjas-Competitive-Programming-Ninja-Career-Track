#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int basic_sal;
    char grade;
    cin >> basic_sal >> grade;
   double tot_sal;
   double hra = 0.2*basic_sal;
	double da = 0.5*basic_sal;
   double pf = 0.11*basic_sal;
   double basic = basic_sal + da + hra - pf;
    if(grade >= 'A' && grade <='Z'){
        if(grade == 'A'){
        tot_sal = basic + 1700;
    }
        else if(grade == 'B'){
            tot_sal = basic + 1500;
        }
        else{
            tot_sal = basic + 1300;
        }
    }
    
    cout << int(round(tot_sal));
}
