#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - prints python list info
 * @p: PyObject
 * Return: no return
 */

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int k;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (k = 0; k < size; k++)
		printf("Element %i: %s\n", k, Py_TYPE(obj->ob_item[k])->tp_name);
}
