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
    inline const char* ToString(const VkStructureType& value)
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
      case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN:
        return "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN";
      case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK:
        return "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK";
      case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK:
        return "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK";
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
