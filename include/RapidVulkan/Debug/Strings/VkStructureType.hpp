#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKSTRUCTURETYPE_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKSTRUCTURETYPE_HPP
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
    inline const char* TryToString(const VkStructureType& value)
    {
      switch(value)
      {
      case VK_STRUCTURE_TYPE_APPLICATION_INFO:
        return "VK_STRUCTURE_TYPE_APPLICATION_INFO";
      case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_SUBMIT_INFO:
        return "VK_STRUCTURE_TYPE_SUBMIT_INFO";
      case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
        return "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO";
      case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
        return "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE";
      case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
        return "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO";
      case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO";
      case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO";
      case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO";
      case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO";
      case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO";
      case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO";
      case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO";
      case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO";
      case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO";
      case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO";
      case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
        return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET";
      case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
        return "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET";
      case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO";
      case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO";
      case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO";
      case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO";
      case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO";
      case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO";
      case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO";
      case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
        return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER";
      case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
        return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER";
      case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
        return "VK_STRUCTURE_TYPE_MEMORY_BARRIER";
      case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO";
      case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO";
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
        return "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
        return "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
        return "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
        return "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
        return "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
        return "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
        return "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
        return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
        return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
        return "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
        return "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
        return "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
        return "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
        return "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
        return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
        return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
        return "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
        return "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
        return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
        return "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
        return "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
        return "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
        return "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
        return "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
        return "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT";
#endif
#if VK_HEADER_VERSION >= 70
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES:
        return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES";
#endif
#if VK_HEADER_VERSION >= 39
      case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
        return "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN";
#endif
#if VK_HEADER_VERSION >= 42
      case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
        return "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK";
#endif
#if VK_HEADER_VERSION >= 42
      case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
        return "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
        return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID:
        return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
        return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
        return "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
        return "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
#endif
#if VK_HEADER_VERSION >= 73
      case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
        return "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkStructureType& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
