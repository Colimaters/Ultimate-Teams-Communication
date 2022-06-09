/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** Usefull struct
*/

/**
 * \file struct.h
 * \brief File containing all project structures
 * \author Darius.M
 */

#ifndef STRUCT_H_
#define STRUCT_H_

/**
 * \brief Generic structure for double-stranded lists
 *
 * This structure should not be used as is.
 *
 * It's a template.
 */
typedef struct data_s {
    struct data_s *next; /*!< Pointer to the next element */
    struct data_s *prev; /*!< Pointer to the previous element */
}data_t;

/**
 * \brief Generic check structure for double-chained lists
 *
 * This structure should not be used as is.
 *
 * It's a template.
 */
typedef struct all_s {
    data_t *head; /*!< Head of the chained list */
    data_t *tail; /*!< Tail of the chained list */
}all_t;

#endif /* STRUCT_H_ */
