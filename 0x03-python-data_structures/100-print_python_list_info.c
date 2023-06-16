#include <python.h>
#include <stdio.h>

/**
 * print_python_list_info - prints python list info
 * @p: PyObject
 * Return: no return
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size;
void print_python_list_info(PyObject *p)
{
	long int size = size = Py_SIZE(p);
	PyListObject *list;
	PyObject *item;
	long int j;

	printf("[*] Size of the Python List = %ld\n", size);

	list = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", list->allocated);

	for (j = 0; j < size; j++)
	{
		item = PyList_GetItem(p, j);
		printf("Element %ld: %s\n", j, Py_TYPE(item)->tp_name);
	}
}
