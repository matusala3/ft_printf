#include <stdio.h>
#include <limits.h> // Required for INT_MAX, INT_MIN, UINT_MAX
#include "ft_printf.h" // Make sure this path is correct

int main(void)
{
    // int ret_std, ret_ft;
    // char *null_str = NULL;
    // void *null_ptr = NULL;

    // printf("--- Original Test Case (%%c) ---\n"); // Escaped %
    // int c_val = 98; // Renamed to avoid conflict with a potential char c
    // ret_std = printf("Std: hello: [%c]\n", c_val);
    // ret_ft  = ft_printf("Ft:  hello: [%c]\n", c_val);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Normal case (%%s) ---\n"); // Escaped %
    // ret_std = printf("Std: \"Hello %%s\", \"world\" -> [Hello %s]\n", "world");
    // ret_ft  = ft_printf("Ft:  \"Hello %%s\", \"world\" -> [Hello %s]\n", "world");
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Empty string (%%s) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%s\", \"\" -> [%s]\n", "");
    // ret_ft  = ft_printf("Ft:  \"%%s\", \"\" -> [%s]\n", "");
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- NULL pointer (%%s) ---\n"); // Escaped %
    // // Note: Passing NULL to printf for %s is undefined behavior by the C standard.
    // // It might crash or print (null) depending on the libc implementation.
    // // Your ft_printf should ideally handle this gracefully.
    // printf("Std: \"%%s\", NULL -> Behavior is undefined, often (null) or crash.\n");
    // // ret_std = printf("[%s]\n", null_str); // This line is risky with standard printf.
    // // For actual comparison if your system prints (null):
    // // ret_std = printf("Std: [%s]\n", null_str); // Uncomment carefully to test
    // // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft:  \"%%s\", NULL -> ");
    // fflush(stdout); // Ensure "Ft: ..." prints before ft_printf output
    // ret_ft  = ft_printf("[%s]\n", null_str);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Big numbers (%%d) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%d\", %d -> [%d]\n", INT_MAX, INT_MAX);
    // ret_ft  = ft_printf("Ft:  \"%%d\", %d -> [%d]\n", INT_MAX, INT_MAX);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Negative numbers (%%d) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%d\", %d -> [%d]\n", INT_MIN, INT_MIN);
    // ret_ft  = ft_printf("Ft:  \"%%d\", %d -> [%d]\n", INT_MIN, INT_MIN);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Hex edge (%%x, 0) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%x\", 0 -> [%x]\n", 0);
    // ret_ft  = ft_printf("Ft:  \"%%x\", 0 -> [%x]\n", 0);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Hex edge (%%x, %u) ---\n", UINT_MAX); // Escaped % in text, display UINT_MAX value
    // ret_std = printf("Std: \"%%x\", %u -> [%x]\n", UINT_MAX, UINT_MAX);
    // ret_ft  = ft_printf("Ft:  \"%%x\", %u -> [%x]\n", UINT_MAX, UINT_MAX);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Unsigned edge (%%u) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%u\", %u -> [%u]\n", UINT_MAX, UINT_MAX);
    // ret_ft  = ft_printf("Ft:  \"%%u\", %u -> [%u]\n", UINT_MAX, UINT_MAX);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Pointer edge (%%p, NULL) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%p\", NULL -> [%p]\n", null_ptr);
    // ret_ft  = ft_printf("Ft:  \"%%p\", NULL -> [%p]\n", null_ptr);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // int x = 42;
    // void *ptr = &x;
    // printf("--- Pointer edge (%%p, non-NULL) ---\n"); // Escaped %
    // ret_std = printf("Std: \"%%p\", &x -> [%p]\n", ptr);
    // ret_ft  = ft_printf("Ft:  \"%%p\", &x -> [%p]\n", ptr);
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Percent sign (%%%%) ---\n"); // Escaped %% to print literal %%
    // ret_std = printf("Std: \"%%%%\" -> [%%]\n");
    // ret_ft  = ft_printf("Ft:  \"%%%%\" -> [%%]\n");
    // printf("Std printf returned: %d\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);

    // printf("--- Unknown specifier (%%q) ---\n"); // Escaped %
    // // Behavior of standard printf for unknown specifiers like %q is undefined.
    // // It might print "q", "%q", nothing for it, or warn/error.
    // // We won't try to make standard printf use %q to avoid compiler errors.
    // // We'll just state what we are testing for ft_printf.
    // printf("Std: \"%%q\", 42 -> Standard printf does not support %%q. Behavior varies.\n");
    // // ret_std = printf("[%q]\n", 42); // This line causes the -Wformat-invalid-specifier error
    // // If your compiler/libc prints "q" or "%q" for an invalid specifier and you want to capture that:
    // // ret_std = printf("%%q with 42: %q\n", 42); // This would still likely error.
    // // It's better to just test ft_printf for this non-standard case.
    // ret_std = -1; // Placeholder, as we are not reliably running standard printf with %q

    // printf("Ft:  \"%%q\", 42 -> ");
    // fflush(stdout);
    // ret_ft  = ft_printf("[%q]\n", 42); // Test your ft_printf's behavior
    // printf("Std printf returned: %d (Not directly comparable for %%q)\n", ret_std);
    // printf("Ft  printf returned: %d\n\n", ret_ft);
    // // printf("printf wrote %i\n", printf(" Hello %s", "world"));
    // // printf("ft_printf wrote %i\n", ft_printf(" Hello %s", "world"));
    // printf("Hello this is %w");
    ft_printf("Hello this is %w");
    return (0);
}