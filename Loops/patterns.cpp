#include <iostream>
using namespace std;
int main()
{
 /*
  1. print if n=4 
     1 2 3 4 
     1 2 3 4 
     1 2 3 4 
     1 2 3 4 

   int n ;
   cin>>n;
   int i=1;
   while(i<=n){
   int j=1;
    while(j<=n){
        cout<<j;
        j+=1;
    }
    cout<<endl;
    i+=1;
   }


2. print if n=3 
   1 2 3 
   4 5 6 
   7 8 9 
   
int n ;
cin>>n;

int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}

3.print if n=3 
        *
        **
        ***                             

 int n;
 cin>>n;
 int i=1;
 while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"*"<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
 }

4.print if n=3 
1 
2 2 
3 3 3   
   
int n; 
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;

}
5.print if n=3
1 
2 3 
4 5 6 

int n;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}
6.print if n=4 
1
2 3 
3 4 5 
4 5 6 7 

int n;
cin>>n;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=i){
        cout<<i+j-1<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;

}
7.print if n=3 
1 
2 1 
3 2 1 

int n;
cin>>n;
int i=1;

while(i<=n){
    int j=1;
    while(j<=i){
        int value=i;
        cout<<value+1-j<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}
8.print if n=3 
A A A
B B B 
C C C 

int n;
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    while(col<=n){
        char ch='A'+row-1;
        cout<<ch<<" ";
        col+=1;
    
    }
    cout<<endl;
    row+=1;
}

9.print if n=3 
A B C 
A B C 
A B C

int n;
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    while(col<=n){
        char ch='A'+col-1;
        cout<<ch<<" ";
        col+=1;
    }
    cout<<endl;
    row+=1;
}

10.print if n=3
A B C 
D E F
G H I

int n;
cin>>n;
int i=1;
int start=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+start-1;
        cout<<ch<<" ";
        start+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;

}
11.print if n=3 
A B C 
B C D 
C D E 

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+i+j-2;
        cout<<ch<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

12.print if n=3 
A 
B B 
C C C 

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+i-1;
        cout<<ch<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}
13.print if n=3 
A 
B C 
D E F

int n;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+ count-1;
        cout<<ch<<" ";
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}
14.print if n=4 
A 
B C 
C D E
D E F G 

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+i+j-2;
        cout<<ch<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}
15.print if n=4
D 
C D 
B C D 
A B C D 

int n;
cin>>n;
int i=n;
while(i>=1){
    int j=n;
    while(j>=i){
        char ch='D'-(j-i);
        cout<<ch<<" ";
        j-=1;
    }
    cout<<endl;
    i-=1;
}
16.print for n=4
   *
  **
 ***
****             
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
    int space=n-row;
    while(space){
        cout<<" ";
        space-=1;
    }
    int col=1;
    while(col<=row){
        cout<<"*";
        col+=1;
    }
    cout<<endl;
    row+=1;
 }

17.print for n=3 
****
***
**
*
 
int n;
cin>>n;
int row=1;
while(row<=n){
    int star=n-row+1;
    while(star){
        cout<<"*";
        star-=1;
    }
    cout<<endl;
    row+=1;
}
18.print if n=4 
   1
  121
 12321
1234321

int n;
cin>>n;
int row=1;

while(row<=n){

    //Print karo space (1st triangle)
    int space=n-row;
    while(space){
        cout<<" ";
        space-=1;
    }

    //Print 2nd triangle
    int j=1;
    while(j<=row){
        cout<<j;
        j+=1;
    } 

    //Print 3rd triangle 

    int start=row-1;
    while(start){
        cout<<start;
        start-=1;
    }
    cout<<endl;
    row+=1;
}
dabaang ques. print for n=5 
1234554321
1234**4321
123****321
12******21
1********1


int n; 
cin>>n;
int i=n;
while(i>=1){
    int j=n;
    while(j>=i){
        cout<<i;
        j-=1;
    }
    cout<<endl;
    i-=1;
}
*/
return 0;

}

