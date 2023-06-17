#include <Python.h>

/**
 * print_python_bytes - this Prints bytes information
 * @p: Python Object
 * Return: no return
 */

void print_python_bytes(PyObject *p)
{
	char *str;
	long int size, k, byt;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying str: %s\n", str);

	if (size >= 10)
		byt = 10;
	else
		byt = size + 1;

	printf("  first %ld bytes:", byt);

	for (k = 0; k < byt; k++)
		if (str[k] >= 0)
			printf(" %02x", str[k]);
		else
			printf(" %02x", 256 + str[k]);

	printf("\n");
}


/**
 * print_python_list - print info about Python lists and Python bytes objects
 * @p: Python Object
 * Return: no return
 */

void print_python_list(PyObject *p)
{
	long int size, k;
	PyListObject *list;
	PyObject *obj;

	size = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (k = 0; k < size; k++)
	{
		obj = ((PyListObject *)p)->ob_item[k];
		printf("Element %ld: %s\n", k, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
