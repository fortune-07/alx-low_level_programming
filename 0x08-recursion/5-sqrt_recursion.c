#include "holberton.h"
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: holds value of the integer.
*
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
int start = 0, end = n;
int mid;

int ans;

while (start <= end)
{
mid = (start + end) / 2;
if (mid * mid == n)
{
ans = mid;
break;
}
if (mid * mid < n)
{
start = mid + 1;
ans = mid;
}
else
{
end = mid - 1;
}
}
return (ans);
}
