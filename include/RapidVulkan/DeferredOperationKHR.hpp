#ifndef RAPIDVULKAN_DEFERREDOPERATIONKHR_HPP
#define RAPIDVULKAN_DEFERREDOPERATIONKHR_HPP
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
  class DeferredOperationKHR
  {
    VkDevice m_device;
    VkDeferredOperationKHR m_deferredOperation;
  public:
    DeferredOperationKHR(const DeferredOperationKHR&) = delete;
    DeferredOperationKHR& operator=(const DeferredOperationKHR&) = delete;

    //! @brief Move assignment operator
    DeferredOperationKHR& operator=(DeferredOperationKHR&& other) noexcept
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
        m_deferredOperation = other.m_deferredOperation;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_deferredOperation = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    DeferredOperationKHR(DeferredOperationKHR&& other) noexcept
      : m_device(other.m_device)
      , m_deferredOperation(other.m_deferredOperation)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_deferredOperation = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    DeferredOperationKHR()
      : m_device(VK_NULL_HANDLE)
      , m_deferredOperation(FIX_DEFAULT_FOR_TYPE_NOT_DEFINED)
    {
    }

    //! @brief Assume control of the DeferredOperationKHR (this object becomes responsible for releasing it)
    explicit DeferredOperationKHR(const ClaimMode claimMode, const VkDevice device, const VkDeferredOperationKHR deferredOperation)
      : DeferredOperationKHR()
    {
      Reset(claimMode, device, deferredOperation);
    }

#if VK_HEADER_VERSION >= 162
    //! @brief Create the requested resource
    //! @note  Function: vkCreateDeferredOperationKHR
    DeferredOperationKHR(const VkDevice device)
      : DeferredOperationKHR()
    {
      Reset(device);
    }
#endif

    ~DeferredOperationKHR()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkDeferredOperationKHR Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_deferredOperation;
      m_device = VK_NULL_HANDLE;
      m_deferredOperation = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
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
      assert(m_deferredOperation != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED);

      vkDestroyDeferredOperationKHR(m_device, m_deferredOperation, nullptr);
      m_device = VK_NULL_HANDLE;
      m_deferredOperation = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Destroys any owned resources and assume control of the DeferredOperationKHR (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkDeferredOperationKHR deferredOperation)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_deferredOperation = deferredOperation;
    }

#if VK_HEADER_VERSION >= 162
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateDeferredOperationKHR
    void Reset(const VkDevice device)
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
      VkDeferredOperationKHR deferredOperation;
      CheckError(vkCreateDeferredOperationKHR(device, nullptr, &deferredOperation), "vkCreateDeferredOperationKHR", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_deferredOperation = deferredOperation;
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkDeferredOperationKHR Get() const
    {
      return m_deferredOperation;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkDeferredOperationKHR* GetPointer() const
    {
      return &m_deferredOperation;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_deferredOperation != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkGetDeferredOperationMaxConcurrencyKHR
    uint32_t GetDeferredOperationMaxConcurrencyKHR()
    {
      return vkGetDeferredOperationMaxConcurrencyKHR(m_device, m_deferredOperation);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkGetDeferredOperationResultKHR
    void GetDeferredOperationResultKHR()
    {
      CheckError(vkGetDeferredOperationResultKHR(m_device, m_deferredOperation), "vkGetDeferredOperationResultKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkDeferredOperationJoinKHR
    void DeferredOperationJoinKHR()
    {
      CheckError(vkDeferredOperationJoinKHR(m_device, m_deferredOperation), "vkDeferredOperationJoinKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkBuildAccelerationStructuresKHR
    void BuildAccelerationStructuresKHR(const uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildRangeInfoKHR *const * ppBuildRangeInfos)
    {
      CheckError(vkBuildAccelerationStructuresKHR(m_device, m_deferredOperation, infoCount, pInfos, ppBuildRangeInfos), "vkBuildAccelerationStructuresKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkCopyAccelerationStructureKHR
    void CopyAccelerationStructureKHR(const VkCopyAccelerationStructureInfoKHR * pInfo)
    {
      CheckError(vkCopyAccelerationStructureKHR(m_device, m_deferredOperation, pInfo), "vkCopyAccelerationStructureKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkCopyAccelerationStructureToMemoryKHR
    void CopyAccelerationStructureToMemoryKHR(const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo)
    {
      CheckError(vkCopyAccelerationStructureToMemoryKHR(m_device, m_deferredOperation, pInfo), "vkCopyAccelerationStructureToMemoryKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 162
    //! @note  Function: vkCopyMemoryToAccelerationStructureKHR
    void CopyMemoryToAccelerationStructureKHR(const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo)
    {
      CheckError(vkCopyMemoryToAccelerationStructureKHR(m_device, m_deferredOperation, pInfo), "vkCopyMemoryToAccelerationStructureKHR", __FILE__, __LINE__);
    }
#endif
  };
}

#endif
#endif
