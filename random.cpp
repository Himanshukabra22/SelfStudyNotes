#include <bits/stdc++.h>
//#include<unordered_map>
using namespace std;
#define lli long long int
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0)
#define db long double
#define prq priority_queue<lli>
#define psq priority_queue<lli, vector<lli>, greater<lli>>
#define mod 1e9 + 7
#define lb lower_bound
#define ub upper_bound
#define vlli vector<lli>
#define mslli multiset<lli>
#define inf 1e17
#define pb push_back
#define pie 3.14159265358979323846
#define test  \
	lli t;    \
	cin >> t; \
	while (t--)

// void mergeSort(vector<long long int> &arr1, int n, vector<long long int> arr2, int m)
// {
// 	for (long long int z : arr2)
// 	{
// 		arr1.push_back(z);
// 	}
// 	sort(arr1.begin(), arr1.end());
// }

// void insertionSort(vector<long long int>, int n)
// {
// }

// void bubbleSort(vector<long long int> &arr, int n)
// {
// 	int k = n;
// 	while (k != 1)
// 	{
// 		for (long long int i = 0; i < k - 1; i++)
// 		{
// 			if (arr[i] > arr[i + 1])
// 				swap(arr[i], arr[i + 1]);
// 		}
// 		k--;
// 	}
// }

// void selectionSort(vector<long long int> &arr, int n)
// {
// 	// time complexity is O(n^2)
// 	for (long long int i = 0; i < n - 1; i++)
// 	{
// 		int k = i;
// 		for (long long int j = i + 1; j < n; j++)
// 		{
// 			if (arr[j] < arr[k])
// 				k = j;
// 		}
// 		swap(arr[i], arr[k]);
// 	}
// }

// int main()
// {
// 	vector<long long int> arr1, arr2;
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int k;
// 		cin >> k;
// 		arr1.push_back(k);
// 	}
// 	int m;
// 	cin >> m;
// 	for (int i = 0; i < m; i++)
// 	{
// 		int k;
// 		cin >> k;
// 		arr2.push_back(k);
// 	}
// 	mergeSort(arr1, n, arr2, m);
// 	for (long long int z : arr1)
// 	{
// 		cout << z << " ";
// 	}
// 	cout << endl;
// 	return 0;
// }

// Book allocation problem (codestudios)
// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540
/*
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
	int studentCount = 1;
	int pageSum = 0;
	// cout << "checking for mid "<< mid <<endl;

	for (int i = 0; i < n; i++)
	{
		if (pageSum + arr[i] <= mid)
		{
			pageSum += arr[i];
		}
		else
		{
			studentCount++;
			if (studentCount > m || arr[i] > mid)
			{
				return false;
			}
			pageSum = arr[i];
		}
		if (studentCount > m)
		{
			return false;
		}
		// cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
	}
	return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
	int s = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s + (e - s) / 2;

	while (s <= e)
	{
		if (isPossible(arr, n, m, mid))
		{
			// cout<<" Mid returned TRUE" << endl;
			ans = mid;
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
		mid = s + (e - s) / 2;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
	}
	int m;
	cin >> m;
	cout << allocateBooks(v, n, m) << endl;
	return 0;
}
*/

// vecfreq(vector) accepts vector parameter and returns pair of two vectors (let pair be v1 and v2) where v1 contains unique values of given vector and v2 contains frequency of corresponding elements of v1 in given vector.
/*
pair<vector<int>,vector<int>> vecfreq(vector<int> v)
{
	map<int,int> tempm;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		tempm[*i]++;
	}
	vector<int> v1,v2;
	for (auto i = tempm.begin(); i!=tempm.end() ; i++)
	{
		v1.push_back(i->first);
		v2.push_back(i->second);
	}
	return {v1,v2};
}
*/

// keyfreq(vector,int) accepts vector and key value to return key's frequency.
/*
int keyfreq(vector<int> v,int p)
{
	map<int,int> tempm;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		tempm[*i]++;
	}
	return tempm[p];
}
*/

// Finding HCF (highest common factor)
/*
int t,ans,a=1,b,c,rem;
	cin>>t;
	while(t--)
	{
		cin>>b>>c;
		c=c/__gcd(b,c);
		cout<<c<<endl;
	}
	return 0;
*/

// Printing Subarrays.
/*
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			for (int k = i; k <= j; k++)
			{
				cout<<arr[k]<<"  ";
			}
			cout<<endl;
		}
	}
*/

/* int findmex( int n)
{
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for (int i = 0; i < n; i++)
	{
		if(arr[0]!=0){
		return 0;
		}
		else if(arr[i] != i)
		return arr[i-1]+1;
	}
	return 0;
}
*/

/* void sorterr(int* arr,int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
*/

// finder accepts a vector of type int and an integer value and returns pair of int values:
// 1. {1,x} where x is the index of found value.
// 2. {-1,0} if value not found in vector.
//  Note that you'll have to provide ascend sort vector.
/*
pair<int,int> finder(vector<int> v, int k)
{
	int l = v.size();
	int i = 0, j = l-1;
	int mid = (l-1)/2;
	while(mid!=i)
	{
		int step = 0;
		if(v[mid]==k)
		return {1,mid};
		else if(k>v[mid])
		{
			i = mid;
			mid = (j+i)/2;
		}
		else if(k<v[mid])
		{
			j = mid;
			mid = (j+i)/2;
		}
	}
	return {-1,0};
}
*/

// firstAndLastPosition function accepts vector, length of vector, and a value as parameters and returns the pair of indices of first and last time value encountered in a ascend sort array.
// for eg. if vector v = {1,2,3,3,3,3,4,5} and value = 3 then the function will return pair {2,5}
/*
pair<int,int> firstAndLastPosition(vector<int>& arr,int n, int k)
{
	int i = 0, j = n-1;
	int mid = (n-1)/2;
	int x, y;
	while(mid!=i)
	{
		if(arr[mid]==k)
		{
			int x = mid, y = mid;
			while(arr[x]==k)
				x--;
			while(arr[y]==k)
				y++;
			return {x+1,y-1};
		}
		else if(k>arr[mid])
		{
			i = mid;
			mid = i + (j-i)/2;
		}
		else if(k<arr[mid])
		{
			j = mid;
			mid = i + (j-i)/2;
		}
	}
	return {-1,-1};
}
*/

// binSearch function accepts vector, values, starting index and ending index as parameters to search for value in vector between given indices and return its index otherwise -1 if not found.
/*
int binSearch(vector<int> arr, int k, int i, int j)
{
	int mid = i + (j - i) / 2;
	while (i < j)
	{
		if (arr[mid] > k)
			j = mid - 1;
		else if (arr[mid] < k)
			i = mid + 1;
		else if (arr[mid] == k)
			return mid;
		mid = i + (j - i) / 2;
	}
	return -1;
}
*/

// pivot function accepts rotated vector and its length as parameters and returns the index of pivot value.
// Rotated vector: when some last values of a sorted array are place onto front of it then it is called as rotated array/vector.
// Eg. vector: 1 2 3 4 5 6 7 8 9 10
//			  7 8 9 10 1 2 3 4 5 6
// For above example, pivot element us 1 (index: 4).
/*
int pivot(vector<int> arr, int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;
	while (s < e)
	{
		if (arr[mid] >= arr[0])
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
		mid = s + (e - s) / 2;
	}
	return s;
}
*/