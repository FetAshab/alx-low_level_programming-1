/**
 *print_strings _ prints string.
 *@separator: separates the string.
 *@n: size of the numbers to be passed.
 *
 *returns: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;


va_start(ap,n);
if(separator == NULL)
separator == "";
for(i = 0; i < n; i++)
{
printf("%s",va_arg(ap,char *));
if(i < (n-1))
printf("%s",separator);
}
va_end(ap);


}
