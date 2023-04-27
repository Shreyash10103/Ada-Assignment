#include <stdio.h>
//# Ques 1:

void last_brick(int n){
    if (n%3==1)
        printf("patlu");
    else
        printf("motu");
}
        
    
    


int main(){
    int n= 3;
    last_brick(n);
    return 0;
}


# Alter

#include <stdio.h>

void last_brick(int n){
    int counter  =1;

    while(n >0){
        n = n - counter*1;
        if(n<=0){
            printf(" Patlu ");
            break;
        }
        n = n - counter*2;
        if(n<=0){
            printf("motu");
            break;
        }
        counter +=1;
    }
 }


int main() {
    int n= 2;
    last_brick(n);
    return 0;
}


//# Ques2

#include <iostream>
using namespace std;
 
// A recursive function used by countWays
int countWays(int n)
{
    int res[n + 1];
    res[0] = 1;
    res[1] = 1;
    res[2] = 2;
    for (int i = 3; i <= n; i++)
        res[i] = res[i - 1] + res[i - 2] + res[i - 3];
 
    return res[n];
}
 
// Driver program to test above functions
int main()
{
    int n = 5;
    cout << countWays(n);
    return 0;
}

//#Ques3

int main()
{
    char str[] = { "abbba" };
  
    // Start from leftmost and 
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
  
    // Keep comparing characters
    // while they are same
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
  
    printf("%s is a palindrome\n", str);
  
    return 0;
}

# Alter

#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 
// Driver program
int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}

//#Ques4

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
	// If x^0 return 1
	if (n == 0)
		return 1;
	// If we need to find of 0^y
	if (x == 0)
		return 0;
	// For all other cases
	return x * power(x, n - 1);
}

// Driver Code
int main()
{
	int x = 2;
	int n = 3;

	// Function call
	cout << (power(x, n));
}


//#Ques 5















