///////////////////////////////////////////////////////////////////////////////
//
/// \file       raw_common.h
/// \brief      Stuff shared between raw encoder and raw decoder
//
//  Copyright (C) 2007 Lasse Collin
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef LZMA_RAW_COMMON_H
#define LZMA_RAW_COMMON_H

#include "common.h"

extern lzma_ret lzma_raw_coder_init(lzma_next_coder *next,
		lzma_allocator *allocator, const lzma_options_filter *options,
		lzma_init_function (*get_function)(lzma_vli id),
		bool is_encoder);

#endif
