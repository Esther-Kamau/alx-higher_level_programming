#include <Python.h>

void print_python_list(PyObject *p)
{
	PyListObject *list;
	Py_ssize_t size, allocated, i;

	printf("[*] Python list info\n");
	size = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", allocated);

	for (i = 0; i < size; i++)
	{
		PyObject *item = PyList_GetItem(p, i);
		const char *type = item->ob_type->tp_name;

		printf("Element %zd: %s\n", i, type);
	}
}

void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes;
	Py_ssize_t size, i;
	char *string;

	printf("[.] bytes object info\n");

	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	string = PyBytes_AsString(p);

	printf("  size: %zd\n", size);
	printf("  trying string: %s\n", string);

	printf("  first %zd bytes:", size + 1);
	for (i = 0; i < size + 1 && i < 10; i++)
		printf(" %02x", (unsigned char)string[i]);
	printf("\n");
}
