// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.
/*****************************************************************************/

#ifndef _EMITDEF_H_
#define _EMITDEF_H_
/*****************************************************************************/

#if defined(TARGET_XARCH)
#include "emitxarch.h"
#elif defined(TARGET_ARM)
#include "emitarm.h"
#elif defined(TARGET_ARM64)
#include "emitarm64.h"
#else
#error Unsupported or unset target architecture
#endif

/*****************************************************************************/
#endif //_EMITDEF_H_
/*****************************************************************************/
