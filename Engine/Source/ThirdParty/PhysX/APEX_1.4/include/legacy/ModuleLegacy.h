/*
 * Copyright (c) 2008-2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef MODULE_LEGACY_H
#define MODULE_LEGACY_H

#include <ApexUsingNamespace.h>

namespace nvidia
{
namespace apex
{

#if !defined(_USRDLL)
/**
* If this module is distributed as a static library, the user must call this
* function before calling ApexSDK::createModule("Legacy")
*/
void instantiateModuleLegacy();
#endif

}
} // end namespace physx::apex

#endif // MODULE_LEGACY_H
