#ifndef RAPIDVULKAN_SAMPLER_HPP
#define RAPIDVULKAN_SAMPLER_HPP
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

// Auto-generated Vulkan 1.0 C++11 RAII classes based on RAIIGen V0.2.4 (https://github.com/Unarmed1000)

#include <cassert>
#include <RapidVulkan/VulkanCheck.hpp>
#include <vulkan/vulkan.h>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class Sampler
  {
    VkDevice m_device;
    VkSampler m_sampler;
  public:
    Sampler(const Sampler&) = delete;
    Sampler& operator=(const Sampler&) = delete;
  
    //! @brief Move assignment operator
    Sampler& operator=(Sampler&& other)
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_device = other.m_device;
        m_sampler = other.m_sampler;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_sampler = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    Sampler(Sampler&& other)
      : m_device(other.m_device)
      , m_sampler(other.m_sampler)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_sampler = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    Sampler()
      : m_device(VK_NULL_HANDLE)
      , m_sampler(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the Sampler (this object becomes responsible for releasing it)
    explicit Sampler(const VkDevice device, VkSampler * sampler)
      : Sampler()
    {
      Reset(device, sampler);
    }

    //! @brief Create the requested resource
    Sampler(const VkDevice device, const VkSamplerCreateInfo& createInfo)
      : Sampler()
    {
      Reset(device, createInfo);
    }

    
    ~Sampler()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkSampler Release()
    {
      const auto resource = m_sampler; 
      m_device = VK_NULL_HANDLE;
      m_sampler = VK_NULL_HANDLE;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset()
    {
      if (!IsValid())
        return;

      assert(m_device != VK_NULL_HANDLE);
      assert(m_sampler != VK_NULL_HANDLE);

      vkDestroySampler(m_device, m_sampler, nullptr);
      m_device = VK_NULL_HANDLE;
      m_sampler = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the Sampler (this object becomes responsible for releasing it)
    void Reset(const VkDevice device, VkSampler * sampler)
    {
      if (IsValid())
        Reset();


      m_device = device;
      m_sampler = sampler;
    }

    //! @brief Destroys any owned resources and then creates the requested one
    void Reset(const VkDevice device, const VkSamplerCreateInfo& createInfo)
    {
      if (device == VK_NULL_HANDLE)
        throw std::invalid_argument("device can not be VK_NULL_HANDLE");

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkSampler sampler;
      Util::Check(vkCreateSampler(device, &createInfo, nullptr, &sampler), "vkCreateSampler", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_sampler = sampler;
    }

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkSampler Get() const
    {
      return m_sampler;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_sampler != VK_NULL_HANDLE;
    }
  };
}

#endif
