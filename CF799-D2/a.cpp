#include <iostream>
#include <cmath>

int main()
{
  int n, t, k, d;
  std::cin >> n >> t >> k >> d;
  int with = 0, without = 0;
  int finWith, finWithout;
  bool flag = 0, flag2 = 0;
  for (int tt = 1;; tt++)
  {
    if (tt % t == 0)
    {
      without += k;
      with += k;
    }
    if (tt > d && (tt - d) % t == 0)
    {
      with += k;
    }
    if (with >= n && flag == 0)
    {
      finWith = tt;
      flag = 1;
    }
    if (without >= n && flag2 == 0)
    {
      finWithout = tt;
      flag2 = 1;
    }
    if (without >= n && with >= n)
    {
      break;
    }
  }
  if (finWith >= finWithout)
  {
    std::cout << "NO";
  }
  else
  {
    std::cout << "YES";
  }
  return 0;
}
