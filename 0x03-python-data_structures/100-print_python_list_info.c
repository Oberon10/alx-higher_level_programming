#include <Python.h>


/**

 * print_python_list_info - Prints basic info about Python lists.

 * @p: A PyObject list.

 */

void print_python_list_info(PyObject *p)

{

        int size, alloc, i;

        PyObject *obj;


        size = Py_SIZE(p);

        alloc = ((PyListObject *)p)->allocated;


        printf("[*] Size of the Python List = %d\n", size);

        printf("[*] Allocated = %d\n", alloc);


        for (i = 0; i < size; i++)

        {

                printf("Element %d: ", i);


                obj = PyList_GetItem(p, i);

                printf("%s\n", Py_TYPE(obj)->tp_name);

        }

#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints python list info
 * @p: PyObject
 * Return: no return
 */
void print_python_list_info(PyObject *p)
{
	long int size = size = Py_SIZE(p);
	PyListObject *list;
	PyObject *item;
	long int x;

	printf("[*] Size of the Python List = %ld\n", size);

	list = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", list->allocated);

	for (x = 0; x < size; x++)
	{
		item = PyList_GetItem(p, x);
		printf("Element %ld: %s\n", x, Py_TYPE(item)->tp_name);
	}
}
