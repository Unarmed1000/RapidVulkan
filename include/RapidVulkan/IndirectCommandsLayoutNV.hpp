#ifndef RAPIDVULKAN_INDIRECTCOMMANDSLAYOUTNV_HPP
#define RAPIDVULKAN_INDIRECTCOMMANDSLAYOUTNV_HPP
#if VK_HEADER_VERSION >= 135
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016, Rene Thrane
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
  class IndirectCommandsLayoutNV
  {
    VkDevice m_device;
    VkIndirectCommandsLayoutNV m_indirectCommandsLayout;
  public:
    IndirectCommandsLayoutNV(const IndirectCommandsLayoutNV&) = delete;
    IndirectCommandsLayoutNV& operator=(const IndirectCommandsLayoutNV&) = delete;

    //! @brief Move assignment operator
    IndirectCommandsLayoutNV& operator=(IndirectCommandsLayoutNV&& other) noexcept
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
        m_indirectCommandsLayout = other.m_indirectCommandsLayout;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_indirectCommandsLayout = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    IndirectCommandsLayoutNV(IndirectCommandsLayoutNV&& other) noexcept
      : m_device(other.m_device)
      , m_indirectCommandsLayout(other.m_indirectCommandsLayout)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_indirectCommandsLayout = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    IndirectCommandsLayoutNV()
      : m_device(VK_NULL_HANDLE)
      , m_indirectCommandsLayout(FIX_DEFAULT_FOR_TYPE_NOT_DEFINED)
    {
    }

    //! @brief Assume control of the IndirectCommandsLayoutNV (this object becomes responsible for releasing it)
    explicit IndirectCommandsLayoutNV(const ClaimMode claimMode, const VkDevice device, const VkIndirectCommandsLayoutNV indirectCommandsLayout)
      : IndirectCommandsLayoutNV()
    {
      Reset(claimMode, device, indirectCommandsLayout);
    }

#if VK_HEADER_VERSION >= 135
    //! @brief Create the requested resource
    //! @note  Function: vkCreateIndirectCommandsLayoutNV
    IndirectCommandsLayoutNV(const VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV& createInfo)
      : IndirectCommandsLayoutNV()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateIndirectCommandsLayoutNV
    IndirectCommandsLayoutNV(const VkDevice device, const VkIndirectCommandsLayoutUsageFlagsNV flags, const VkPipelineBindPoint pipelineBindPoint, const uint32_t tokenCount, VkIndirectCommandsLayoutTokenNV*const pTokens, const uint32_t streamCount, const uint32_t * pStreamStrides)
      : IndirectCommandsLayoutNV()
    {
      Reset(device, flags, pipelineBindPoint, tokenCount, pTokens, streamCount, pStreamStrides);
    }
#endif

    ~IndirectCommandsLayoutNV()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkIndirectCommandsLayoutNV Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_indirectCommandsLayout;
      m_device = VK_NULL_HANDLE;
      m_indirectCommandsLayout = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
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
      assert(m_indirectCommandsLayout != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED);

      vkDestroyIndirectCommandsLayoutNV(m_device, m_indirectCommandsLayout, nullptr);
      m_device = VK_NULL_HANDLE;
      m_indirectCommandsLayout = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Destroys any owned resources and assume control of the IndirectCommandsLayoutNV (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkIndirectCommandsLayoutNV indirectCommandsLayout)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_indirectCommandsLayout = indirectCommandsLayout;
    }

#if VK_HEADER_VERSION >= 135
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateIndirectCommandsLayoutNV
    void Reset(const VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV& createInfo)
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
      VkIndirectCommandsLayoutNV indirectCommandsLayout;
      CheckError(vkCreateIndirectCommandsLayoutNV(device, &createInfo, nullptr, &indirectCommandsLayout), "vkCreateIndirectCommandsLayoutNV", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_indirectCommandsLayout = indirectCommandsLayout;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateIndirectCommandsLayoutNV
    void Reset(const VkDevice device, const VkIndirectCommandsLayoutUsageFlagsNV flags, const VkPipelineBindPoint pipelineBindPoint, const uint32_t tokenCount, VkIndirectCommandsLayoutTokenNV*const pTokens, const uint32_t streamCount, const uint32_t * pStreamStrides)
    {
      VkIndirectCommandsLayoutCreateInfoNV createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;
      createInfo.pNext = nullptr;
      createInfo.flags = flags;
      createInfo.pipelineBindPoint = pipelineBindPoint;
      createInfo.tokenCount = tokenCount;
      createInfo.pTokens = pTokens;
      createInfo.streamCount = streamCount;
      createInfo.pStreamStrides = pStreamStrides;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkIndirectCommandsLayoutNV Get() const
    {
      return m_indirectCommandsLayout;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkIndirectCommandsLayoutNV* GetPointer() const
    {
      return &m_indirectCommandsLayout;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_indirectCommandsLayout != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }
  };
}

#endif
#endif
