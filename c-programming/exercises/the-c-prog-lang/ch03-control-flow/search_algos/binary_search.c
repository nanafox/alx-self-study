/**
 * binary_search - a binary search implementation
 *
 * @target: search value
 * @sorted_arr: sorted array of integers
 * @arr_count: size of array
 *
 * Return: position where @target occur
 */
int binary_search(int target, int *sorted_arr, int arr_count)
{
	int low, mid, high;

	low = 0;
	high = arr_count - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target < sorted_arr[mid])
			high = mid - 1; /* discard previous upper and search lower half */
		else if (target > sorted_arr[mid])
			low = mid + 1; /* discard previous lower bound and move up */
		else
			return (mid); /* match found */
	}
	return (-1); /* no match found */
}

