// Ques - WAP to print all palindromic numbers in the given range 
// Given a range of numbers, print all palindromes in the given range. For example if the given range is {10, 115}, then output should be
// {11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111}

// Approach - We can run a loop from min to max and check every number for palindrome. If the number is a palindrome, we can simply print it. 
// To check the palindrome number we can make a separate function for it namely isPalindrome and then return palindromic numbers from there and 
//then print them 

#include <iostream>
using namespace std;

int isPalindrome(int n){
  int orig=n;
  int rev=0;
  while(orig!=0){
    int digit=orig%10;
    rev=rev*10+digit;
    orig/=10;

  }
  return (n==rev);
  
}
void countPal(int min,int max){
  for(int i=min;i<=max;i++){
    if(isPalindrome(i)){
     cout<<i<<" ";
    }
  }
}

int main() {
   countPal(1,1000);
}