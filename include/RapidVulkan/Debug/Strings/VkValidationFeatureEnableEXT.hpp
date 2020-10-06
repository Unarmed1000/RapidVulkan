#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKVALIDATIONFEATUREENABLEEXT_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKVALIDATIONFEATUREENABLEEXT_HPP
#if VK_HEADER_VERSION >= 97
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
    inline const char* TryToString(const VkValidationFeatureEnableEXT& value)
    {
      switch(value)
      {
#if VK_HEADER_VERSION >= 97
      case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT:
        return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT";
#endif
#if VK_HEADER_VERSION >= 97
      case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT:
        return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT";
#endif
#if VK_HEADER_VERSION >= 121
      case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT:
        return "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT";
#endif
#if VK_HEADER_VERSION >= 135
      case VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT:
        return "VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT";
#endif
#if VK_HEADER_VERSION >= 154
      case VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT:
        return "VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkValidationFeatureEnableEXT& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
#endif
