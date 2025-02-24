#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKINDIRECTCOMMANDSTOKENTYPEEXT_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKINDIRECTCOMMANDSTOKENTYPEEXT_HPP
#if VK_HEADER_VERSION >= 296
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017-2025, Rene Thrane
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
    inline const char* TryToString(const VkIndirectCommandsTokenTypeEXT& value)
    {
      switch(value)
      {
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_SEQUENCE_INDEX_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_SEQUENCE_INDEX_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_COUNT_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_COUNT_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_COUNT_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_COUNT_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_NV_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_NV_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_EXT";
#endif
#if VK_HEADER_VERSION >= 296
      case VK_INDIRECT_COMMANDS_TOKEN_TYPE_TRACE_RAYS2_EXT:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_TRACE_RAYS2_EXT";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const VkIndirectCommandsTokenTypeEXT& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
#endif
