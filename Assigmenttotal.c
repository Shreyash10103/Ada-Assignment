#include <stdio.h>
//# Ques 2:ass1

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


//# Ques1:assi1

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

//#Ques1 : assi2

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

//#Ques2: assi2

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



}





//#Ques1:assi2

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

//Alter



//2.2

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


//3.1

//python



def insertAtBottom(stack, item):
	if isEmpty(stack):
		push(stack, item)
	else:
		temp = pop(stack)
		insertAtBottom(stack, item)
		push(stack, temp)


def reverse(stack):
	if not isEmpty(stack):
		temp = pop(stack)
		reverse(stack)
		insertAtBottom(stack, temp)


def createStack():
	stack = []
	return stack




def isEmpty(stack):
	return len(stack) == 0




def push(stack, item):
	stack.append(item)



def pop(stack):


	if(isEmpty(stack)):
		print("Stack Underflow ")
		exit(1)

	return stack.pop()



def prints(stack):
	for i in range(len(stack)-1, -1, -1):
		print(stack[i], end=' ')
	print()



stack = createStack()
push(stack, str(4))
push(stack, str(3))
push(stack, str(2))
push(stack, str(1))
print("Original Stack ")
prints(stack)

reverse(stack)

print("Reversed Stack ")
prints(stack)
			
			
//3.2
//python
			
			
def permute(ip, op):

	
	if len(ip) == 0:
		print(op, end=" ")
		return

	
	ch = ip[0].lower()
	ch2 = ip[0].upper()
	ip = ip[1:]
	permute(ip, op+ch)
	permute(ip, op+ch2)

a=str(input())


permute(a, "")
			
			
			
//4.1

//python


def sortedInsert(s, element):

	
	if len(s) == 0 or element > s[-1]:
		s.append(element)
		return
	else:

	
		temp = s.pop()
		sortedInsert(s, element)

		s.append(temp)




def sortStack(s):

	
	if len(s) != 0:

		
		temp = s.pop()

		
		sortStack(s)

		
		sortedInsert(s, temp)



def printStack(s):
	for i in s[::-1]:
		print(i, end=" ")
	print()

if __name__ == '__main__':
	s = []
	s.append(3)
	s.append(-5)
	s.append(1)
	s.append(4)
	s.append(-3)

	print("Stack elements before sorting: ")
	printStack(s)

	sortStack(s)

	print("\nStack elements after sorting: ")
	printStack(s)


		
//4.2

		
class Main {
    public static boolean isMatch(String s, String p) {
        // dry run this sample case on paper , if unable to understand what soln does
        // p = "a*bc" s = "abcbc"
        int sIdx = 0, pIdx = 0, lastWildcardIdx = -1, sBacktrackIdx = -1, nextToWildcardIdx = -1;
        while (sIdx < s.length()) {
            if (pIdx < p.length() && (p.charAt(pIdx) == '.' || p.charAt(pIdx) == s.charAt(sIdx))) {
                // chars match

                ++sIdx;
                ++pIdx;
            } else if (pIdx < p.length() && p.charAt(pIdx) == '*') {
                // wildcard, so chars match - store index.

                lastWildcardIdx = pIdx;
                nextToWildcardIdx = ++pIdx;
                sBacktrackIdx = sIdx;
                // storing the pidx+1 as from there I want to match the remaining pattern

            } else if (lastWildcardIdx == -1) {
                // no match, and no wildcard has been found.

                return false;
            } else {
                // backtrack - no match, but a previous wildcard was found.

                pIdx = nextToWildcardIdx;
                sIdx = ++sBacktrackIdx;
                // backtrack string from previousbacktrackidx + 1 index to see if then new pidx
                // and sidx have same chars, if that is the case that means wildcard can absorb
                // the chars in b/w and still further we can run the algo, if at later stage it
                // fails we can backtrack
            }
        }
        for (int i = pIdx; i < p.length(); i++) {
            if (p.charAt(i) != '*') {
                return false;
            }
        }
        return true;
        // true if every remaining char in p is wildcard

    }

