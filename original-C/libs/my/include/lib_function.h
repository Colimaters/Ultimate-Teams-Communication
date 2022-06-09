/*
** EPITECH PROJECT, 2018
** lib_function.h
** File description:
** prototyped of libs functions
*/

/**
 * \file lib_function.h
 * \brief File containing all the prototypes of the project's lib
 * \author Darius.M
 */

#ifndef LIB_FUNCTION_H_
#define LIB_FUNCTION_H_

#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>

/*############################ Display ############################*/
/** \defgroup Display Functions for displaying
 * \brief Displaying things on stdout or stderr
*  @{
*/
/**
 * \brief Write a character on stdout using the function write()
 * \param [in] c The character to write
 */
void my_putchar(char c);
/**
 * \brief Write a character on stderr using the function write()
 * \param [in] c The character to write
 */
void my_putchar_err(char c);
/**
 * \brief Write a string on stdout
 * \param [in] str String to write on stdout
 * \return SUCCESS else FAILURE in case of error
 */
int my_putstr(const char * const str);
/**
 * \brief Write a string on stderr
 * \param [in] str String to write on stderr
 * \return Always return FAILURE
 */
int my_putstr_err(const char * const str);
/**
 * \brief Write a string on stdout with
 * non-printable character are print in octal base
 * \param [in] str String to write on stdout
 * \return SUCCESS else FAILURE in case of error
 */
int my_putstrnp(const char * const str);
/**
 * \brief Write an str tab on stdout
 * \param [in] tab str tab to write on stdout
 * \return SUCCESS else FAILURE in case of error
 */
int my_puttab(const char * const * const tab);
/**
 * \brief Write a number on stdout
 * \param [in] nb Number to write on stdout
 */
void my_put_nbr(int nb);
/**
 * \brief Write a number on stdout using a base
 * \param [in] nbr Number to write on stdout
 * \param [in] base Base to write the number
 * \return SUCCESS else FAILURE in case of error
 */
int my_putnbr_base(unsigned int nbr, const char * const base);
/** @} */
/*#################################################################*/

/*##################### Memory alloc and free #####################*/
/** \defgroup Memory Functions for memory allocation and free
*  \brief Allocate clearly a pointer and free it properly
*  @{
*/
/**
 * \brief Duplicate a str with a new allocated pointer
 * \param str String to duplicate
 * \return The duplicated string or NULL in case of error
 */
char *my_strdup(const char * const str);
/**
 * \brief Allocate a str and initialize all bits to zero
 * \param size The size to allocate
 * \return The newly allocated pointer or NULL in case of error
 */
char *smalloc(size_t size);
/**
 * \brief Allocate an int pointer and initialize all bits to zero
 * \param size The size to allocate
 * \return The newly allocated pointer or NULL in case of error
 */
int *imalloc(size_t size);
/**
 * \brief Allocate a str pointer and initialize all bits to zero
 * \param size The size to allocate
 * \return The newly allocated pointer or NULL in case of error
 */
char **tmalloc(size_t size);
/**
 * \brief Allows to free several str at the same time
 * \param c Number of str to free
 * \param ... All str to be free
 */
void free_str(unsigned int c, ...);
/**
 * \brief Allows to free several str pointer at the same time
 * \param c Number of str pointer to free
 * \param ... All str pointer to be free
 */
void free_tab(unsigned int c, ...);
/** @} */
/*#################################################################*/

/*########################### Tests ###########################*/
/** \defgroup Testing Functions for testing
*  \brief Testing string, char and other
*  @{
*/
/**
 * \brief Check if the character is a number
 * \param c Character
 * \return Boolean
 */
bool char_isnum(char c);
/**
 * \brief Check if the character is a uppercase letter
 * \param c Character
 * \return Boolean
 */
bool char_isupper(char c);
/**
 * \brief Check if the character is a lowerercase letter
 * \param c Character
 * \return Boolean
 */
bool char_islower(char c);
/**
 * \brief Check if the character is an alphabetical letter
 * \param c Character
 * \return Boolean
 */
bool char_isalpha(char c);
/**
 * \brief Check if the character is alphanumerical
 * \param c Character
 * \return Boolean
 */
bool char_isalphanum(char c);
/**
 * \brief Check if the string is only composed of number
 * \param str String
 * \return Boolean
 */
bool str_isnum(const char * const str);
/**
 * \brief Check if the string is only composed of alphabetical letter
 * \param str String
 * \return Boolean
 */
bool str_isalpha(const char * const str);
/**
 * \brief Check if the string is only composed of alphanumerical character
 * \param str String
 * \return Boolean
 */
bool str_isalphanum(const char * const str);
/**
 * \brief Check if 2 strings are stritcly identical
 * \param stro String one
 * \param strt  String two
 * \return Boolean
 */
