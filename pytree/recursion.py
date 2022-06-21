#LinearSearch

from http.client import NOT_FOUND
from re import I

from openpyxl import load_workbook


if high < low:
    return NOT_FOUND
if A[low] = key:
    return low
return LinearSearch(A, low + 1, high, key)

#LinearSearchIt

for i from low to high:
    if A[i] = key:
        return i
return NOT_FOUND

# binary search

if high < low:
    return low -1
mid == [ low + (high - low)/2]

if key = A[mid]:
    return mid
else if key < A[mid]:
    return BinarySearch(A,low,mid -1,key)

