#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints bytes information
 * @p: Python Object
 * Return: no return
 */

void print_python_bytes(PyObject *p)
{
	char *str;
	long int size, j, byt;

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

	for (j = 0; j < byt; j++)
		if (str[j] >= 0)
			printf(" %02x", str[j]);
		else
			printf(" %02x", 256 + str[j]);

	printf("\n");
}


/**
 * print_python_list - Prints list information
 * @p: Python Object
 * Return: no return
 */

void print_python_list(PyObject *p)
{
	long int size, j;
	PyListObject *list;
	PyObject *obj;

	size = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (j = 0; j < size; j++)
	{
		obj = ((PyListObject *)p)->ob_item[j];
		printf("Element %ld: %s\n", j, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
