#include<iostream>

using namespace std;
int main(){

    string s; cin>>s;

    int sum = 0;
        int n=s.length();
        
        // There is a problem in using direct if else, to solve this problem
        // Insted we can use Switch case to solve this problem

        for(int i=0; i<n; i++){
            char c = s[i];

            switch(c)
            {
                case 'I':
                {
                    if(s[i+1] == 'V'){sum = sum + (5-1); i++; break;}
                    else if (s[i+1] == 'X'){sum = sum + (10-1); i++; break;}
                    else{sum = sum + 1; break;}

                }
                
                case 'X':
                {
                    if(s[i+1] == 'L'){sum = sum + (50-10); i++; break;}
                    if(s[i+1] == 'C'){sum = sum + (100-10); i++; break;}
                    else{sum = sum + 10; break;}
                }
                
                case 'C':
                {
                   if(s[i+1] == 'D'){sum = sum + (500-100); i++; break;} 
                   if(s[i+1] == 'M'){sum = sum + (1000-100); i++; break;} 
                   else{sum = sum + 100; break;}
                }
                
                case 'V':
                {
                    sum = sum + 5;
                    break;
                }
                
                case 'L':
                {
                    sum = sum + 50;
                    break;
                }
                
                case 'D':
                {
                    sum = sum + 500;
                    break;
                }
                
                case 'M':
                {
                    sum = sum + 1000;
                    break;
                }
                
            }
        }
        cout<< sum <<endl;

    return 0;
}