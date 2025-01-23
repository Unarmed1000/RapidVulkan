#ifndef RAPIDVULKAN_SAMPLERYCBCRCONVERSION_HPP
#define RAPIDVULKAN_SAMPLERYCBCRCONVERSION_HPP
#if VK_HEADER_VERSION >= 70
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016-2025, Rene Thrane
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
  class SamplerYcbcrConversion
  {
    VkDevice m_device;
    VkSamplerYcbcrConversion m_ycbcrConversion;
  public:
    SamplerYcbcrConversion(const SamplerYcbcrConversion&) = delete;
    SamplerYcbcrConversion& operator=(const SamplerYcbcrConversion&) = delete;

    //! @brief Move assignment operator
    SamplerYcbcrConversion& operator=(SamplerYcbcrConversion&& other) noexcept
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
        m_ycbcrConversion = other.m_ycbcrConversion;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_ycbcrConversion = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    SamplerYcbcrConversion(SamplerYcbcrConversion&& other) noexcept
      : m_device(other.m_device)
      , m_ycbcrConversion(other.m_ycbcrConversion)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_ycbcrConversion = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    SamplerYcbcrConversion()
      : m_device(VK_NULL_HANDLE)
      , m_ycbcrConversion(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the SamplerYcbcrConversion (this object becomes responsible for releasing it)
    explicit SamplerYcbcrConversion(const ClaimMode claimMode, const VkDevice device, const VkSamplerYcbcrConversion ycbcrConversion)
      : SamplerYcbcrConversion()
    {
      Reset(claimMode, device, ycbcrConversion);
    }

#if VK_HEADER_VERSION >= 70
    //! @brief Create the requested resource
    //! @note  Function: vkCreateSamplerYcbcrConversion
    SamplerYcbcrConversion(const VkDevice device, const VkSamplerYcbcrConversionCreateInfo& createInfo)
      : SamplerYcbcrConversion()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateSamplerYcbcrConversion
    SamplerYcbcrConversion(const VkDevice device, const VkFormat format, const VkSamplerYcbcrModelConversion ycbcrModel, const VkSamplerYcbcrRange ycbcrRange, const VkComponentMapping components, const VkChromaLocation xChromaOffset, const VkChromaLocation yChromaOffset, const VkFilter chromaFilter, const VkBool32 forceExplicitReconstruction)
      : SamplerYcbcrConversion()
    {
      Reset(device, format, ycbcrModel, ycbcrRange, components, xChromaOffset, yChromaOffset, chromaFilter, forceExplicitReconstruction);
    }
#endif

    ~SamplerYcbcrConversion()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    RAPIDVULKAN_FUNC_WARN_UNUSED_RESULT VkSamplerYcbcrConversion Release()
    {
      const auto resource = m_ycbcrConversion;
      m_device = VK_NULL_HANDLE;
      m_ycbcrConversion = VK_NULL_HANDLE;
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
      assert(m_ycbcrConversion != VK_NULL_HANDLE);

      vkDestroySamplerYcbcrConversion(m_device, m_ycbcrConversion, nullptr);
      m_device = VK_NULL_HANDLE;
      m_ycbcrConversion = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the SamplerYcbcrConversion (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkSamplerYcbcrConversion ycbcrConversion)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_ycbcrConversion = ycbcrConversion;
    }

#if VK_HEADER_VERSION >= 70
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateSamplerYcbcrConversion
    void Reset(const VkDevice device, const VkSamplerYcbcrConversionCreateInfo& createInfo)
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
      VkSamplerYcbcrConversion ycbcrConversion;
      CheckError(vkCreateSamplerYcbcrConversion(device, &createInfo, nullptr, &ycbcrConversion), "vkCreateSamplerYcbcrConversion", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_ycbcrConversion = ycbcrConversion;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateSamplerYcbcrConversion
    void Reset(const VkDevice device, const VkFormat format, const VkSamplerYcbcrModelConversion ycbcrModel, const VkSamplerYcbcrRange ycbcrRange, const VkComponentMapping components, const VkChromaLocation xChromaOffset, const VkChromaLocation yChromaOffset, const VkFilter chromaFilter, const VkBool32 forceExplicitReconstruction)
    {
      VkSamplerYcbcrConversionCreateInfo createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
      createInfo.pNext = nullptr;
      createInfo.format = format;
      createInfo.ycbcrModel = ycbcrModel;
      createInfo.ycbcrRange = ycbcrRange;
      createInfo.components = components;
      createInfo.xChromaOffset = xChromaOffset;
      createInfo.yChromaOffset = yChromaOffset;
      createInfo.chromaFilter = chromaFilter;
      createInfo.forceExplicitReconstruction = forceExplicitReconstruction;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkSamplerYcbcrConversion Get() const
    {
      return m_ycbcrConversion;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkSamplerYcbcrConversion* GetPointer() const
    {
      return &m_ycbcrConversion;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_ycbcrConversion != VK_NULL_HANDLE;
    }
  };
}

#endif
#endif
