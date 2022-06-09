/*
** EPITECH PROJECT, 2018
** listing_function.h
** File description:
** prototyped of all functions
*/

/**
 * \file listing_function.h
 * \brief file including all the other headers
 * with all the prototypes of the project's functions
 * as well as all the necessary inclusions.
 * \author Darius.M
 */

#ifndef LISTING_FUNCTION_H_
#define LISTING_FUNCTION_H_

#include "macro.h"
#include "struct.h"
#include "lib_function.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//Program

//Info
/**
 * \brief If str is equal to "-h" or "--help" displays the program help.
 * \param [in] str Corresponds to the 1st argument of the program (av [1])
 * \return exit(SUCCESS) if help is displayed otherwise return SUCCESS
 */
int info(char *str);
#endif /* LISTING_FUNCTION_H_ */
