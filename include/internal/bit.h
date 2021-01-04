// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2021 Fredrik Noring
 */

#ifndef INTERNAL_BIT_H
#define INTERNAL_BIT_H

#include "internal/types.h"

/**
 * bitrev16 - reverse 16-bit word
 * @x: word to reverse
 *
 * Return: bit-reversed word
 */
uint16_t bitrev16(uint16_t x);

/**
 * bitpop16 - 16-bit word population count
 * @x: word to count
 *
 * Return: number of bits in @x that are 1
 */
uint16_t bitpop16(uint16_t x);

/**
 * bitcompress16 - compress a 16-bit word
 * @x: word to compress
 * @m: compression selection word
 *
 * Example: Let @x = abcd efgh ijkl mnop, and
 *              @m = 0000 1111 0011 1100, then the result is
 *                   0000 0000 efgh klmn.
 *
 * Result: bits in @x chosen by bits in @m
 */
uint16_t bitcompress16(uint16_t x, uint16_t m);

#endif /* INTERNAL_BIT_H */