    public static void main(String[] args) {
        String str = "abcbc";
        String pattern = "a*bc";

        if (isMatch(str, pattern)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}



//5


def sortSquare(arr, n):
	for i in range(n):
		arr[i]= arr[i] * arr[i]
	arr.sort()

arr = [-6, -3, -1, 2, 4, 5]
n = len(arr)

print("Before sort")
for i in range(n):
	print(arr[i], end = " ")

print("\n")

sortSquare(arr, n)

print("After sort")
for i in range(n):
	print(arr[i], end = " ")


def sortsquare(arr,n):
	i=n-1
	j=0
	l=0

	if(arr[i]*arr[i]<arr[j]*arr[j]):
		arr[l]=arr[i]*arr[i]
		i-=1
	else:
		arr[l]=arr[j]*arr[j]
		j+=1

	l+=1

		
arr= [-6, -3, -1, 2, 4, 5]
n=len[arr]

print("Before sort")
for i in range(n):
	print(arr[i],end=" ")

sortSquare(arr,n)
print("\nAfter Sort")
for i in range(n):
	print(arr[i],end=" ")


// 6a
		

class lab_assignment_6_problem_1{
    public static void main(String[] args) {
        int n = 4; // no. of rows
	int m = 5; // no. of columns
	int[][] a = { { -4, -3, -1, 3, 5 },
				{ -3, -2, 2, 4, 6 },
				{ -1, 1, 3, 5, 8 },
				{ 3, 4, 7, 8, 9 } };
	int k = 3; // element to search

    boolean p =false;//assuming element not found

    int i =0;
    int j = m-1;
    while(i>=0 && i<n && j>=0 && j<m ){
        if(k==a[i][j]){
            System.out.println("Element " + k +" "+ "Found at position(" + i + "," + j + ")");
            j--;
            p=true;
        }else if(k<a[i][j]){
            j--;
        }else{
            i++;
        }
    }
   
    if(p==false){
        System.out.println("element not found");
    }
    


    


}
}


    
6b.
	
a = [[1,2,3,4],[2,3,4,5],[3,4,5,6],[4,5,6,7]]
b = [[5,5,5,5],[6,6,6,6],[7,7,7,7],[8,8,8,8]]
def new_m(p, q): # create a matrix filled with 0s
   matrix = [[0 for row in range(p)] for col in range(q)]
   return matrix
def split(matrix): # split matrix into quarters
   a = matrix
   b = matrix
   c = matrix
   d = matrix
   while(len(a) > len(matrix)/2):
      a = a[:len(a)//2]
      b = b[:len(b)//2]
      c = c[len(c)//2:]
      d = d[len(d)//2:]
   while(len(a[0]) > len(matrix[0])/2):
      for i in range(len(a[0])//2):
         a[i] = a[i][:len(a[i])//2]
         b[i] = b[i][len(b[i])//2:]
         c[i] = c[i][:len(c[i])//2]
         d[i] = d[i][len(d[i])//2:]
   return a,b,c,d
def add_m(a, b):
   if type(a) == int:
      d = a + b
   else:
      d = []
      for i in range(len(a)):
         c = []
         for j in range(len(a[0])):
            c.append(a[i][j] + b[i][j])
         d.append(c)
   return d
def sub_m(a, b):
   if type(a) == int:
      d = a - b
   else:
      d = []
      for i in range(len(a)):
         c = []
         for j in range(len(a[0])):
            c.append(a[i][j] - b[i][j])
         d.append(c)
   return d
def strassen(a, b, q):
   
   # base case: 1x1 matrix
   if q == 1:
      d = [[0]]
      d[0][0] = a[0][0] * b[0][0]
      return d
   else:

      #split matrices into quarters
      a11, a12, a21, a22 = split(a)
      b11, b12, b21, b22 = split(b)
      
      # p1 = (a11+a22) * (b11+b22)
      p1 = strassen(add_m(a11,a22), add_m(b11,b22), q/2)
      
      # p2 = (a21+a22) * b11
      p2 = strassen(add_m(a21,a22), b11, q/2)
      
      # p3 = a11 * (b12-b22)
      p3 = strassen(a11, sub_m(b12,b22), q/2)
      
      # p4 = a22 * (b21-b11)
      p4 = strassen(a22, sub_m(b21,b11), q/2)
      
      # p5 = (a11+a12) * b22
      p5 = strassen(add_m(a11,a12), b22, q/2)
      
      # p6 = (a21-a11) * (b11+b12)
      p6 = strassen(sub_m(a21,a11), add_m(b11,b12), q/2)
      
      # p7 = (a12-a22) * (b21+b22)
      p7 = strassen(sub_m(a12,a22), add_m(b21,b22), q/2)
      
      # c11 = p1 + p4 - p5 + p7
      c11 = add_m(sub_m(add_m(p1, p4), p5), p7)
      
      # c12 = p3 + p5
      c12 = add_m(p3, p5)
      
      # c21 = p2 + p4
      c21 = add_m(p2, p4)
      
      # c22 = p1 + p3 - p2 + p6
      c22 = add_m(sub_m(add_m(p1, p3), p2), p6)
      c = new_m(len(c11)*2,len(c11)*2)
      for i in range(len(c11)):
         for j in range(len(c11)):
            c[i][j] = c11[i][j]
            c[i][j+len(c11)] = c12[i][j]
            c[i+len(c11)][j] = c21[i][j]
            c[i+len(c11)][j+len(c11)] = c22[i][j]
      return c
      
print("Output Product:")
print(strassen(a, b, 4))
		     
		     
		    
		     
		     
7a.
		     
import java.util.Scanner;

// Java program for activity selection problem.

class ActivitySelection {
    // Prints a maximum set of activities that can be done
    // by a single person, one at a time.
    public static void printMaxActivities( int f[][], int n) {
        int i, j;
        System.out.println("Following activities are selected");
        // The first activity always gets selected
        i = 0;
        System.out.print(i + " ");

        // Consider rest of the activities
        for (j = 1; j < n; j++) {
            // If this activity has start time greater than
            // or equal to the finish time of previously
            // selected activity, then select it
            if (f[0][j] >= f[1][i]) {
                System.out.print(j + " ");
                i = j;
            }
        }
    }

    public static int[][] sortfinishtime(int f[][]){
        
        
        int n = f[0].length;
        for(int i =0;i<n-1;i++){
            int min = i;
            for(int j =i+1;j<n;j++){
                if(f[1][j]<f[1][min]){
                    min = j;
                }
            }
            int temp = f[1][i];
            f[1][i]=f[1][min];
            f[1][min]=temp;
            

            int t = f[0][i];
            f[0][i]=f[0][min];
            f[0][min]=t;
            
        }
        return f;
    }

    // Driver code
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("give no. of jobs");
        int n = s.nextInt();
        int job [] [] = new int[2][n];
        System.out.println("give start time");
        for(int i = 0; i<n; i++){
            job [0][i]=s.nextInt();
        }
        System.out.println("give finish time");
        for(int j=0;j<n;j++){
            job[1][j]=s.nextInt();

        }
        job=sortfinishtime(job);
        for(int i = 0;i<2;i++){
            for(int j=0;j<n;j++){
                System.out.print(job[i][j]);
            }
            System.out.println();
        }

        // Function call
        printMaxActivities( job, n);
        
    }
}

		     
7b.
		     
		 
# Prim's Algorithm in Python


INF = 9999999
# number of vertices in graph
V = 5
# create a 2d array of size 5x5
# for adjacency matrix to represent graph
G = [[0, 9, 75, 0, 0],
     [9, 0, 95, 19, 42],
     [75, 95, 0, 51, 66],
     [0, 19, 51, 0, 31],
     [0, 42, 66, 31, 0]]
# create a array to track selected vertex
# selected will become true otherwise false
selected = [0, 0, 0, 0, 0]
# set number of edge to 0
no_edge = 0
# the number of egde in minimum spanning tree will be
# always less than(V - 1), where V is number of vertices in
# graph
# choose 0th vertex and make it true
selected[0] = True
# print for edge and weight
print("Edge : Weight\n")
while (no_edge < V - 1):
    # For every vertex in the set S, find the all adjacent vertices
    #, calculate the distance from the vertex selected at step 1.
    # if the vertex is already in the set S, discard it otherwise
    # choose another vertex nearest to selected vertex  at step 1.
    minimum = INF
    x = 0
    y = 0
    for i in range(V):
        if selected[i]:
            for j in range(V):
                if ((not selected[j]) and G[i][j]):  
                    # not in selected and there is an edge
                    if minimum > G[i][j]:
                        minimum = G[i][j]
                        x = i
                        y = j
    print(str(x) + "-" + str(y) + ":" + str(G[x][y]))
    selected[y] = True
    no_edge += 1
		     
		     
8.
		     
	
# A Naive recursive Python program to find minimum number
# operations to convert str1 to str2


def editDistance(str1, str2, m, n):

	# If first string is empty, the only option is to
	# insert all characters of second string into first
	if m == 0:
		return n

	# If second string is empty, the only option is to
	# remove all characters of first string
	if n == 0:
		return m

	# If last characters of two strings are same, nothing
	# much to do. Ignore last characters and get count for
	# remaining strings.
	if str1[m-1] == str2[n-1]:
		return editDistance(str1, str2, m-1, n-1)

	# If last characters are not same, consider all three
	# operations on last character of first string, recursively
	# compute minimum cost for all three operations and take
	# minimum of three values.
	return 1 + min(editDistance(str1, str2, m, n-1), # Insert
				editDistance(str1, str2, m-1, n), # Remove
				editDistance(str1, str2, m-1, n-1) # Replace
				)


# Driver code
str1 = "sunday"
str2 = "saturday"
print (editDistance(str1, str2, len(str1), len(str2)))


    


    

    

	



		






			







			
			

			
			





















































