/*
 * Ntdll Unix interface
 *
 * Copyright (C) 2020 Alexandre Julliard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __NTDLL_UNIXLIB_H
#define __NTDLL_UNIXLIB_H

#include "wine/unixlib.h"

struct _DISPATCHER_CONTEXT;

struct load_so_dll_params
{
    UNICODE_STRING              nt_name;
    void                      **module;
};

struct unwind_builtin_dll_params
{
    ULONG                       type;
    struct _DISPATCHER_CONTEXT *dispatch;
    CONTEXT                    *context;
};

struct steamclient_setup_trampolines_params
{
    HMODULE src_mod;
    HMODULE tgt_mod;
};

struct debugstr_pc_args
{
    void *pc;
    char *buffer;
    unsigned int size;
};

enum ntdll_unix_funcs
{
    unix_load_so_dll,
    unix_unwind_builtin_dll,
    unix_system_time_precise,
    unix_steamclient_setup_trampolines,
    unix_is_pc_in_native_so,
    unix_debugstr_pc,
};

extern unixlib_handle_t ntdll_unix_handle;

#define NTDLL_UNIX_CALL( func, params ) __wine_unix_call_dispatcher( ntdll_unix_handle, unix_ ## func, params )

#define WINE_BACKTRACE_LOG_ON() WARN_ON(seh)

#define WINE_BACKTRACE_LOG(args...) do { \
        WARN_(seh)("backtrace: " args); \
    } while (0)

#endif /* __NTDLL_UNIXLIB_H */
