#ifndef RAPIDVULKAN_ACCELERATIONSTRUCTUREKHR_HPP
#define RAPIDVULKAN_ACCELERATIONSTRUCTUREKHR_HPP
#if VK_HEADER_VERSION >= 162
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
  class AccelerationStructureKHR
  {
    VkDevice m_device;
    VkAccelerationStructureKHR m_accelerationStructure;
  public:
    AccelerationStructureKHR(const AccelerationStructureKHR&) = delete;
    AccelerationStructureKHR& operator=(const AccelerationStructureKHR&) = delete;

    //! @brief Move assignment operator
    AccelerationStructureKHR& operator=(AccelerationStructureKHR&& other) noexcept
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
        m_accelerationStructure = other.m_accelerationStructure;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_accelerationStructure = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    AccelerationStructureKHR(AccelerationStructureKHR&& other) noexcept
      : m_device(other.m_device)
      , m_accelerationStructure(other.m_accelerationStructure)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_accelerationStructure = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    AccelerationStructureKHR()
      : m_device(VK_NULL_HANDLE)
      , m_accelerationStructure(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the AccelerationStructureKHR (this object becomes responsible for releasing it)
    explicit AccelerationStructureKHR(const ClaimMode claimMode, const VkDevice device, const VkAccelerationStructureKHR accelerationStructure)
      : AccelerationStructureKHR()
    {
      Reset(claimMode, device, accelerationStructure);
    }

#if VK_HEADER_VERSION >= 162
    //! @brief Create the requested resource
    //! @note  Function: vkCreateAccelerationStructureKHR
    AccelerationStructureKHR(const VkDevice device, const VkAccelerationStructureCreateInfoKHR& createInfo)
      : AccelerationStructureKHR()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateAccelerationStructureKHR
    AccelerationStructureKHR(const VkDevice device, const VkAccelerationStructureCreateFlagsKHR createFlags, const VkBuffer buffer, const VkDeviceSize offset, const VkDeviceSize size, const VkAccelerationStructureTypeKHR type, const VkDeviceAddress deviceAddress)
      : AccelerationStructureKHR()
    {
      Reset(device, createFlags, buffer, offset, size, type, deviceAddress);
    }
#endif

    ~AccelerationStructureKHR()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkAccelerationStructureKHR Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_accelerationStructure;
      m_device = VK_NULL_HANDLE;
      m_accelerationStructure = VK_NULL_HANDLE;
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
      assert(m_accelerationStructure != VK_NULL_HANDLE);

      vkDestroyAccelerationStructureKHR(m_device, m_accelerationStructure, nullptr);
      m_device = VK_NULL_HANDLE;
      m_accelerationStructure = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the AccelerationStructureKHR (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkAccelerationStructureKHR accelerationStructure)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_accelerationStructure = accelerationStructure;
    }

#if VK_HEADER_VERSION >= 162
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateAccelerationStructureKHR
    void Reset(const VkDevice device, const VkAccelerationStructureCreateInfoKHR& createInfo)
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
      VkAccelerationStructureKHR accelerationStructure;
      CheckError(vkCreateAccelerationStructureKHR(device, &createInfo, nullptr, &accelerationStructure), "vkCreateAccelerationStructureKHR", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_accelerationStructure = accelerationStructure;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateAccelerationStructureKHR
    void Reset(const VkDevice device, const VkAccelerationStructureCreateFlagsKHR createFlags, const VkBuffer buffer, const VkDeviceSize offset, const VkDeviceSize size, const VkAccelerationStructureTypeKHR type, const VkDeviceAddress deviceAddress)
    {
      VkAccelerationStructureCreateInfoKHR createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
      createInfo.pNext = nullptr;
      createInfo.createFlags = createFlags;
      createInfo.buffer = buffer;
      createInfo.offset = offset;
      createInfo.size = size;
      createInfo.type = type;
      createInfo.deviceAddress = deviceAddress;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkAccelerationStructureKHR Get() const
    {
      return m_accelerationStructure;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkAccelerationStructureKHR* GetPointer() const
    {
      return &m_accelerationStructure;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_accelerationStructure != VK_NULL_HANDLE;
    }
  };
}

#endif
#endif