bool str_compare(const char * const stro, const char * const strt);
/** @} */
/*#################################################################*/

/*########################### Modify str ##########################*/
/** \defgroup Modify_str Functions for modify str
*  \brief Modify string
*  @{
*/
/**
 * \brief Reverse a string in a newly allocated string
 * \param str String to reverse
 * \return String correctly allocated
 */
char *my_revstr(const char * const str);
/**
 * \brief Copy a string to another
 * \param to_replace Allocated string whose content is to be replaced
 * \param src String whose contents are to be copied
 * \return The newly allocated string
 */
char *my_strcpy(char *to_replace, const char * const src);
/**
 * \brief Concatenate two string into a newly allocated string
 * \param stro String one
 * \param strt String two
 * \param flag 1 == free(stro) / 2 == free(strt) / 3 == free_str(stro, strt)
 * \return The newly allocated string
 */
char *my_strcat(char *stro, char *strt, short flag);
/** @} */
/*#################################################################*/

/*########################### Conversion ##########################*/
/** \defgroup Conversion Functions for convert
*  \brief Converting different things
*  @{
*/
/**
 * \brief Get a the first number in a string (consider the negatives)
 * \param str String with a number inside
 * \return Number in long format
 */
long my_getnbr(const char * const str);
/**
 * \brief Take a string represent ONLY a number and convert it to an int
 * \param str String with ONLY a number
 * \return Number in int format
 */
int str_to_int(const char * const str);
/**
 * \brief Take a number and convert it to a string
 * \param nb Number
 * \return String correctly allocated
 */
char *int_to_str(int nb);
/**
 * \brief Concatenate a tab of string to a unique string
 * \param tab Tab of string
 * \return String correctly allocated
 */
char *tab_to_str(const char * const * const tab);
/** @} */
/*#################################################################*/

/*########################## Other utils ##########################*/
/** \defgroup Others Other useful functions
*  \brief Different useful functions
*  @{
*/
/**
 * \brief Count the number of character in a string
 * \param str The string
 * \return The number of character
 */
size_t my_strlen(const char * const str);
/**
 * \brief Count the number of line in a tab of string
 * \param tab The tab of string
 * \return The number of lines
 */
size_t my_tablen(const char * const * const tab);
/**
 * \brief Get part of a string
 * \param s Reference String
 * \param sep The separator character
 * \param pos The position of the sub-string to get
 * \return The sub-string or NULL in case of error
 */
char *get_elem_str(const char * const s, char sep, int pos);
/**
 * \brief Get a line from a file descriptor
 * \param fd The file descriptor
 * \param flag if == 1 : remove the '\\n' from the line
 * \return An allocated string that contains the line of the fd or NULL in
 * case of error
 */
char *gnl(int fd, short flag);
/**
 * \brief Produce a tab of string with a reference string with separator
 * \param str Reference String
 * \param sep The separator character
 * \return The tab of string allocated
 */
char **stwa(const char * const str, char sep);
/**
 * \brief Get all the content of a file
 * \param file The path to the file
 * \return An allocated str that contains the content of the file or NULL in
 * case of error
 */
char *get_content_file(const char * const file);
/** @} */
/*#################################################################*/

/*######################## Printf functions #######################*/
/**
 * \brief  String in printf style (flag -> '%%')
 * \code
 * CODE   : my_printf("A string -> %s, a number -> %d", "STR", 42);
 * OUTPUT : A str -> STR, a number -> 42
 * \endcode
 * \param [in] str String in printf style (flag -> '%%t' for print char **)
 * \param [in] ... Parameters corresponding to the flag in str
 *
 *  The functions that printf uses -> \ref Printf
 * \return SUCCESS else FAILURE in case of error
 */
int my_printf(const char * const str, ...);

/** \defgroup Printf Function for printf()
*  \brief These functions are only for printf.
*  Don't use it !
*  @{
*/
/** \brief Only for printf */
void p_str(va_list ap);
/** \brief Only for printf */
void p_strnp(va_list ap);
/** \brief Only for printf */
void p_char(va_list ap);
/** \brief Only for printf */
void p_tab(va_list ap);
/** \brief Only for printf */
void p_nbr(va_list ap);
/** \brief Only for printf */
void p_prct(va_list ap);
/** \brief Only for printf */
void p_oct(va_list ap);
/** \brief Only for printf */
void p_dec(va_list ap);
/** \brief Only for printf */
void p_hexp(va_list ap);
/** \brief Only for printf */
void p_hexg(va_list ap);
/** \brief Only for printf */
void p_bin(va_list ap);
/** \brief Only for printf */
void p_ptr(va_list ap);
/** @} */
/*#################################################################*/
#endif /* LIB_FUNCTION_H_ */