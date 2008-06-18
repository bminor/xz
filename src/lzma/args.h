///////////////////////////////////////////////////////////////////////////////
//
/// \file       args.h
/// \brief      Argument parsing
//
//  Copyright (C) 2007 Lasse Collin
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef ARGS_H
#define ARGS_H

#include "private.h"


enum tool_mode {
	MODE_COMPRESS,
	MODE_DECOMPRESS,
	MODE_TEST,
	MODE_LIST,
};

enum header_type {
	HEADER_AUTO,
	HEADER_NATIVE,
	HEADER_ALONE,
	// HEADER_GZIP,
};


extern char *opt_suffix;

extern char *opt_files_name;
extern char opt_files_split;
extern FILE *opt_files_file;

extern bool opt_stdout;
extern bool opt_force;
extern bool opt_keep_original;
extern bool opt_preserve_name;
// extern bool opt_recursive;
extern enum tool_mode opt_mode;
extern enum header_type opt_header;

extern lzma_check_type opt_check;
extern lzma_options_filter opt_filters[8];

extern const char *stdin_filename;

extern char **parse_args(int argc, char **argv);

#endif
