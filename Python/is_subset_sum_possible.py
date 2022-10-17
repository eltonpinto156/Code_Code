"""
Given a set of non-negative integers,
and a value sum, determine 
if there is a subset of the given set with sum equal to given sum. 
"""

"""
Recusive approach:
Check for sum, while including and excluding the one element at a time.
"""
from functools import lru_cache


@lru_cache(None)  # Memoisation
def subset_sum_recursive(arr, n, sum):
    if n == 0:
        return False

    elif sum == 0:
        return True

    else:
        return subset_sum_recursive(arr, n - 1, sum) or subset_sum_recursive(
            arr, n - 1, sum - arr[n - 1]
        )


arr = [3, 2, 4, 5]
n = 4
sum = 5

print(subset_sum_recursive(arr, n, sum))
