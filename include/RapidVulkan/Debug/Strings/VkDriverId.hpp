#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKDRIVERID_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKDRIVERID_HPP
#if VK_HEADER_VERSION >= 131
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017, Rene Thrane
//* All rights reserved.
//*
//* Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//*
//* 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//* 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the
//*    documentation and/or other materials provided with the distribution.
//* 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this
//*    software without specific prior written permission.
//*
//* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
//* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
//* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//***************************************************************************************************************************************************

// If you use the functionality in this file its recommended to 'WRAP' it in a hpp/cpp file combo so its only included in one file!

// Auto-generated Vulkan 1.0 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <vulkan/vulkan.h>

namespace RapidVulkan
{
  namespace Debug
  {
    inline const char* TryToString(const VkDriverId& value)
    {
      switch(value)
      {
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_AMD_PROPRIETARY:
        return "VK_DRIVER_ID_AMD_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_AMD_OPEN_SOURCE:
        return "VK_DRIVER_ID_AMD_OPEN_SOURCE";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_MESA_RADV:
        return "VK_DRIVER_ID_MESA_RADV";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_NVIDIA_PROPRIETARY:
        return "VK_DRIVER_ID_NVIDIA_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS:
        return "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA:
        return "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_IMAGINATION_PROPRIETARY:
        return "VK_DRIVER_ID_IMAGINATION_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_QUALCOMM_PROPRIETARY:
        return "VK_DRIVER_ID_QUALCOMM_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_ARM_PROPRIETARY:
        return "VK_DRIVER_ID_ARM_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_GOOGLE_SWIFTSHADER:
        return "VK_DRIVER_ID_GOOGLE_SWIFTSHADER";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_GGP_PROPRIETARY:
        return "VK_DRIVER_ID_GGP_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 131
      case VK_DRIVER_ID_BROADCOM_PROPRIETARY:
        return "VK_DRIVER_ID_BROADCOM_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 141
      case VK_DRIVER_ID_MESA_LLVMPIPE:
        return "VK_DRIVER_ID_MESA_LLVMPIPE";
#endif
#if VK_HEADER_VERSION >= 148
      case VK_DRIVER_ID_MOLTENVK:
        return "VK_DRIVER_ID_MOLTENVK";
#endif
#if VK_HEADER_VERSION >= 176
      case VK_DRIVER_ID_COREAVI_PROPRIETARY:
        return "VK_DRIVER_ID_COREAVI_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 189
      case VK_DRIVER_ID_JUICE_PROPRIETARY:
        return "VK_DRIVER_ID_JUICE_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 189
      case VK_DRIVER_ID_VERISILICON_PROPRIETARY:
        return "VK_DRIVER_ID_VERISILICON_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 198
      case VK_DRIVER_ID_MESA_TURNIP:
        return "VK_DRIVER_ID_MESA_TURNIP";
#endif
#if VK_HEADER_VERSION >= 198
      case VK_DRIVER_ID_MESA_V3DV:
        return "VK_DRIVER_ID_MESA_V3DV";
#endif
#if VK_HEADER_VERSION >= 198
      case VK_DRIVER_ID_MESA_PANVK:
        return "VK_DRIVER_ID_MESA_PANVK";
#endif
#if VK_HEADER_VERSION >= 204
      case VK_DRIVER_ID_SAMSUNG_PROPRIETARY:
        return "VK_DRIVER_ID_SAMSUNG_PROPRIETARY";
#endif
#if VK_HEADER_VERSION >= 204
      case VK_DRIVER_ID_MESA_VENUS:
        return "VK_DRIVER_ID_MESA_VENUS";
#endif
#if VK_HEADER_VERSION >= 224
      case VK_DRIVER_ID_MESA_DOZEN:
        return "VK_DRIVER_ID_MESA_DOZEN";
#endif
#if VK_HEADER_VERSION >= 236
      case VK_DRIVER_ID_MESA_NVK:
        return "VK_DRIVER_ID_MESA_NVK";
#endif
#if VK_HEADER_VERSION >= 239
      case VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA:
        return "VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkDriverId& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
#endif
