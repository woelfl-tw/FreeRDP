/**
 * WinPR: Windows Portable Runtime
 * TCHAR
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WINPR_TCHAR_H
#define WINPR_TCHAR_H

#include <winpr/crt.h>
#include <winpr/wtypes.h>

#ifdef _WIN32

#include <tchar.h>

#else

#ifdef UNICODE
typedef WCHAR		TCHAR;
#define _tprintf	wprintf
#define _tcsdup		_wcsdup
#define _tcscmp		wcscmp
#else
typedef CHAR		TCHAR;
#define _tprintf	printf
#define _tcsdup		_strdup
#define _tcscmp		strcmp
#endif

#endif

#endif /* WINPR_TCHAR_H */
