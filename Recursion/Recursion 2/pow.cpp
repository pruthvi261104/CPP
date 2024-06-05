//Time complexity for this code is O(log n)
//which is far better than conventional method
#include <iostream>
using namespace std;
int pow(int x, int n)
{
  if (n == 0)
    return 1;
  if (n == 1)
    return x;
  int ans = pow(x, n / 2);
  if (n % 2 == 0)
    return ans * ans;
  else
    return ans * ans * x;
}
int main()
{
  int x;
  cin >> x;
  int n;
  cin >> n;
  int r = pow(x, n);
  cout << r;
}