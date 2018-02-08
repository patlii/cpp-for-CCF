#include <iostream>
/*
http://blog.csdn.net/sjpz0124/article/details/47702835 
从X个数中选择Y个，共有多少组合？简单说就是求解C(X，Y)。

实际问题，有X个教授，要选择Y个组成委员会，共有多少种组合方式？

递归法：

将这X个人按照编号从小到大排好， 1,2,3...,Y,...X

现在考虑从前X个人中选择Y个，那么有两种情况：
1. 第X个人选进去，那么就是从剩下的X-1个人中选择Y-1个，再加上第X个组成；
2. 第X个人不选进去，那么就是直接从X-1个人中选择Y个。

组合数就是这两种情况的和。
就构成了
C(X,Y) = C(X-1,Y-1) + C(X-1,Y)
计算的之后可以直接从C(X，Y)开始，当然要注意初始化，和终止条件。

直接从组合公式也能得到这个公式。
*/
using namespace std;
const int mod = 10007;

int m1(int x, int y)
{
  if (x == 0 || y == 0 || x == y) return 1;
  else return (m1(x-1, y) + m1(x-1, y-1)) % mod;
}

int m2(int x, int y)
{
  int r[1000][1000];

  r[0][0] = r[1][0] = r[1][1] = 1;
  for (int j = 2; j < 1000; j++)
  {
    for (int k = 0; k < 1000; k++)
    {
      r[j][k] = (r[j-1][k] + r[j-1][k-1]) % mod;
    }
  }

  return r[x][y];
}

int main()
{
  long line;

  cin >> line;
  while (line--)
  {
    int x, y;
    cin >> x >> y;

    //cout << m1(x, y) << endl;
    cout << m2(x, y) << endl;
  }
}

