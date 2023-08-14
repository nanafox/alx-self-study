/**
 * linear_search - linear search (sequential search)
 *
 * @target: search value
 * @arr: array of numbers
 * @arr_count: size of array
 *
 * Return: 1 if found, 0 otherwise
 */
int linear_search(int target, int *arr, int arr_count)
{
	for (int i = 0; i < arr_count; i++)
		if (target == arr[i]) /* match found */
			return (1);
	return (0); /* assume no match found by default */
}
