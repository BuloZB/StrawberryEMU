/*
 * Copyright (C) 2008-2011 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STRAWBERRY_DEFINE_H
#define STRAWBERRY_DEFINE_H

#include <sys/types.h>

#include <ace/Basic_Types.h>
#include <ace/ACE_export.h>

#include "CompilerDefs.h"

#define STRAWBERRY_LITTLEENDIAN 0
#define STRAWBERRY_BIGENDIAN    1

#if !defined(STRAWBERRY_ENDIAN)
#  if defined (ACE_BIG_ENDIAN)
#    define STRAWBERRY_ENDIAN STRAWBERRY_BIGENDIAN
#  else //ACE_BYTE_ORDER != ACE_BIG_ENDIAN
#    define STRAWBERRY_ENDIAN STRAWBERRY_LITTLEENDIAN
#  endif //ACE_BYTE_ORDER
#endif //STRAWBERRY_ENDIAN

#if PLATFORM == PLATFORM_WINDOWS
#  define STRAWBERRY_PATH_MAX MAX_PATH
#  ifndef DECLSPEC_NORETURN
#    define DECLSPEC_NORETURN __declspec(noreturn)
#  endif //DECLSPEC_NORETURN
#  ifndef DECLSPEC_DEPRECATED
#    define DECLSPEC_DEPRECATED __declspec(deprecated)
#  endif //DECLSPEC_DEPRECATED
#else //PLATFORM != PLATFORM_WINDOWS
#  define STRAWBERRY_PATH_MAX PATH_MAX
#  define DECLSPEC_NORETURN
#  define DECLSPEC_DEPRECATED
#endif //PLATFORM

#if !defined(COREDEBUG)
#  define STRAWBERRY_INLINE inline
#else //COREDEBUG
#  if !defined(STRAWBERRY_DEBUG)
#    define STRAWBERRY_DEBUG
#  endif //STRAWBERRY_DEBUG
#  define STRAWBERRY_INLINE
#endif //!COREDEBUG

#if COMPILER == COMPILER_GNU
#  define ATTR_NORETURN __attribute__((noreturn))
#  define ATTR_PRINTF(F, V) __attribute__ ((format (printf, F, V)))
#  define ATTR_DEPRECATED __attribute__((deprecated))
#else //COMPILER != COMPILER_GNU
#  define ATTR_NORETURN
#  define ATTR_PRINTF(F, V)
#  define ATTR_DEPRECATED
#endif //COMPILER == COMPILER_GNU

typedef ACE_INT64 int64;
typedef ACE_INT32 int32;
typedef ACE_INT16 int16;
typedef ACE_INT8 int8;
typedef ACE_UINT64 uint64;
typedef ACE_UINT32 uint32;
typedef ACE_UINT16 uint16;
typedef ACE_UINT8 uint8;

#endif //STRAWBERRY_DEFINE_H
