
/**#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
for (int i=n;i>=0;i--)
{
   for(int j=15;j>=i;j--)
{cout << "*" ;
}
cout << endl;
}

/**#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cin >> n;
int i=n;
while(i>=1)
{cout << i <<endl;
i--;}
*/
/**#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cout << "enter a number" << endl;
cin >> n;
while(true)
{ if(n==-1)
  break;
switch(n) {
 case 1:{
    cout << "enter the first number" << endl;
    int x,y;
    cin >> x;
    cout << "enter the second number" << endl;
    cin >> y;
    int pro = x*y;
    cout <<pro << endl;
 }   break;
  case 2:{
  cout << "enter the length" << endl;
    int L,W;
    cin >> L;
    cout << "enter the width" << endl;
    cin >> W;
    int area = L*W;
    cout << area << endl;
    break;
    }
 case 3: 
 {
    int sum=0;
    for(int i=2 ;i<=10;i=i+2)
    sum+=i;
    cout<<"the sum of the first even number is" << sum << endl;
     break;
  }
 case 4:
 {
    int a,b;
    cout << "enter the first multiple number" << endl;
    cin >> a;
    cout << "enter the second multiple number" << endl;
    if(a%b==0)
    cout << "a is multiple of b" << endl;
    else cout << "it is not" << endl;
  }    
 case 5:
 {
    int x,y;
    cin >> x>>y;
    if (x>y)
    cout <<"the larger number is"<< x<< endl;
    else cout << y<< endl;
    
 }
default:
cout << "invalid" << endl;
}
}

*/


/**#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cin >> n;
for(int i=n;i>=1;i--)
 {for(int j=i;j>0;j--)
 {cout << "*";}
 cout <<  endl;
 }
*/
/*#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cin >> n;
for(int i=1;i<=n;i++)
{ for(int j= 1;j<=i;j++)
   {cout << "*" ;}
cout 
/*int pro = 1;
cout << pro  << endl;
for(int i=1;i<=7;i++){
pro*=2;
cout << pro<< endl;
}
*/
/*int sum=0;
int i=0;
while(i<=50)
{ sum+=i ;i=i+2 ;}
cout << sum << endl;
*/
/*int i=1;
do{ 
{cout <<i <<" "<< 7*i << endl;
i++;}
}while(i<=70);
*/
/*int n;
cin >> n;
int factorial=1;
for(int i=1;i<=n;i++)
factorial*=i;{cout << factorial << endl;}
*/
/*int n;
for(int i=1;i<=10;i++)
{if(i==5 || i==7)
continue;{cout << i << endl;
}
}
*/
/*int n;
cin >> n;
for(int i=1;i<=5;i++)
    {for(int j=1;j<=n;j++)
       {cout << i*j <<" ";}
         cout << endl;
         }
*/
/*int n;
cin >> n;
for(int i=1;i<=7;i++)
   {for(int j=1;j<=n;j++)
     {cout << "*";}
       cout <<endl;
   }
*/
/*int n;
cin >> n;
for(int i=1;i<=n;i++)
    {for(int j=1;j<=i;j++)
        {cout << j;}
          cout <<endl;}
*/
/*int i=1;
do {
{cout << i<<"*"<<"8"<<"="<< 8*i << endl;
i++;}}while(i<=8);*/
/*int num,digit;
cin >> num;
int reversed=0;
while(num != 0){
digit = num%10;
reversed = reversed * 10 + digit;
num = num/10;}
cout << reversed << endl;*/
/*int n;
cin >> n;
int i=0;
while (i<n){
if(i%2==0)
cout << "even" << endl;
else if(i%2 != 0)
cout << "odd" << endl;
i++;} wrong*/
/*int n;
cin >> n;
if(n<0)
{cout << "enter +ve num" << endl;}
long long first =0,second =1;
cout << first<<" " <<second <<" ";
for(int i=2;i<=n;i++ ){
long long next= first +second;
cout << next <<" " ;
first=second;
second=next;}*/
/*int matrix[3][3];
int sum=0;
double average;
cout << "enter numbers" << endl;
for(int i=0;i<3;i++)
{for (int j=0;j<3;j++)}
cin >> matrix[i][j];
sum+=matrix[i][j];
cout << matrix<< endl;
average = sum/9;
cout << sum<<average << endl;*/
#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;

    cout << "How many numbers will you enter? ";
    cin >> n; // Input to control the number of iterations

    for (int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> num; // Input collected in each iteration
        sum += num; // Process input
    }

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
