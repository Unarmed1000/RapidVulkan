#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKIMAGEUSAGEFLAGBITS_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKIMAGEUSAGEFLAGBITS_HPP
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017-2024, Rene Thrane
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
    inline const char* TryToString(const VkImageUsageFlagBits& value)
    {
      switch(value)
      {
      case VK_IMAGE_USAGE_TRANSFER_SRC_BIT:
        return "VK_IMAGE_USAGE_TRANSFER_SRC_BIT";
      case VK_IMAGE_USAGE_TRANSFER_DST_BIT:
        return "VK_IMAGE_USAGE_TRANSFER_DST_BIT";
      case VK_IMAGE_USAGE_SAMPLED_BIT:
        return "VK_IMAGE_USAGE_SAMPLED_BIT";
      case VK_IMAGE_USAGE_STORAGE_BIT:
        return "VK_IMAGE_USAGE_STORAGE_BIT";
      case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT:
        return "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT";
      case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT:
        return "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT";
      case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT:
        return "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT";
      case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT:
        return "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT";
#if VK_HEADER_VERSION >= 189
      case VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI:
        return "VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI";
#endif
#if VK_HEADER_VERSION >= 224
      case VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM:
        return "VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM";
#endif
#if VK_HEADER_VERSION >= 224
      case VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM:
        return "VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkImageUsageFlagBits& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
