#ifndef RAPIDVULKAN_DEVICE_HPP
#define RAPIDVULKAN_DEVICE_HPP
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
  class Device
  {
    VkDevice m_device{VK_NULL_HANDLE};

  public:
    Device(const Device&) = delete;
    Device& operator=(const Device&) = delete;

    //! @brief Move assignment operator
    Device& operator=(Device&& other) noexcept
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

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    Device(Device&& other) noexcept
      : m_device(other.m_device)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    Device()

        = default;

    //! @brief Assume control of the Device (this object becomes responsible for releasing it)
    explicit Device(const ClaimMode claimMode, const VkDevice device)
      : Device()
    {
      Reset(claimMode, device);
    }

    //! @brief Create the requested resource
    //! @note  Function: vkCreateDevice
    Device(const VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo& createInfo)
      : Device()
    {
      Reset(physicalDevice, createInfo);
    }

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateDevice
    Device(const VkPhysicalDevice physicalDevice, const VkDeviceCreateFlags flags, const uint32_t queueCreateInfoCount, VkDeviceQueueCreateInfo*const pQueueCreateInfos, const uint32_t enabledLayerCount, const char *const * ppEnabledLayerNames, const uint32_t enabledExtensionCount, const char *const * ppEnabledExtensionNames, VkPhysicalDeviceFeatures*const pEnabledFeatures)
      : Device()
    {
      Reset(physicalDevice, flags, queueCreateInfoCount, pQueueCreateInfos, enabledLayerCount, ppEnabledLayerNames, enabledExtensionCount, ppEnabledExtensionNames, pEnabledFeatures);
    }
#endif

    ~Device()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    RAPIDVULKAN_FUNC_WARN_UNUSED_RESULT VkDevice Release()
    {
      const auto resource = m_device;
      m_device = VK_NULL_HANDLE;
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

      vkDestroyDevice(m_device, nullptr);
      m_device = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the Device (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
    }

    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateDevice
    void Reset(const VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo& createInfo)
    {
#ifndef RAPIDVULKAN_DISABLE_PARAM_VALIDATION
#else
#endif

      // Free any currently allocated resource
      if (IsValid())
      {
        Reset();
      }

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkDevice device;
      CheckError(vkCreateDevice(physicalDevice, &createInfo, nullptr, &device), "vkCreateDevice", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
    }

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateDevice
    void Reset(const VkPhysicalDevice physicalDevice, const VkDeviceCreateFlags flags, const uint32_t queueCreateInfoCount, VkDeviceQueueCreateInfo*const pQueueCreateInfos, const uint32_t enabledLayerCount, const char *const * ppEnabledLayerNames, const uint32_t enabledExtensionCount, const char *const * ppEnabledExtensionNames, VkPhysicalDeviceFeatures*const pEnabledFeatures)
    {
      VkDeviceCreateInfo createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
      createInfo.pNext = nullptr;
      createInfo.flags = flags;
      createInfo.queueCreateInfoCount = queueCreateInfoCount;
      createInfo.pQueueCreateInfos = pQueueCreateInfos;
      createInfo.enabledLayerCount = enabledLayerCount;
      createInfo.ppEnabledLayerNames = ppEnabledLayerNames;
      createInfo.enabledExtensionCount = enabledExtensionCount;
      createInfo.ppEnabledExtensionNames = ppEnabledExtensionNames;
      createInfo.pEnabledFeatures = pEnabledFeatures;

      Reset(physicalDevice, createInfo);
    }
#endif

    //! @brief Get the associated resource handle
    VkDevice Get() const
    {
      return m_device;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkDevice* GetPointer() const
    {
      return &m_device;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_device != VK_NULL_HANDLE;
    }

    //! @note  Function: vkGetDeviceProcAddr
    PFN_vkVoidFunction GetDeviceProcAddr(const char * pName)
    {
      return vkGetDeviceProcAddr(m_device, pName);
    }

    //! @note  Function: vkGetDeviceQueue
    void GetDeviceQueue(const uint32_t queueFamilyIndex, const uint32_t queueIndex, VkQueue * pQueue)
    {
      vkGetDeviceQueue(m_device, queueFamilyIndex, queueIndex, pQueue);
    }

    //! @note  Function: vkDeviceWaitIdle
    void DeviceWaitIdle()
    {
      CheckError(vkDeviceWaitIdle(m_device), "vkDeviceWaitIdle", __FILE__, __LINE__);
    }

    //! @note  Function: vkFlushMappedMemoryRanges
    void FlushMappedMemoryRanges(const uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
    {
      CheckError(vkFlushMappedMemoryRanges(m_device, memoryRangeCount, pMemoryRanges), "vkFlushMappedMemoryRanges", __FILE__, __LINE__);
    }

    //! @note  Function: vkInvalidateMappedMemoryRanges
    void InvalidateMappedMemoryRanges(const uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
    {
      CheckError(vkInvalidateMappedMemoryRanges(m_device, memoryRangeCount, pMemoryRanges), "vkInvalidateMappedMemoryRanges", __FILE__, __LINE__);
    }

    //! @note  Function: vkResetFences
    void ResetFences(const uint32_t fenceCount, const VkFence * pFences)
    {
      CheckError(vkResetFences(m_device, fenceCount, pFences), "vkResetFences", __FILE__, __LINE__);
    }

    //! @note  Function: vkWaitForFences
    void WaitForFences(const uint32_t fenceCount, const VkFence * pFences, const VkBool32 waitAll, const uint64_t timeout)
    {
      CheckError(vkWaitForFences(m_device, fenceCount, pFences, waitAll, timeout), "vkWaitForFences", __FILE__, __LINE__);
    }

    //! @note  Function: vkUpdateDescriptorSets
    void UpdateDescriptorSets(const uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, const uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies)
    {
      vkUpdateDescriptorSets(m_device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
    }


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkBindBufferMemory2
    void BindBufferMemory2(const uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos)
    {
      CheckError(vkBindBufferMemory2(m_device, bindInfoCount, pBindInfos), "vkBindBufferMemory2", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkBindImageMemory2
    void BindImageMemory2(const uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos)
    {
      CheckError(vkBindImageMemory2(m_device, bindInfoCount, pBindInfos), "vkBindImageMemory2", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetDeviceGroupPeerMemoryFeatures
    void GetDeviceGroupPeerMemoryFeatures(const uint32_t heapIndex, const uint32_t localDeviceIndex, const uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures)
    {
      vkGetDeviceGroupPeerMemoryFeatures(m_device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetImageMemoryRequirements2
    void GetImageMemoryRequirements2(const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
    {
      vkGetImageMemoryRequirements2(m_device, pInfo, pMemoryRequirements);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetBufferMemoryRequirements2
    void GetBufferMemoryRequirements2(const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
    {
      vkGetBufferMemoryRequirements2(m_device, pInfo, pMemoryRequirements);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetImageSparseMemoryRequirements2
    void GetImageSparseMemoryRequirements2(const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
    {
      vkGetImageSparseMemoryRequirements2(m_device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetDeviceQueue2
    void GetDeviceQueue2(const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue)
    {
      vkGetDeviceQueue2(m_device, pQueueInfo, pQueue);
    }
#endif


#if VK_HEADER_VERSION >= 70
    //! @note  Function: vkGetDescriptorSetLayoutSupport
    void GetDescriptorSetLayoutSupport(const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport)
    {
      vkGetDescriptorSetLayoutSupport(m_device, pCreateInfo, pSupport);
    }
#endif


#if VK_HEADER_VERSION >= 131
    //! @note  Function: vkWaitSemaphores
    void WaitSemaphores(const VkSemaphoreWaitInfo * pWaitInfo, const uint64_t timeout)
    {
      CheckError(vkWaitSemaphores(m_device, pWaitInfo, timeout), "vkWaitSemaphores", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 131
    //! @note  Function: vkSignalSemaphore
    void SignalSemaphore(const VkSemaphoreSignalInfo * pSignalInfo)
    {
      CheckError(vkSignalSemaphore(m_device, pSignalInfo), "vkSignalSemaphore", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 131
    //! @note  Function: vkGetBufferDeviceAddress
    VkDeviceAddress GetBufferDeviceAddress(const VkBufferDeviceAddressInfo * pInfo)
    {
      return vkGetBufferDeviceAddress(m_device, pInfo);
    }
#endif


#if VK_HEADER_VERSION >= 131
    //! @note  Function: vkGetBufferOpaqueCaptureAddress
    uint64_t GetBufferOpaqueCaptureAddress(const VkBufferDeviceAddressInfo * pInfo)
    {
      return vkGetBufferOpaqueCaptureAddress(m_device, pInfo);
    }
#endif


#if VK_HEADER_VERSION >= 131
    //! @note  Function: vkGetDeviceMemoryOpaqueCaptureAddress
    uint64_t GetDeviceMemoryOpaqueCaptureAddress(const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo)
    {
      return vkGetDeviceMemoryOpaqueCaptureAddress(m_device, pInfo);
    }
#endif


#if VK_HEADER_VERSION >= 204
    //! @note  Function: vkSetPrivateData
    void SetPrivateData(const VkObjectType objectType, const uint64_t objectHandle, const VkPrivateDataSlot privateDataSlot, const uint64_t data)
    {
      CheckError(vkSetPrivateData(m_device, objectType, objectHandle, privateDataSlot, data), "vkSetPrivateData", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 204
    //! @note  Function: vkGetPrivateData
    void GetPrivateData(const VkObjectType objectType, const uint64_t objectHandle, const VkPrivateDataSlot privateDataSlot, uint64_t * pData)
    {
      vkGetPrivateData(m_device, objectType, objectHandle, privateDataSlot, pData);
    }
#endif


#if VK_HEADER_VERSION >= 204
    //! @note  Function: vkGetDeviceBufferMemoryRequirements
    void GetDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
    {
      vkGetDeviceBufferMemoryRequirements(m_device, pInfo, pMemoryRequirements);
    }
#endif


#if VK_HEADER_VERSION >= 204
    //! @note  Function: vkGetDeviceImageMemoryRequirements
    void GetDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
    {
      vkGetDeviceImageMemoryRequirements(m_device, pInfo, pMemoryRequirements);
    }
#endif


#if VK_HEADER_VERSION >= 204
    //! @note  Function: vkGetDeviceImageSparseMemoryRequirements
    void GetDeviceImageSparseMemoryRequirements(const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
    {
      vkGetDeviceImageSparseMemoryRequirements(m_device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
#endif
  };
}

#endif
