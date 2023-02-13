//Knapsack
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){ 
    return (a > b) ? a : b; 
}

// Returns the maximum value that can be put in Knapsack
int knapSack(int W, int wt[], int val[], int n){
	// Base Case
	if (n == 0 || W == 0)
		return 0;

	// If weight of the nth item is more
	// than Knapsack capacity W, then not included
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1], wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

// Driver code
int main(){
	int x;
    int W;
    cout<< "Enter total no. of items ";
    cin>>x;
    int *val = new int[x];
    int *wt = new int[x];
    for(int i = 0; i < x; i++){
        val[i] = i+1;
    }
    cout<< "Enter "<<x<<" Weights ";
    for(int j = 0; j < x; j++){
        cin>> wt[j];
    }
    cout<< "Enter Knapsack capacity ";
    cin>> W;
    int n = sizeof(val) / sizeof(val[0]);
	int m = knapSack(W, wt, val, n);
    cout << m;
    delete val;
    delete wt;
	return 0;
}