/*
 *  Copyright (C) 2006 George Staikos <staikos@kde.org>
 *  Copyright (C) 2006, 2008, 2009 Apple Inc. All rights reserved.
 *  Copyright (C) 2007-2009 Torch Mobile, Inc.
 *  Copyright (C) 2014 Electronic Arts, Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 *
 */

#ifndef WTF_UNICODE_H
#define WTF_UNICODE_H

#include <wtf/Assertions.h>

// Define platform neutral 8 bit character type (L is for Latin-1).
typedef unsigned char LChar;

//+EAWebKitChange
//2/6/2014
#if USE(ICU_UNICODE) || PLATFORM(EA)
#include <wtf/unicode/icu/UnicodeIcu.h>
//-EAWebKitChange
#elif USE(WCHAR_UNICODE)
#include <wtf/unicode/wchar/UnicodeWchar.h>
#else
#error "Unknown Unicode implementation"
#endif

static_assert(sizeof(UChar) == 2, "UChar must be two bytes!");

#endif // WTF_UNICODE_H