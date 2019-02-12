#ifndef RAPIDVULKAN_VALIDATIONCACHEEXT_HPP
#define RAPIDVULKAN_VALIDATIONCACHEEXT_HPP
#if VK_HEADER_VERSION >= 61
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
  class ValidationCacheEXT
  {
    VkDevice m_device;
    VkValidationCacheEXT m_validationCache;
  public:
    ValidationCacheEXT(const ValidationCacheEXT&) = delete;
    ValidationCacheEXT& operator=(const ValidationCacheEXT&) = delete;

    //! @brief Move assignment operator
    ValidationCacheEXT& operator=(ValidationCacheEXT&& other) noexcept
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
        m_validationCache = other.m_validationCache;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_validationCache = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    ValidationCacheEXT(ValidationCacheEXT&& other) noexcept
      : m_device(other.m_device)
      , m_validationCache(other.m_validationCache)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_validationCache = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    ValidationCacheEXT()
      : m_device(VK_NULL_HANDLE)
      , m_validationCache(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the ValidationCacheEXT (this object becomes responsible for releasing it)
    explicit ValidationCacheEXT(const ClaimMode claimMode, const VkDevice device, const VkValidationCacheEXT validationCache)
      : ValidationCacheEXT()
    {
      Reset(claimMode, device, validationCache);
    }

#if VK_HEADER_VERSION >= 61
    //! @brief Create the requested resource
    //! @note  Function: vkCreateValidationCacheEXT
    ValidationCacheEXT(const VkDevice device, const VkValidationCacheCreateInfoEXT& createInfo)
      : ValidationCacheEXT()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateValidationCacheEXT
    ValidationCacheEXT(const VkDevice device, const VkValidationCacheCreateFlagsEXT flags, const size_t initialDataSize, const void * pInitialData)
      : ValidationCacheEXT()
    {
      Reset(device, flags, initialDataSize, pInitialData);
    }
#endif

    ~ValidationCacheEXT()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkValidationCacheEXT Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_validationCache;
      m_device = VK_NULL_HANDLE;
      m_validationCache = VK_NULL_HANDLE;
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
      assert(m_validationCache != VK_NULL_HANDLE);

      vkDestroyValidationCacheEXT(m_device, m_validationCache, nullptr);
      m_device = VK_NULL_HANDLE;
      m_validationCache = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the ValidationCacheEXT (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkValidationCacheEXT validationCache)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_validationCache = validationCache;
    }

#if VK_HEADER_VERSION >= 61
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateValidationCacheEXT
    void Reset(const VkDevice device, const VkValidationCacheCreateInfoEXT& createInfo)
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
      VkValidationCacheEXT validationCache;
      CheckError(vkCreateValidationCacheEXT(device, &createInfo, nullptr, &validationCache), "vkCreateValidationCacheEXT", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_validationCache = validationCache;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateValidationCacheEXT
    void Reset(const VkDevice device, const VkValidationCacheCreateFlagsEXT flags, const size_t initialDataSize, const void * pInitialData)
    {
      VkValidationCacheCreateInfoEXT createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
      createInfo.pNext = nullptr;
      createInfo.flags = flags;
      createInfo.initialDataSize = initialDataSize;
      createInfo.pInitialData = pInitialData;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkValidationCacheEXT Get() const
    {
      return m_validationCache;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkValidationCacheEXT* GetPointer() const
    {
      return &m_validationCache;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_validationCache != VK_NULL_HANDLE;
    }


#if VK_HEADER_VERSION >= 61
    //! @note  Function: vkMergeValidationCachesEXT
    void MergeValidationCachesEXT(const uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches)
    {
      CheckError(vkMergeValidationCachesEXT(m_device, m_validationCache, srcCacheCount, pSrcCaches), "vkMergeValidationCachesEXT", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 61
    //! @note  Function: vkGetValidationCacheDataEXT
    void GetValidationCacheDataEXT(size_t * pDataSize, void * pData)
    {
      CheckError(vkGetValidationCacheDataEXT(m_device, m_validationCache, pDataSize, pData), "vkGetValidationCacheDataEXT", __FILE__, __LINE__);
    }
#endif
  };
}

#endif
#endif
