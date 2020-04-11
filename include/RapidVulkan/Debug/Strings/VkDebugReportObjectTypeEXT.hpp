#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKDEBUGREPORTOBJECTTYPEEXT_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKDEBUGREPORTOBJECTTYPEEXT_HPP
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
    inline const char* TryToString(const VkDebugReportObjectTypeEXT& value)
    {
      switch(value)
      {
      case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT";
      case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT";
#if VK_HEADER_VERSION >= 51
      case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT";
#elif VK_HEADER_VERSION >= 0
      case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT";
#endif

#if VK_HEADER_VERSION >= 37
      case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT";
#endif
#if VK_HEADER_VERSION >= 37
      case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT";
#endif
#if VK_HEADER_VERSION >= 68
      case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT";
#elif VK_HEADER_VERSION >= 61
      case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT";
#endif

#if VK_HEADER_VERSION >= 70
      case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT";
#elif VK_HEADER_VERSION >= 61
      case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT";
#endif

#if VK_HEADER_VERSION >= 70
      case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT";
#elif VK_HEADER_VERSION >= 46
      case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT";
#endif

#if VK_HEADER_VERSION >= 135
      case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT";
#elif VK_HEADER_VERSION >= 92
      case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT";
#endif

      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkDebugReportObjectTypeEXT& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
