/**
 *  * swap_int - swaps the values of two integers
 *   *		using two input parameters
 *     * @a: input parameter 1
 *      * @b: input parameter
 *        * Return: Nothing
 *        **/

void swap_int(int *a, int *b)
{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}
