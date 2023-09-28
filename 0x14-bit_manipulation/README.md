<h1>0x14. C - Bit manipulation</h1>
<h2>Mandatory</h2>
<h2>0. 0</h2>
<p>Write a function that converts a binary number to an unsigned int.
	<li>Prototype: unsigned int binary_to_uint(const char *b);</li>
	<li>where b is pointing to a string of 0 and 1 chars</li>
	<li>Return: the converted number, or 0 if</li>
	<li>there is one or more chars in the string b that is not 0 or 1</li>
	<li>b is NULL</li>
</p>
<h2>1. 1</h2>
<p>Write a function that prints the binary representation of a number.
	<li>Prototype: void print_binary(unsigned long int n)</li>
	<li>You are not allowed to use arrays</li>
	<li>You are not allowed to use malloc</li>
	<li>You are not allowed to use the % or / operators</li>
</p>
<h2>2. 10</h2>
<p>Write a function that returns the value of a bit at a given index.

	<li>Prototype: int get_bit(unsigned long int n, unsigned int index);</li>
	<li>where index is the index, starting from 0 of the bit you want to get</li>
	<li>Returns: the value of the bit at index index or -1 if an error occured</li>
</p>
<h2>3. 11</h2>
<p>Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred
Write a function that adds a new node at the end of a listint_t list.
