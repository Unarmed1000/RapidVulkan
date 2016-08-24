#ifndef RAPIDVULKAN_MEMORY_HPP
#define RAPIDVULKAN_MEMORY_HPP
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

// Auto-generated Vulkan 1.0 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000)

#include <RapidVulkan/Util.hpp>
#include <vulkan/vulkan.h>
#include <cassert>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class Memory
  {
    VkDevice m_device;
    VkDeviceMemory m_memory;
  public:
    Memory(const Memory&) = delete;
    Memory& operator=(const Memory&) = delete;
  
    //! @brief Move assignment operator
    Memory& operator=(Memory&& other)
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_device = other.m_device;
        m_memory = other.m_memory;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_memory = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    Memory(Memory&& other)
      : m_device(other.m_device)
      , m_memory(other.m_memory)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_memory = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    Memory()
      : m_device(VK_NULL_HANDLE)
      , m_memory(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the Memory (this object becomes responsible for releasing it)
    explicit Memory(const VkDevice device, VkDeviceMemory * memory)
      : Memory()
    {
      Reset(device, memory);
    }

    //! @brief Create the requested resource
    Memory(const VkDevice device, const VkMemoryAllocateInfo& allocateInfo)
      : Memory()
    {
      Reset(device, allocateInfo);
    }

    
    ~Memory()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkDeviceMemory Release()
    {
      const auto resource = m_memory; 
      m_device = VK_NULL_HANDLE;
      m_memory = VK_NULL_HANDLE;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset()
    {
      if (!IsValid())
        return;

      assert(m_device != VK_NULL_HANDLE);
      assert(m_memory != VK_NULL_HANDLE);

      vkFreeMemory(m_device, m_memory, nullptr);
      m_device = VK_NULL_HANDLE;
      m_memory = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the Memory (this object becomes responsible for releasing it)
    void Reset(const VkDevice device, VkDeviceMemory * memory)
    {
      if (IsValid())
        Reset();


      m_device = device;
      m_memory = memory;
    }

    //! @brief Destroys any owned resources and then creates the requested one
    void Reset(const VkDevice device, const VkMemoryAllocateInfo& allocateInfo)
    {
      if (device == VK_NULL_HANDLE)
        throw std::invalid_argument("device can not be VK_NULL_HANDLE");

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkDeviceMemory memory;
      Util::Check(vkAllocateMemory(device, &allocateInfo, nullptr, &memory), "vkAllocateMemory", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_memory = memory;
    }

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkDeviceMemory Get() const
    {
      return m_memory;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_memory != VK_NULL_HANDLE;
    }
  };
}

#endif
