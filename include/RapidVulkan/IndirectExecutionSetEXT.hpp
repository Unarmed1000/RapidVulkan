#ifndef RAPIDVULKAN_INDIRECTEXECUTIONSETEXT_HPP
#define RAPIDVULKAN_INDIRECTEXECUTIONSETEXT_HPP
#if VK_HEADER_VERSION >= 296
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016-2024, Rene Thrane
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

// Auto-generated Vulkan 1.0 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <RapidVulkan/ClaimMode.hpp>
#include <RapidVulkan/CheckError.hpp>
#include <RapidVulkan/System/Macro.hpp>
#include <vulkan/vulkan.h>
#include <cassert>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class IndirectExecutionSetEXT
  {
    VkDevice m_device;
    VkIndirectExecutionSetEXT m_indirectExecutionSet;
  public:
    IndirectExecutionSetEXT(const IndirectExecutionSetEXT&) = delete;
    IndirectExecutionSetEXT& operator=(const IndirectExecutionSetEXT&) = delete;

    //! @brief Move assignment operator
    IndirectExecutionSetEXT& operator=(IndirectExecutionSetEXT&& other) noexcept
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
        {
          Reset();
        }

        // Claim ownership here
        m_device = other.m_device;
        m_indirectExecutionSet = other.m_indirectExecutionSet;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_indirectExecutionSet = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    IndirectExecutionSetEXT(IndirectExecutionSetEXT&& other) noexcept
      : m_device(other.m_device)
      , m_indirectExecutionSet(other.m_indirectExecutionSet)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_indirectExecutionSet = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    IndirectExecutionSetEXT()
      : m_device(VK_NULL_HANDLE)
      , m_indirectExecutionSet(FIX_DEFAULT_FOR_TYPE_NOT_DEFINED)
    {
    }

    //! @brief Assume control of the IndirectExecutionSetEXT (this object becomes responsible for releasing it)
    explicit IndirectExecutionSetEXT(const ClaimMode claimMode, const VkDevice device, const VkIndirectExecutionSetEXT indirectExecutionSet)
      : IndirectExecutionSetEXT()
    {
      Reset(claimMode, device, indirectExecutionSet);
    }

#if VK_HEADER_VERSION >= 296
    //! @brief Create the requested resource
    //! @note  Function: vkCreateIndirectExecutionSetEXT
    IndirectExecutionSetEXT(const VkDevice device, const VkIndirectExecutionSetCreateInfoEXT& createInfo)
      : IndirectExecutionSetEXT()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateIndirectExecutionSetEXT
    IndirectExecutionSetEXT(const VkDevice device, const VkIndirectExecutionSetInfoTypeEXT type, const VkIndirectExecutionSetInfoEXT info)
      : IndirectExecutionSetEXT()
    {
      Reset(device, type, info);
    }
#endif

    ~IndirectExecutionSetEXT()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    RAPIDVULKAN_FUNC_WARN_UNUSED_RESULT VkIndirectExecutionSetEXT Release()
    {
      const auto resource = m_indirectExecutionSet;
      m_device = VK_NULL_HANDLE;
      m_indirectExecutionSet = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset() noexcept
    {
      if (! IsValid())
      {
        return;
      }

      assert(m_device != VK_NULL_HANDLE);
      assert(m_indirectExecutionSet != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED);

      vkDestroyIndirectExecutionSetEXT(m_device, m_indirectExecutionSet, nullptr);
      m_device = VK_NULL_HANDLE;
      m_indirectExecutionSet = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Destroys any owned resources and assume control of the IndirectExecutionSetEXT (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkIndirectExecutionSetEXT indirectExecutionSet)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_indirectExecutionSet = indirectExecutionSet;
    }

#if VK_HEADER_VERSION >= 296
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateIndirectExecutionSetEXT
    void Reset(const VkDevice device, const VkIndirectExecutionSetCreateInfoEXT& createInfo)
    {
#ifndef RAPIDVULKAN_DISABLE_PARAM_VALIDATION
      if (device == VK_NULL_HANDLE)
      {
        throw std::invalid_argument("device can not be VK_NULL_HANDLE");
      }
#else
      assert(device != VK_NULL_HANDLE);
#endif

      // Free any currently allocated resource
      if (IsValid())
      {
        Reset();
      }

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkIndirectExecutionSetEXT indirectExecutionSet;
      CheckError(vkCreateIndirectExecutionSetEXT(device, &createInfo, nullptr, &indirectExecutionSet), "vkCreateIndirectExecutionSetEXT", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_indirectExecutionSet = indirectExecutionSet;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateIndirectExecutionSetEXT
    void Reset(const VkDevice device, const VkIndirectExecutionSetInfoTypeEXT type, const VkIndirectExecutionSetInfoEXT info)
    {
      VkIndirectExecutionSetCreateInfoEXT createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_CREATE_INFO_EXT;
      createInfo.pNext = nullptr;
      createInfo.type = type;
      createInfo.info = info;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkIndirectExecutionSetEXT Get() const
    {
      return m_indirectExecutionSet;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkIndirectExecutionSetEXT* GetPointer() const
    {
      return &m_indirectExecutionSet;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_indirectExecutionSet != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }


#if VK_HEADER_VERSION >= 296
    //! @note  Function: vkUpdateIndirectExecutionSetPipelineEXT
    void UpdateIndirectExecutionSetPipelineEXT(const uint32_t executionSetWriteCount, const VkWriteIndirectExecutionSetPipelineEXT * pExecutionSetWrites)
    {
      vkUpdateIndirectExecutionSetPipelineEXT(m_device, m_indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
    }
#endif


#if VK_HEADER_VERSION >= 296
    //! @note  Function: vkUpdateIndirectExecutionSetShaderEXT
    void UpdateIndirectExecutionSetShaderEXT(const uint32_t executionSetWriteCount, const VkWriteIndirectExecutionSetShaderEXT * pExecutionSetWrites)
    {
      vkUpdateIndirectExecutionSetShaderEXT(m_device, m_indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
    }
#endif
  };
}

#endif
#endif
