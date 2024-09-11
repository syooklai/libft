#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void print_memory(const void *ptr, size_t size) {
    const unsigned char *p = (const unsigned char *)ptr;
    for (size_t i = 0; i < size; ++i) {
        printf("0x%02X ", p[i]);
    }
    printf("\n");
}
int main (void)
 {
 /*Test int ft_isalpha(int c)*/
    printf("\n/******Test int ft_isalpha(int c)******/\n");
     printf("Test ft_isalpha(64)  =>  %d\n", ft_isalpha(64));    
     printf("Test ft_isalpha(65)   =>  %d\n", ft_isalpha(65));
     printf("Test ft_isalpha(90)  =>  %d\n", ft_isalpha(90));
     printf("Test ft_isalpha(91)  =>  %d\n", ft_isalpha(91));
     printf("Test ft_isalpha(96)  =>  %d\n", ft_isalpha(96));
     printf("Test ft_isalpha(97)  =>  %d\n", ft_isalpha(97));
     printf("Test ft_isalpha(122)  =>  %d\n", ft_isalpha(122));
     printf("Test ft_isalpha(123)  =>  %d\n", ft_isalpha(123));
     printf("Test ft_isalpha('@')  =>  %d\n", ft_isalpha('@'));
     printf("Test ft_isalpha('A')  =>  %d\n", ft_isalpha('A'));
     printf("Test ft_isalpha('Z')  =>  %d\n", ft_isalpha('Z'));
     printf("Test ft_isalpha('[')  =>  %d\n", ft_isalpha('['));
     printf("Test ft_isalpha('`')  =>  %d\n", ft_isalpha('`'));
     printf("Test ft_isalpha('a')  =>  %d\n", ft_isalpha('a'));
     printf("Test ft_isalpha('z')  =>  %d\n", ft_isalpha('z'));
     printf("Test ft_isalpha('{')  =>  %d\n", ft_isalpha('{'));
     printf("Test ft_isalpha('0')  =>  %d\n", ft_isalpha('0'));
     printf("Test ft_isalpha('1')  =>  %d\n", ft_isalpha('1'));
     printf("Test ft_isalpha(' ')  =>  %d\n", ft_isalpha(' '));
     printf("Test ft_isalpha('%%')  =>  %d\n", ft_isalpha('%'));
     printf("Test ft_isalpha('9')  =>  %d\n", ft_isalpha('9'));
     printf("Test ft_isalpha('/')  =>  %d\n", ft_isalpha('/'));
 /*Test int ft_isdigit(int c)*/
    printf("\n/******Test int ft_isdigit(int c)******/\n");
     printf("Test ft_isdigit(64)  =>  %d\n",  ft_isdigit(64));    
     printf("Test ft_isdigit(65)   =>  %d\n", ft_isdigit(65));
     printf("Test ft_isdigit(90)  =>  %d\n",  ft_isdigit(90));
     printf("Test ft_isdigit(91)  =>  %d\n",  ft_isdigit(91));
     printf("Test ft_isdigit(96)  =>  %d\n",  ft_isdigit(96));
     printf("Test ft_isdigit(97)  =>  %d\n",  ft_isdigit(97));
     printf("Test ft_isdigit(122)  =>  %d\n", ft_isdigit(122));
     printf("Test ft_isdigit(123)  =>  %d\n", ft_isdigit(123));
     printf("Test ft_isdigit('@')  =>  %d\n", ft_isdigit('@'));
     printf("Test ft_isdigit('A')  =>  %d\n", ft_isdigit('A'));
     printf("Test ft_isdigit('Z')  =>  %d\n", ft_isdigit('Z'));
     printf("Test ft_isdigit('[')  =>  %d\n", ft_isdigit('['));
     printf("Test ft_isdigit('`')  =>  %d\n", ft_isdigit('`'));
     printf("Test ft_isdigit('a')  =>  %d\n", ft_isdigit('a'));
     printf("Test ft_isdigit('z')  =>  %d\n", ft_isdigit('z'));
     printf("Test ft_isdigit('{')  =>  %d\n", ft_isdigit('{'));
     printf("Test ft_isdigit('0')  =>  %d\n", ft_isdigit('0'));
     printf("Test ft_isdigit('1')  =>  %d\n", ft_isdigit('1'));
     printf("Test ft_isdigit('9')  =>  %d\n", ft_isdigit('9'));
     printf("Test ft_isdigit(' ')  =>  %d\n", ft_isdigit(' '));
     printf("Test ft_isdigit('%%')  =>  %d\n",ft_isdigit('%'));
     printf("Test ft_isdigit('8')  =>  %d\n", ft_isdigit('8'));
     printf("Test ft_isdigit('9')  =>  %d\n", ft_isdigit('9'));
     printf("Test ft_isdigit('/')  =>  %d\n", ft_isdigit('/'));
/*Test int ft_isalnum(int c)*/
    printf("\n/******Test int ft_isalnum(int c)******/\n");
     printf("Test ft_isalnum(64)  =>  %d\n",  ft_isalnum(64));    
     printf("Test ft_isalnum(65)   =>  %d\n", ft_isalnum(65));
     printf("Test ft_isalnum(90)  =>  %d\n",  ft_isalnum(90));
     printf("Test ft_isalnum(91)  =>  %d\n",  ft_isalnum(91));
     printf("Test ft_isalnum(96)  =>  %d\n",  ft_isalnum(96));
     printf("Test ft_isalnum(97)  =>  %d\n",  ft_isalnum(97));
     printf("Test ft_isalnum(122)  =>  %d\n", ft_isalnum(122));
     printf("Test ft_isalnum(123)  =>  %d\n", ft_isalnum(123));
     printf("Test ft_isalnum('@')  =>  %d\n", ft_isalnum('@'));
     printf("Test ft_isalnum('A')  =>  %d\n", ft_isalnum('A'));
     printf("Test ft_isalnum('Z')  =>  %d\n", ft_isalnum('Z'));
     printf("Test ft_isalnum('[')  =>  %d\n", ft_isalnum('['));
     printf("Test ft_isalnum('`')  =>  %d\n", ft_isalnum('`'));
     printf("Test ft_isalnum('a')  =>  %d\n", ft_isalnum('a'));
     printf("Test ft_isalnum('z')  =>  %d\n", ft_isalnum('z'));
     printf("Test ft_isalnum('{')  =>  %d\n", ft_isalnum('{'));
     printf("Test ft_isalnum('0')  =>  %d\n", ft_isalnum('0'));
     printf("Test ft_isalnum('1')  =>  %d\n", ft_isalnum('1'));
     printf("Test ft_isalnum('9')  =>  %d\n", ft_isalnum('9'));
     printf("Test ft_isalnum(' ')  =>  %d\n", ft_isalnum(' '));
     printf("Test ft_isalnum('%%')  =>  %d\n",ft_isalnum('%'));
     printf("Test ft_isalnum('8')  =>  %d\n", ft_isalnum('8'));
     printf("Test ft_isalnum('9')  =>  %d\n", ft_isalnum('9'));
     printf("Test ft_isalnum('/')  =>  %d\n", ft_isalnum('/'));
/*Test int ft_isascii(int c)*/
    printf("\n/******Test int ft_isascii(int c)******/\n");
     printf("Test ft_isascii(64)  =>  %d\n",  ft_isascii(64));    
     printf("Test ft_isascii(65)   =>  %d\n", ft_isascii(65));
     printf("Test ft_isascii(90)  =>  %d\n",  ft_isascii(90));
     printf("Test ft_isascii(91)  =>  %d\n",  ft_isascii(91));
     printf("Test ft_isascii(96)  =>  %d\n",  ft_isascii(96));
     printf("Test ft_isascii(97)  =>  %d\n",  ft_isascii(97));
     printf("Test ft_isascii(122)  =>  %d\n", ft_isascii(122));
     printf("Test ft_isascii(123)  =>  %d\n", ft_isascii(123));
     printf("Test ft_isascii('@')  =>  %d\n", ft_isascii('@'));
     printf("Test ft_isascii('A')  =>  %d\n", ft_isascii('A'));
     printf("Test ft_isascii('Z')  =>  %d\n", ft_isascii('Z'));
     printf("Test ft_isascii('[')  =>  %d\n", ft_isascii('['));
     printf("Test ft_isascii('`')  =>  %d\n", ft_isascii('`'));
     printf("Test ft_isascii('a')  =>  %d\n", ft_isascii('a'));
     printf("Test ft_isascii('z')  =>  %d\n", ft_isascii('z'));
     printf("Test ft_isascii('{')  =>  %d\n", ft_isascii('{'));
     printf("Test ft_isascii('0')  =>  %d\n", ft_isascii('0'));
     printf("Test ft_isascii('1')  =>  %d\n", ft_isascii('1'));
     printf("Test ft_isascii('9')  =>  %d\n", ft_isascii('9'));
     printf("Test ft_isascii(' ')  =>  %d\n", ft_isascii(' '));
     printf("Test ft_isascii('%%')  =>  %d\n",ft_isascii('%'));
     printf("Test ft_isascii('8')  =>  %d\n", ft_isascii('8'));
     printf("Test ft_isascii('9')  =>  %d\n", ft_isascii('9'));
     printf("Test ft_isascii('/')  =>  %d\n", ft_isascii('/'));
     printf("Test ft_isascii(128)  =>  %d\n", ft_isascii(128));
     printf("Test ft_isascii(129)  =>  %d\n", ft_isascii(129));
 /*Test int ft_isprint(int c)*/
    printf("\n/******Test int ft_isprint(int c)******/\n");
        printf("Test ft_isprint(31 => %d\n)", ft_isprint(31));
        printf("Test ft_isprint(32 => %d\n)", ft_isprint(32));
        printf("Test ft_isprint(33 => %d\n)", ft_isprint(33));
        printf("Test ft_isprint(34 => %d\n)", ft_isprint(34));
        printf("Test ft_isprint(125 => %d\n)", ft_isprint(125));
        printf("Test ft_isprint(126 => %d\n)", ft_isprint(126));
        printf("Test ft_isprint(127 => %d\n)", ft_isprint(127));
        printf("Test ft_isprint(128 => %d\n)", ft_isprint(128));
 /*Test size_t ft_strlen(*s)*/
    printf("\n/******Test size_t ft_strlen(*s)******/\n");
    printf("Test size_t ft_strlen(const char *s) => %ld\n", ft_strlen("123456789"));
    printf("Test size_t ft_strlen(const char *s) => %ld\n", ft_strlen("ABCDEFGHI"));
    printf("Test size_t ft_strlen(const char *s) => %ld\n", ft_strlen("123456789ABCDEFGHI"));
    printf("Test size_t ft_strlen(const char *s) => %ld\n", ft_strlen("123456789ABCDEFGHIabcdefghi"));
 /*Test void *ft_memset(void *b, int c, size_t len)*/
    printf("\n/******Test void *ft_memset(void *b, int c, size_t len)******/\n");

    size_t size = 10;
    unsigned char buffer2[size];
    ft_memset(buffer2, 0xAA, size);
        printf("Buffer contents after ft_memset:\n");
    for (size_t i = 0; i < size; i++) {
        printf("0x%02X ", buffer2[i]);
    }
    printf("\n");
    ft_memset(buffer2, 0xFF, size);
    for (size_t i = 0; i < size; i++) {
        printf("0x%02x ", buffer2[i]);
    }
    printf("\n");
 /*Test void    ft_bzero(void *s, size_t n)*/
    printf("\n/******Test void    ft_bzero(void *s, size_t n)******/\n");
    printf("Buffer contents before bzero:\n");
    print_memory(buffer2, size);
    // Set the memory to zero
    ft_bzero(buffer2, size);

    // Print the contents of the buffer after bzero
    printf("Buffer contents after bzero:\n");
    print_memory(buffer2, size);
 /*Test *ft_memcpy(void *dst, const void *src, size_t n)*/
    printf("\n/******Test *ft_memcpy(void *dst, const void *src, size_t n)******/\n");
    unsigned char dst[size];
    unsigned char src[size];
    ft_memset(src, 0xAA, size);
    ft_memset(dst, 0xFF, size);
    printf("print before src \n");
    print_memory(src, size);   
    printf("print before dst \n");
    print_memory(dst,size);
    ft_memcpy(dst, src, size);   
    printf("print After src \n");
    print_memory(src,size);   
    printf("print After dst \n");
    print_memory(dst,size);
 /*Test void *ft_memmove(void *dest, const void *src, size_t n)*/
    printf("\n/******Test void *ft_memmove(void *dest, const void *src, size_t n)******/\n");
    char buffer1[20] = "Hello, World!";
    
    // Overlapping memory regions example
    printf("Before memmove: %s\n", buffer1);
    
    // Move a part of the string within the same buffer
    // This will move "World!" to the start of the buffer
    ft_memmove(buffer1 + 7, buffer1, 6);  // Move "Hello," (6 bytes) to start from buffer + 7
    
    printf("After memmove: %s\n", buffer1);

 /*Test size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);*/
    printf("\n/******Test size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);******/\n");
    // Test case 1: Buffer large enough
    const char *source = "Hello, world!";
    size_t len = ft_strlcpy(buffer1, source, sizeof(buffer1));
    printf("Test 1: Buffer large enough \n");
    printf("Destination Buffer1: %s\n", buffer1);
    printf("Length of source: %zu\n", len);
    printf("Expected Length: %zu\n", ft_strlen(source));

    // Test case 2: Buffer too small
    char small_buffer[10];
    len = ft_strlcpy(small_buffer, source, sizeof(small_buffer));
    printf("\nTest 2: Buffer1 too small\n");
    printf("Destination Buffer1: %s\n", small_buffer);
    printf("Length of source: %zu\n", len);
    printf("Expected Length: %zu\n", ft_strlen(source));

    // Test case 3: Buffer1 size 0
    char empty_buffer[1];
    len = ft_strlcpy(empty_buffer, source, sizeof(empty_buffer));
    printf("\nTest 3: Buffer1 size 0\n");
    printf("Destination Buffer: %s\n", empty_buffer);  // Should be an empty string
    printf("Length of source: %zu\n", len);
    printf("Expected Length: %zu\n", ft_strlen(source));

/*Test size_t    ft_strlcat(char *dst, const char *src, size_t dstsize);*/
    printf("\n/******Test size_t    ft_strlcat(char *dst, const char *src, size_t dstsize);******/\n");
    char buffer[20];
    // Test Case 1
    strcpy(buffer, "Hello, ");
    assert(ft_strlcat(buffer, "World!", sizeof(buffer)) == 13);
    assert(strcmp(buffer, "Hello, World!") == 0);

    // Test Case 2
    strcpy(buffer, "Hello, ");
    assert(ft_strlcat(buffer, "World!", 10) == 13);
    assert(strcmp(buffer, "Hello, Wo") == 0);

    // Test Case 3
    strcpy(buffer, "Hello, ");
    assert(ft_strlcat(buffer, "World!", 14) == 13);
    assert(strcmp(buffer, "Hello, World!") == 0);

    // Test Case 4
    strcpy(buffer, "Hello, ");
    assert(ft_strlcat(buffer, "", sizeof(buffer)) == 7);
    assert(strcmp(buffer, "Hello, ") == 0);

    // Test Case 5
    strcpy(buffer, "");
    assert(ft_strlcat(buffer, "World!", sizeof(buffer)) == 6);
    printf("%d\n", strcmp(buffer, "World!"));
    assert(strcmp(buffer, "World!") == 0);

    // Test Case 6
    strcpy(buffer, "Hello, World!");
    printf("%zu\n", ft_strlcat(buffer, "!", sizeof(buffer)));
 //   assert(ft_strlcat(buffer, "!", sizeof(buffer)) == 14);
    printf("%d\n", strcmp(buffer, "Hello, World!"));
 //   assert(strcmp(buffer, "Hello, World!") == 0);

    // Test Case 7
    strcpy(buffer, "Hello, ");
    assert(ft_strlcat(buffer, "World!", 8) == 13);
    printf("%s\n", buffer);
    printf("%d\n", strcmp(buffer, "Hello, W"));
//    assert(strcmp(buffer, "Hello, W") == 0);

    // Test Case 8
    strcpy(buffer, "Hello, ");
//    assert(ft_strlcat(buffer, "World!", 0) == 13);
//    printf("%s\n", buffer);

//    assert(strcmp(buffer, "Hello, ") == 0);

    // Test Case 9
    // Handling NULL source might require additional error checking
    // For simplicity, this example does not handle NULL source

/*Test int    ft_toupper(int c);*/
    printf("\n/******Test int    ft_toupper(int c);******/\n");

    char str_toupper[] = "Hello, World!";
    
    // Print original string
    printf("Original string: %s\n", str_toupper);

    // Convert each character to uppercase
    for (int i = 0; str_toupper[i] != '\0'; i++) {
        str_toupper[i] = ft_toupper((unsigned char)str_toupper[i]); // Convert to uppercase
    }

    // Print the modified string
    printf("Uppercase string: %s\n", str_toupper);


//*Test int    ft_tolower(int c);*/
    printf("\n/******Test int    ft_tolower(int c);******/\n");
        char src_tolower[] = "ABCDEFGhijklMNOP1234aaaBBB";
    printf("Before Lowercase = %s\n", src_tolower);
     for (int i = 0; src_tolower[i] != '\0'; i++) {
        src_tolower[i] = ft_tolower((unsigned char)src_tolower[i]); // Convert to lowercase
    }
 
    printf("After Lowercase  = %s\n", src_tolower);
 
 //*Test char *ft_strchr(const char *s, int c);*/
    printf("\n/******Test char *ft_strchr(const char *s, int c);******/\n");
    const char *string = "Hello, world!";
    char *result;

    // Find the first occurrence of 'w'
    result = ft_strchr(string, 'w');
    if (result) {
        printf("Found '%c' at position: %ld  %s\n", 'w', result - string, result);
    } else {
        printf("Character not found.\n");
    }

    // Find the first occurrence of 'z' (not in the string)
    result = strchr(string, 'z');
    if (result) {
        printf("Found '%c' at position: %ld\n", 'z', result - string);
    } else {
        printf("Character not found.\n");
    }

 //*Test char *ft_strrchr(const char *s, int c);*/
    printf("\n/******Test char *ft_strrchr(const char *s, int c);******/\n");
    const char *str = "Hello, world!";
    result = ft_strrchr(str, 'o');
    if (result) {
        printf("Last occurrence of 'o': %s\n", result);
    } else {
        printf("'o' not found.\n");
    } 
 //*Test int ft_strncmp(const char *s1, const char *s2, size_t n);*/
    printf("\n/******Test int ft_strncmp(const char *s1, const char *s2, size_t n);******/\n");
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, universe!";
    const char *str3 = "Hello, world!";
    const char *str4 = "Hello, ";
    const char *str5 = "Hello, world!";

    // Test 1: Compare first 5 characters of identical strings
    int result1 = ft_strncmp(str1, str3, 5);
    printf("ft_strncmp(str1, str3, 5) = %d\n", result1);

    // Test 2: Compare first 5 characters of different strings
    int result2 = ft_strncmp(str1, str2, 5);
    printf("ft_strncmp(str1, str2, 5) = %d\n", result2);

    // Test 3: Compare first 13 characters of identical strings
    int result3 = ft_strncmp(str1, str5, 13);
    printf("ft_strncmp(str1, str5, 13) = %d\n", result3);

    // Test 4: Compare first 7 characters where the strings are different
    int result4 = ft_strncmp(str1, str2, 8);
    printf("ft_strncmp(str1, str2, 8) = %d\n", result4);

    // Test 5: Compare a substring of str1 with str4
    int result5 = ft_strncmp(str1, str4, 7);
    printf("ft_strncmp(str1, str4, 7) = %d\n", result5);

    // Test 6: Compare when n is larger than the length of the strings
    int result6 = ft_strncmp(str1, str2, 50);
    printf("ft_strncmp(str1, str2, 50) = %d\n", result6);

 //*Test void *ft_memchr(const void *s, int c, size_t n);*/
    printf("\n/******Test void *ft_memchr(const void *s, int c, size_t n);******/\n");
    const char buf[] = "Hello, world!";
    //const char *result;

    // Test 1: Find character 'o' in the buf
    result = ft_memchr(buf, 'o', sizeof(buf));
    if (result) {
        printf("ft_memchr: Found 'o' at position %ld\n", result - buf);
        printf("result = %s\n", result);
    } else {
        printf("ft_memchr: 'o' not found.\n");
    }

    // Test 2: Find character 'w' in the buf
    result = ft_memchr(buf, 'w', sizeof(buf));
    if (result) {
        printf("ft_memchr: Found 'w' at position %ld\n", result - buf);
        printf("result = %s\n", result);
    } else {
        printf("ft_memchr: 'w' not found.\n");
    }

    // Test 3: Find character 'x' in the buf (not present)
    result = ft_memchr(buf, 'x', sizeof(buf));
    if (result) {
        printf("ft_memchr: Found 'x' at position %ld\n", result - buf);
    } else {
        printf("ft_memchr: 'x' not found.\n");
        printf("result = %s\n", result);
    }

    // Test 4: Search for character in an empty buffer
    char empty_buf[] = "";
    result = ft_memchr(empty_buf, 'H', sizeof(empty_buf));
    if (result) {
        printf("ft_memchr: Found 'H' in empty buffer.\n");
    } else {
        printf("ft_memchr: 'H' not found in empty buffer.\n");
        printf("result = %s\n", result);
    }

 //*Test vint ft_memcmp(const void *s1, const void *s2, size_t n);*/
    printf("\n/******Test int ft_memcmp(const void *s1, const void *s2, size_t n);******/\n");
    const char s1[] = "Hello, world!";
    const char s2[] = "Hello, world!";

    int resultmemcmp;
    resultmemcmp = ft_memchr(s1, s2, 3);
    print("ft_memcmp = %d\n", resultmemcmp);
 //   // Test 1: Compare two identical blocks
 //   resultmemcmp = ft_memcmp(block1, block2, 3);
 //   printf("ft_memcmp: Comparing block1 and block2: %d\n", resultmemcmp);
//
 //   // Test 2: Compare two different blocks
 //   resultmemcmp = ft_memcmp(block1, block3, sizeof(block1));
 //   printf("ft_memcmp: Comparing block1 and block3: %d\n", resultmemcmp);
//
 //   // Test 3: Compare different blocks with different lengths
 //   resultmemcmp = ft_memcmp(block1, block5, sizeof(block5));
 //   printf("ft_memcmp: Comparing block1 and block5: %d\n", resultmemcmp);
//
 //   // Test 4: Compare blocks where the difference is at the start
 //   resultmemcmp = ft_memcmp(block1, block4, sizeof(block1));
 //   printf("ft_memcmp: Comparing block1 and block4: %d\n", resultmemcmp);



   return(0);


}