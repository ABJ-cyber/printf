#include "main.h"

/**
 * _printf - implementation of printf
 * @format: the format string that determines the format
 *
 * Return: the number of bytes of format string, else -1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int n_bytes;

	if (!format)
		return (-1);

	va_start(ap, format);
	n_bytes = _vprintf(format, ap);
	va_end(ap);

	return (n_bytes);
}
