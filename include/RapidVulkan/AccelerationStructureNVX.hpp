#ifndef RAPIDVULKAN_ACCELERATIONSTRUCTURENVX_HPP
#define RAPIDVULKAN_ACCELERATIONSTRUCTURENVX_HPP
#if VK_HEADER_VERSION >= 85
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
  class AccelerationStructureNVX
  {
    VkDevice m_device;
    VkAccelerationStructureNVX m_accelerationStructure;
  public:
    AccelerationStructureNVX(const AccelerationStructureNVX&) = delete;
    AccelerationStructureNVX& operator=(const AccelerationStructureNVX&) = delete;

    //! @brief Move assignment operator
    AccelerationStructureNVX& operator=(AccelerationStructureNVX&& other) noexcept
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_device = other.m_device;
        m_accelerationStructure = other.m_accelerationStructure;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_accelerationStructure = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    AccelerationStructureNVX(AccelerationStructureNVX&& other) noexcept
      : m_device(other.m_device)
      , m_accelerationStructure(other.m_accelerationStructure)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_accelerationStructure = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    AccelerationStructureNVX()
      : m_device(VK_NULL_HANDLE)
      , m_accelerationStructure(FIX_DEFAULT_FOR_TYPE_NOT_DEFINED)
    {
    }

    //! @brief Assume control of the AccelerationStructureNVX (this object becomes responsible for releasing it)
    explicit AccelerationStructureNVX(const ClaimMode claimMode, const VkDevice device, const VkAccelerationStructureNVX accelerationStructure)
      : AccelerationStructureNVX()
    {
      Reset(claimMode, device, accelerationStructure);
    }

#if VK_HEADER_VERSION >= 85
    //! @brief Create the requested resource
    //! @note  Function: vkCreateAccelerationStructureNVX
    AccelerationStructureNVX(const VkDevice device, const VkAccelerationStructureCreateInfoNVX& createInfo)
      : AccelerationStructureNVX()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateAccelerationStructureNVX
    AccelerationStructureNVX(const VkDevice device, const VkAccelerationStructureTypeNVX type, const VkBuildAccelerationStructureFlagsNVX flags, const VkDeviceSize compactedSize, const uint32_t instanceCount, const uint32_t geometryCount, VkGeometryNVX*const pGeometries)
      : AccelerationStructureNVX()
    {
      Reset(device, type, flags, compactedSize, instanceCount, geometryCount, pGeometries);
    }
#endif

    ~AccelerationStructureNVX()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkAccelerationStructureNVX Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_accelerationStructure;
      m_device = VK_NULL_HANDLE;
      m_accelerationStructure = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset() noexcept
    {
      if (! IsValid())
        return;

      assert(m_device != VK_NULL_HANDLE);
      assert(m_accelerationStructure != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED);

      vkDestroyAccelerationStructureNVX(m_device, m_accelerationStructure, nullptr);
      m_device = VK_NULL_HANDLE;
      m_accelerationStructure = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Destroys any owned resources and assume control of the AccelerationStructureNVX (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkAccelerationStructureNVX accelerationStructure)
    {
      if (IsValid())
        Reset();


      m_device = device;
      m_accelerationStructure = accelerationStructure;
    }

#if VK_HEADER_VERSION >= 85
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateAccelerationStructureNVX
    void Reset(const VkDevice device, const VkAccelerationStructureCreateInfoNVX& createInfo)
    {
#ifndef RAPIDVULKAN_DISABLE_PARAM_VALIDATION
      if (device == VK_NULL_HANDLE)
        throw std::invalid_argument("device can not be VK_NULL_HANDLE");
#else
      assert(device != VK_NULL_HANDLE);
#endif

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkAccelerationStructureNVX accelerationStructure;
      CheckError(vkCreateAccelerationStructureNVX(device, &createInfo, nullptr, &accelerationStructure), "vkCreateAccelerationStructureNVX", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_accelerationStructure = accelerationStructure;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateAccelerationStructureNVX
    void Reset(const VkDevice device, const VkAccelerationStructureTypeNVX type, const VkBuildAccelerationStructureFlagsNVX flags, const VkDeviceSize compactedSize, const uint32_t instanceCount, const uint32_t geometryCount, VkGeometryNVX*const pGeometries)
    {
      VkAccelerationStructureCreateInfoNVX createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NVX;
      createInfo.pNext = nullptr;
      createInfo.type = type;
      createInfo.flags = flags;
      createInfo.compactedSize = compactedSize;
      createInfo.instanceCount = instanceCount;
      createInfo.geometryCount = geometryCount;
      createInfo.pGeometries = pGeometries;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkAccelerationStructureNVX Get() const
    {
      return m_accelerationStructure;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkAccelerationStructureNVX* GetPointer() const
    {
      return &m_accelerationStructure;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_accelerationStructure != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }


#if VK_HEADER_VERSION >= 85
    //! @note  Function: vkGetAccelerationStructureHandleNVX
    void GetAccelerationStructureHandleNVX(const size_t dataSize, void * pData)
    {
      CheckError(vkGetAccelerationStructureHandleNVX(m_device, m_accelerationStructure, dataSize, pData), "vkGetAccelerationStructureHandleNVX", __FILE__, __LINE__);
    }
#endif
  };
}

#endif
#endif
