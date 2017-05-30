#ifndef RAPIDVULKAN_VK_TYPES_HPP
#define RAPIDVULKAN_VK_TYPES_HPP
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

// ##AG_TOOL_STATEMENT##

#include <vulkan/vulkan.h>

namespace RapidVulkan
{
  namespace Vk
  {

    struct ApplicationInfo : public VkApplicationInfo
    {
      ApplicationInfo()
        : VkApplicationInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
      }

      explicit ApplicationInfo(const char * pApplicationName, uint32_t applicationVersion, const char * pEngineName, uint32_t engineVersion, uint32_t apiVersion)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkApplicationInfo{VK_STRUCTURE_TYPE_APPLICATION_INFO, nullptr, pApplicationName, applicationVersion, pEngineName, engineVersion, apiVersion}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
        this->pNext = nullptr;
        this->pApplicationName = pApplicationName;
        this->applicationVersion = applicationVersion;
        this->pEngineName = pEngineName;
        this->engineVersion = engineVersion;
        this->apiVersion = apiVersion;
#endif
      }

      ApplicationInfo(const VkApplicationInfo& value)
      {
        *reinterpret_cast<VkApplicationInfo*>(this) = value;
      }

      ApplicationInfo& operator=(const VkApplicationInfo& rhs)
      {
        *reinterpret_cast<VkApplicationInfo*>(this) = rhs;
        return *this;
      }
    };

    struct InstanceCreateInfo : public VkInstanceCreateInfo
    {
      InstanceCreateInfo()
        : VkInstanceCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      }

      explicit InstanceCreateInfo(VkInstanceCreateFlags flags, const VkApplicationInfo * pApplicationInfo, uint32_t enabledLayerCount, const char *const * ppEnabledLayerNames, uint32_t enabledExtensionCount, const char *const * ppEnabledExtensionNames)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkInstanceCreateInfo{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, nullptr, flags, pApplicationInfo, enabledLayerCount, ppEnabledLayerNames, enabledExtensionCount, ppEnabledExtensionNames}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->pApplicationInfo = pApplicationInfo;
        this->enabledLayerCount = enabledLayerCount;
        this->ppEnabledLayerNames = ppEnabledLayerNames;
        this->enabledExtensionCount = enabledExtensionCount;
        this->ppEnabledExtensionNames = ppEnabledExtensionNames;
#endif
      }

      InstanceCreateInfo(const VkInstanceCreateInfo& value)
      {
        *reinterpret_cast<VkInstanceCreateInfo*>(this) = value;
      }

      InstanceCreateInfo& operator=(const VkInstanceCreateInfo& rhs)
      {
        *reinterpret_cast<VkInstanceCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct AllocationCallbacks : public VkAllocationCallbacks
    {
      AllocationCallbacks()
        : VkAllocationCallbacks{}
      {
      }

      explicit AllocationCallbacks(void * pUserData, PFN_vkAllocationFunction pfnAllocation, PFN_vkReallocationFunction pfnReallocation, PFN_vkFreeFunction pfnFree, PFN_vkInternalAllocationNotification pfnInternalAllocation, PFN_vkInternalFreeNotification pfnInternalFree)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkAllocationCallbacks{pUserData, pfnAllocation, pfnReallocation, pfnFree, pfnInternalAllocation, pfnInternalFree}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->pUserData = pUserData;
        this->pfnAllocation = pfnAllocation;
        this->pfnReallocation = pfnReallocation;
        this->pfnFree = pfnFree;
        this->pfnInternalAllocation = pfnInternalAllocation;
        this->pfnInternalFree = pfnInternalFree;
#endif
      }

      AllocationCallbacks(const VkAllocationCallbacks& value)
      {
        *reinterpret_cast<VkAllocationCallbacks*>(this) = value;
      }

      AllocationCallbacks& operator=(const VkAllocationCallbacks& rhs)
      {
        *reinterpret_cast<VkAllocationCallbacks*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceFeatures : public VkPhysicalDeviceFeatures
    {
      PhysicalDeviceFeatures()
        : VkPhysicalDeviceFeatures{}
      {
      }

      explicit PhysicalDeviceFeatures(VkBool32 robustBufferAccess, VkBool32 fullDrawIndexUint32, VkBool32 imageCubeArray, VkBool32 independentBlend, VkBool32 geometryShader, VkBool32 tessellationShader, VkBool32 sampleRateShading, VkBool32 dualSrcBlend, VkBool32 logicOp, VkBool32 multiDrawIndirect, VkBool32 drawIndirectFirstInstance, VkBool32 depthClamp, VkBool32 depthBiasClamp, VkBool32 fillModeNonSolid, VkBool32 depthBounds, VkBool32 wideLines, VkBool32 largePoints, VkBool32 alphaToOne, VkBool32 multiViewport, VkBool32 samplerAnisotropy, VkBool32 textureCompressionETC2, VkBool32 textureCompressionASTC_LDR, VkBool32 textureCompressionBC, VkBool32 occlusionQueryPrecise, VkBool32 pipelineStatisticsQuery, VkBool32 vertexPipelineStoresAndAtomics, VkBool32 fragmentStoresAndAtomics, VkBool32 shaderTessellationAndGeometryPointSize, VkBool32 shaderImageGatherExtended, VkBool32 shaderStorageImageExtendedFormats, VkBool32 shaderStorageImageMultisample, VkBool32 shaderStorageImageReadWithoutFormat, VkBool32 shaderStorageImageWriteWithoutFormat, VkBool32 shaderUniformBufferArrayDynamicIndexing, VkBool32 shaderSampledImageArrayDynamicIndexing, VkBool32 shaderStorageBufferArrayDynamicIndexing, VkBool32 shaderStorageImageArrayDynamicIndexing, VkBool32 shaderClipDistance, VkBool32 shaderCullDistance, VkBool32 shaderFloat64, VkBool32 shaderInt64, VkBool32 shaderInt16, VkBool32 shaderResourceResidency, VkBool32 shaderResourceMinLod, VkBool32 sparseBinding, VkBool32 sparseResidencyBuffer, VkBool32 sparseResidencyImage2D, VkBool32 sparseResidencyImage3D, VkBool32 sparseResidency2Samples, VkBool32 sparseResidency4Samples, VkBool32 sparseResidency8Samples, VkBool32 sparseResidency16Samples, VkBool32 sparseResidencyAliased, VkBool32 variableMultisampleRate, VkBool32 inheritedQueries)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceFeatures{robustBufferAccess, fullDrawIndexUint32, imageCubeArray, independentBlend, geometryShader, tessellationShader, sampleRateShading, dualSrcBlend, logicOp, multiDrawIndirect, drawIndirectFirstInstance, depthClamp, depthBiasClamp, fillModeNonSolid, depthBounds, wideLines, largePoints, alphaToOne, multiViewport, samplerAnisotropy, textureCompressionETC2, textureCompressionASTC_LDR, textureCompressionBC, occlusionQueryPrecise, pipelineStatisticsQuery, vertexPipelineStoresAndAtomics, fragmentStoresAndAtomics, shaderTessellationAndGeometryPointSize, shaderImageGatherExtended, shaderStorageImageExtendedFormats, shaderStorageImageMultisample, shaderStorageImageReadWithoutFormat, shaderStorageImageWriteWithoutFormat, shaderUniformBufferArrayDynamicIndexing, shaderSampledImageArrayDynamicIndexing, shaderStorageBufferArrayDynamicIndexing, shaderStorageImageArrayDynamicIndexing, shaderClipDistance, shaderCullDistance, shaderFloat64, shaderInt64, shaderInt16, shaderResourceResidency, shaderResourceMinLod, sparseBinding, sparseResidencyBuffer, sparseResidencyImage2D, sparseResidencyImage3D, sparseResidency2Samples, sparseResidency4Samples, sparseResidency8Samples, sparseResidency16Samples, sparseResidencyAliased, variableMultisampleRate, inheritedQueries}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->robustBufferAccess = robustBufferAccess;
        this->fullDrawIndexUint32 = fullDrawIndexUint32;
        this->imageCubeArray = imageCubeArray;
        this->independentBlend = independentBlend;
        this->geometryShader = geometryShader;
        this->tessellationShader = tessellationShader;
        this->sampleRateShading = sampleRateShading;
        this->dualSrcBlend = dualSrcBlend;
        this->logicOp = logicOp;
        this->multiDrawIndirect = multiDrawIndirect;
        this->drawIndirectFirstInstance = drawIndirectFirstInstance;
        this->depthClamp = depthClamp;
        this->depthBiasClamp = depthBiasClamp;
        this->fillModeNonSolid = fillModeNonSolid;
        this->depthBounds = depthBounds;
        this->wideLines = wideLines;
        this->largePoints = largePoints;
        this->alphaToOne = alphaToOne;
        this->multiViewport = multiViewport;
        this->samplerAnisotropy = samplerAnisotropy;
        this->textureCompressionETC2 = textureCompressionETC2;
        this->textureCompressionASTC_LDR = textureCompressionASTC_LDR;
        this->textureCompressionBC = textureCompressionBC;
        this->occlusionQueryPrecise = occlusionQueryPrecise;
        this->pipelineStatisticsQuery = pipelineStatisticsQuery;
        this->vertexPipelineStoresAndAtomics = vertexPipelineStoresAndAtomics;
        this->fragmentStoresAndAtomics = fragmentStoresAndAtomics;
        this->shaderTessellationAndGeometryPointSize = shaderTessellationAndGeometryPointSize;
        this->shaderImageGatherExtended = shaderImageGatherExtended;
        this->shaderStorageImageExtendedFormats = shaderStorageImageExtendedFormats;
        this->shaderStorageImageMultisample = shaderStorageImageMultisample;
        this->shaderStorageImageReadWithoutFormat = shaderStorageImageReadWithoutFormat;
        this->shaderStorageImageWriteWithoutFormat = shaderStorageImageWriteWithoutFormat;
        this->shaderUniformBufferArrayDynamicIndexing = shaderUniformBufferArrayDynamicIndexing;
        this->shaderSampledImageArrayDynamicIndexing = shaderSampledImageArrayDynamicIndexing;
        this->shaderStorageBufferArrayDynamicIndexing = shaderStorageBufferArrayDynamicIndexing;
        this->shaderStorageImageArrayDynamicIndexing = shaderStorageImageArrayDynamicIndexing;
        this->shaderClipDistance = shaderClipDistance;
        this->shaderCullDistance = shaderCullDistance;
        this->shaderFloat64 = shaderFloat64;
        this->shaderInt64 = shaderInt64;
        this->shaderInt16 = shaderInt16;
        this->shaderResourceResidency = shaderResourceResidency;
        this->shaderResourceMinLod = shaderResourceMinLod;
        this->sparseBinding = sparseBinding;
        this->sparseResidencyBuffer = sparseResidencyBuffer;
        this->sparseResidencyImage2D = sparseResidencyImage2D;
        this->sparseResidencyImage3D = sparseResidencyImage3D;
        this->sparseResidency2Samples = sparseResidency2Samples;
        this->sparseResidency4Samples = sparseResidency4Samples;
        this->sparseResidency8Samples = sparseResidency8Samples;
        this->sparseResidency16Samples = sparseResidency16Samples;
        this->sparseResidencyAliased = sparseResidencyAliased;
        this->variableMultisampleRate = variableMultisampleRate;
        this->inheritedQueries = inheritedQueries;
#endif
      }

      PhysicalDeviceFeatures(const VkPhysicalDeviceFeatures& value)
      {
        *reinterpret_cast<VkPhysicalDeviceFeatures*>(this) = value;
      }

      PhysicalDeviceFeatures& operator=(const VkPhysicalDeviceFeatures& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceFeatures*>(this) = rhs;
        return *this;
      }
    };

    struct FormatProperties : public VkFormatProperties
    {
      FormatProperties()
        : VkFormatProperties{}
      {
      }

      explicit FormatProperties(VkFormatFeatureFlags linearTilingFeatures, VkFormatFeatureFlags optimalTilingFeatures, VkFormatFeatureFlags bufferFeatures)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkFormatProperties{linearTilingFeatures, optimalTilingFeatures, bufferFeatures}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->linearTilingFeatures = linearTilingFeatures;
        this->optimalTilingFeatures = optimalTilingFeatures;
        this->bufferFeatures = bufferFeatures;
#endif
      }

      FormatProperties(const VkFormatProperties& value)
      {
        *reinterpret_cast<VkFormatProperties*>(this) = value;
      }

      FormatProperties& operator=(const VkFormatProperties& rhs)
      {
        *reinterpret_cast<VkFormatProperties*>(this) = rhs;
        return *this;
      }
    };

    struct Extent3D : public VkExtent3D
    {
      Extent3D()
        : VkExtent3D{}
      {
      }

      explicit Extent3D(uint32_t width, uint32_t height, uint32_t depth)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExtent3D{width, height, depth}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->width = width;
        this->height = height;
        this->depth = depth;
#endif
      }

      Extent3D(const VkExtent3D& value)
      {
        *reinterpret_cast<VkExtent3D*>(this) = value;
      }

      Extent3D& operator=(const VkExtent3D& rhs)
      {
        *reinterpret_cast<VkExtent3D*>(this) = rhs;
        return *this;
      }
    };

    struct ImageFormatProperties : public VkImageFormatProperties
    {
      ImageFormatProperties()
        : VkImageFormatProperties{}
      {
      }

      explicit ImageFormatProperties(VkExtent3D maxExtent, uint32_t maxMipLevels, uint32_t maxArrayLayers, VkSampleCountFlags sampleCounts, VkDeviceSize maxResourceSize)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageFormatProperties{maxExtent, maxMipLevels, maxArrayLayers, sampleCounts, maxResourceSize}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->maxExtent = maxExtent;
        this->maxMipLevels = maxMipLevels;
        this->maxArrayLayers = maxArrayLayers;
        this->sampleCounts = sampleCounts;
        this->maxResourceSize = maxResourceSize;
#endif
      }

      ImageFormatProperties(const VkImageFormatProperties& value)
      {
        *reinterpret_cast<VkImageFormatProperties*>(this) = value;
      }

      ImageFormatProperties& operator=(const VkImageFormatProperties& rhs)
      {
        *reinterpret_cast<VkImageFormatProperties*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceSparseProperties : public VkPhysicalDeviceSparseProperties
    {
      PhysicalDeviceSparseProperties()
        : VkPhysicalDeviceSparseProperties{}
      {
      }

      explicit PhysicalDeviceSparseProperties(VkBool32 residencyStandard2DBlockShape, VkBool32 residencyStandard2DMultisampleBlockShape, VkBool32 residencyStandard3DBlockShape, VkBool32 residencyAlignedMipSize, VkBool32 residencyNonResidentStrict)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceSparseProperties{residencyStandard2DBlockShape, residencyStandard2DMultisampleBlockShape, residencyStandard3DBlockShape, residencyAlignedMipSize, residencyNonResidentStrict}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->residencyStandard2DBlockShape = residencyStandard2DBlockShape;
        this->residencyStandard2DMultisampleBlockShape = residencyStandard2DMultisampleBlockShape;
        this->residencyStandard3DBlockShape = residencyStandard3DBlockShape;
        this->residencyAlignedMipSize = residencyAlignedMipSize;
        this->residencyNonResidentStrict = residencyNonResidentStrict;
#endif
      }

      PhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties& value)
      {
        *reinterpret_cast<VkPhysicalDeviceSparseProperties*>(this) = value;
      }

      PhysicalDeviceSparseProperties& operator=(const VkPhysicalDeviceSparseProperties& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceSparseProperties*>(this) = rhs;
        return *this;
      }
    };

    struct QueueFamilyProperties : public VkQueueFamilyProperties
    {
      QueueFamilyProperties()
        : VkQueueFamilyProperties{}
      {
      }

      explicit QueueFamilyProperties(VkQueueFlags queueFlags, uint32_t queueCount, uint32_t timestampValidBits, VkExtent3D minImageTransferGranularity)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkQueueFamilyProperties{queueFlags, queueCount, timestampValidBits, minImageTransferGranularity}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->queueFlags = queueFlags;
        this->queueCount = queueCount;
        this->timestampValidBits = timestampValidBits;
        this->minImageTransferGranularity = minImageTransferGranularity;
#endif
      }

      QueueFamilyProperties(const VkQueueFamilyProperties& value)
      {
        *reinterpret_cast<VkQueueFamilyProperties*>(this) = value;
      }

      QueueFamilyProperties& operator=(const VkQueueFamilyProperties& rhs)
      {
        *reinterpret_cast<VkQueueFamilyProperties*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryType : public VkMemoryType
    {
      MemoryType()
        : VkMemoryType{}
      {
      }

      explicit MemoryType(VkMemoryPropertyFlags propertyFlags, uint32_t heapIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryType{propertyFlags, heapIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->propertyFlags = propertyFlags;
        this->heapIndex = heapIndex;
#endif
      }

      MemoryType(const VkMemoryType& value)
      {
        *reinterpret_cast<VkMemoryType*>(this) = value;
      }

      MemoryType& operator=(const VkMemoryType& rhs)
      {
        *reinterpret_cast<VkMemoryType*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryHeap : public VkMemoryHeap
    {
      MemoryHeap()
        : VkMemoryHeap{}
      {
      }

      explicit MemoryHeap(VkDeviceSize size, VkMemoryHeapFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryHeap{size, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->size = size;
        this->flags = flags;
#endif
      }

      MemoryHeap(const VkMemoryHeap& value)
      {
        *reinterpret_cast<VkMemoryHeap*>(this) = value;
      }

      MemoryHeap& operator=(const VkMemoryHeap& rhs)
      {
        *reinterpret_cast<VkMemoryHeap*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceQueueCreateInfo : public VkDeviceQueueCreateInfo
    {
      DeviceQueueCreateInfo()
        : VkDeviceQueueCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
      }

      explicit DeviceQueueCreateInfo(VkDeviceQueueCreateFlags flags, uint32_t queueFamilyIndex, uint32_t queueCount, const float * pQueuePriorities)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceQueueCreateInfo{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, nullptr, flags, queueFamilyIndex, queueCount, pQueuePriorities}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->queueFamilyIndex = queueFamilyIndex;
        this->queueCount = queueCount;
        this->pQueuePriorities = pQueuePriorities;
#endif
      }

      DeviceQueueCreateInfo(const VkDeviceQueueCreateInfo& value)
      {
        *reinterpret_cast<VkDeviceQueueCreateInfo*>(this) = value;
      }

      DeviceQueueCreateInfo& operator=(const VkDeviceQueueCreateInfo& rhs)
      {
        *reinterpret_cast<VkDeviceQueueCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceCreateInfo : public VkDeviceCreateInfo
    {
      DeviceCreateInfo()
        : VkDeviceCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
      }

      explicit DeviceCreateInfo(VkDeviceCreateFlags flags, uint32_t queueCreateInfoCount, const VkDeviceQueueCreateInfo * pQueueCreateInfos, uint32_t enabledLayerCount, const char *const * ppEnabledLayerNames, uint32_t enabledExtensionCount, const char *const * ppEnabledExtensionNames, const VkPhysicalDeviceFeatures * pEnabledFeatures)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceCreateInfo{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, nullptr, flags, queueCreateInfoCount, pQueueCreateInfos, enabledLayerCount, ppEnabledLayerNames, enabledExtensionCount, ppEnabledExtensionNames, pEnabledFeatures}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->queueCreateInfoCount = queueCreateInfoCount;
        this->pQueueCreateInfos = pQueueCreateInfos;
        this->enabledLayerCount = enabledLayerCount;
        this->ppEnabledLayerNames = ppEnabledLayerNames;
        this->enabledExtensionCount = enabledExtensionCount;
        this->ppEnabledExtensionNames = ppEnabledExtensionNames;
        this->pEnabledFeatures = pEnabledFeatures;
#endif
      }

      DeviceCreateInfo(const VkDeviceCreateInfo& value)
      {
        *reinterpret_cast<VkDeviceCreateInfo*>(this) = value;
      }

      DeviceCreateInfo& operator=(const VkDeviceCreateInfo& rhs)
      {
        *reinterpret_cast<VkDeviceCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SubmitInfo : public VkSubmitInfo
    {
      SubmitInfo()
        : VkSubmitInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
      }

      explicit SubmitInfo(uint32_t waitSemaphoreCount, const VkSemaphore * pWaitSemaphores, const VkPipelineStageFlags * pWaitDstStageMask, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers, uint32_t signalSemaphoreCount, const VkSemaphore * pSignalSemaphores)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSubmitInfo{VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr, waitSemaphoreCount, pWaitSemaphores, pWaitDstStageMask, commandBufferCount, pCommandBuffers, signalSemaphoreCount, pSignalSemaphores}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        this->pNext = nullptr;
        this->waitSemaphoreCount = waitSemaphoreCount;
        this->pWaitSemaphores = pWaitSemaphores;
        this->pWaitDstStageMask = pWaitDstStageMask;
        this->commandBufferCount = commandBufferCount;
        this->pCommandBuffers = pCommandBuffers;
        this->signalSemaphoreCount = signalSemaphoreCount;
        this->pSignalSemaphores = pSignalSemaphores;
#endif
      }

      SubmitInfo(const VkSubmitInfo& value)
      {
        *reinterpret_cast<VkSubmitInfo*>(this) = value;
      }

      SubmitInfo& operator=(const VkSubmitInfo& rhs)
      {
        *reinterpret_cast<VkSubmitInfo*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryAllocateInfo : public VkMemoryAllocateInfo
    {
      MemoryAllocateInfo()
        : VkMemoryAllocateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
      }

      explicit MemoryAllocateInfo(VkDeviceSize allocationSize, uint32_t memoryTypeIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryAllocateInfo{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, nullptr, allocationSize, memoryTypeIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
        this->pNext = nullptr;
        this->allocationSize = allocationSize;
        this->memoryTypeIndex = memoryTypeIndex;
#endif
      }

      MemoryAllocateInfo(const VkMemoryAllocateInfo& value)
      {
        *reinterpret_cast<VkMemoryAllocateInfo*>(this) = value;
      }

      MemoryAllocateInfo& operator=(const VkMemoryAllocateInfo& rhs)
      {
        *reinterpret_cast<VkMemoryAllocateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct MappedMemoryRange : public VkMappedMemoryRange
    {
      MappedMemoryRange()
        : VkMappedMemoryRange{}
      {
        this->sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
      }

      explicit MappedMemoryRange(VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMappedMemoryRange{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, nullptr, memory, offset, size}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
        this->pNext = nullptr;
        this->memory = memory;
        this->offset = offset;
        this->size = size;
#endif
      }

      MappedMemoryRange(const VkMappedMemoryRange& value)
      {
        *reinterpret_cast<VkMappedMemoryRange*>(this) = value;
      }

      MappedMemoryRange& operator=(const VkMappedMemoryRange& rhs)
      {
        *reinterpret_cast<VkMappedMemoryRange*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryRequirements : public VkMemoryRequirements
    {
      MemoryRequirements()
        : VkMemoryRequirements{}
      {
      }

      explicit MemoryRequirements(VkDeviceSize size, VkDeviceSize alignment, uint32_t memoryTypeBits)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryRequirements{size, alignment, memoryTypeBits}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->size = size;
        this->alignment = alignment;
        this->memoryTypeBits = memoryTypeBits;
#endif
      }

      MemoryRequirements(const VkMemoryRequirements& value)
      {
        *reinterpret_cast<VkMemoryRequirements*>(this) = value;
      }

      MemoryRequirements& operator=(const VkMemoryRequirements& rhs)
      {
        *reinterpret_cast<VkMemoryRequirements*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageFormatProperties : public VkSparseImageFormatProperties
    {
      SparseImageFormatProperties()
        : VkSparseImageFormatProperties{}
      {
      }

      explicit SparseImageFormatProperties(VkImageAspectFlags aspectMask, VkExtent3D imageGranularity, VkSparseImageFormatFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageFormatProperties{aspectMask, imageGranularity, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->aspectMask = aspectMask;
        this->imageGranularity = imageGranularity;
        this->flags = flags;
#endif
      }

      SparseImageFormatProperties(const VkSparseImageFormatProperties& value)
      {
        *reinterpret_cast<VkSparseImageFormatProperties*>(this) = value;
      }

      SparseImageFormatProperties& operator=(const VkSparseImageFormatProperties& rhs)
      {
        *reinterpret_cast<VkSparseImageFormatProperties*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageMemoryRequirements : public VkSparseImageMemoryRequirements
    {
      SparseImageMemoryRequirements()
        : VkSparseImageMemoryRequirements{}
      {
      }

      explicit SparseImageMemoryRequirements(VkSparseImageFormatProperties formatProperties, uint32_t imageMipTailFirstLod, VkDeviceSize imageMipTailSize, VkDeviceSize imageMipTailOffset, VkDeviceSize imageMipTailStride)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageMemoryRequirements{formatProperties, imageMipTailFirstLod, imageMipTailSize, imageMipTailOffset, imageMipTailStride}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->formatProperties = formatProperties;
        this->imageMipTailFirstLod = imageMipTailFirstLod;
        this->imageMipTailSize = imageMipTailSize;
        this->imageMipTailOffset = imageMipTailOffset;
        this->imageMipTailStride = imageMipTailStride;
#endif
      }

      SparseImageMemoryRequirements(const VkSparseImageMemoryRequirements& value)
      {
        *reinterpret_cast<VkSparseImageMemoryRequirements*>(this) = value;
      }

      SparseImageMemoryRequirements& operator=(const VkSparseImageMemoryRequirements& rhs)
      {
        *reinterpret_cast<VkSparseImageMemoryRequirements*>(this) = rhs;
        return *this;
      }
    };

    struct SparseMemoryBind : public VkSparseMemoryBind
    {
      SparseMemoryBind()
        : VkSparseMemoryBind{}
      {
      }

      explicit SparseMemoryBind(VkDeviceSize resourceOffset, VkDeviceSize size, VkDeviceMemory memory, VkDeviceSize memoryOffset, VkSparseMemoryBindFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseMemoryBind{resourceOffset, size, memory, memoryOffset, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->resourceOffset = resourceOffset;
        this->size = size;
        this->memory = memory;
        this->memoryOffset = memoryOffset;
        this->flags = flags;
#endif
      }

      SparseMemoryBind(const VkSparseMemoryBind& value)
      {
        *reinterpret_cast<VkSparseMemoryBind*>(this) = value;
      }

      SparseMemoryBind& operator=(const VkSparseMemoryBind& rhs)
      {
        *reinterpret_cast<VkSparseMemoryBind*>(this) = rhs;
        return *this;
      }
    };

    struct SparseBufferMemoryBindInfo : public VkSparseBufferMemoryBindInfo
    {
      SparseBufferMemoryBindInfo()
        : VkSparseBufferMemoryBindInfo{}
      {
      }

      explicit SparseBufferMemoryBindInfo(VkBuffer buffer, uint32_t bindCount, const VkSparseMemoryBind * pBinds)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseBufferMemoryBindInfo{buffer, bindCount, pBinds}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->buffer = buffer;
        this->bindCount = bindCount;
        this->pBinds = pBinds;
#endif
      }

      SparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo& value)
      {
        *reinterpret_cast<VkSparseBufferMemoryBindInfo*>(this) = value;
      }

      SparseBufferMemoryBindInfo& operator=(const VkSparseBufferMemoryBindInfo& rhs)
      {
        *reinterpret_cast<VkSparseBufferMemoryBindInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageOpaqueMemoryBindInfo : public VkSparseImageOpaqueMemoryBindInfo
    {
      SparseImageOpaqueMemoryBindInfo()
        : VkSparseImageOpaqueMemoryBindInfo{}
      {
      }

      explicit SparseImageOpaqueMemoryBindInfo(VkImage image, uint32_t bindCount, const VkSparseMemoryBind * pBinds)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageOpaqueMemoryBindInfo{image, bindCount, pBinds}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->image = image;
        this->bindCount = bindCount;
        this->pBinds = pBinds;
#endif
      }

      SparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo& value)
      {
        *reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo*>(this) = value;
      }

      SparseImageOpaqueMemoryBindInfo& operator=(const VkSparseImageOpaqueMemoryBindInfo& rhs)
      {
        *reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo*>(this) = rhs;
        return *this;
      }
    };

    struct ImageSubresource : public VkImageSubresource
    {
      ImageSubresource()
        : VkImageSubresource{}
      {
      }

      explicit ImageSubresource(VkImageAspectFlags aspectMask, uint32_t mipLevel, uint32_t arrayLayer)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageSubresource{aspectMask, mipLevel, arrayLayer}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->aspectMask = aspectMask;
        this->mipLevel = mipLevel;
        this->arrayLayer = arrayLayer;
#endif
      }

      ImageSubresource(const VkImageSubresource& value)
      {
        *reinterpret_cast<VkImageSubresource*>(this) = value;
      }

      ImageSubresource& operator=(const VkImageSubresource& rhs)
      {
        *reinterpret_cast<VkImageSubresource*>(this) = rhs;
        return *this;
      }
    };

    struct Offset3D : public VkOffset3D
    {
      Offset3D()
        : VkOffset3D{}
      {
      }

      explicit Offset3D(int32_t x, int32_t y, int32_t z)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkOffset3D{x, y, z}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
        this->z = z;
#endif
      }

      Offset3D(const VkOffset3D& value)
      {
        *reinterpret_cast<VkOffset3D*>(this) = value;
      }

      Offset3D& operator=(const VkOffset3D& rhs)
      {
        *reinterpret_cast<VkOffset3D*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageMemoryBind : public VkSparseImageMemoryBind
    {
      SparseImageMemoryBind()
        : VkSparseImageMemoryBind{}
      {
      }

      explicit SparseImageMemoryBind(VkImageSubresource subresource, VkOffset3D offset, VkExtent3D extent, VkDeviceMemory memory, VkDeviceSize memoryOffset, VkSparseMemoryBindFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageMemoryBind{subresource, offset, extent, memory, memoryOffset, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->subresource = subresource;
        this->offset = offset;
        this->extent = extent;
        this->memory = memory;
        this->memoryOffset = memoryOffset;
        this->flags = flags;
#endif
      }

      SparseImageMemoryBind(const VkSparseImageMemoryBind& value)
      {
        *reinterpret_cast<VkSparseImageMemoryBind*>(this) = value;
      }

      SparseImageMemoryBind& operator=(const VkSparseImageMemoryBind& rhs)
      {
        *reinterpret_cast<VkSparseImageMemoryBind*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageMemoryBindInfo : public VkSparseImageMemoryBindInfo
    {
      SparseImageMemoryBindInfo()
        : VkSparseImageMemoryBindInfo{}
      {
      }

      explicit SparseImageMemoryBindInfo(VkImage image, uint32_t bindCount, const VkSparseImageMemoryBind * pBinds)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageMemoryBindInfo{image, bindCount, pBinds}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->image = image;
        this->bindCount = bindCount;
        this->pBinds = pBinds;
#endif
      }

      SparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo& value)
      {
        *reinterpret_cast<VkSparseImageMemoryBindInfo*>(this) = value;
      }

      SparseImageMemoryBindInfo& operator=(const VkSparseImageMemoryBindInfo& rhs)
      {
        *reinterpret_cast<VkSparseImageMemoryBindInfo*>(this) = rhs;
        return *this;
      }
    };

    struct BindSparseInfo : public VkBindSparseInfo
    {
      BindSparseInfo()
        : VkBindSparseInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
      }

      explicit BindSparseInfo(uint32_t waitSemaphoreCount, const VkSemaphore * pWaitSemaphores, uint32_t bufferBindCount, const VkSparseBufferMemoryBindInfo * pBufferBinds, uint32_t imageOpaqueBindCount, const VkSparseImageOpaqueMemoryBindInfo * pImageOpaqueBinds, uint32_t imageBindCount, const VkSparseImageMemoryBindInfo * pImageBinds, uint32_t signalSemaphoreCount, const VkSemaphore * pSignalSemaphores)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBindSparseInfo{VK_STRUCTURE_TYPE_BIND_SPARSE_INFO, nullptr, waitSemaphoreCount, pWaitSemaphores, bufferBindCount, pBufferBinds, imageOpaqueBindCount, pImageOpaqueBinds, imageBindCount, pImageBinds, signalSemaphoreCount, pSignalSemaphores}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
        this->pNext = nullptr;
        this->waitSemaphoreCount = waitSemaphoreCount;
        this->pWaitSemaphores = pWaitSemaphores;
        this->bufferBindCount = bufferBindCount;
        this->pBufferBinds = pBufferBinds;
        this->imageOpaqueBindCount = imageOpaqueBindCount;
        this->pImageOpaqueBinds = pImageOpaqueBinds;
        this->imageBindCount = imageBindCount;
        this->pImageBinds = pImageBinds;
        this->signalSemaphoreCount = signalSemaphoreCount;
        this->pSignalSemaphores = pSignalSemaphores;
#endif
      }

      BindSparseInfo(const VkBindSparseInfo& value)
      {
        *reinterpret_cast<VkBindSparseInfo*>(this) = value;
      }

      BindSparseInfo& operator=(const VkBindSparseInfo& rhs)
      {
        *reinterpret_cast<VkBindSparseInfo*>(this) = rhs;
        return *this;
      }
    };

    struct FenceCreateInfo : public VkFenceCreateInfo
    {
      FenceCreateInfo()
        : VkFenceCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
      }

      explicit FenceCreateInfo(VkFenceCreateFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkFenceCreateInfo{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, nullptr, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
#endif
      }

      FenceCreateInfo(const VkFenceCreateInfo& value)
      {
        *reinterpret_cast<VkFenceCreateInfo*>(this) = value;
      }

      FenceCreateInfo& operator=(const VkFenceCreateInfo& rhs)
      {
        *reinterpret_cast<VkFenceCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SemaphoreCreateInfo : public VkSemaphoreCreateInfo
    {
      SemaphoreCreateInfo()
        : VkSemaphoreCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
      }

      explicit SemaphoreCreateInfo(VkSemaphoreCreateFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSemaphoreCreateInfo{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, nullptr, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
#endif
      }

      SemaphoreCreateInfo(const VkSemaphoreCreateInfo& value)
      {
        *reinterpret_cast<VkSemaphoreCreateInfo*>(this) = value;
      }

      SemaphoreCreateInfo& operator=(const VkSemaphoreCreateInfo& rhs)
      {
        *reinterpret_cast<VkSemaphoreCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct EventCreateInfo : public VkEventCreateInfo
    {
      EventCreateInfo()
        : VkEventCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
      }

      explicit EventCreateInfo(VkEventCreateFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkEventCreateInfo{VK_STRUCTURE_TYPE_EVENT_CREATE_INFO, nullptr, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
#endif
      }

      EventCreateInfo(const VkEventCreateInfo& value)
      {
        *reinterpret_cast<VkEventCreateInfo*>(this) = value;
      }

      EventCreateInfo& operator=(const VkEventCreateInfo& rhs)
      {
        *reinterpret_cast<VkEventCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct QueryPoolCreateInfo : public VkQueryPoolCreateInfo
    {
      QueryPoolCreateInfo()
        : VkQueryPoolCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
      }

      explicit QueryPoolCreateInfo(VkQueryPoolCreateFlags flags, VkQueryType queryType, uint32_t queryCount, VkQueryPipelineStatisticFlags pipelineStatistics)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkQueryPoolCreateInfo{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO, nullptr, flags, queryType, queryCount, pipelineStatistics}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->queryType = queryType;
        this->queryCount = queryCount;
        this->pipelineStatistics = pipelineStatistics;
#endif
      }

      QueryPoolCreateInfo(const VkQueryPoolCreateInfo& value)
      {
        *reinterpret_cast<VkQueryPoolCreateInfo*>(this) = value;
      }

      QueryPoolCreateInfo& operator=(const VkQueryPoolCreateInfo& rhs)
      {
        *reinterpret_cast<VkQueryPoolCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct BufferCreateInfo : public VkBufferCreateInfo
    {
      BufferCreateInfo()
        : VkBufferCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
      }

      explicit BufferCreateInfo(VkBufferCreateFlags flags, VkDeviceSize size, VkBufferUsageFlags usage, VkSharingMode sharingMode, uint32_t queueFamilyIndexCount, const uint32_t * pQueueFamilyIndices)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBufferCreateInfo{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, nullptr, flags, size, usage, sharingMode, queueFamilyIndexCount, pQueueFamilyIndices}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->size = size;
        this->usage = usage;
        this->sharingMode = sharingMode;
        this->queueFamilyIndexCount = queueFamilyIndexCount;
        this->pQueueFamilyIndices = pQueueFamilyIndices;
#endif
      }

      BufferCreateInfo(const VkBufferCreateInfo& value)
      {
        *reinterpret_cast<VkBufferCreateInfo*>(this) = value;
      }

      BufferCreateInfo& operator=(const VkBufferCreateInfo& rhs)
      {
        *reinterpret_cast<VkBufferCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct BufferViewCreateInfo : public VkBufferViewCreateInfo
    {
      BufferViewCreateInfo()
        : VkBufferViewCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
      }

      explicit BufferViewCreateInfo(VkBufferViewCreateFlags flags, VkBuffer buffer, VkFormat format, VkDeviceSize offset, VkDeviceSize range)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBufferViewCreateInfo{VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO, nullptr, flags, buffer, format, offset, range}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->buffer = buffer;
        this->format = format;
        this->offset = offset;
        this->range = range;
#endif
      }

      BufferViewCreateInfo(const VkBufferViewCreateInfo& value)
      {
        *reinterpret_cast<VkBufferViewCreateInfo*>(this) = value;
      }

      BufferViewCreateInfo& operator=(const VkBufferViewCreateInfo& rhs)
      {
        *reinterpret_cast<VkBufferViewCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct ImageCreateInfo : public VkImageCreateInfo
    {
      ImageCreateInfo()
        : VkImageCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
      }

      explicit ImageCreateInfo(VkImageCreateFlags flags, VkImageType imageType, VkFormat format, VkExtent3D extent, uint32_t mipLevels, uint32_t arrayLayers, VkSampleCountFlagBits samples, VkImageTiling tiling, VkImageUsageFlags usage, VkSharingMode sharingMode, uint32_t queueFamilyIndexCount, const uint32_t * pQueueFamilyIndices, VkImageLayout initialLayout)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageCreateInfo{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, nullptr, flags, imageType, format, extent, mipLevels, arrayLayers, samples, tiling, usage, sharingMode, queueFamilyIndexCount, pQueueFamilyIndices, initialLayout}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->imageType = imageType;
        this->format = format;
        this->extent = extent;
        this->mipLevels = mipLevels;
        this->arrayLayers = arrayLayers;
        this->samples = samples;
        this->tiling = tiling;
        this->usage = usage;
        this->sharingMode = sharingMode;
        this->queueFamilyIndexCount = queueFamilyIndexCount;
        this->pQueueFamilyIndices = pQueueFamilyIndices;
        this->initialLayout = initialLayout;
#endif
      }

      ImageCreateInfo(const VkImageCreateInfo& value)
      {
        *reinterpret_cast<VkImageCreateInfo*>(this) = value;
      }

      ImageCreateInfo& operator=(const VkImageCreateInfo& rhs)
      {
        *reinterpret_cast<VkImageCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SubresourceLayout : public VkSubresourceLayout
    {
      SubresourceLayout()
        : VkSubresourceLayout{}
      {
      }

      explicit SubresourceLayout(VkDeviceSize offset, VkDeviceSize size, VkDeviceSize rowPitch, VkDeviceSize arrayPitch, VkDeviceSize depthPitch)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSubresourceLayout{offset, size, rowPitch, arrayPitch, depthPitch}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->offset = offset;
        this->size = size;
        this->rowPitch = rowPitch;
        this->arrayPitch = arrayPitch;
        this->depthPitch = depthPitch;
#endif
      }

      SubresourceLayout(const VkSubresourceLayout& value)
      {
        *reinterpret_cast<VkSubresourceLayout*>(this) = value;
      }

      SubresourceLayout& operator=(const VkSubresourceLayout& rhs)
      {
        *reinterpret_cast<VkSubresourceLayout*>(this) = rhs;
        return *this;
      }
    };

    struct ComponentMapping : public VkComponentMapping
    {
      ComponentMapping()
        : VkComponentMapping{}
      {
      }

      explicit ComponentMapping(VkComponentSwizzle r, VkComponentSwizzle g, VkComponentSwizzle b, VkComponentSwizzle a)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkComponentMapping{r, g, b, a}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
#endif
      }

      ComponentMapping(const VkComponentMapping& value)
      {
        *reinterpret_cast<VkComponentMapping*>(this) = value;
      }

      ComponentMapping& operator=(const VkComponentMapping& rhs)
      {
        *reinterpret_cast<VkComponentMapping*>(this) = rhs;
        return *this;
      }
    };

    struct ImageSubresourceRange : public VkImageSubresourceRange
    {
      ImageSubresourceRange()
        : VkImageSubresourceRange{}
      {
      }

      explicit ImageSubresourceRange(VkImageAspectFlags aspectMask, uint32_t baseMipLevel, uint32_t levelCount, uint32_t baseArrayLayer, uint32_t layerCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageSubresourceRange{aspectMask, baseMipLevel, levelCount, baseArrayLayer, layerCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->aspectMask = aspectMask;
        this->baseMipLevel = baseMipLevel;
        this->levelCount = levelCount;
        this->baseArrayLayer = baseArrayLayer;
        this->layerCount = layerCount;
#endif
      }

      ImageSubresourceRange(const VkImageSubresourceRange& value)
      {
        *reinterpret_cast<VkImageSubresourceRange*>(this) = value;
      }

      ImageSubresourceRange& operator=(const VkImageSubresourceRange& rhs)
      {
        *reinterpret_cast<VkImageSubresourceRange*>(this) = rhs;
        return *this;
      }
    };

    struct ImageViewCreateInfo : public VkImageViewCreateInfo
    {
      ImageViewCreateInfo()
        : VkImageViewCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
      }

      explicit ImageViewCreateInfo(VkImageViewCreateFlags flags, VkImage image, VkImageViewType viewType, VkFormat format, VkComponentMapping components, VkImageSubresourceRange subresourceRange)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageViewCreateInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, nullptr, flags, image, viewType, format, components, subresourceRange}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->image = image;
        this->viewType = viewType;
        this->format = format;
        this->components = components;
        this->subresourceRange = subresourceRange;
#endif
      }

      ImageViewCreateInfo(const VkImageViewCreateInfo& value)
      {
        *reinterpret_cast<VkImageViewCreateInfo*>(this) = value;
      }

      ImageViewCreateInfo& operator=(const VkImageViewCreateInfo& rhs)
      {
        *reinterpret_cast<VkImageViewCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct ShaderModuleCreateInfo : public VkShaderModuleCreateInfo
    {
      ShaderModuleCreateInfo()
        : VkShaderModuleCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
      }

      explicit ShaderModuleCreateInfo(VkShaderModuleCreateFlags flags, size_t codeSize, const uint32_t * pCode)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkShaderModuleCreateInfo{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, nullptr, flags, codeSize, pCode}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->codeSize = codeSize;
        this->pCode = pCode;
#endif
      }

      ShaderModuleCreateInfo(const VkShaderModuleCreateInfo& value)
      {
        *reinterpret_cast<VkShaderModuleCreateInfo*>(this) = value;
      }

      ShaderModuleCreateInfo& operator=(const VkShaderModuleCreateInfo& rhs)
      {
        *reinterpret_cast<VkShaderModuleCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineCacheCreateInfo : public VkPipelineCacheCreateInfo
    {
      PipelineCacheCreateInfo()
        : VkPipelineCacheCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
      }

      explicit PipelineCacheCreateInfo(VkPipelineCacheCreateFlags flags, size_t initialDataSize, const void * pInitialData)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineCacheCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO, nullptr, flags, initialDataSize, pInitialData}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->initialDataSize = initialDataSize;
        this->pInitialData = pInitialData;
#endif
      }

      PipelineCacheCreateInfo(const VkPipelineCacheCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineCacheCreateInfo*>(this) = value;
      }

      PipelineCacheCreateInfo& operator=(const VkPipelineCacheCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineCacheCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SpecializationMapEntry : public VkSpecializationMapEntry
    {
      SpecializationMapEntry()
        : VkSpecializationMapEntry{}
      {
      }

      explicit SpecializationMapEntry(uint32_t constantID, uint32_t offset, size_t size)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSpecializationMapEntry{constantID, offset, size}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->constantID = constantID;
        this->offset = offset;
        this->size = size;
#endif
      }

      SpecializationMapEntry(const VkSpecializationMapEntry& value)
      {
        *reinterpret_cast<VkSpecializationMapEntry*>(this) = value;
      }

      SpecializationMapEntry& operator=(const VkSpecializationMapEntry& rhs)
      {
        *reinterpret_cast<VkSpecializationMapEntry*>(this) = rhs;
        return *this;
      }
    };

    struct SpecializationInfo : public VkSpecializationInfo
    {
      SpecializationInfo()
        : VkSpecializationInfo{}
      {
      }

      explicit SpecializationInfo(uint32_t mapEntryCount, const VkSpecializationMapEntry * pMapEntries, size_t dataSize, const void * pData)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSpecializationInfo{mapEntryCount, pMapEntries, dataSize, pData}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->mapEntryCount = mapEntryCount;
        this->pMapEntries = pMapEntries;
        this->dataSize = dataSize;
        this->pData = pData;
#endif
      }

      SpecializationInfo(const VkSpecializationInfo& value)
      {
        *reinterpret_cast<VkSpecializationInfo*>(this) = value;
      }

      SpecializationInfo& operator=(const VkSpecializationInfo& rhs)
      {
        *reinterpret_cast<VkSpecializationInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineShaderStageCreateInfo : public VkPipelineShaderStageCreateInfo
    {
      PipelineShaderStageCreateInfo()
        : VkPipelineShaderStageCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
      }

      explicit PipelineShaderStageCreateInfo(VkPipelineShaderStageCreateFlags flags, VkShaderStageFlagBits stage, VkShaderModule module, const char * pName, const VkSpecializationInfo * pSpecializationInfo)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineShaderStageCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, nullptr, flags, stage, module, pName, pSpecializationInfo}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->stage = stage;
        this->module = module;
        this->pName = pName;
        this->pSpecializationInfo = pSpecializationInfo;
#endif
      }

      PipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineShaderStageCreateInfo*>(this) = value;
      }

      PipelineShaderStageCreateInfo& operator=(const VkPipelineShaderStageCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineShaderStageCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct VertexInputBindingDescription : public VkVertexInputBindingDescription
    {
      VertexInputBindingDescription()
        : VkVertexInputBindingDescription{}
      {
      }

      explicit VertexInputBindingDescription(uint32_t binding, uint32_t stride, VkVertexInputRate inputRate)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkVertexInputBindingDescription{binding, stride, inputRate}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->binding = binding;
        this->stride = stride;
        this->inputRate = inputRate;
#endif
      }

      VertexInputBindingDescription(const VkVertexInputBindingDescription& value)
      {
        *reinterpret_cast<VkVertexInputBindingDescription*>(this) = value;
      }

      VertexInputBindingDescription& operator=(const VkVertexInputBindingDescription& rhs)
      {
        *reinterpret_cast<VkVertexInputBindingDescription*>(this) = rhs;
        return *this;
      }
    };

    struct VertexInputAttributeDescription : public VkVertexInputAttributeDescription
    {
      VertexInputAttributeDescription()
        : VkVertexInputAttributeDescription{}
      {
      }

      explicit VertexInputAttributeDescription(uint32_t location, uint32_t binding, VkFormat format, uint32_t offset)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkVertexInputAttributeDescription{location, binding, format, offset}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->location = location;
        this->binding = binding;
        this->format = format;
        this->offset = offset;
#endif
      }

      VertexInputAttributeDescription(const VkVertexInputAttributeDescription& value)
      {
        *reinterpret_cast<VkVertexInputAttributeDescription*>(this) = value;
      }

      VertexInputAttributeDescription& operator=(const VkVertexInputAttributeDescription& rhs)
      {
        *reinterpret_cast<VkVertexInputAttributeDescription*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineVertexInputStateCreateInfo : public VkPipelineVertexInputStateCreateInfo
    {
      PipelineVertexInputStateCreateInfo()
        : VkPipelineVertexInputStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
      }

      explicit PipelineVertexInputStateCreateInfo(VkPipelineVertexInputStateCreateFlags flags, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription * pVertexAttributeDescriptions)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineVertexInputStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, nullptr, flags, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->vertexBindingDescriptionCount = vertexBindingDescriptionCount;
        this->pVertexBindingDescriptions = pVertexBindingDescriptions;
        this->vertexAttributeDescriptionCount = vertexAttributeDescriptionCount;
        this->pVertexAttributeDescriptions = pVertexAttributeDescriptions;
#endif
      }

      PipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineVertexInputStateCreateInfo*>(this) = value;
      }

      PipelineVertexInputStateCreateInfo& operator=(const VkPipelineVertexInputStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineVertexInputStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineInputAssemblyStateCreateInfo : public VkPipelineInputAssemblyStateCreateInfo
    {
      PipelineInputAssemblyStateCreateInfo()
        : VkPipelineInputAssemblyStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
      }

      explicit PipelineInputAssemblyStateCreateInfo(VkPipelineInputAssemblyStateCreateFlags flags, VkPrimitiveTopology topology, VkBool32 primitiveRestartEnable)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineInputAssemblyStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, nullptr, flags, topology, primitiveRestartEnable}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->topology = topology;
        this->primitiveRestartEnable = primitiveRestartEnable;
#endif
      }

      PipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo*>(this) = value;
      }

      PipelineInputAssemblyStateCreateInfo& operator=(const VkPipelineInputAssemblyStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineTessellationStateCreateInfo : public VkPipelineTessellationStateCreateInfo
    {
      PipelineTessellationStateCreateInfo()
        : VkPipelineTessellationStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
      }

      explicit PipelineTessellationStateCreateInfo(VkPipelineTessellationStateCreateFlags flags, uint32_t patchControlPoints)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineTessellationStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO, nullptr, flags, patchControlPoints}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->patchControlPoints = patchControlPoints;
#endif
      }

      PipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineTessellationStateCreateInfo*>(this) = value;
      }

      PipelineTessellationStateCreateInfo& operator=(const VkPipelineTessellationStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineTessellationStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct Viewport : public VkViewport
    {
      Viewport()
        : VkViewport{}
      {
      }

      explicit Viewport(float x, float y, float width, float height, float minDepth, float maxDepth)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkViewport{x, y, width, height, minDepth, maxDepth}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        this->minDepth = minDepth;
        this->maxDepth = maxDepth;
#endif
      }

      Viewport(const VkViewport& value)
      {
        *reinterpret_cast<VkViewport*>(this) = value;
      }

      Viewport& operator=(const VkViewport& rhs)
      {
        *reinterpret_cast<VkViewport*>(this) = rhs;
        return *this;
      }
    };

    struct Offset2D : public VkOffset2D
    {
      Offset2D()
        : VkOffset2D{}
      {
      }

      explicit Offset2D(int32_t x, int32_t y)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkOffset2D{x, y}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
#endif
      }

      Offset2D(const VkOffset2D& value)
      {
        *reinterpret_cast<VkOffset2D*>(this) = value;
      }

      Offset2D& operator=(const VkOffset2D& rhs)
      {
        *reinterpret_cast<VkOffset2D*>(this) = rhs;
        return *this;
      }
    };

    struct Extent2D : public VkExtent2D
    {
      Extent2D()
        : VkExtent2D{}
      {
      }

      explicit Extent2D(uint32_t width, uint32_t height)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExtent2D{width, height}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->width = width;
        this->height = height;
#endif
      }

      Extent2D(const VkExtent2D& value)
      {
        *reinterpret_cast<VkExtent2D*>(this) = value;
      }

      Extent2D& operator=(const VkExtent2D& rhs)
      {
        *reinterpret_cast<VkExtent2D*>(this) = rhs;
        return *this;
      }
    };

    struct Rect2D : public VkRect2D
    {
      Rect2D()
        : VkRect2D{}
      {
      }

      explicit Rect2D(VkOffset2D offset, VkExtent2D extent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRect2D{offset, extent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->offset = offset;
        this->extent = extent;
#endif
      }

      explicit Rect2D(int32_t x, int32_t y, uint32_t width, uint32_t height)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRect2D{{x, y}, {width, height}}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->offset.x = x;
        this->offset.y = y;
        this->extent.width = width;
        this->extent.height = height;
#endif
      }

      Rect2D(const VkRect2D& value)
      {
        *reinterpret_cast<VkRect2D*>(this) = value;
      }

      Rect2D& operator=(const VkRect2D& rhs)
      {
        *reinterpret_cast<VkRect2D*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineViewportStateCreateInfo : public VkPipelineViewportStateCreateInfo
    {
      PipelineViewportStateCreateInfo()
        : VkPipelineViewportStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
      }

      explicit PipelineViewportStateCreateInfo(VkPipelineViewportStateCreateFlags flags, uint32_t viewportCount, const VkViewport * pViewports, uint32_t scissorCount, const VkRect2D * pScissors)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineViewportStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO, nullptr, flags, viewportCount, pViewports, scissorCount, pScissors}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->viewportCount = viewportCount;
        this->pViewports = pViewports;
        this->scissorCount = scissorCount;
        this->pScissors = pScissors;
#endif
      }

      PipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineViewportStateCreateInfo*>(this) = value;
      }

      PipelineViewportStateCreateInfo& operator=(const VkPipelineViewportStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineViewportStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineRasterizationStateCreateInfo : public VkPipelineRasterizationStateCreateInfo
    {
      PipelineRasterizationStateCreateInfo()
        : VkPipelineRasterizationStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
      }

      explicit PipelineRasterizationStateCreateInfo(VkPipelineRasterizationStateCreateFlags flags, VkBool32 depthClampEnable, VkBool32 rasterizerDiscardEnable, VkPolygonMode polygonMode, VkCullModeFlags cullMode, VkFrontFace frontFace, VkBool32 depthBiasEnable, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor, float lineWidth)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineRasterizationStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, nullptr, flags, depthClampEnable, rasterizerDiscardEnable, polygonMode, cullMode, frontFace, depthBiasEnable, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor, lineWidth}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->depthClampEnable = depthClampEnable;
        this->rasterizerDiscardEnable = rasterizerDiscardEnable;
        this->polygonMode = polygonMode;
        this->cullMode = cullMode;
        this->frontFace = frontFace;
        this->depthBiasEnable = depthBiasEnable;
        this->depthBiasConstantFactor = depthBiasConstantFactor;
        this->depthBiasClamp = depthBiasClamp;
        this->depthBiasSlopeFactor = depthBiasSlopeFactor;
        this->lineWidth = lineWidth;
#endif
      }

      PipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineRasterizationStateCreateInfo*>(this) = value;
      }

      PipelineRasterizationStateCreateInfo& operator=(const VkPipelineRasterizationStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineRasterizationStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineMultisampleStateCreateInfo : public VkPipelineMultisampleStateCreateInfo
    {
      PipelineMultisampleStateCreateInfo()
        : VkPipelineMultisampleStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
      }

      explicit PipelineMultisampleStateCreateInfo(VkPipelineMultisampleStateCreateFlags flags, VkSampleCountFlagBits rasterizationSamples, VkBool32 sampleShadingEnable, float minSampleShading, const VkSampleMask * pSampleMask, VkBool32 alphaToCoverageEnable, VkBool32 alphaToOneEnable)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineMultisampleStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO, nullptr, flags, rasterizationSamples, sampleShadingEnable, minSampleShading, pSampleMask, alphaToCoverageEnable, alphaToOneEnable}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->rasterizationSamples = rasterizationSamples;
        this->sampleShadingEnable = sampleShadingEnable;
        this->minSampleShading = minSampleShading;
        this->pSampleMask = pSampleMask;
        this->alphaToCoverageEnable = alphaToCoverageEnable;
        this->alphaToOneEnable = alphaToOneEnable;
#endif
      }

      PipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineMultisampleStateCreateInfo*>(this) = value;
      }

      PipelineMultisampleStateCreateInfo& operator=(const VkPipelineMultisampleStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineMultisampleStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct StencilOpState : public VkStencilOpState
    {
      StencilOpState()
        : VkStencilOpState{}
      {
      }

      explicit StencilOpState(VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp, uint32_t compareMask, uint32_t writeMask, uint32_t reference)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkStencilOpState{failOp, passOp, depthFailOp, compareOp, compareMask, writeMask, reference}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->failOp = failOp;
        this->passOp = passOp;
        this->depthFailOp = depthFailOp;
        this->compareOp = compareOp;
        this->compareMask = compareMask;
        this->writeMask = writeMask;
        this->reference = reference;
#endif
      }

      StencilOpState(const VkStencilOpState& value)
      {
        *reinterpret_cast<VkStencilOpState*>(this) = value;
      }

      StencilOpState& operator=(const VkStencilOpState& rhs)
      {
        *reinterpret_cast<VkStencilOpState*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineDepthStencilStateCreateInfo : public VkPipelineDepthStencilStateCreateInfo
    {
      PipelineDepthStencilStateCreateInfo()
        : VkPipelineDepthStencilStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
      }

      explicit PipelineDepthStencilStateCreateInfo(VkPipelineDepthStencilStateCreateFlags flags, VkBool32 depthTestEnable, VkBool32 depthWriteEnable, VkCompareOp depthCompareOp, VkBool32 depthBoundsTestEnable, VkBool32 stencilTestEnable, VkStencilOpState front, VkStencilOpState back, float minDepthBounds, float maxDepthBounds)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineDepthStencilStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO, nullptr, flags, depthTestEnable, depthWriteEnable, depthCompareOp, depthBoundsTestEnable, stencilTestEnable, front, back, minDepthBounds, maxDepthBounds}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->depthTestEnable = depthTestEnable;
        this->depthWriteEnable = depthWriteEnable;
        this->depthCompareOp = depthCompareOp;
        this->depthBoundsTestEnable = depthBoundsTestEnable;
        this->stencilTestEnable = stencilTestEnable;
        this->front = front;
        this->back = back;
        this->minDepthBounds = minDepthBounds;
        this->maxDepthBounds = maxDepthBounds;
#endif
      }

      PipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineDepthStencilStateCreateInfo*>(this) = value;
      }

      PipelineDepthStencilStateCreateInfo& operator=(const VkPipelineDepthStencilStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineDepthStencilStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineColorBlendAttachmentState : public VkPipelineColorBlendAttachmentState
    {
      PipelineColorBlendAttachmentState()
        : VkPipelineColorBlendAttachmentState{}
      {
      }

      explicit PipelineColorBlendAttachmentState(VkBool32 blendEnable, VkBlendFactor srcColorBlendFactor, VkBlendFactor dstColorBlendFactor, VkBlendOp colorBlendOp, VkBlendFactor srcAlphaBlendFactor, VkBlendFactor dstAlphaBlendFactor, VkBlendOp alphaBlendOp, VkColorComponentFlags colorWriteMask)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineColorBlendAttachmentState{blendEnable, srcColorBlendFactor, dstColorBlendFactor, colorBlendOp, srcAlphaBlendFactor, dstAlphaBlendFactor, alphaBlendOp, colorWriteMask}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->blendEnable = blendEnable;
        this->srcColorBlendFactor = srcColorBlendFactor;
        this->dstColorBlendFactor = dstColorBlendFactor;
        this->colorBlendOp = colorBlendOp;
        this->srcAlphaBlendFactor = srcAlphaBlendFactor;
        this->dstAlphaBlendFactor = dstAlphaBlendFactor;
        this->alphaBlendOp = alphaBlendOp;
        this->colorWriteMask = colorWriteMask;
#endif
      }

      PipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState& value)
      {
        *reinterpret_cast<VkPipelineColorBlendAttachmentState*>(this) = value;
      }

      PipelineColorBlendAttachmentState& operator=(const VkPipelineColorBlendAttachmentState& rhs)
      {
        *reinterpret_cast<VkPipelineColorBlendAttachmentState*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineDynamicStateCreateInfo : public VkPipelineDynamicStateCreateInfo
    {
      PipelineDynamicStateCreateInfo()
        : VkPipelineDynamicStateCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
      }

      explicit PipelineDynamicStateCreateInfo(VkPipelineDynamicStateCreateFlags flags, uint32_t dynamicStateCount, const VkDynamicState * pDynamicStates)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineDynamicStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, nullptr, flags, dynamicStateCount, pDynamicStates}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->dynamicStateCount = dynamicStateCount;
        this->pDynamicStates = pDynamicStates;
#endif
      }

      PipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineDynamicStateCreateInfo*>(this) = value;
      }

      PipelineDynamicStateCreateInfo& operator=(const VkPipelineDynamicStateCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineDynamicStateCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct GraphicsPipelineCreateInfo : public VkGraphicsPipelineCreateInfo
    {
      GraphicsPipelineCreateInfo()
        : VkGraphicsPipelineCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
      }

      explicit GraphicsPipelineCreateInfo(VkPipelineCreateFlags flags, uint32_t stageCount, const VkPipelineShaderStageCreateInfo * pStages, const VkPipelineVertexInputStateCreateInfo * pVertexInputState, const VkPipelineInputAssemblyStateCreateInfo * pInputAssemblyState, const VkPipelineTessellationStateCreateInfo * pTessellationState, const VkPipelineViewportStateCreateInfo * pViewportState, const VkPipelineRasterizationStateCreateInfo * pRasterizationState, const VkPipelineMultisampleStateCreateInfo * pMultisampleState, const VkPipelineDepthStencilStateCreateInfo * pDepthStencilState, const VkPipelineColorBlendStateCreateInfo * pColorBlendState, const VkPipelineDynamicStateCreateInfo * pDynamicState, VkPipelineLayout layout, VkRenderPass renderPass, uint32_t subpass, VkPipeline basePipelineHandle, int32_t basePipelineIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkGraphicsPipelineCreateInfo{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, nullptr, flags, stageCount, pStages, pVertexInputState, pInputAssemblyState, pTessellationState, pViewportState, pRasterizationState, pMultisampleState, pDepthStencilState, pColorBlendState, pDynamicState, layout, renderPass, subpass, basePipelineHandle, basePipelineIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->stageCount = stageCount;
        this->pStages = pStages;
        this->pVertexInputState = pVertexInputState;
        this->pInputAssemblyState = pInputAssemblyState;
        this->pTessellationState = pTessellationState;
        this->pViewportState = pViewportState;
        this->pRasterizationState = pRasterizationState;
        this->pMultisampleState = pMultisampleState;
        this->pDepthStencilState = pDepthStencilState;
        this->pColorBlendState = pColorBlendState;
        this->pDynamicState = pDynamicState;
        this->layout = layout;
        this->renderPass = renderPass;
        this->subpass = subpass;
        this->basePipelineHandle = basePipelineHandle;
        this->basePipelineIndex = basePipelineIndex;
#endif
      }

      GraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo& value)
      {
        *reinterpret_cast<VkGraphicsPipelineCreateInfo*>(this) = value;
      }

      GraphicsPipelineCreateInfo& operator=(const VkGraphicsPipelineCreateInfo& rhs)
      {
        *reinterpret_cast<VkGraphicsPipelineCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct ComputePipelineCreateInfo : public VkComputePipelineCreateInfo
    {
      ComputePipelineCreateInfo()
        : VkComputePipelineCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
      }

      explicit ComputePipelineCreateInfo(VkPipelineCreateFlags flags, VkPipelineShaderStageCreateInfo stage, VkPipelineLayout layout, VkPipeline basePipelineHandle, int32_t basePipelineIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkComputePipelineCreateInfo{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO, nullptr, flags, stage, layout, basePipelineHandle, basePipelineIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->stage = stage;
        this->layout = layout;
        this->basePipelineHandle = basePipelineHandle;
        this->basePipelineIndex = basePipelineIndex;
#endif
      }

      ComputePipelineCreateInfo(const VkComputePipelineCreateInfo& value)
      {
        *reinterpret_cast<VkComputePipelineCreateInfo*>(this) = value;
      }

      ComputePipelineCreateInfo& operator=(const VkComputePipelineCreateInfo& rhs)
      {
        *reinterpret_cast<VkComputePipelineCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct PushConstantRange : public VkPushConstantRange
    {
      PushConstantRange()
        : VkPushConstantRange{}
      {
      }

      explicit PushConstantRange(VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPushConstantRange{stageFlags, offset, size}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->stageFlags = stageFlags;
        this->offset = offset;
        this->size = size;
#endif
      }

      PushConstantRange(const VkPushConstantRange& value)
      {
        *reinterpret_cast<VkPushConstantRange*>(this) = value;
      }

      PushConstantRange& operator=(const VkPushConstantRange& rhs)
      {
        *reinterpret_cast<VkPushConstantRange*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineLayoutCreateInfo : public VkPipelineLayoutCreateInfo
    {
      PipelineLayoutCreateInfo()
        : VkPipelineLayoutCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
      }

      explicit PipelineLayoutCreateInfo(VkPipelineLayoutCreateFlags flags, uint32_t setLayoutCount, const VkDescriptorSetLayout * pSetLayouts, uint32_t pushConstantRangeCount, const VkPushConstantRange * pPushConstantRanges)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineLayoutCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, nullptr, flags, setLayoutCount, pSetLayouts, pushConstantRangeCount, pPushConstantRanges}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->setLayoutCount = setLayoutCount;
        this->pSetLayouts = pSetLayouts;
        this->pushConstantRangeCount = pushConstantRangeCount;
        this->pPushConstantRanges = pPushConstantRanges;
#endif
      }

      PipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo& value)
      {
        *reinterpret_cast<VkPipelineLayoutCreateInfo*>(this) = value;
      }

      PipelineLayoutCreateInfo& operator=(const VkPipelineLayoutCreateInfo& rhs)
      {
        *reinterpret_cast<VkPipelineLayoutCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct SamplerCreateInfo : public VkSamplerCreateInfo
    {
      SamplerCreateInfo()
        : VkSamplerCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
      }

      explicit SamplerCreateInfo(VkSamplerCreateFlags flags, VkFilter magFilter, VkFilter minFilter, VkSamplerMipmapMode mipmapMode, VkSamplerAddressMode addressModeU, VkSamplerAddressMode addressModeV, VkSamplerAddressMode addressModeW, float mipLodBias, VkBool32 anisotropyEnable, float maxAnisotropy, VkBool32 compareEnable, VkCompareOp compareOp, float minLod, float maxLod, VkBorderColor borderColor, VkBool32 unnormalizedCoordinates)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSamplerCreateInfo{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, nullptr, flags, magFilter, minFilter, mipmapMode, addressModeU, addressModeV, addressModeW, mipLodBias, anisotropyEnable, maxAnisotropy, compareEnable, compareOp, minLod, maxLod, borderColor, unnormalizedCoordinates}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->magFilter = magFilter;
        this->minFilter = minFilter;
        this->mipmapMode = mipmapMode;
        this->addressModeU = addressModeU;
        this->addressModeV = addressModeV;
        this->addressModeW = addressModeW;
        this->mipLodBias = mipLodBias;
        this->anisotropyEnable = anisotropyEnable;
        this->maxAnisotropy = maxAnisotropy;
        this->compareEnable = compareEnable;
        this->compareOp = compareOp;
        this->minLod = minLod;
        this->maxLod = maxLod;
        this->borderColor = borderColor;
        this->unnormalizedCoordinates = unnormalizedCoordinates;
#endif
      }

      SamplerCreateInfo(const VkSamplerCreateInfo& value)
      {
        *reinterpret_cast<VkSamplerCreateInfo*>(this) = value;
      }

      SamplerCreateInfo& operator=(const VkSamplerCreateInfo& rhs)
      {
        *reinterpret_cast<VkSamplerCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorSetLayoutBinding : public VkDescriptorSetLayoutBinding
    {
      DescriptorSetLayoutBinding()
        : VkDescriptorSetLayoutBinding{}
      {
      }

      explicit DescriptorSetLayoutBinding(uint32_t binding, VkDescriptorType descriptorType, uint32_t descriptorCount, VkShaderStageFlags stageFlags, const VkSampler * pImmutableSamplers)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorSetLayoutBinding{binding, descriptorType, descriptorCount, stageFlags, pImmutableSamplers}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->binding = binding;
        this->descriptorType = descriptorType;
        this->descriptorCount = descriptorCount;
        this->stageFlags = stageFlags;
        this->pImmutableSamplers = pImmutableSamplers;
#endif
      }

      DescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding& value)
      {
        *reinterpret_cast<VkDescriptorSetLayoutBinding*>(this) = value;
      }

      DescriptorSetLayoutBinding& operator=(const VkDescriptorSetLayoutBinding& rhs)
      {
        *reinterpret_cast<VkDescriptorSetLayoutBinding*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorSetLayoutCreateInfo : public VkDescriptorSetLayoutCreateInfo
    {
      DescriptorSetLayoutCreateInfo()
        : VkDescriptorSetLayoutCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
      }

      explicit DescriptorSetLayoutCreateInfo(VkDescriptorSetLayoutCreateFlags flags, uint32_t bindingCount, const VkDescriptorSetLayoutBinding * pBindings)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorSetLayoutCreateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, nullptr, flags, bindingCount, pBindings}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->bindingCount = bindingCount;
        this->pBindings = pBindings;
#endif
      }

      DescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo& value)
      {
        *reinterpret_cast<VkDescriptorSetLayoutCreateInfo*>(this) = value;
      }

      DescriptorSetLayoutCreateInfo& operator=(const VkDescriptorSetLayoutCreateInfo& rhs)
      {
        *reinterpret_cast<VkDescriptorSetLayoutCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorPoolSize : public VkDescriptorPoolSize
    {
      DescriptorPoolSize()
        : VkDescriptorPoolSize{}
      {
      }

      explicit DescriptorPoolSize(VkDescriptorType type, uint32_t descriptorCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorPoolSize{type, descriptorCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->descriptorCount = descriptorCount;
#endif
      }

      DescriptorPoolSize(const VkDescriptorPoolSize& value)
      {
        *reinterpret_cast<VkDescriptorPoolSize*>(this) = value;
      }

      DescriptorPoolSize& operator=(const VkDescriptorPoolSize& rhs)
      {
        *reinterpret_cast<VkDescriptorPoolSize*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorPoolCreateInfo : public VkDescriptorPoolCreateInfo
    {
      DescriptorPoolCreateInfo()
        : VkDescriptorPoolCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
      }

      explicit DescriptorPoolCreateInfo(VkDescriptorPoolCreateFlags flags, uint32_t maxSets, uint32_t poolSizeCount, const VkDescriptorPoolSize * pPoolSizes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorPoolCreateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO, nullptr, flags, maxSets, poolSizeCount, pPoolSizes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->maxSets = maxSets;
        this->poolSizeCount = poolSizeCount;
        this->pPoolSizes = pPoolSizes;
#endif
      }

      DescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo& value)
      {
        *reinterpret_cast<VkDescriptorPoolCreateInfo*>(this) = value;
      }

      DescriptorPoolCreateInfo& operator=(const VkDescriptorPoolCreateInfo& rhs)
      {
        *reinterpret_cast<VkDescriptorPoolCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorSetAllocateInfo : public VkDescriptorSetAllocateInfo
    {
      DescriptorSetAllocateInfo()
        : VkDescriptorSetAllocateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
      }

      explicit DescriptorSetAllocateInfo(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSetLayout * pSetLayouts)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorSetAllocateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO, nullptr, descriptorPool, descriptorSetCount, pSetLayouts}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        this->pNext = nullptr;
        this->descriptorPool = descriptorPool;
        this->descriptorSetCount = descriptorSetCount;
        this->pSetLayouts = pSetLayouts;
#endif
      }

      DescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo& value)
      {
        *reinterpret_cast<VkDescriptorSetAllocateInfo*>(this) = value;
      }

      DescriptorSetAllocateInfo& operator=(const VkDescriptorSetAllocateInfo& rhs)
      {
        *reinterpret_cast<VkDescriptorSetAllocateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorImageInfo : public VkDescriptorImageInfo
    {
      DescriptorImageInfo()
        : VkDescriptorImageInfo{}
      {
      }

      explicit DescriptorImageInfo(VkSampler sampler, VkImageView imageView, VkImageLayout imageLayout)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorImageInfo{sampler, imageView, imageLayout}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sampler = sampler;
        this->imageView = imageView;
        this->imageLayout = imageLayout;
#endif
      }

      DescriptorImageInfo(const VkDescriptorImageInfo& value)
      {
        *reinterpret_cast<VkDescriptorImageInfo*>(this) = value;
      }

      DescriptorImageInfo& operator=(const VkDescriptorImageInfo& rhs)
      {
        *reinterpret_cast<VkDescriptorImageInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorBufferInfo : public VkDescriptorBufferInfo
    {
      DescriptorBufferInfo()
        : VkDescriptorBufferInfo{}
      {
      }

      explicit DescriptorBufferInfo(VkBuffer buffer, VkDeviceSize offset, VkDeviceSize range)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorBufferInfo{buffer, offset, range}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->buffer = buffer;
        this->offset = offset;
        this->range = range;
#endif
      }

      DescriptorBufferInfo(const VkDescriptorBufferInfo& value)
      {
        *reinterpret_cast<VkDescriptorBufferInfo*>(this) = value;
      }

      DescriptorBufferInfo& operator=(const VkDescriptorBufferInfo& rhs)
      {
        *reinterpret_cast<VkDescriptorBufferInfo*>(this) = rhs;
        return *this;
      }
    };

    struct WriteDescriptorSet : public VkWriteDescriptorSet
    {
      WriteDescriptorSet()
        : VkWriteDescriptorSet{}
      {
        this->sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
      }

      explicit WriteDescriptorSet(VkDescriptorSet dstSet, uint32_t dstBinding, uint32_t dstArrayElement, uint32_t descriptorCount, VkDescriptorType descriptorType, const VkDescriptorImageInfo * pImageInfo, const VkDescriptorBufferInfo * pBufferInfo, const VkBufferView * pTexelBufferView)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, nullptr, dstSet, dstBinding, dstArrayElement, descriptorCount, descriptorType, pImageInfo, pBufferInfo, pTexelBufferView}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        this->pNext = nullptr;
        this->dstSet = dstSet;
        this->dstBinding = dstBinding;
        this->dstArrayElement = dstArrayElement;
        this->descriptorCount = descriptorCount;
        this->descriptorType = descriptorType;
        this->pImageInfo = pImageInfo;
        this->pBufferInfo = pBufferInfo;
        this->pTexelBufferView = pTexelBufferView;
#endif
      }

      WriteDescriptorSet(const VkWriteDescriptorSet& value)
      {
        *reinterpret_cast<VkWriteDescriptorSet*>(this) = value;
      }

      WriteDescriptorSet& operator=(const VkWriteDescriptorSet& rhs)
      {
        *reinterpret_cast<VkWriteDescriptorSet*>(this) = rhs;
        return *this;
      }
    };

    struct CopyDescriptorSet : public VkCopyDescriptorSet
    {
      CopyDescriptorSet()
        : VkCopyDescriptorSet{}
      {
        this->sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
      }

      explicit CopyDescriptorSet(VkDescriptorSet srcSet, uint32_t srcBinding, uint32_t srcArrayElement, VkDescriptorSet dstSet, uint32_t dstBinding, uint32_t dstArrayElement, uint32_t descriptorCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCopyDescriptorSet{VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET, nullptr, srcSet, srcBinding, srcArrayElement, dstSet, dstBinding, dstArrayElement, descriptorCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
        this->pNext = nullptr;
        this->srcSet = srcSet;
        this->srcBinding = srcBinding;
        this->srcArrayElement = srcArrayElement;
        this->dstSet = dstSet;
        this->dstBinding = dstBinding;
        this->dstArrayElement = dstArrayElement;
        this->descriptorCount = descriptorCount;
#endif
      }

      CopyDescriptorSet(const VkCopyDescriptorSet& value)
      {
        *reinterpret_cast<VkCopyDescriptorSet*>(this) = value;
      }

      CopyDescriptorSet& operator=(const VkCopyDescriptorSet& rhs)
      {
        *reinterpret_cast<VkCopyDescriptorSet*>(this) = rhs;
        return *this;
      }
    };

    struct FramebufferCreateInfo : public VkFramebufferCreateInfo
    {
      FramebufferCreateInfo()
        : VkFramebufferCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
      }

      explicit FramebufferCreateInfo(VkFramebufferCreateFlags flags, VkRenderPass renderPass, uint32_t attachmentCount, const VkImageView * pAttachments, uint32_t width, uint32_t height, uint32_t layers)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkFramebufferCreateInfo{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO, nullptr, flags, renderPass, attachmentCount, pAttachments, width, height, layers}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->renderPass = renderPass;
        this->attachmentCount = attachmentCount;
        this->pAttachments = pAttachments;
        this->width = width;
        this->height = height;
        this->layers = layers;
#endif
      }

      FramebufferCreateInfo(const VkFramebufferCreateInfo& value)
      {
        *reinterpret_cast<VkFramebufferCreateInfo*>(this) = value;
      }

      FramebufferCreateInfo& operator=(const VkFramebufferCreateInfo& rhs)
      {
        *reinterpret_cast<VkFramebufferCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct AttachmentDescription : public VkAttachmentDescription
    {
      AttachmentDescription()
        : VkAttachmentDescription{}
      {
      }

      explicit AttachmentDescription(VkAttachmentDescriptionFlags flags, VkFormat format, VkSampleCountFlagBits samples, VkAttachmentLoadOp loadOp, VkAttachmentStoreOp storeOp, VkAttachmentLoadOp stencilLoadOp, VkAttachmentStoreOp stencilStoreOp, VkImageLayout initialLayout, VkImageLayout finalLayout)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkAttachmentDescription{flags, format, samples, loadOp, storeOp, stencilLoadOp, stencilStoreOp, initialLayout, finalLayout}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->flags = flags;
        this->format = format;
        this->samples = samples;
        this->loadOp = loadOp;
        this->storeOp = storeOp;
        this->stencilLoadOp = stencilLoadOp;
        this->stencilStoreOp = stencilStoreOp;
        this->initialLayout = initialLayout;
        this->finalLayout = finalLayout;
#endif
      }

      AttachmentDescription(const VkAttachmentDescription& value)
      {
        *reinterpret_cast<VkAttachmentDescription*>(this) = value;
      }

      AttachmentDescription& operator=(const VkAttachmentDescription& rhs)
      {
        *reinterpret_cast<VkAttachmentDescription*>(this) = rhs;
        return *this;
      }
    };

    struct AttachmentReference : public VkAttachmentReference
    {
      AttachmentReference()
        : VkAttachmentReference{}
      {
      }

      explicit AttachmentReference(uint32_t attachment, VkImageLayout layout)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkAttachmentReference{attachment, layout}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->attachment = attachment;
        this->layout = layout;
#endif
      }

      AttachmentReference(const VkAttachmentReference& value)
      {
        *reinterpret_cast<VkAttachmentReference*>(this) = value;
      }

      AttachmentReference& operator=(const VkAttachmentReference& rhs)
      {
        *reinterpret_cast<VkAttachmentReference*>(this) = rhs;
        return *this;
      }
    };

    struct SubpassDescription : public VkSubpassDescription
    {
      SubpassDescription()
        : VkSubpassDescription{}
      {
      }

      explicit SubpassDescription(VkSubpassDescriptionFlags flags, VkPipelineBindPoint pipelineBindPoint, uint32_t inputAttachmentCount, const VkAttachmentReference * pInputAttachments, uint32_t colorAttachmentCount, const VkAttachmentReference * pColorAttachments, const VkAttachmentReference * pResolveAttachments, const VkAttachmentReference * pDepthStencilAttachment, uint32_t preserveAttachmentCount, const uint32_t * pPreserveAttachments)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSubpassDescription{flags, pipelineBindPoint, inputAttachmentCount, pInputAttachments, colorAttachmentCount, pColorAttachments, pResolveAttachments, pDepthStencilAttachment, preserveAttachmentCount, pPreserveAttachments}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->flags = flags;
        this->pipelineBindPoint = pipelineBindPoint;
        this->inputAttachmentCount = inputAttachmentCount;
        this->pInputAttachments = pInputAttachments;
        this->colorAttachmentCount = colorAttachmentCount;
        this->pColorAttachments = pColorAttachments;
        this->pResolveAttachments = pResolveAttachments;
        this->pDepthStencilAttachment = pDepthStencilAttachment;
        this->preserveAttachmentCount = preserveAttachmentCount;
        this->pPreserveAttachments = pPreserveAttachments;
#endif
      }

      SubpassDescription(const VkSubpassDescription& value)
      {
        *reinterpret_cast<VkSubpassDescription*>(this) = value;
      }

      SubpassDescription& operator=(const VkSubpassDescription& rhs)
      {
        *reinterpret_cast<VkSubpassDescription*>(this) = rhs;
        return *this;
      }
    };

    struct SubpassDependency : public VkSubpassDependency
    {
      SubpassDependency()
        : VkSubpassDependency{}
      {
      }

      explicit SubpassDependency(uint32_t srcSubpass, uint32_t dstSubpass, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkAccessFlags srcAccessMask, VkAccessFlags dstAccessMask, VkDependencyFlags dependencyFlags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSubpassDependency{srcSubpass, dstSubpass, srcStageMask, dstStageMask, srcAccessMask, dstAccessMask, dependencyFlags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->srcSubpass = srcSubpass;
        this->dstSubpass = dstSubpass;
        this->srcStageMask = srcStageMask;
        this->dstStageMask = dstStageMask;
        this->srcAccessMask = srcAccessMask;
        this->dstAccessMask = dstAccessMask;
        this->dependencyFlags = dependencyFlags;
#endif
      }

      SubpassDependency(const VkSubpassDependency& value)
      {
        *reinterpret_cast<VkSubpassDependency*>(this) = value;
      }

      SubpassDependency& operator=(const VkSubpassDependency& rhs)
      {
        *reinterpret_cast<VkSubpassDependency*>(this) = rhs;
        return *this;
      }
    };

    struct RenderPassCreateInfo : public VkRenderPassCreateInfo
    {
      RenderPassCreateInfo()
        : VkRenderPassCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
      }

      explicit RenderPassCreateInfo(VkRenderPassCreateFlags flags, uint32_t attachmentCount, const VkAttachmentDescription * pAttachments, uint32_t subpassCount, const VkSubpassDescription * pSubpasses, uint32_t dependencyCount, const VkSubpassDependency * pDependencies)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRenderPassCreateInfo{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO, nullptr, flags, attachmentCount, pAttachments, subpassCount, pSubpasses, dependencyCount, pDependencies}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->attachmentCount = attachmentCount;
        this->pAttachments = pAttachments;
        this->subpassCount = subpassCount;
        this->pSubpasses = pSubpasses;
        this->dependencyCount = dependencyCount;
        this->pDependencies = pDependencies;
#endif
      }

      RenderPassCreateInfo(const VkRenderPassCreateInfo& value)
      {
        *reinterpret_cast<VkRenderPassCreateInfo*>(this) = value;
      }

      RenderPassCreateInfo& operator=(const VkRenderPassCreateInfo& rhs)
      {
        *reinterpret_cast<VkRenderPassCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct CommandPoolCreateInfo : public VkCommandPoolCreateInfo
    {
      CommandPoolCreateInfo()
        : VkCommandPoolCreateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
      }

      explicit CommandPoolCreateInfo(VkCommandPoolCreateFlags flags, uint32_t queueFamilyIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCommandPoolCreateInfo{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, nullptr, flags, queueFamilyIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->queueFamilyIndex = queueFamilyIndex;
#endif
      }

      CommandPoolCreateInfo(const VkCommandPoolCreateInfo& value)
      {
        *reinterpret_cast<VkCommandPoolCreateInfo*>(this) = value;
      }

      CommandPoolCreateInfo& operator=(const VkCommandPoolCreateInfo& rhs)
      {
        *reinterpret_cast<VkCommandPoolCreateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct CommandBufferAllocateInfo : public VkCommandBufferAllocateInfo
    {
      CommandBufferAllocateInfo()
        : VkCommandBufferAllocateInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
      }

      explicit CommandBufferAllocateInfo(VkCommandPool commandPool, VkCommandBufferLevel level, uint32_t commandBufferCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCommandBufferAllocateInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, nullptr, commandPool, level, commandBufferCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        this->pNext = nullptr;
        this->commandPool = commandPool;
        this->level = level;
        this->commandBufferCount = commandBufferCount;
#endif
      }

      CommandBufferAllocateInfo(const VkCommandBufferAllocateInfo& value)
      {
        *reinterpret_cast<VkCommandBufferAllocateInfo*>(this) = value;
      }

      CommandBufferAllocateInfo& operator=(const VkCommandBufferAllocateInfo& rhs)
      {
        *reinterpret_cast<VkCommandBufferAllocateInfo*>(this) = rhs;
        return *this;
      }
    };

    struct CommandBufferInheritanceInfo : public VkCommandBufferInheritanceInfo
    {
      CommandBufferInheritanceInfo()
        : VkCommandBufferInheritanceInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
      }

      explicit CommandBufferInheritanceInfo(VkRenderPass renderPass, uint32_t subpass, VkFramebuffer framebuffer, VkBool32 occlusionQueryEnable, VkQueryControlFlags queryFlags, VkQueryPipelineStatisticFlags pipelineStatistics)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCommandBufferInheritanceInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO, nullptr, renderPass, subpass, framebuffer, occlusionQueryEnable, queryFlags, pipelineStatistics}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
        this->pNext = nullptr;
        this->renderPass = renderPass;
        this->subpass = subpass;
        this->framebuffer = framebuffer;
        this->occlusionQueryEnable = occlusionQueryEnable;
        this->queryFlags = queryFlags;
        this->pipelineStatistics = pipelineStatistics;
#endif
      }

      CommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo& value)
      {
        *reinterpret_cast<VkCommandBufferInheritanceInfo*>(this) = value;
      }

      CommandBufferInheritanceInfo& operator=(const VkCommandBufferInheritanceInfo& rhs)
      {
        *reinterpret_cast<VkCommandBufferInheritanceInfo*>(this) = rhs;
        return *this;
      }
    };

    struct CommandBufferBeginInfo : public VkCommandBufferBeginInfo
    {
      CommandBufferBeginInfo()
        : VkCommandBufferBeginInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
      }

      explicit CommandBufferBeginInfo(VkCommandBufferUsageFlags flags, const VkCommandBufferInheritanceInfo * pInheritanceInfo)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCommandBufferBeginInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, flags, pInheritanceInfo}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        this->pNext = nullptr;
        this->flags = flags;
        this->pInheritanceInfo = pInheritanceInfo;
#endif
      }

      CommandBufferBeginInfo(const VkCommandBufferBeginInfo& value)
      {
        *reinterpret_cast<VkCommandBufferBeginInfo*>(this) = value;
      }

      CommandBufferBeginInfo& operator=(const VkCommandBufferBeginInfo& rhs)
      {
        *reinterpret_cast<VkCommandBufferBeginInfo*>(this) = rhs;
        return *this;
      }
    };

    struct BufferCopy : public VkBufferCopy
    {
      BufferCopy()
        : VkBufferCopy{}
      {
      }

      explicit BufferCopy(VkDeviceSize srcOffset, VkDeviceSize dstOffset, VkDeviceSize size)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBufferCopy{srcOffset, dstOffset, size}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->srcOffset = srcOffset;
        this->dstOffset = dstOffset;
        this->size = size;
#endif
      }

      BufferCopy(const VkBufferCopy& value)
      {
        *reinterpret_cast<VkBufferCopy*>(this) = value;
      }

      BufferCopy& operator=(const VkBufferCopy& rhs)
      {
        *reinterpret_cast<VkBufferCopy*>(this) = rhs;
        return *this;
      }
    };

    struct ImageSubresourceLayers : public VkImageSubresourceLayers
    {
      ImageSubresourceLayers()
        : VkImageSubresourceLayers{}
      {
      }

      explicit ImageSubresourceLayers(VkImageAspectFlags aspectMask, uint32_t mipLevel, uint32_t baseArrayLayer, uint32_t layerCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageSubresourceLayers{aspectMask, mipLevel, baseArrayLayer, layerCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->aspectMask = aspectMask;
        this->mipLevel = mipLevel;
        this->baseArrayLayer = baseArrayLayer;
        this->layerCount = layerCount;
#endif
      }

      ImageSubresourceLayers(const VkImageSubresourceLayers& value)
      {
        *reinterpret_cast<VkImageSubresourceLayers*>(this) = value;
      }

      ImageSubresourceLayers& operator=(const VkImageSubresourceLayers& rhs)
      {
        *reinterpret_cast<VkImageSubresourceLayers*>(this) = rhs;
        return *this;
      }
    };

    struct ImageCopy : public VkImageCopy
    {
      ImageCopy()
        : VkImageCopy{}
      {
      }

      explicit ImageCopy(VkImageSubresourceLayers srcSubresource, VkOffset3D srcOffset, VkImageSubresourceLayers dstSubresource, VkOffset3D dstOffset, VkExtent3D extent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageCopy{srcSubresource, srcOffset, dstSubresource, dstOffset, extent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->srcSubresource = srcSubresource;
        this->srcOffset = srcOffset;
        this->dstSubresource = dstSubresource;
        this->dstOffset = dstOffset;
        this->extent = extent;
#endif
      }

      ImageCopy(const VkImageCopy& value)
      {
        *reinterpret_cast<VkImageCopy*>(this) = value;
      }

      ImageCopy& operator=(const VkImageCopy& rhs)
      {
        *reinterpret_cast<VkImageCopy*>(this) = rhs;
        return *this;
      }
    };

    struct BufferImageCopy : public VkBufferImageCopy
    {
      BufferImageCopy()
        : VkBufferImageCopy{}
      {
      }

      explicit BufferImageCopy(VkDeviceSize bufferOffset, uint32_t bufferRowLength, uint32_t bufferImageHeight, VkImageSubresourceLayers imageSubresource, VkOffset3D imageOffset, VkExtent3D imageExtent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBufferImageCopy{bufferOffset, bufferRowLength, bufferImageHeight, imageSubresource, imageOffset, imageExtent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->bufferOffset = bufferOffset;
        this->bufferRowLength = bufferRowLength;
        this->bufferImageHeight = bufferImageHeight;
        this->imageSubresource = imageSubresource;
        this->imageOffset = imageOffset;
        this->imageExtent = imageExtent;
#endif
      }

      BufferImageCopy(const VkBufferImageCopy& value)
      {
        *reinterpret_cast<VkBufferImageCopy*>(this) = value;
      }

      BufferImageCopy& operator=(const VkBufferImageCopy& rhs)
      {
        *reinterpret_cast<VkBufferImageCopy*>(this) = rhs;
        return *this;
      }
    };

    struct ClearDepthStencilValue : public VkClearDepthStencilValue
    {
      ClearDepthStencilValue()
        : VkClearDepthStencilValue{}
      {
      }

      explicit ClearDepthStencilValue(float depth, uint32_t stencil)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkClearDepthStencilValue{depth, stencil}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->depth = depth;
        this->stencil = stencil;
#endif
      }

      ClearDepthStencilValue(const VkClearDepthStencilValue& value)
      {
        *reinterpret_cast<VkClearDepthStencilValue*>(this) = value;
      }

      ClearDepthStencilValue& operator=(const VkClearDepthStencilValue& rhs)
      {
        *reinterpret_cast<VkClearDepthStencilValue*>(this) = rhs;
        return *this;
      }
    };

    struct ClearAttachment : public VkClearAttachment
    {
      ClearAttachment()
        : VkClearAttachment{}
      {
      }

      explicit ClearAttachment(VkImageAspectFlags aspectMask, uint32_t colorAttachment, VkClearValue clearValue)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkClearAttachment{aspectMask, colorAttachment, clearValue}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->aspectMask = aspectMask;
        this->colorAttachment = colorAttachment;
        this->clearValue = clearValue;
#endif
      }

      ClearAttachment(const VkClearAttachment& value)
      {
        *reinterpret_cast<VkClearAttachment*>(this) = value;
      }

      ClearAttachment& operator=(const VkClearAttachment& rhs)
      {
        *reinterpret_cast<VkClearAttachment*>(this) = rhs;
        return *this;
      }
    };

    struct ClearRect : public VkClearRect
    {
      ClearRect()
        : VkClearRect{}
      {
      }

      explicit ClearRect(VkRect2D rect, uint32_t baseArrayLayer, uint32_t layerCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkClearRect{rect, baseArrayLayer, layerCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->rect = rect;
        this->baseArrayLayer = baseArrayLayer;
        this->layerCount = layerCount;
#endif
      }

      ClearRect(const VkClearRect& value)
      {
        *reinterpret_cast<VkClearRect*>(this) = value;
      }

      ClearRect& operator=(const VkClearRect& rhs)
      {
        *reinterpret_cast<VkClearRect*>(this) = rhs;
        return *this;
      }
    };

    struct ImageResolve : public VkImageResolve
    {
      ImageResolve()
        : VkImageResolve{}
      {
      }

      explicit ImageResolve(VkImageSubresourceLayers srcSubresource, VkOffset3D srcOffset, VkImageSubresourceLayers dstSubresource, VkOffset3D dstOffset, VkExtent3D extent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageResolve{srcSubresource, srcOffset, dstSubresource, dstOffset, extent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->srcSubresource = srcSubresource;
        this->srcOffset = srcOffset;
        this->dstSubresource = dstSubresource;
        this->dstOffset = dstOffset;
        this->extent = extent;
#endif
      }

      ImageResolve(const VkImageResolve& value)
      {
        *reinterpret_cast<VkImageResolve*>(this) = value;
      }

      ImageResolve& operator=(const VkImageResolve& rhs)
      {
        *reinterpret_cast<VkImageResolve*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryBarrier : public VkMemoryBarrier
    {
      MemoryBarrier()
        : VkMemoryBarrier{}
      {
        this->sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
      }

      explicit MemoryBarrier(VkAccessFlags srcAccessMask, VkAccessFlags dstAccessMask)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryBarrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER, nullptr, srcAccessMask, dstAccessMask}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
        this->pNext = nullptr;
        this->srcAccessMask = srcAccessMask;
        this->dstAccessMask = dstAccessMask;
#endif
      }

      MemoryBarrier(const VkMemoryBarrier& value)
      {
        *reinterpret_cast<VkMemoryBarrier*>(this) = value;
      }

      MemoryBarrier& operator=(const VkMemoryBarrier& rhs)
      {
        *reinterpret_cast<VkMemoryBarrier*>(this) = rhs;
        return *this;
      }
    };

    struct BufferMemoryBarrier : public VkBufferMemoryBarrier
    {
      BufferMemoryBarrier()
        : VkBufferMemoryBarrier{}
      {
        this->sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
      }

      explicit BufferMemoryBarrier(VkAccessFlags srcAccessMask, VkAccessFlags dstAccessMask, uint32_t srcQueueFamilyIndex, uint32_t dstQueueFamilyIndex, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBufferMemoryBarrier{VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, nullptr, srcAccessMask, dstAccessMask, srcQueueFamilyIndex, dstQueueFamilyIndex, buffer, offset, size}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
        this->pNext = nullptr;
        this->srcAccessMask = srcAccessMask;
        this->dstAccessMask = dstAccessMask;
        this->srcQueueFamilyIndex = srcQueueFamilyIndex;
        this->dstQueueFamilyIndex = dstQueueFamilyIndex;
        this->buffer = buffer;
        this->offset = offset;
        this->size = size;
#endif
      }

      BufferMemoryBarrier(const VkBufferMemoryBarrier& value)
      {
        *reinterpret_cast<VkBufferMemoryBarrier*>(this) = value;
      }

      BufferMemoryBarrier& operator=(const VkBufferMemoryBarrier& rhs)
      {
        *reinterpret_cast<VkBufferMemoryBarrier*>(this) = rhs;
        return *this;
      }
    };

    struct ImageMemoryBarrier : public VkImageMemoryBarrier
    {
      ImageMemoryBarrier()
        : VkImageMemoryBarrier{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
      }

      explicit ImageMemoryBarrier(VkAccessFlags srcAccessMask, VkAccessFlags dstAccessMask, VkImageLayout oldLayout, VkImageLayout newLayout, uint32_t srcQueueFamilyIndex, uint32_t dstQueueFamilyIndex, VkImage image, VkImageSubresourceRange subresourceRange)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageMemoryBarrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, nullptr, srcAccessMask, dstAccessMask, oldLayout, newLayout, srcQueueFamilyIndex, dstQueueFamilyIndex, image, subresourceRange}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        this->pNext = nullptr;
        this->srcAccessMask = srcAccessMask;
        this->dstAccessMask = dstAccessMask;
        this->oldLayout = oldLayout;
        this->newLayout = newLayout;
        this->srcQueueFamilyIndex = srcQueueFamilyIndex;
        this->dstQueueFamilyIndex = dstQueueFamilyIndex;
        this->image = image;
        this->subresourceRange = subresourceRange;
#endif
      }

      ImageMemoryBarrier(const VkImageMemoryBarrier& value)
      {
        *reinterpret_cast<VkImageMemoryBarrier*>(this) = value;
      }

      ImageMemoryBarrier& operator=(const VkImageMemoryBarrier& rhs)
      {
        *reinterpret_cast<VkImageMemoryBarrier*>(this) = rhs;
        return *this;
      }
    };

    struct RenderPassBeginInfo : public VkRenderPassBeginInfo
    {
      RenderPassBeginInfo()
        : VkRenderPassBeginInfo{}
      {
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
      }

      explicit RenderPassBeginInfo(VkRenderPass renderPass, VkFramebuffer framebuffer, VkRect2D renderArea, uint32_t clearValueCount, const VkClearValue * pClearValues)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRenderPassBeginInfo{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO, nullptr, renderPass, framebuffer, renderArea, clearValueCount, pClearValues}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        this->pNext = nullptr;
        this->renderPass = renderPass;
        this->framebuffer = framebuffer;
        this->renderArea = renderArea;
        this->clearValueCount = clearValueCount;
        this->pClearValues = pClearValues;
#endif
      }

      RenderPassBeginInfo(const VkRenderPassBeginInfo& value)
      {
        *reinterpret_cast<VkRenderPassBeginInfo*>(this) = value;
      }

      RenderPassBeginInfo& operator=(const VkRenderPassBeginInfo& rhs)
      {
        *reinterpret_cast<VkRenderPassBeginInfo*>(this) = rhs;
        return *this;
      }
    };

    struct DispatchIndirectCommand : public VkDispatchIndirectCommand
    {
      DispatchIndirectCommand()
        : VkDispatchIndirectCommand{}
      {
      }

      explicit DispatchIndirectCommand(uint32_t x, uint32_t y, uint32_t z)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDispatchIndirectCommand{x, y, z}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
        this->z = z;
#endif
      }

      DispatchIndirectCommand(const VkDispatchIndirectCommand& value)
      {
        *reinterpret_cast<VkDispatchIndirectCommand*>(this) = value;
      }

      DispatchIndirectCommand& operator=(const VkDispatchIndirectCommand& rhs)
      {
        *reinterpret_cast<VkDispatchIndirectCommand*>(this) = rhs;
        return *this;
      }
    };

    struct DrawIndexedIndirectCommand : public VkDrawIndexedIndirectCommand
    {
      DrawIndexedIndirectCommand()
        : VkDrawIndexedIndirectCommand{}
      {
      }

      explicit DrawIndexedIndirectCommand(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDrawIndexedIndirectCommand{indexCount, instanceCount, firstIndex, vertexOffset, firstInstance}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->indexCount = indexCount;
        this->instanceCount = instanceCount;
        this->firstIndex = firstIndex;
        this->vertexOffset = vertexOffset;
        this->firstInstance = firstInstance;
#endif
      }

      DrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand& value)
      {
        *reinterpret_cast<VkDrawIndexedIndirectCommand*>(this) = value;
      }

      DrawIndexedIndirectCommand& operator=(const VkDrawIndexedIndirectCommand& rhs)
      {
        *reinterpret_cast<VkDrawIndexedIndirectCommand*>(this) = rhs;
        return *this;
      }
    };

    struct DrawIndirectCommand : public VkDrawIndirectCommand
    {
      DrawIndirectCommand()
        : VkDrawIndirectCommand{}
      {
      }

      explicit DrawIndirectCommand(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDrawIndirectCommand{vertexCount, instanceCount, firstVertex, firstInstance}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->vertexCount = vertexCount;
        this->instanceCount = instanceCount;
        this->firstVertex = firstVertex;
        this->firstInstance = firstInstance;
#endif
      }

      DrawIndirectCommand(const VkDrawIndirectCommand& value)
      {
        *reinterpret_cast<VkDrawIndirectCommand*>(this) = value;
      }

      DrawIndirectCommand& operator=(const VkDrawIndirectCommand& rhs)
      {
        *reinterpret_cast<VkDrawIndirectCommand*>(this) = rhs;
        return *this;
      }
    };

    struct SurfaceCapabilitiesKHR : public VkSurfaceCapabilitiesKHR
    {
      SurfaceCapabilitiesKHR()
        : VkSurfaceCapabilitiesKHR{}
      {
      }

      explicit SurfaceCapabilitiesKHR(uint32_t minImageCount, uint32_t maxImageCount, VkExtent2D currentExtent, VkExtent2D minImageExtent, VkExtent2D maxImageExtent, uint32_t maxImageArrayLayers, VkSurfaceTransformFlagsKHR supportedTransforms, VkSurfaceTransformFlagBitsKHR currentTransform, VkCompositeAlphaFlagsKHR supportedCompositeAlpha, VkImageUsageFlags supportedUsageFlags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSurfaceCapabilitiesKHR{minImageCount, maxImageCount, currentExtent, minImageExtent, maxImageExtent, maxImageArrayLayers, supportedTransforms, currentTransform, supportedCompositeAlpha, supportedUsageFlags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->minImageCount = minImageCount;
        this->maxImageCount = maxImageCount;
        this->currentExtent = currentExtent;
        this->minImageExtent = minImageExtent;
        this->maxImageExtent = maxImageExtent;
        this->maxImageArrayLayers = maxImageArrayLayers;
        this->supportedTransforms = supportedTransforms;
        this->currentTransform = currentTransform;
        this->supportedCompositeAlpha = supportedCompositeAlpha;
        this->supportedUsageFlags = supportedUsageFlags;
#endif
      }

      SurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR& value)
      {
        *reinterpret_cast<VkSurfaceCapabilitiesKHR*>(this) = value;
      }

      SurfaceCapabilitiesKHR& operator=(const VkSurfaceCapabilitiesKHR& rhs)
      {
        *reinterpret_cast<VkSurfaceCapabilitiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct SurfaceFormatKHR : public VkSurfaceFormatKHR
    {
      SurfaceFormatKHR()
        : VkSurfaceFormatKHR{}
      {
      }

      explicit SurfaceFormatKHR(VkFormat format, VkColorSpaceKHR colorSpace)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSurfaceFormatKHR{format, colorSpace}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->format = format;
        this->colorSpace = colorSpace;
#endif
      }

      SurfaceFormatKHR(const VkSurfaceFormatKHR& value)
      {
        *reinterpret_cast<VkSurfaceFormatKHR*>(this) = value;
      }

      SurfaceFormatKHR& operator=(const VkSurfaceFormatKHR& rhs)
      {
        *reinterpret_cast<VkSurfaceFormatKHR*>(this) = rhs;
        return *this;
      }
    };

    struct SwapchainCreateInfoKHR : public VkSwapchainCreateInfoKHR
    {
      SwapchainCreateInfoKHR()
        : VkSwapchainCreateInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
      }

      explicit SwapchainCreateInfoKHR(VkSwapchainCreateFlagsKHR flags, VkSurfaceKHR surface, uint32_t minImageCount, VkFormat imageFormat, VkColorSpaceKHR imageColorSpace, VkExtent2D imageExtent, uint32_t imageArrayLayers, VkImageUsageFlags imageUsage, VkSharingMode imageSharingMode, uint32_t queueFamilyIndexCount, const uint32_t * pQueueFamilyIndices, VkSurfaceTransformFlagBitsKHR preTransform, VkCompositeAlphaFlagBitsKHR compositeAlpha, VkPresentModeKHR presentMode, VkBool32 clipped, VkSwapchainKHR oldSwapchain)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSwapchainCreateInfoKHR{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, nullptr, flags, surface, minImageCount, imageFormat, imageColorSpace, imageExtent, imageArrayLayers, imageUsage, imageSharingMode, queueFamilyIndexCount, pQueueFamilyIndices, preTransform, compositeAlpha, presentMode, clipped, oldSwapchain}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
        this->pNext = nullptr;
        this->flags = flags;
        this->surface = surface;
        this->minImageCount = minImageCount;
        this->imageFormat = imageFormat;
        this->imageColorSpace = imageColorSpace;
        this->imageExtent = imageExtent;
        this->imageArrayLayers = imageArrayLayers;
        this->imageUsage = imageUsage;
        this->imageSharingMode = imageSharingMode;
        this->queueFamilyIndexCount = queueFamilyIndexCount;
        this->pQueueFamilyIndices = pQueueFamilyIndices;
        this->preTransform = preTransform;
        this->compositeAlpha = compositeAlpha;
        this->presentMode = presentMode;
        this->clipped = clipped;
        this->oldSwapchain = oldSwapchain;
#endif
      }

      SwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR& value)
      {
        *reinterpret_cast<VkSwapchainCreateInfoKHR*>(this) = value;
      }

      SwapchainCreateInfoKHR& operator=(const VkSwapchainCreateInfoKHR& rhs)
      {
        *reinterpret_cast<VkSwapchainCreateInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct PresentInfoKHR : public VkPresentInfoKHR
    {
      PresentInfoKHR()
        : VkPresentInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
      }

      explicit PresentInfoKHR(uint32_t waitSemaphoreCount, const VkSemaphore * pWaitSemaphores, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const uint32_t * pImageIndices, VkResult * pResults)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPresentInfoKHR{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, nullptr, waitSemaphoreCount, pWaitSemaphores, swapchainCount, pSwapchains, pImageIndices, pResults}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
        this->pNext = nullptr;
        this->waitSemaphoreCount = waitSemaphoreCount;
        this->pWaitSemaphores = pWaitSemaphores;
        this->swapchainCount = swapchainCount;
        this->pSwapchains = pSwapchains;
        this->pImageIndices = pImageIndices;
        this->pResults = pResults;
#endif
      }

      PresentInfoKHR(const VkPresentInfoKHR& value)
      {
        *reinterpret_cast<VkPresentInfoKHR*>(this) = value;
      }

      PresentInfoKHR& operator=(const VkPresentInfoKHR& rhs)
      {
        *reinterpret_cast<VkPresentInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayPropertiesKHR : public VkDisplayPropertiesKHR
    {
      DisplayPropertiesKHR()
        : VkDisplayPropertiesKHR{}
      {
      }

      explicit DisplayPropertiesKHR(VkDisplayKHR display, const char * displayName, VkExtent2D physicalDimensions, VkExtent2D physicalResolution, VkSurfaceTransformFlagsKHR supportedTransforms, VkBool32 planeReorderPossible, VkBool32 persistentContent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayPropertiesKHR{display, displayName, physicalDimensions, physicalResolution, supportedTransforms, planeReorderPossible, persistentContent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->display = display;
        this->displayName = displayName;
        this->physicalDimensions = physicalDimensions;
        this->physicalResolution = physicalResolution;
        this->supportedTransforms = supportedTransforms;
        this->planeReorderPossible = planeReorderPossible;
        this->persistentContent = persistentContent;
#endif
      }

      DisplayPropertiesKHR(const VkDisplayPropertiesKHR& value)
      {
        *reinterpret_cast<VkDisplayPropertiesKHR*>(this) = value;
      }

      DisplayPropertiesKHR& operator=(const VkDisplayPropertiesKHR& rhs)
      {
        *reinterpret_cast<VkDisplayPropertiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayModeParametersKHR : public VkDisplayModeParametersKHR
    {
      DisplayModeParametersKHR()
        : VkDisplayModeParametersKHR{}
      {
      }

      explicit DisplayModeParametersKHR(VkExtent2D visibleRegion, uint32_t refreshRate)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayModeParametersKHR{visibleRegion, refreshRate}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->visibleRegion = visibleRegion;
        this->refreshRate = refreshRate;
#endif
      }

      DisplayModeParametersKHR(const VkDisplayModeParametersKHR& value)
      {
        *reinterpret_cast<VkDisplayModeParametersKHR*>(this) = value;
      }

      DisplayModeParametersKHR& operator=(const VkDisplayModeParametersKHR& rhs)
      {
        *reinterpret_cast<VkDisplayModeParametersKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayModePropertiesKHR : public VkDisplayModePropertiesKHR
    {
      DisplayModePropertiesKHR()
        : VkDisplayModePropertiesKHR{}
      {
      }

      explicit DisplayModePropertiesKHR(VkDisplayModeKHR displayMode, VkDisplayModeParametersKHR parameters)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayModePropertiesKHR{displayMode, parameters}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->displayMode = displayMode;
        this->parameters = parameters;
#endif
      }

      DisplayModePropertiesKHR(const VkDisplayModePropertiesKHR& value)
      {
        *reinterpret_cast<VkDisplayModePropertiesKHR*>(this) = value;
      }

      DisplayModePropertiesKHR& operator=(const VkDisplayModePropertiesKHR& rhs)
      {
        *reinterpret_cast<VkDisplayModePropertiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayModeCreateInfoKHR : public VkDisplayModeCreateInfoKHR
    {
      DisplayModeCreateInfoKHR()
        : VkDisplayModeCreateInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
      }

      explicit DisplayModeCreateInfoKHR(VkDisplayModeCreateFlagsKHR flags, VkDisplayModeParametersKHR parameters)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayModeCreateInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR, nullptr, flags, parameters}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
        this->pNext = nullptr;
        this->flags = flags;
        this->parameters = parameters;
#endif
      }

      DisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR& value)
      {
        *reinterpret_cast<VkDisplayModeCreateInfoKHR*>(this) = value;
      }

      DisplayModeCreateInfoKHR& operator=(const VkDisplayModeCreateInfoKHR& rhs)
      {
        *reinterpret_cast<VkDisplayModeCreateInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayPlaneCapabilitiesKHR : public VkDisplayPlaneCapabilitiesKHR
    {
      DisplayPlaneCapabilitiesKHR()
        : VkDisplayPlaneCapabilitiesKHR{}
      {
      }

      explicit DisplayPlaneCapabilitiesKHR(VkDisplayPlaneAlphaFlagsKHR supportedAlpha, VkOffset2D minSrcPosition, VkOffset2D maxSrcPosition, VkExtent2D minSrcExtent, VkExtent2D maxSrcExtent, VkOffset2D minDstPosition, VkOffset2D maxDstPosition, VkExtent2D minDstExtent, VkExtent2D maxDstExtent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayPlaneCapabilitiesKHR{supportedAlpha, minSrcPosition, maxSrcPosition, minSrcExtent, maxSrcExtent, minDstPosition, maxDstPosition, minDstExtent, maxDstExtent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->supportedAlpha = supportedAlpha;
        this->minSrcPosition = minSrcPosition;
        this->maxSrcPosition = maxSrcPosition;
        this->minSrcExtent = minSrcExtent;
        this->maxSrcExtent = maxSrcExtent;
        this->minDstPosition = minDstPosition;
        this->maxDstPosition = maxDstPosition;
        this->minDstExtent = minDstExtent;
        this->maxDstExtent = maxDstExtent;
#endif
      }

      DisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR& value)
      {
        *reinterpret_cast<VkDisplayPlaneCapabilitiesKHR*>(this) = value;
      }

      DisplayPlaneCapabilitiesKHR& operator=(const VkDisplayPlaneCapabilitiesKHR& rhs)
      {
        *reinterpret_cast<VkDisplayPlaneCapabilitiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayPlanePropertiesKHR : public VkDisplayPlanePropertiesKHR
    {
      DisplayPlanePropertiesKHR()
        : VkDisplayPlanePropertiesKHR{}
      {
      }

      explicit DisplayPlanePropertiesKHR(VkDisplayKHR currentDisplay, uint32_t currentStackIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayPlanePropertiesKHR{currentDisplay, currentStackIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->currentDisplay = currentDisplay;
        this->currentStackIndex = currentStackIndex;
#endif
      }

      DisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR& value)
      {
        *reinterpret_cast<VkDisplayPlanePropertiesKHR*>(this) = value;
      }

      DisplayPlanePropertiesKHR& operator=(const VkDisplayPlanePropertiesKHR& rhs)
      {
        *reinterpret_cast<VkDisplayPlanePropertiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplaySurfaceCreateInfoKHR : public VkDisplaySurfaceCreateInfoKHR
    {
      DisplaySurfaceCreateInfoKHR()
        : VkDisplaySurfaceCreateInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
      }

      explicit DisplaySurfaceCreateInfoKHR(VkDisplaySurfaceCreateFlagsKHR flags, VkDisplayModeKHR displayMode, uint32_t planeIndex, uint32_t planeStackIndex, VkSurfaceTransformFlagBitsKHR transform, float globalAlpha, VkDisplayPlaneAlphaFlagBitsKHR alphaMode, VkExtent2D imageExtent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplaySurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, nullptr, flags, displayMode, planeIndex, planeStackIndex, transform, globalAlpha, alphaMode, imageExtent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
        this->pNext = nullptr;
        this->flags = flags;
        this->displayMode = displayMode;
        this->planeIndex = planeIndex;
        this->planeStackIndex = planeStackIndex;
        this->transform = transform;
        this->globalAlpha = globalAlpha;
        this->alphaMode = alphaMode;
        this->imageExtent = imageExtent;
#endif
      }

      DisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR& value)
      {
        *reinterpret_cast<VkDisplaySurfaceCreateInfoKHR*>(this) = value;
      }

      DisplaySurfaceCreateInfoKHR& operator=(const VkDisplaySurfaceCreateInfoKHR& rhs)
      {
        *reinterpret_cast<VkDisplaySurfaceCreateInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayPresentInfoKHR : public VkDisplayPresentInfoKHR
    {
      DisplayPresentInfoKHR()
        : VkDisplayPresentInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
      }

      explicit DisplayPresentInfoKHR(VkRect2D srcRect, VkRect2D dstRect, VkBool32 persistent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayPresentInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR, nullptr, srcRect, dstRect, persistent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
        this->pNext = nullptr;
        this->srcRect = srcRect;
        this->dstRect = dstRect;
        this->persistent = persistent;
#endif
      }

      DisplayPresentInfoKHR(const VkDisplayPresentInfoKHR& value)
      {
        *reinterpret_cast<VkDisplayPresentInfoKHR*>(this) = value;
      }

      DisplayPresentInfoKHR& operator=(const VkDisplayPresentInfoKHR& rhs)
      {
        *reinterpret_cast<VkDisplayPresentInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceFeatures2KHR : public VkPhysicalDeviceFeatures2KHR
    {
      PhysicalDeviceFeatures2KHR()
        : VkPhysicalDeviceFeatures2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES2_KHR;
      }

      explicit PhysicalDeviceFeatures2KHR(VkPhysicalDeviceFeatures features)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceFeatures2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES2_KHR, nullptr, features}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES2_KHR;
        this->pNext = nullptr;
        this->features = features;
#endif
      }

      PhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceFeatures2KHR*>(this) = value;
      }

      PhysicalDeviceFeatures2KHR& operator=(const VkPhysicalDeviceFeatures2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceFeatures2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceProperties2KHR : public VkPhysicalDeviceProperties2KHR
    {
      PhysicalDeviceProperties2KHR()
        : VkPhysicalDeviceProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES2_KHR;
      }

      explicit PhysicalDeviceProperties2KHR(VkPhysicalDeviceProperties properties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceProperties2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES2_KHR, nullptr, properties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->properties = properties;
#endif
      }

      PhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceProperties2KHR*>(this) = value;
      }

      PhysicalDeviceProperties2KHR& operator=(const VkPhysicalDeviceProperties2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct FormatProperties2KHR : public VkFormatProperties2KHR
    {
      FormatProperties2KHR()
        : VkFormatProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES2_KHR;
      }

      explicit FormatProperties2KHR(VkFormatProperties formatProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkFormatProperties2KHR{VK_STRUCTURE_TYPE_FORMAT_PROPERTIES2_KHR, nullptr, formatProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->formatProperties = formatProperties;
#endif
      }

      FormatProperties2KHR(const VkFormatProperties2KHR& value)
      {
        *reinterpret_cast<VkFormatProperties2KHR*>(this) = value;
      }

      FormatProperties2KHR& operator=(const VkFormatProperties2KHR& rhs)
      {
        *reinterpret_cast<VkFormatProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct ImageFormatProperties2KHR : public VkImageFormatProperties2KHR
    {
      ImageFormatProperties2KHR()
        : VkImageFormatProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES2_KHR;
      }

      explicit ImageFormatProperties2KHR(VkImageFormatProperties imageFormatProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageFormatProperties2KHR{VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES2_KHR, nullptr, imageFormatProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->imageFormatProperties = imageFormatProperties;
#endif
      }

      ImageFormatProperties2KHR(const VkImageFormatProperties2KHR& value)
      {
        *reinterpret_cast<VkImageFormatProperties2KHR*>(this) = value;
      }

      ImageFormatProperties2KHR& operator=(const VkImageFormatProperties2KHR& rhs)
      {
        *reinterpret_cast<VkImageFormatProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceImageFormatInfo2KHR : public VkPhysicalDeviceImageFormatInfo2KHR
    {
      PhysicalDeviceImageFormatInfo2KHR()
        : VkPhysicalDeviceImageFormatInfo2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO2_KHR;
      }

      explicit PhysicalDeviceImageFormatInfo2KHR(VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceImageFormatInfo2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO2_KHR, nullptr, format, type, tiling, usage, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO2_KHR;
        this->pNext = nullptr;
        this->format = format;
        this->type = type;
        this->tiling = tiling;
        this->usage = usage;
        this->flags = flags;
#endif
      }

      PhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR*>(this) = value;
      }

      PhysicalDeviceImageFormatInfo2KHR& operator=(const VkPhysicalDeviceImageFormatInfo2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct QueueFamilyProperties2KHR : public VkQueueFamilyProperties2KHR
    {
      QueueFamilyProperties2KHR()
        : VkQueueFamilyProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES2_KHR;
      }

      explicit QueueFamilyProperties2KHR(VkQueueFamilyProperties queueFamilyProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkQueueFamilyProperties2KHR{VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES2_KHR, nullptr, queueFamilyProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->queueFamilyProperties = queueFamilyProperties;
#endif
      }

      QueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR& value)
      {
        *reinterpret_cast<VkQueueFamilyProperties2KHR*>(this) = value;
      }

      QueueFamilyProperties2KHR& operator=(const VkQueueFamilyProperties2KHR& rhs)
      {
        *reinterpret_cast<VkQueueFamilyProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceMemoryProperties2KHR : public VkPhysicalDeviceMemoryProperties2KHR
    {
      PhysicalDeviceMemoryProperties2KHR()
        : VkPhysicalDeviceMemoryProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES2_KHR;
      }

      explicit PhysicalDeviceMemoryProperties2KHR(VkPhysicalDeviceMemoryProperties memoryProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceMemoryProperties2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES2_KHR, nullptr, memoryProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->memoryProperties = memoryProperties;
#endif
      }

      PhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR*>(this) = value;
      }

      PhysicalDeviceMemoryProperties2KHR& operator=(const VkPhysicalDeviceMemoryProperties2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct SparseImageFormatProperties2KHR : public VkSparseImageFormatProperties2KHR
    {
      SparseImageFormatProperties2KHR()
        : VkSparseImageFormatProperties2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES2_KHR;
      }

      explicit SparseImageFormatProperties2KHR(VkSparseImageFormatProperties properties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSparseImageFormatProperties2KHR{VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES2_KHR, nullptr, properties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES2_KHR;
        this->pNext = nullptr;
        this->properties = properties;
#endif
      }

      SparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR& value)
      {
        *reinterpret_cast<VkSparseImageFormatProperties2KHR*>(this) = value;
      }

      SparseImageFormatProperties2KHR& operator=(const VkSparseImageFormatProperties2KHR& rhs)
      {
        *reinterpret_cast<VkSparseImageFormatProperties2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceSparseImageFormatInfo2KHR : public VkPhysicalDeviceSparseImageFormatInfo2KHR
    {
      PhysicalDeviceSparseImageFormatInfo2KHR()
        : VkPhysicalDeviceSparseImageFormatInfo2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO2_KHR;
      }

      explicit PhysicalDeviceSparseImageFormatInfo2KHR(VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceSparseImageFormatInfo2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO2_KHR, nullptr, format, type, samples, usage, tiling}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO2_KHR;
        this->pNext = nullptr;
        this->format = format;
        this->type = type;
        this->samples = samples;
        this->usage = usage;
        this->tiling = tiling;
#endif
      }

      PhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR*>(this) = value;
      }

      PhysicalDeviceSparseImageFormatInfo2KHR& operator=(const VkPhysicalDeviceSparseImageFormatInfo2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDevicePushDescriptorPropertiesKHR : public VkPhysicalDevicePushDescriptorPropertiesKHR
    {
      PhysicalDevicePushDescriptorPropertiesKHR()
        : VkPhysicalDevicePushDescriptorPropertiesKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
      }

      explicit PhysicalDevicePushDescriptorPropertiesKHR(uint32_t maxPushDescriptors)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDevicePushDescriptorPropertiesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR, nullptr, maxPushDescriptors}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
        this->pNext = nullptr;
        this->maxPushDescriptors = maxPushDescriptors;
#endif
      }

      PhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR& value)
      {
        *reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR*>(this) = value;
      }

      PhysicalDevicePushDescriptorPropertiesKHR& operator=(const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct RectLayerKHR : public VkRectLayerKHR
    {
      RectLayerKHR()
        : VkRectLayerKHR{}
      {
      }

      explicit RectLayerKHR(VkOffset2D offset, VkExtent2D extent, uint32_t layer)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRectLayerKHR{offset, extent, layer}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->offset = offset;
        this->extent = extent;
        this->layer = layer;
#endif
      }

      RectLayerKHR(const VkRectLayerKHR& value)
      {
        *reinterpret_cast<VkRectLayerKHR*>(this) = value;
      }

      RectLayerKHR& operator=(const VkRectLayerKHR& rhs)
      {
        *reinterpret_cast<VkRectLayerKHR*>(this) = rhs;
        return *this;
      }
    };

    struct PresentRegionKHR : public VkPresentRegionKHR
    {
      PresentRegionKHR()
        : VkPresentRegionKHR{}
      {
      }

      explicit PresentRegionKHR(uint32_t rectangleCount, const VkRectLayerKHR * pRectangles)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPresentRegionKHR{rectangleCount, pRectangles}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->rectangleCount = rectangleCount;
        this->pRectangles = pRectangles;
#endif
      }

      PresentRegionKHR(const VkPresentRegionKHR& value)
      {
        *reinterpret_cast<VkPresentRegionKHR*>(this) = value;
      }

      PresentRegionKHR& operator=(const VkPresentRegionKHR& rhs)
      {
        *reinterpret_cast<VkPresentRegionKHR*>(this) = rhs;
        return *this;
      }
    };

    struct PresentRegionsKHR : public VkPresentRegionsKHR
    {
      PresentRegionsKHR()
        : VkPresentRegionsKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
      }

      explicit PresentRegionsKHR(uint32_t swapchainCount, const VkPresentRegionKHR * pRegions)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPresentRegionsKHR{VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR, nullptr, swapchainCount, pRegions}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
        this->pNext = nullptr;
        this->swapchainCount = swapchainCount;
        this->pRegions = pRegions;
#endif
      }

      PresentRegionsKHR(const VkPresentRegionsKHR& value)
      {
        *reinterpret_cast<VkPresentRegionsKHR*>(this) = value;
      }

      PresentRegionsKHR& operator=(const VkPresentRegionsKHR& rhs)
      {
        *reinterpret_cast<VkPresentRegionsKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorUpdateTemplateEntryKHR : public VkDescriptorUpdateTemplateEntryKHR
    {
      DescriptorUpdateTemplateEntryKHR()
        : VkDescriptorUpdateTemplateEntryKHR{}
      {
      }

      explicit DescriptorUpdateTemplateEntryKHR(uint32_t dstBinding, uint32_t dstArrayElement, uint32_t descriptorCount, VkDescriptorType descriptorType, size_t offset, size_t stride)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorUpdateTemplateEntryKHR{dstBinding, dstArrayElement, descriptorCount, descriptorType, offset, stride}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->dstBinding = dstBinding;
        this->dstArrayElement = dstArrayElement;
        this->descriptorCount = descriptorCount;
        this->descriptorType = descriptorType;
        this->offset = offset;
        this->stride = stride;
#endif
      }

      DescriptorUpdateTemplateEntryKHR(const VkDescriptorUpdateTemplateEntryKHR& value)
      {
        *reinterpret_cast<VkDescriptorUpdateTemplateEntryKHR*>(this) = value;
      }

      DescriptorUpdateTemplateEntryKHR& operator=(const VkDescriptorUpdateTemplateEntryKHR& rhs)
      {
        *reinterpret_cast<VkDescriptorUpdateTemplateEntryKHR*>(this) = rhs;
        return *this;
      }
    };

    struct DescriptorUpdateTemplateCreateInfoKHR : public VkDescriptorUpdateTemplateCreateInfoKHR
    {
      DescriptorUpdateTemplateCreateInfoKHR()
        : VkDescriptorUpdateTemplateCreateInfoKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR;
      }

      explicit DescriptorUpdateTemplateCreateInfoKHR(VkDescriptorUpdateTemplateCreateFlagsKHR flags, uint32_t descriptorUpdateEntryCount, const VkDescriptorUpdateTemplateEntryKHR * pDescriptorUpdateEntries, VkDescriptorUpdateTemplateTypeKHR templateType, VkDescriptorSetLayout descriptorSetLayout, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout pipelineLayout, uint32_t set)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDescriptorUpdateTemplateCreateInfoKHR{VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR, nullptr, flags, descriptorUpdateEntryCount, pDescriptorUpdateEntries, templateType, descriptorSetLayout, pipelineBindPoint, pipelineLayout, set}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR;
        this->pNext = nullptr;
        this->flags = flags;
        this->descriptorUpdateEntryCount = descriptorUpdateEntryCount;
        this->pDescriptorUpdateEntries = pDescriptorUpdateEntries;
        this->templateType = templateType;
        this->descriptorSetLayout = descriptorSetLayout;
        this->pipelineBindPoint = pipelineBindPoint;
        this->pipelineLayout = pipelineLayout;
        this->set = set;
#endif
      }

      DescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR& value)
      {
        *reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR*>(this) = value;
      }

      DescriptorUpdateTemplateCreateInfoKHR& operator=(const VkDescriptorUpdateTemplateCreateInfoKHR& rhs)
      {
        *reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR*>(this) = rhs;
        return *this;
      }
    };

    struct SharedPresentSurfaceCapabilitiesKHR : public VkSharedPresentSurfaceCapabilitiesKHR
    {
      SharedPresentSurfaceCapabilitiesKHR()
        : VkSharedPresentSurfaceCapabilitiesKHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
      }

      explicit SharedPresentSurfaceCapabilitiesKHR(VkImageUsageFlags sharedPresentSupportedUsageFlags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSharedPresentSurfaceCapabilitiesKHR{VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR, nullptr, sharedPresentSupportedUsageFlags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
        this->pNext = nullptr;
        this->sharedPresentSupportedUsageFlags = sharedPresentSupportedUsageFlags;
#endif
      }

      SharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR& value)
      {
        *reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(this) = value;
      }

      SharedPresentSurfaceCapabilitiesKHR& operator=(const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
      {
        *reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceSurfaceInfo2KHR : public VkPhysicalDeviceSurfaceInfo2KHR
    {
      PhysicalDeviceSurfaceInfo2KHR()
        : VkPhysicalDeviceSurfaceInfo2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO2_KHR;
      }

      explicit PhysicalDeviceSurfaceInfo2KHR(VkSurfaceKHR surface)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceSurfaceInfo2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO2_KHR, nullptr, surface}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO2_KHR;
        this->pNext = nullptr;
        this->surface = surface;
#endif
      }

      PhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR& value)
      {
        *reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR*>(this) = value;
      }

      PhysicalDeviceSurfaceInfo2KHR& operator=(const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct SurfaceCapabilities2KHR : public VkSurfaceCapabilities2KHR
    {
      SurfaceCapabilities2KHR()
        : VkSurfaceCapabilities2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_KHR;
      }

      explicit SurfaceCapabilities2KHR(VkSurfaceCapabilitiesKHR surfaceCapabilities)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSurfaceCapabilities2KHR{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_KHR, nullptr, surfaceCapabilities}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_KHR;
        this->pNext = nullptr;
        this->surfaceCapabilities = surfaceCapabilities;
#endif
      }

      SurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR& value)
      {
        *reinterpret_cast<VkSurfaceCapabilities2KHR*>(this) = value;
      }

      SurfaceCapabilities2KHR& operator=(const VkSurfaceCapabilities2KHR& rhs)
      {
        *reinterpret_cast<VkSurfaceCapabilities2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct SurfaceFormat2KHR : public VkSurfaceFormat2KHR
    {
      SurfaceFormat2KHR()
        : VkSurfaceFormat2KHR{}
      {
        this->sType = VK_STRUCTURE_TYPE_SURFACE_FORMAT2_KHR;
      }

      explicit SurfaceFormat2KHR(VkSurfaceFormatKHR surfaceFormat)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSurfaceFormat2KHR{VK_STRUCTURE_TYPE_SURFACE_FORMAT2_KHR, nullptr, surfaceFormat}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SURFACE_FORMAT2_KHR;
        this->pNext = nullptr;
        this->surfaceFormat = surfaceFormat;
#endif
      }

      SurfaceFormat2KHR(const VkSurfaceFormat2KHR& value)
      {
        *reinterpret_cast<VkSurfaceFormat2KHR*>(this) = value;
      }

      SurfaceFormat2KHR& operator=(const VkSurfaceFormat2KHR& rhs)
      {
        *reinterpret_cast<VkSurfaceFormat2KHR*>(this) = rhs;
        return *this;
      }
    };

    struct DebugReportCallbackCreateInfoEXT : public VkDebugReportCallbackCreateInfoEXT
    {
      DebugReportCallbackCreateInfoEXT()
        : VkDebugReportCallbackCreateInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
      }

      explicit DebugReportCallbackCreateInfoEXT(VkDebugReportFlagsEXT flags, PFN_vkDebugReportCallbackEXT pfnCallback, void * pUserData)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDebugReportCallbackCreateInfoEXT{VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT, nullptr, flags, pfnCallback, pUserData}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
        this->pNext = nullptr;
        this->flags = flags;
        this->pfnCallback = pfnCallback;
        this->pUserData = pUserData;
#endif
      }

      DebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT& value)
      {
        *reinterpret_cast<VkDebugReportCallbackCreateInfoEXT*>(this) = value;
      }

      DebugReportCallbackCreateInfoEXT& operator=(const VkDebugReportCallbackCreateInfoEXT& rhs)
      {
        *reinterpret_cast<VkDebugReportCallbackCreateInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineRasterizationStateRasterizationOrderAMD : public VkPipelineRasterizationStateRasterizationOrderAMD
    {
      PipelineRasterizationStateRasterizationOrderAMD()
        : VkPipelineRasterizationStateRasterizationOrderAMD{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
      }

      explicit PipelineRasterizationStateRasterizationOrderAMD(VkRasterizationOrderAMD rasterizationOrder)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineRasterizationStateRasterizationOrderAMD{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD, nullptr, rasterizationOrder}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
        this->pNext = nullptr;
        this->rasterizationOrder = rasterizationOrder;
#endif
      }

      PipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD& value)
      {
        *reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD*>(this) = value;
      }

      PipelineRasterizationStateRasterizationOrderAMD& operator=(const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
      {
        *reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD*>(this) = rhs;
        return *this;
      }
    };

    struct DebugMarkerObjectNameInfoEXT : public VkDebugMarkerObjectNameInfoEXT
    {
      DebugMarkerObjectNameInfoEXT()
        : VkDebugMarkerObjectNameInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
      }

      explicit DebugMarkerObjectNameInfoEXT(VkDebugReportObjectTypeEXT objectType, uint64_t object, const char * pObjectName)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDebugMarkerObjectNameInfoEXT{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT, nullptr, objectType, object, pObjectName}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
        this->pNext = nullptr;
        this->objectType = objectType;
        this->object = object;
        this->pObjectName = pObjectName;
#endif
      }

      DebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT& value)
      {
        *reinterpret_cast<VkDebugMarkerObjectNameInfoEXT*>(this) = value;
      }

      DebugMarkerObjectNameInfoEXT& operator=(const VkDebugMarkerObjectNameInfoEXT& rhs)
      {
        *reinterpret_cast<VkDebugMarkerObjectNameInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct DebugMarkerObjectTagInfoEXT : public VkDebugMarkerObjectTagInfoEXT
    {
      DebugMarkerObjectTagInfoEXT()
        : VkDebugMarkerObjectTagInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
      }

      explicit DebugMarkerObjectTagInfoEXT(VkDebugReportObjectTypeEXT objectType, uint64_t object, uint64_t tagName, size_t tagSize, const void * pTag)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDebugMarkerObjectTagInfoEXT{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT, nullptr, objectType, object, tagName, tagSize, pTag}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
        this->pNext = nullptr;
        this->objectType = objectType;
        this->object = object;
        this->tagName = tagName;
        this->tagSize = tagSize;
        this->pTag = pTag;
#endif
      }

      DebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT& value)
      {
        *reinterpret_cast<VkDebugMarkerObjectTagInfoEXT*>(this) = value;
      }

      DebugMarkerObjectTagInfoEXT& operator=(const VkDebugMarkerObjectTagInfoEXT& rhs)
      {
        *reinterpret_cast<VkDebugMarkerObjectTagInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct DedicatedAllocationImageCreateInfoNV : public VkDedicatedAllocationImageCreateInfoNV
    {
      DedicatedAllocationImageCreateInfoNV()
        : VkDedicatedAllocationImageCreateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
      }

      explicit DedicatedAllocationImageCreateInfoNV(VkBool32 dedicatedAllocation)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDedicatedAllocationImageCreateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV, nullptr, dedicatedAllocation}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
        this->pNext = nullptr;
        this->dedicatedAllocation = dedicatedAllocation;
#endif
      }

      DedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV& value)
      {
        *reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV*>(this) = value;
      }

      DedicatedAllocationImageCreateInfoNV& operator=(const VkDedicatedAllocationImageCreateInfoNV& rhs)
      {
        *reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct DedicatedAllocationBufferCreateInfoNV : public VkDedicatedAllocationBufferCreateInfoNV
    {
      DedicatedAllocationBufferCreateInfoNV()
        : VkDedicatedAllocationBufferCreateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
      }

      explicit DedicatedAllocationBufferCreateInfoNV(VkBool32 dedicatedAllocation)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDedicatedAllocationBufferCreateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV, nullptr, dedicatedAllocation}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
        this->pNext = nullptr;
        this->dedicatedAllocation = dedicatedAllocation;
#endif
      }

      DedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV& value)
      {
        *reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV*>(this) = value;
      }

      DedicatedAllocationBufferCreateInfoNV& operator=(const VkDedicatedAllocationBufferCreateInfoNV& rhs)
      {
        *reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct DedicatedAllocationMemoryAllocateInfoNV : public VkDedicatedAllocationMemoryAllocateInfoNV
    {
      DedicatedAllocationMemoryAllocateInfoNV()
        : VkDedicatedAllocationMemoryAllocateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
      }

      explicit DedicatedAllocationMemoryAllocateInfoNV(VkImage image, VkBuffer buffer)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDedicatedAllocationMemoryAllocateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV, nullptr, image, buffer}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
        this->pNext = nullptr;
        this->image = image;
        this->buffer = buffer;
#endif
      }

      DedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV& value)
      {
        *reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV*>(this) = value;
      }

      DedicatedAllocationMemoryAllocateInfoNV& operator=(const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
      {
        *reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct TextureLODGatherFormatPropertiesAMD : public VkTextureLODGatherFormatPropertiesAMD
    {
      TextureLODGatherFormatPropertiesAMD()
        : VkTextureLODGatherFormatPropertiesAMD{}
      {
        this->sType = VK_STRUCTURE_TYPE_TEXTURE_LODGATHER_FORMAT_PROPERTIES_AMD;
      }

      explicit TextureLODGatherFormatPropertiesAMD(VkBool32 supportsTextureGatherLODBiasAMD)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkTextureLODGatherFormatPropertiesAMD{VK_STRUCTURE_TYPE_TEXTURE_LODGATHER_FORMAT_PROPERTIES_AMD, nullptr, supportsTextureGatherLODBiasAMD}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_TEXTURE_LODGATHER_FORMAT_PROPERTIES_AMD;
        this->pNext = nullptr;
        this->supportsTextureGatherLODBiasAMD = supportsTextureGatherLODBiasAMD;
#endif
      }

      TextureLODGatherFormatPropertiesAMD(const VkTextureLODGatherFormatPropertiesAMD& value)
      {
        *reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD*>(this) = value;
      }

      TextureLODGatherFormatPropertiesAMD& operator=(const VkTextureLODGatherFormatPropertiesAMD& rhs)
      {
        *reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD*>(this) = rhs;
        return *this;
      }
    };

    struct RenderPassMultiviewCreateInfoKHX : public VkRenderPassMultiviewCreateInfoKHX
    {
      RenderPassMultiviewCreateInfoKHX()
        : VkRenderPassMultiviewCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHX;
      }

      explicit RenderPassMultiviewCreateInfoKHX(uint32_t subpassCount, const uint32_t * pViewMasks, uint32_t dependencyCount, const int32_t * pViewOffsets, uint32_t correlationMaskCount, const uint32_t * pCorrelationMasks)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRenderPassMultiviewCreateInfoKHX{VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHX, nullptr, subpassCount, pViewMasks, dependencyCount, pViewOffsets, correlationMaskCount, pCorrelationMasks}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->subpassCount = subpassCount;
        this->pViewMasks = pViewMasks;
        this->dependencyCount = dependencyCount;
        this->pViewOffsets = pViewOffsets;
        this->correlationMaskCount = correlationMaskCount;
        this->pCorrelationMasks = pCorrelationMasks;
#endif
      }

      RenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX& value)
      {
        *reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX*>(this) = value;
      }

      RenderPassMultiviewCreateInfoKHX& operator=(const VkRenderPassMultiviewCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceMultiviewFeaturesKHX : public VkPhysicalDeviceMultiviewFeaturesKHX
    {
      PhysicalDeviceMultiviewFeaturesKHX()
        : VkPhysicalDeviceMultiviewFeaturesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHX;
      }

      explicit PhysicalDeviceMultiviewFeaturesKHX(VkBool32 multiview, VkBool32 multiviewGeometryShader, VkBool32 multiviewTessellationShader)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceMultiviewFeaturesKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHX, nullptr, multiview, multiviewGeometryShader, multiviewTessellationShader}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHX;
        this->pNext = nullptr;
        this->multiview = multiview;
        this->multiviewGeometryShader = multiviewGeometryShader;
        this->multiviewTessellationShader = multiviewTessellationShader;
#endif
      }

      PhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX*>(this) = value;
      }

      PhysicalDeviceMultiviewFeaturesKHX& operator=(const VkPhysicalDeviceMultiviewFeaturesKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceMultiviewPropertiesKHX : public VkPhysicalDeviceMultiviewPropertiesKHX
    {
      PhysicalDeviceMultiviewPropertiesKHX()
        : VkPhysicalDeviceMultiviewPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHX;
      }

      explicit PhysicalDeviceMultiviewPropertiesKHX(uint32_t maxMultiviewViewCount, uint32_t maxMultiviewInstanceIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceMultiviewPropertiesKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHX, nullptr, maxMultiviewViewCount, maxMultiviewInstanceIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->maxMultiviewViewCount = maxMultiviewViewCount;
        this->maxMultiviewInstanceIndex = maxMultiviewInstanceIndex;
#endif
      }

      PhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX*>(this) = value;
      }

      PhysicalDeviceMultiviewPropertiesKHX& operator=(const VkPhysicalDeviceMultiviewPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalImageFormatPropertiesNV : public VkExternalImageFormatPropertiesNV
    {
      ExternalImageFormatPropertiesNV()
        : VkExternalImageFormatPropertiesNV{}
      {
      }

      explicit ExternalImageFormatPropertiesNV(VkImageFormatProperties imageFormatProperties, VkExternalMemoryFeatureFlagsNV externalMemoryFeatures, VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes, VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalImageFormatPropertiesNV{imageFormatProperties, externalMemoryFeatures, exportFromImportedHandleTypes, compatibleHandleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->imageFormatProperties = imageFormatProperties;
        this->externalMemoryFeatures = externalMemoryFeatures;
        this->exportFromImportedHandleTypes = exportFromImportedHandleTypes;
        this->compatibleHandleTypes = compatibleHandleTypes;
#endif
      }

      ExternalImageFormatPropertiesNV(const VkExternalImageFormatPropertiesNV& value)
      {
        *reinterpret_cast<VkExternalImageFormatPropertiesNV*>(this) = value;
      }

      ExternalImageFormatPropertiesNV& operator=(const VkExternalImageFormatPropertiesNV& rhs)
      {
        *reinterpret_cast<VkExternalImageFormatPropertiesNV*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalMemoryImageCreateInfoNV : public VkExternalMemoryImageCreateInfoNV
    {
      ExternalMemoryImageCreateInfoNV()
        : VkExternalMemoryImageCreateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
      }

      explicit ExternalMemoryImageCreateInfoNV(VkExternalMemoryHandleTypeFlagsNV handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalMemoryImageCreateInfoNV{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV& value)
      {
        *reinterpret_cast<VkExternalMemoryImageCreateInfoNV*>(this) = value;
      }

      ExternalMemoryImageCreateInfoNV& operator=(const VkExternalMemoryImageCreateInfoNV& rhs)
      {
        *reinterpret_cast<VkExternalMemoryImageCreateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct ExportMemoryAllocateInfoNV : public VkExportMemoryAllocateInfoNV
    {
      ExportMemoryAllocateInfoNV()
        : VkExportMemoryAllocateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
      }

      explicit ExportMemoryAllocateInfoNV(VkExternalMemoryHandleTypeFlagsNV handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExportMemoryAllocateInfoNV{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV& value)
      {
        *reinterpret_cast<VkExportMemoryAllocateInfoNV*>(this) = value;
      }

      ExportMemoryAllocateInfoNV& operator=(const VkExportMemoryAllocateInfoNV& rhs)
      {
        *reinterpret_cast<VkExportMemoryAllocateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryAllocateFlagsInfoKHX : public VkMemoryAllocateFlagsInfoKHX
    {
      MemoryAllocateFlagsInfoKHX()
        : VkMemoryAllocateFlagsInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX;
      }

      explicit MemoryAllocateFlagsInfoKHX(VkMemoryAllocateFlagsKHX flags, uint32_t deviceMask)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryAllocateFlagsInfoKHX{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX, nullptr, flags, deviceMask}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX;
        this->pNext = nullptr;
        this->flags = flags;
        this->deviceMask = deviceMask;
#endif
      }

      MemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX& value)
      {
        *reinterpret_cast<VkMemoryAllocateFlagsInfoKHX*>(this) = value;
      }

      MemoryAllocateFlagsInfoKHX& operator=(const VkMemoryAllocateFlagsInfoKHX& rhs)
      {
        *reinterpret_cast<VkMemoryAllocateFlagsInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct BindBufferMemoryInfoKHX : public VkBindBufferMemoryInfoKHX
    {
      BindBufferMemoryInfoKHX()
        : VkBindBufferMemoryInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX;
      }

      explicit BindBufferMemoryInfoKHX(VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset, uint32_t deviceIndexCount, const uint32_t * pDeviceIndices)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBindBufferMemoryInfoKHX{VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX, nullptr, buffer, memory, memoryOffset, deviceIndexCount, pDeviceIndices}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX;
        this->pNext = nullptr;
        this->buffer = buffer;
        this->memory = memory;
        this->memoryOffset = memoryOffset;
        this->deviceIndexCount = deviceIndexCount;
        this->pDeviceIndices = pDeviceIndices;
#endif
      }

      BindBufferMemoryInfoKHX(const VkBindBufferMemoryInfoKHX& value)
      {
        *reinterpret_cast<VkBindBufferMemoryInfoKHX*>(this) = value;
      }

      BindBufferMemoryInfoKHX& operator=(const VkBindBufferMemoryInfoKHX& rhs)
      {
        *reinterpret_cast<VkBindBufferMemoryInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct BindImageMemoryInfoKHX : public VkBindImageMemoryInfoKHX
    {
      BindImageMemoryInfoKHX()
        : VkBindImageMemoryInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX;
      }

      explicit BindImageMemoryInfoKHX(VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset, uint32_t deviceIndexCount, const uint32_t * pDeviceIndices, uint32_t SFRRectCount, const VkRect2D * pSFRRects)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBindImageMemoryInfoKHX{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX, nullptr, image, memory, memoryOffset, deviceIndexCount, pDeviceIndices, SFRRectCount, pSFRRects}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX;
        this->pNext = nullptr;
        this->image = image;
        this->memory = memory;
        this->memoryOffset = memoryOffset;
        this->deviceIndexCount = deviceIndexCount;
        this->pDeviceIndices = pDeviceIndices;
        this->SFRRectCount = SFRRectCount;
        this->pSFRRects = pSFRRects;
#endif
      }

      BindImageMemoryInfoKHX(const VkBindImageMemoryInfoKHX& value)
      {
        *reinterpret_cast<VkBindImageMemoryInfoKHX*>(this) = value;
      }

      BindImageMemoryInfoKHX& operator=(const VkBindImageMemoryInfoKHX& rhs)
      {
        *reinterpret_cast<VkBindImageMemoryInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupRenderPassBeginInfoKHX : public VkDeviceGroupRenderPassBeginInfoKHX
    {
      DeviceGroupRenderPassBeginInfoKHX()
        : VkDeviceGroupRenderPassBeginInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX;
      }

      explicit DeviceGroupRenderPassBeginInfoKHX(uint32_t deviceMask, uint32_t deviceRenderAreaCount, const VkRect2D * pDeviceRenderAreas)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupRenderPassBeginInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX, nullptr, deviceMask, deviceRenderAreaCount, pDeviceRenderAreas}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX;
        this->pNext = nullptr;
        this->deviceMask = deviceMask;
        this->deviceRenderAreaCount = deviceRenderAreaCount;
        this->pDeviceRenderAreas = pDeviceRenderAreas;
#endif
      }

      DeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX*>(this) = value;
      }

      DeviceGroupRenderPassBeginInfoKHX& operator=(const VkDeviceGroupRenderPassBeginInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupCommandBufferBeginInfoKHX : public VkDeviceGroupCommandBufferBeginInfoKHX
    {
      DeviceGroupCommandBufferBeginInfoKHX()
        : VkDeviceGroupCommandBufferBeginInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX;
      }

      explicit DeviceGroupCommandBufferBeginInfoKHX(uint32_t deviceMask)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupCommandBufferBeginInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX, nullptr, deviceMask}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX;
        this->pNext = nullptr;
        this->deviceMask = deviceMask;
#endif
      }

      DeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX*>(this) = value;
      }

      DeviceGroupCommandBufferBeginInfoKHX& operator=(const VkDeviceGroupCommandBufferBeginInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupSubmitInfoKHX : public VkDeviceGroupSubmitInfoKHX
    {
      DeviceGroupSubmitInfoKHX()
        : VkDeviceGroupSubmitInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX;
      }

      explicit DeviceGroupSubmitInfoKHX(uint32_t waitSemaphoreCount, const uint32_t * pWaitSemaphoreDeviceIndices, uint32_t commandBufferCount, const uint32_t * pCommandBufferDeviceMasks, uint32_t signalSemaphoreCount, const uint32_t * pSignalSemaphoreDeviceIndices)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupSubmitInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX, nullptr, waitSemaphoreCount, pWaitSemaphoreDeviceIndices, commandBufferCount, pCommandBufferDeviceMasks, signalSemaphoreCount, pSignalSemaphoreDeviceIndices}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX;
        this->pNext = nullptr;
        this->waitSemaphoreCount = waitSemaphoreCount;
        this->pWaitSemaphoreDeviceIndices = pWaitSemaphoreDeviceIndices;
        this->commandBufferCount = commandBufferCount;
        this->pCommandBufferDeviceMasks = pCommandBufferDeviceMasks;
        this->signalSemaphoreCount = signalSemaphoreCount;
        this->pSignalSemaphoreDeviceIndices = pSignalSemaphoreDeviceIndices;
#endif
      }

      DeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupSubmitInfoKHX*>(this) = value;
      }

      DeviceGroupSubmitInfoKHX& operator=(const VkDeviceGroupSubmitInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupSubmitInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupBindSparseInfoKHX : public VkDeviceGroupBindSparseInfoKHX
    {
      DeviceGroupBindSparseInfoKHX()
        : VkDeviceGroupBindSparseInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX;
      }

      explicit DeviceGroupBindSparseInfoKHX(uint32_t resourceDeviceIndex, uint32_t memoryDeviceIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupBindSparseInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX, nullptr, resourceDeviceIndex, memoryDeviceIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX;
        this->pNext = nullptr;
        this->resourceDeviceIndex = resourceDeviceIndex;
        this->memoryDeviceIndex = memoryDeviceIndex;
#endif
      }

      DeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupBindSparseInfoKHX*>(this) = value;
      }

      DeviceGroupBindSparseInfoKHX& operator=(const VkDeviceGroupBindSparseInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupBindSparseInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupPresentCapabilitiesKHX : public VkDeviceGroupPresentCapabilitiesKHX
    {
      DeviceGroupPresentCapabilitiesKHX()
        : VkDeviceGroupPresentCapabilitiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX;
      }

      explicit DeviceGroupPresentCapabilitiesKHX(uint32_t [32] presentMask, VkDeviceGroupPresentModeFlagsKHX modes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupPresentCapabilitiesKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX, nullptr, presentMask, modes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX;
        this->pNext = nullptr;
        this->presentMask = presentMask;
        this->modes = modes;
#endif
      }

      DeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX*>(this) = value;
      }

      DeviceGroupPresentCapabilitiesKHX& operator=(const VkDeviceGroupPresentCapabilitiesKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ImageSwapchainCreateInfoKHX : public VkImageSwapchainCreateInfoKHX
    {
      ImageSwapchainCreateInfoKHX()
        : VkImageSwapchainCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX;
      }

      explicit ImageSwapchainCreateInfoKHX(VkSwapchainKHR swapchain)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImageSwapchainCreateInfoKHX{VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX, nullptr, swapchain}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->swapchain = swapchain;
#endif
      }

      ImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX& value)
      {
        *reinterpret_cast<VkImageSwapchainCreateInfoKHX*>(this) = value;
      }

      ImageSwapchainCreateInfoKHX& operator=(const VkImageSwapchainCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkImageSwapchainCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct BindImageMemorySwapchainInfoKHX : public VkBindImageMemorySwapchainInfoKHX
    {
      BindImageMemorySwapchainInfoKHX()
        : VkBindImageMemorySwapchainInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX;
      }

      explicit BindImageMemorySwapchainInfoKHX(VkSwapchainKHR swapchain, uint32_t imageIndex)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkBindImageMemorySwapchainInfoKHX{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX, nullptr, swapchain, imageIndex}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX;
        this->pNext = nullptr;
        this->swapchain = swapchain;
        this->imageIndex = imageIndex;
#endif
      }

      BindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX& value)
      {
        *reinterpret_cast<VkBindImageMemorySwapchainInfoKHX*>(this) = value;
      }

      BindImageMemorySwapchainInfoKHX& operator=(const VkBindImageMemorySwapchainInfoKHX& rhs)
      {
        *reinterpret_cast<VkBindImageMemorySwapchainInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct AcquireNextImageInfoKHX : public VkAcquireNextImageInfoKHX
    {
      AcquireNextImageInfoKHX()
        : VkAcquireNextImageInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX;
      }

      explicit AcquireNextImageInfoKHX(VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t deviceMask)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkAcquireNextImageInfoKHX{VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX, nullptr, swapchain, timeout, semaphore, fence, deviceMask}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX;
        this->pNext = nullptr;
        this->swapchain = swapchain;
        this->timeout = timeout;
        this->semaphore = semaphore;
        this->fence = fence;
        this->deviceMask = deviceMask;
#endif
      }

      AcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX& value)
      {
        *reinterpret_cast<VkAcquireNextImageInfoKHX*>(this) = value;
      }

      AcquireNextImageInfoKHX& operator=(const VkAcquireNextImageInfoKHX& rhs)
      {
        *reinterpret_cast<VkAcquireNextImageInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupPresentInfoKHX : public VkDeviceGroupPresentInfoKHX
    {
      DeviceGroupPresentInfoKHX()
        : VkDeviceGroupPresentInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX;
      }

      explicit DeviceGroupPresentInfoKHX(uint32_t swapchainCount, const uint32_t * pDeviceMasks, VkDeviceGroupPresentModeFlagBitsKHX mode)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupPresentInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX, nullptr, swapchainCount, pDeviceMasks, mode}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX;
        this->pNext = nullptr;
        this->swapchainCount = swapchainCount;
        this->pDeviceMasks = pDeviceMasks;
        this->mode = mode;
#endif
      }

      DeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupPresentInfoKHX*>(this) = value;
      }

      DeviceGroupPresentInfoKHX& operator=(const VkDeviceGroupPresentInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupPresentInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupSwapchainCreateInfoKHX : public VkDeviceGroupSwapchainCreateInfoKHX
    {
      DeviceGroupSwapchainCreateInfoKHX()
        : VkDeviceGroupSwapchainCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX;
      }

      explicit DeviceGroupSwapchainCreateInfoKHX(VkDeviceGroupPresentModeFlagsKHX modes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupSwapchainCreateInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX, nullptr, modes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->modes = modes;
#endif
      }

      DeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX*>(this) = value;
      }

      DeviceGroupSwapchainCreateInfoKHX& operator=(const VkDeviceGroupSwapchainCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ValidationFlagsEXT : public VkValidationFlagsEXT
    {
      ValidationFlagsEXT()
        : VkValidationFlagsEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
      }

      explicit ValidationFlagsEXT(uint32_t disabledValidationCheckCount, VkValidationCheckEXT * pDisabledValidationChecks)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkValidationFlagsEXT{VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT, nullptr, disabledValidationCheckCount, pDisabledValidationChecks}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
        this->pNext = nullptr;
        this->disabledValidationCheckCount = disabledValidationCheckCount;
        this->pDisabledValidationChecks = pDisabledValidationChecks;
#endif
      }

      ValidationFlagsEXT(const VkValidationFlagsEXT& value)
      {
        *reinterpret_cast<VkValidationFlagsEXT*>(this) = value;
      }

      ValidationFlagsEXT& operator=(const VkValidationFlagsEXT& rhs)
      {
        *reinterpret_cast<VkValidationFlagsEXT*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceGroupPropertiesKHX : public VkPhysicalDeviceGroupPropertiesKHX
    {
      PhysicalDeviceGroupPropertiesKHX()
        : VkPhysicalDeviceGroupPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX;
      }

      explicit PhysicalDeviceGroupPropertiesKHX(uint32_t physicalDeviceCount, VkPhysicalDevice [32] physicalDevices, VkBool32 subsetAllocation)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceGroupPropertiesKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX, nullptr, physicalDeviceCount, physicalDevices, subsetAllocation}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->physicalDeviceCount = physicalDeviceCount;
        this->physicalDevices = physicalDevices;
        this->subsetAllocation = subsetAllocation;
#endif
      }

      PhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX*>(this) = value;
      }

      PhysicalDeviceGroupPropertiesKHX& operator=(const VkPhysicalDeviceGroupPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGroupDeviceCreateInfoKHX : public VkDeviceGroupDeviceCreateInfoKHX
    {
      DeviceGroupDeviceCreateInfoKHX()
        : VkDeviceGroupDeviceCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHX;
      }

      explicit DeviceGroupDeviceCreateInfoKHX(uint32_t physicalDeviceCount, const VkPhysicalDevice * pPhysicalDevices)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGroupDeviceCreateInfoKHX{VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHX, nullptr, physicalDeviceCount, pPhysicalDevices}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->physicalDeviceCount = physicalDeviceCount;
        this->pPhysicalDevices = pPhysicalDevices;
#endif
      }

      DeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX& value)
      {
        *reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX*>(this) = value;
      }

      DeviceGroupDeviceCreateInfoKHX& operator=(const VkDeviceGroupDeviceCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalMemoryPropertiesKHX : public VkExternalMemoryPropertiesKHX
    {
      ExternalMemoryPropertiesKHX()
        : VkExternalMemoryPropertiesKHX{}
      {
      }

      explicit ExternalMemoryPropertiesKHX(VkExternalMemoryFeatureFlagsKHX externalMemoryFeatures, VkExternalMemoryHandleTypeFlagsKHX exportFromImportedHandleTypes, VkExternalMemoryHandleTypeFlagsKHX compatibleHandleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalMemoryPropertiesKHX{externalMemoryFeatures, exportFromImportedHandleTypes, compatibleHandleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->externalMemoryFeatures = externalMemoryFeatures;
        this->exportFromImportedHandleTypes = exportFromImportedHandleTypes;
        this->compatibleHandleTypes = compatibleHandleTypes;
#endif
      }

      ExternalMemoryPropertiesKHX(const VkExternalMemoryPropertiesKHX& value)
      {
        *reinterpret_cast<VkExternalMemoryPropertiesKHX*>(this) = value;
      }

      ExternalMemoryPropertiesKHX& operator=(const VkExternalMemoryPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkExternalMemoryPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceExternalImageFormatInfoKHX : public VkPhysicalDeviceExternalImageFormatInfoKHX
    {
      PhysicalDeviceExternalImageFormatInfoKHX()
        : VkPhysicalDeviceExternalImageFormatInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX;
      }

      explicit PhysicalDeviceExternalImageFormatInfoKHX(VkExternalMemoryHandleTypeFlagBitsKHX handleType)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceExternalImageFormatInfoKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX, nullptr, handleType}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHX;
        this->pNext = nullptr;
        this->handleType = handleType;
#endif
      }

      PhysicalDeviceExternalImageFormatInfoKHX(const VkPhysicalDeviceExternalImageFormatInfoKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHX*>(this) = value;
      }

      PhysicalDeviceExternalImageFormatInfoKHX& operator=(const VkPhysicalDeviceExternalImageFormatInfoKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalImageFormatPropertiesKHX : public VkExternalImageFormatPropertiesKHX
    {
      ExternalImageFormatPropertiesKHX()
        : VkExternalImageFormatPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHX;
      }

      explicit ExternalImageFormatPropertiesKHX(VkExternalMemoryPropertiesKHX externalMemoryProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalImageFormatPropertiesKHX{VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHX, nullptr, externalMemoryProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->externalMemoryProperties = externalMemoryProperties;
#endif
      }

      ExternalImageFormatPropertiesKHX(const VkExternalImageFormatPropertiesKHX& value)
      {
        *reinterpret_cast<VkExternalImageFormatPropertiesKHX*>(this) = value;
      }

      ExternalImageFormatPropertiesKHX& operator=(const VkExternalImageFormatPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkExternalImageFormatPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceExternalBufferInfoKHX : public VkPhysicalDeviceExternalBufferInfoKHX
    {
      PhysicalDeviceExternalBufferInfoKHX()
        : VkPhysicalDeviceExternalBufferInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX;
      }

      explicit PhysicalDeviceExternalBufferInfoKHX(VkBufferCreateFlags flags, VkBufferUsageFlags usage, VkExternalMemoryHandleTypeFlagBitsKHX handleType)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceExternalBufferInfoKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX, nullptr, flags, usage, handleType}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHX;
        this->pNext = nullptr;
        this->flags = flags;
        this->usage = usage;
        this->handleType = handleType;
#endif
      }

      PhysicalDeviceExternalBufferInfoKHX(const VkPhysicalDeviceExternalBufferInfoKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHX*>(this) = value;
      }

      PhysicalDeviceExternalBufferInfoKHX& operator=(const VkPhysicalDeviceExternalBufferInfoKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalBufferPropertiesKHX : public VkExternalBufferPropertiesKHX
    {
      ExternalBufferPropertiesKHX()
        : VkExternalBufferPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX;
      }

      explicit ExternalBufferPropertiesKHX(VkExternalMemoryPropertiesKHX externalMemoryProperties)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalBufferPropertiesKHX{VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX, nullptr, externalMemoryProperties}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->externalMemoryProperties = externalMemoryProperties;
#endif
      }

      ExternalBufferPropertiesKHX(const VkExternalBufferPropertiesKHX& value)
      {
        *reinterpret_cast<VkExternalBufferPropertiesKHX*>(this) = value;
      }

      ExternalBufferPropertiesKHX& operator=(const VkExternalBufferPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkExternalBufferPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceIDPropertiesKHX : public VkPhysicalDeviceIDPropertiesKHX
    {
      PhysicalDeviceIDPropertiesKHX()
        : VkPhysicalDeviceIDPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IDPROPERTIES_KHX;
      }

      explicit PhysicalDeviceIDPropertiesKHX(uint8_t [16] deviceUUID, uint8_t [16] driverUUID, uint8_t [8] deviceLUID, VkBool32 deviceLUIDValid)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceIDPropertiesKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IDPROPERTIES_KHX, nullptr, deviceUUID, driverUUID, deviceLUID, deviceLUIDValid}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IDPROPERTIES_KHX;
        this->pNext = nullptr;
        this->deviceUUID = deviceUUID;
        this->driverUUID = driverUUID;
        this->deviceLUID = deviceLUID;
        this->deviceLUIDValid = deviceLUIDValid;
#endif
      }

      PhysicalDeviceIDPropertiesKHX(const VkPhysicalDeviceIDPropertiesKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceIDPropertiesKHX*>(this) = value;
      }

      PhysicalDeviceIDPropertiesKHX& operator=(const VkPhysicalDeviceIDPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceIDPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalMemoryImageCreateInfoKHX : public VkExternalMemoryImageCreateInfoKHX
    {
      ExternalMemoryImageCreateInfoKHX()
        : VkExternalMemoryImageCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHX;
      }

      explicit ExternalMemoryImageCreateInfoKHX(VkExternalMemoryHandleTypeFlagsKHX handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalMemoryImageCreateInfoKHX{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHX, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExternalMemoryImageCreateInfoKHX(const VkExternalMemoryImageCreateInfoKHX& value)
      {
        *reinterpret_cast<VkExternalMemoryImageCreateInfoKHX*>(this) = value;
      }

      ExternalMemoryImageCreateInfoKHX& operator=(const VkExternalMemoryImageCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkExternalMemoryImageCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalMemoryBufferCreateInfoKHX : public VkExternalMemoryBufferCreateInfoKHX
    {
      ExternalMemoryBufferCreateInfoKHX()
        : VkExternalMemoryBufferCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHX;
      }

      explicit ExternalMemoryBufferCreateInfoKHX(VkExternalMemoryHandleTypeFlagsKHX handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalMemoryBufferCreateInfoKHX{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHX, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExternalMemoryBufferCreateInfoKHX(const VkExternalMemoryBufferCreateInfoKHX& value)
      {
        *reinterpret_cast<VkExternalMemoryBufferCreateInfoKHX*>(this) = value;
      }

      ExternalMemoryBufferCreateInfoKHX& operator=(const VkExternalMemoryBufferCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkExternalMemoryBufferCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExportMemoryAllocateInfoKHX : public VkExportMemoryAllocateInfoKHX
    {
      ExportMemoryAllocateInfoKHX()
        : VkExportMemoryAllocateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHX;
      }

      explicit ExportMemoryAllocateInfoKHX(VkExternalMemoryHandleTypeFlagsKHX handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExportMemoryAllocateInfoKHX{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHX, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHX;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExportMemoryAllocateInfoKHX(const VkExportMemoryAllocateInfoKHX& value)
      {
        *reinterpret_cast<VkExportMemoryAllocateInfoKHX*>(this) = value;
      }

      ExportMemoryAllocateInfoKHX& operator=(const VkExportMemoryAllocateInfoKHX& rhs)
      {
        *reinterpret_cast<VkExportMemoryAllocateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ImportMemoryFdInfoKHX : public VkImportMemoryFdInfoKHX
    {
      ImportMemoryFdInfoKHX()
        : VkImportMemoryFdInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHX;
      }

      explicit ImportMemoryFdInfoKHX(VkExternalMemoryHandleTypeFlagBitsKHX handleType, int fd)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImportMemoryFdInfoKHX{VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHX, nullptr, handleType, fd}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHX;
        this->pNext = nullptr;
        this->handleType = handleType;
        this->fd = fd;
#endif
      }

      ImportMemoryFdInfoKHX(const VkImportMemoryFdInfoKHX& value)
      {
        *reinterpret_cast<VkImportMemoryFdInfoKHX*>(this) = value;
      }

      ImportMemoryFdInfoKHX& operator=(const VkImportMemoryFdInfoKHX& rhs)
      {
        *reinterpret_cast<VkImportMemoryFdInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct MemoryFdPropertiesKHX : public VkMemoryFdPropertiesKHX
    {
      MemoryFdPropertiesKHX()
        : VkMemoryFdPropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX;
      }

      explicit MemoryFdPropertiesKHX(uint32_t memoryTypeBits)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkMemoryFdPropertiesKHX{VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX, nullptr, memoryTypeBits}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->memoryTypeBits = memoryTypeBits;
#endif
      }

      MemoryFdPropertiesKHX(const VkMemoryFdPropertiesKHX& value)
      {
        *reinterpret_cast<VkMemoryFdPropertiesKHX*>(this) = value;
      }

      MemoryFdPropertiesKHX& operator=(const VkMemoryFdPropertiesKHX& rhs)
      {
        *reinterpret_cast<VkMemoryFdPropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceExternalSemaphoreInfoKHX : public VkPhysicalDeviceExternalSemaphoreInfoKHX
    {
      PhysicalDeviceExternalSemaphoreInfoKHX()
        : VkPhysicalDeviceExternalSemaphoreInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX;
      }

      explicit PhysicalDeviceExternalSemaphoreInfoKHX(VkExternalSemaphoreHandleTypeFlagBitsKHX handleType)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceExternalSemaphoreInfoKHX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX, nullptr, handleType}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHX;
        this->pNext = nullptr;
        this->handleType = handleType;
#endif
      }

      PhysicalDeviceExternalSemaphoreInfoKHX(const VkPhysicalDeviceExternalSemaphoreInfoKHX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHX*>(this) = value;
      }

      PhysicalDeviceExternalSemaphoreInfoKHX& operator=(const VkPhysicalDeviceExternalSemaphoreInfoKHX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExternalSemaphorePropertiesKHX : public VkExternalSemaphorePropertiesKHX
    {
      ExternalSemaphorePropertiesKHX()
        : VkExternalSemaphorePropertiesKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX;
      }

      explicit ExternalSemaphorePropertiesKHX(VkExternalSemaphoreHandleTypeFlagsKHX exportFromImportedHandleTypes, VkExternalSemaphoreHandleTypeFlagsKHX compatibleHandleTypes, VkExternalSemaphoreFeatureFlagsKHX externalSemaphoreFeatures)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExternalSemaphorePropertiesKHX{VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX, nullptr, exportFromImportedHandleTypes, compatibleHandleTypes, externalSemaphoreFeatures}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHX;
        this->pNext = nullptr;
        this->exportFromImportedHandleTypes = exportFromImportedHandleTypes;
        this->compatibleHandleTypes = compatibleHandleTypes;
        this->externalSemaphoreFeatures = externalSemaphoreFeatures;
#endif
      }

      ExternalSemaphorePropertiesKHX(const VkExternalSemaphorePropertiesKHX& value)
      {
        *reinterpret_cast<VkExternalSemaphorePropertiesKHX*>(this) = value;
      }

      ExternalSemaphorePropertiesKHX& operator=(const VkExternalSemaphorePropertiesKHX& rhs)
      {
        *reinterpret_cast<VkExternalSemaphorePropertiesKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ExportSemaphoreCreateInfoKHX : public VkExportSemaphoreCreateInfoKHX
    {
      ExportSemaphoreCreateInfoKHX()
        : VkExportSemaphoreCreateInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHX;
      }

      explicit ExportSemaphoreCreateInfoKHX(VkExternalSemaphoreHandleTypeFlagsKHX handleTypes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkExportSemaphoreCreateInfoKHX{VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHX, nullptr, handleTypes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHX;
        this->pNext = nullptr;
        this->handleTypes = handleTypes;
#endif
      }

      ExportSemaphoreCreateInfoKHX(const VkExportSemaphoreCreateInfoKHX& value)
      {
        *reinterpret_cast<VkExportSemaphoreCreateInfoKHX*>(this) = value;
      }

      ExportSemaphoreCreateInfoKHX& operator=(const VkExportSemaphoreCreateInfoKHX& rhs)
      {
        *reinterpret_cast<VkExportSemaphoreCreateInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct ImportSemaphoreFdInfoKHX : public VkImportSemaphoreFdInfoKHX
    {
      ImportSemaphoreFdInfoKHX()
        : VkImportSemaphoreFdInfoKHX{}
      {
        this->sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX;
      }

      explicit ImportSemaphoreFdInfoKHX(VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, int fd)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkImportSemaphoreFdInfoKHX{VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX, nullptr, semaphore, handleType, fd}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHX;
        this->pNext = nullptr;
        this->semaphore = semaphore;
        this->handleType = handleType;
        this->fd = fd;
#endif
      }

      ImportSemaphoreFdInfoKHX(const VkImportSemaphoreFdInfoKHX& value)
      {
        *reinterpret_cast<VkImportSemaphoreFdInfoKHX*>(this) = value;
      }

      ImportSemaphoreFdInfoKHX& operator=(const VkImportSemaphoreFdInfoKHX& rhs)
      {
        *reinterpret_cast<VkImportSemaphoreFdInfoKHX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGeneratedCommandsFeaturesNVX : public VkDeviceGeneratedCommandsFeaturesNVX
    {
      DeviceGeneratedCommandsFeaturesNVX()
        : VkDeviceGeneratedCommandsFeaturesNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
      }

      explicit DeviceGeneratedCommandsFeaturesNVX(VkBool32 computeBindingPointSupport)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGeneratedCommandsFeaturesNVX{VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX, nullptr, computeBindingPointSupport}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
        this->pNext = nullptr;
        this->computeBindingPointSupport = computeBindingPointSupport;
#endif
      }

      DeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX& value)
      {
        *reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX*>(this) = value;
      }

      DeviceGeneratedCommandsFeaturesNVX& operator=(const VkDeviceGeneratedCommandsFeaturesNVX& rhs)
      {
        *reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceGeneratedCommandsLimitsNVX : public VkDeviceGeneratedCommandsLimitsNVX
    {
      DeviceGeneratedCommandsLimitsNVX()
        : VkDeviceGeneratedCommandsLimitsNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
      }

      explicit DeviceGeneratedCommandsLimitsNVX(uint32_t maxIndirectCommandsLayoutTokenCount, uint32_t maxObjectEntryCounts, uint32_t minSequenceCountBufferOffsetAlignment, uint32_t minSequenceIndexBufferOffsetAlignment, uint32_t minCommandsTokenBufferOffsetAlignment)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceGeneratedCommandsLimitsNVX{VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX, nullptr, maxIndirectCommandsLayoutTokenCount, maxObjectEntryCounts, minSequenceCountBufferOffsetAlignment, minSequenceIndexBufferOffsetAlignment, minCommandsTokenBufferOffsetAlignment}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
        this->pNext = nullptr;
        this->maxIndirectCommandsLayoutTokenCount = maxIndirectCommandsLayoutTokenCount;
        this->maxObjectEntryCounts = maxObjectEntryCounts;
        this->minSequenceCountBufferOffsetAlignment = minSequenceCountBufferOffsetAlignment;
        this->minSequenceIndexBufferOffsetAlignment = minSequenceIndexBufferOffsetAlignment;
        this->minCommandsTokenBufferOffsetAlignment = minCommandsTokenBufferOffsetAlignment;
#endif
      }

      DeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX& value)
      {
        *reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX*>(this) = value;
      }

      DeviceGeneratedCommandsLimitsNVX& operator=(const VkDeviceGeneratedCommandsLimitsNVX& rhs)
      {
        *reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX*>(this) = rhs;
        return *this;
      }
    };

    struct IndirectCommandsTokenNVX : public VkIndirectCommandsTokenNVX
    {
      IndirectCommandsTokenNVX()
        : VkIndirectCommandsTokenNVX{}
      {
      }

      explicit IndirectCommandsTokenNVX(VkIndirectCommandsTokenTypeNVX tokenType, VkBuffer buffer, VkDeviceSize offset)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkIndirectCommandsTokenNVX{tokenType, buffer, offset}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->tokenType = tokenType;
        this->buffer = buffer;
        this->offset = offset;
#endif
      }

      IndirectCommandsTokenNVX(const VkIndirectCommandsTokenNVX& value)
      {
        *reinterpret_cast<VkIndirectCommandsTokenNVX*>(this) = value;
      }

      IndirectCommandsTokenNVX& operator=(const VkIndirectCommandsTokenNVX& rhs)
      {
        *reinterpret_cast<VkIndirectCommandsTokenNVX*>(this) = rhs;
        return *this;
      }
    };

    struct IndirectCommandsLayoutTokenNVX : public VkIndirectCommandsLayoutTokenNVX
    {
      IndirectCommandsLayoutTokenNVX()
        : VkIndirectCommandsLayoutTokenNVX{}
      {
      }

      explicit IndirectCommandsLayoutTokenNVX(VkIndirectCommandsTokenTypeNVX tokenType, uint32_t bindingUnit, uint32_t dynamicCount, uint32_t divisor)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkIndirectCommandsLayoutTokenNVX{tokenType, bindingUnit, dynamicCount, divisor}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->tokenType = tokenType;
        this->bindingUnit = bindingUnit;
        this->dynamicCount = dynamicCount;
        this->divisor = divisor;
#endif
      }

      IndirectCommandsLayoutTokenNVX(const VkIndirectCommandsLayoutTokenNVX& value)
      {
        *reinterpret_cast<VkIndirectCommandsLayoutTokenNVX*>(this) = value;
      }

      IndirectCommandsLayoutTokenNVX& operator=(const VkIndirectCommandsLayoutTokenNVX& rhs)
      {
        *reinterpret_cast<VkIndirectCommandsLayoutTokenNVX*>(this) = rhs;
        return *this;
      }
    };

    struct IndirectCommandsLayoutCreateInfoNVX : public VkIndirectCommandsLayoutCreateInfoNVX
    {
      IndirectCommandsLayoutCreateInfoNVX()
        : VkIndirectCommandsLayoutCreateInfoNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
      }

      explicit IndirectCommandsLayoutCreateInfoNVX(VkPipelineBindPoint pipelineBindPoint, VkIndirectCommandsLayoutUsageFlagsNVX flags, uint32_t tokenCount, const VkIndirectCommandsLayoutTokenNVX * pTokens)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkIndirectCommandsLayoutCreateInfoNVX{VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX, nullptr, pipelineBindPoint, flags, tokenCount, pTokens}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
        this->pNext = nullptr;
        this->pipelineBindPoint = pipelineBindPoint;
        this->flags = flags;
        this->tokenCount = tokenCount;
        this->pTokens = pTokens;
#endif
      }

      IndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX& value)
      {
        *reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX*>(this) = value;
      }

      IndirectCommandsLayoutCreateInfoNVX& operator=(const VkIndirectCommandsLayoutCreateInfoNVX& rhs)
      {
        *reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX*>(this) = rhs;
        return *this;
      }
    };

    struct CmdProcessCommandsInfoNVX : public VkCmdProcessCommandsInfoNVX
    {
      CmdProcessCommandsInfoNVX()
        : VkCmdProcessCommandsInfoNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
      }

      explicit CmdProcessCommandsInfoNVX(VkObjectTableNVX objectTable, VkIndirectCommandsLayoutNVX indirectCommandsLayout, uint32_t indirectCommandsTokenCount, const VkIndirectCommandsTokenNVX * pIndirectCommandsTokens, uint32_t maxSequencesCount, VkCommandBuffer targetCommandBuffer, VkBuffer sequencesCountBuffer, VkDeviceSize sequencesCountOffset, VkBuffer sequencesIndexBuffer, VkDeviceSize sequencesIndexOffset)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCmdProcessCommandsInfoNVX{VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX, nullptr, objectTable, indirectCommandsLayout, indirectCommandsTokenCount, pIndirectCommandsTokens, maxSequencesCount, targetCommandBuffer, sequencesCountBuffer, sequencesCountOffset, sequencesIndexBuffer, sequencesIndexOffset}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
        this->pNext = nullptr;
        this->objectTable = objectTable;
        this->indirectCommandsLayout = indirectCommandsLayout;
        this->indirectCommandsTokenCount = indirectCommandsTokenCount;
        this->pIndirectCommandsTokens = pIndirectCommandsTokens;
        this->maxSequencesCount = maxSequencesCount;
        this->targetCommandBuffer = targetCommandBuffer;
        this->sequencesCountBuffer = sequencesCountBuffer;
        this->sequencesCountOffset = sequencesCountOffset;
        this->sequencesIndexBuffer = sequencesIndexBuffer;
        this->sequencesIndexOffset = sequencesIndexOffset;
#endif
      }

      CmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX& value)
      {
        *reinterpret_cast<VkCmdProcessCommandsInfoNVX*>(this) = value;
      }

      CmdProcessCommandsInfoNVX& operator=(const VkCmdProcessCommandsInfoNVX& rhs)
      {
        *reinterpret_cast<VkCmdProcessCommandsInfoNVX*>(this) = rhs;
        return *this;
      }
    };

    struct CmdReserveSpaceForCommandsInfoNVX : public VkCmdReserveSpaceForCommandsInfoNVX
    {
      CmdReserveSpaceForCommandsInfoNVX()
        : VkCmdReserveSpaceForCommandsInfoNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
      }

      explicit CmdReserveSpaceForCommandsInfoNVX(VkObjectTableNVX objectTable, VkIndirectCommandsLayoutNVX indirectCommandsLayout, uint32_t maxSequencesCount)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkCmdReserveSpaceForCommandsInfoNVX{VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX, nullptr, objectTable, indirectCommandsLayout, maxSequencesCount}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
        this->pNext = nullptr;
        this->objectTable = objectTable;
        this->indirectCommandsLayout = indirectCommandsLayout;
        this->maxSequencesCount = maxSequencesCount;
#endif
      }

      CmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX& value)
      {
        *reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX*>(this) = value;
      }

      CmdReserveSpaceForCommandsInfoNVX& operator=(const VkCmdReserveSpaceForCommandsInfoNVX& rhs)
      {
        *reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTableCreateInfoNVX : public VkObjectTableCreateInfoNVX
    {
      ObjectTableCreateInfoNVX()
        : VkObjectTableCreateInfoNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
      }

      explicit ObjectTableCreateInfoNVX(uint32_t objectCount, const VkObjectEntryTypeNVX * pObjectEntryTypes, const uint32_t * pObjectEntryCounts, const VkObjectEntryUsageFlagsNVX * pObjectEntryUsageFlags, uint32_t maxUniformBuffersPerDescriptor, uint32_t maxStorageBuffersPerDescriptor, uint32_t maxStorageImagesPerDescriptor, uint32_t maxSampledImagesPerDescriptor, uint32_t maxPipelineLayouts)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTableCreateInfoNVX{VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX, nullptr, objectCount, pObjectEntryTypes, pObjectEntryCounts, pObjectEntryUsageFlags, maxUniformBuffersPerDescriptor, maxStorageBuffersPerDescriptor, maxStorageImagesPerDescriptor, maxSampledImagesPerDescriptor, maxPipelineLayouts}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
        this->pNext = nullptr;
        this->objectCount = objectCount;
        this->pObjectEntryTypes = pObjectEntryTypes;
        this->pObjectEntryCounts = pObjectEntryCounts;
        this->pObjectEntryUsageFlags = pObjectEntryUsageFlags;
        this->maxUniformBuffersPerDescriptor = maxUniformBuffersPerDescriptor;
        this->maxStorageBuffersPerDescriptor = maxStorageBuffersPerDescriptor;
        this->maxStorageImagesPerDescriptor = maxStorageImagesPerDescriptor;
        this->maxSampledImagesPerDescriptor = maxSampledImagesPerDescriptor;
        this->maxPipelineLayouts = maxPipelineLayouts;
#endif
      }

      ObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX& value)
      {
        *reinterpret_cast<VkObjectTableCreateInfoNVX*>(this) = value;
      }

      ObjectTableCreateInfoNVX& operator=(const VkObjectTableCreateInfoNVX& rhs)
      {
        *reinterpret_cast<VkObjectTableCreateInfoNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTableEntryNVX : public VkObjectTableEntryNVX
    {
      ObjectTableEntryNVX()
        : VkObjectTableEntryNVX{}
      {
      }

      explicit ObjectTableEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTableEntryNVX{type, flags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
#endif
      }

      ObjectTableEntryNVX(const VkObjectTableEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTableEntryNVX*>(this) = value;
      }

      ObjectTableEntryNVX& operator=(const VkObjectTableEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTableEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTablePipelineEntryNVX : public VkObjectTablePipelineEntryNVX
    {
      ObjectTablePipelineEntryNVX()
        : VkObjectTablePipelineEntryNVX{}
      {
      }

      explicit ObjectTablePipelineEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags, VkPipeline pipeline)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTablePipelineEntryNVX{type, flags, pipeline}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
        this->pipeline = pipeline;
#endif
      }

      ObjectTablePipelineEntryNVX(const VkObjectTablePipelineEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTablePipelineEntryNVX*>(this) = value;
      }

      ObjectTablePipelineEntryNVX& operator=(const VkObjectTablePipelineEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTablePipelineEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTableDescriptorSetEntryNVX : public VkObjectTableDescriptorSetEntryNVX
    {
      ObjectTableDescriptorSetEntryNVX()
        : VkObjectTableDescriptorSetEntryNVX{}
      {
      }

      explicit ObjectTableDescriptorSetEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags, VkPipelineLayout pipelineLayout, VkDescriptorSet descriptorSet)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTableDescriptorSetEntryNVX{type, flags, pipelineLayout, descriptorSet}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
        this->pipelineLayout = pipelineLayout;
        this->descriptorSet = descriptorSet;
#endif
      }

      ObjectTableDescriptorSetEntryNVX(const VkObjectTableDescriptorSetEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTableDescriptorSetEntryNVX*>(this) = value;
      }

      ObjectTableDescriptorSetEntryNVX& operator=(const VkObjectTableDescriptorSetEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTableDescriptorSetEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTableVertexBufferEntryNVX : public VkObjectTableVertexBufferEntryNVX
    {
      ObjectTableVertexBufferEntryNVX()
        : VkObjectTableVertexBufferEntryNVX{}
      {
      }

      explicit ObjectTableVertexBufferEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags, VkBuffer buffer)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTableVertexBufferEntryNVX{type, flags, buffer}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
        this->buffer = buffer;
#endif
      }

      ObjectTableVertexBufferEntryNVX(const VkObjectTableVertexBufferEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTableVertexBufferEntryNVX*>(this) = value;
      }

      ObjectTableVertexBufferEntryNVX& operator=(const VkObjectTableVertexBufferEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTableVertexBufferEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTableIndexBufferEntryNVX : public VkObjectTableIndexBufferEntryNVX
    {
      ObjectTableIndexBufferEntryNVX()
        : VkObjectTableIndexBufferEntryNVX{}
      {
      }

      explicit ObjectTableIndexBufferEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags, VkBuffer buffer, VkIndexType indexType)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTableIndexBufferEntryNVX{type, flags, buffer, indexType}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
        this->buffer = buffer;
        this->indexType = indexType;
#endif
      }

      ObjectTableIndexBufferEntryNVX(const VkObjectTableIndexBufferEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTableIndexBufferEntryNVX*>(this) = value;
      }

      ObjectTableIndexBufferEntryNVX& operator=(const VkObjectTableIndexBufferEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTableIndexBufferEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ObjectTablePushConstantEntryNVX : public VkObjectTablePushConstantEntryNVX
    {
      ObjectTablePushConstantEntryNVX()
        : VkObjectTablePushConstantEntryNVX{}
      {
      }

      explicit ObjectTablePushConstantEntryNVX(VkObjectEntryTypeNVX type, VkObjectEntryUsageFlagsNVX flags, VkPipelineLayout pipelineLayout, VkShaderStageFlags stageFlags)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkObjectTablePushConstantEntryNVX{type, flags, pipelineLayout, stageFlags}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->type = type;
        this->flags = flags;
        this->pipelineLayout = pipelineLayout;
        this->stageFlags = stageFlags;
#endif
      }

      ObjectTablePushConstantEntryNVX(const VkObjectTablePushConstantEntryNVX& value)
      {
        *reinterpret_cast<VkObjectTablePushConstantEntryNVX*>(this) = value;
      }

      ObjectTablePushConstantEntryNVX& operator=(const VkObjectTablePushConstantEntryNVX& rhs)
      {
        *reinterpret_cast<VkObjectTablePushConstantEntryNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ViewportWScalingNV : public VkViewportWScalingNV
    {
      ViewportWScalingNV()
        : VkViewportWScalingNV{}
      {
      }

      explicit ViewportWScalingNV(float xcoeff, float ycoeff)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkViewportWScalingNV{xcoeff, ycoeff}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->xcoeff = xcoeff;
        this->ycoeff = ycoeff;
#endif
      }

      ViewportWScalingNV(const VkViewportWScalingNV& value)
      {
        *reinterpret_cast<VkViewportWScalingNV*>(this) = value;
      }

      ViewportWScalingNV& operator=(const VkViewportWScalingNV& rhs)
      {
        *reinterpret_cast<VkViewportWScalingNV*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineViewportWScalingStateCreateInfoNV : public VkPipelineViewportWScalingStateCreateInfoNV
    {
      PipelineViewportWScalingStateCreateInfoNV()
        : VkPipelineViewportWScalingStateCreateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_WSCALING_STATE_CREATE_INFO_NV;
      }

      explicit PipelineViewportWScalingStateCreateInfoNV(VkBool32 viewportWScalingEnable, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineViewportWScalingStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_WSCALING_STATE_CREATE_INFO_NV, nullptr, viewportWScalingEnable, viewportCount, pViewportWScalings}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_WSCALING_STATE_CREATE_INFO_NV;
        this->pNext = nullptr;
        this->viewportWScalingEnable = viewportWScalingEnable;
        this->viewportCount = viewportCount;
        this->pViewportWScalings = pViewportWScalings;
#endif
      }

      PipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV& value)
      {
        *reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV*>(this) = value;
      }

      PipelineViewportWScalingStateCreateInfoNV& operator=(const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
      {
        *reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct SurfaceCapabilities2EXT : public VkSurfaceCapabilities2EXT
    {
      SurfaceCapabilities2EXT()
        : VkSurfaceCapabilities2EXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT;
      }

      explicit SurfaceCapabilities2EXT(uint32_t minImageCount, uint32_t maxImageCount, VkExtent2D currentExtent, VkExtent2D minImageExtent, VkExtent2D maxImageExtent, uint32_t maxImageArrayLayers, VkSurfaceTransformFlagsKHR supportedTransforms, VkSurfaceTransformFlagBitsKHR currentTransform, VkCompositeAlphaFlagsKHR supportedCompositeAlpha, VkImageUsageFlags supportedUsageFlags, VkSurfaceCounterFlagsEXT supportedSurfaceCounters)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSurfaceCapabilities2EXT{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT, nullptr, minImageCount, maxImageCount, currentExtent, minImageExtent, maxImageExtent, maxImageArrayLayers, supportedTransforms, currentTransform, supportedCompositeAlpha, supportedUsageFlags, supportedSurfaceCounters}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT;
        this->pNext = nullptr;
        this->minImageCount = minImageCount;
        this->maxImageCount = maxImageCount;
        this->currentExtent = currentExtent;
        this->minImageExtent = minImageExtent;
        this->maxImageExtent = maxImageExtent;
        this->maxImageArrayLayers = maxImageArrayLayers;
        this->supportedTransforms = supportedTransforms;
        this->currentTransform = currentTransform;
        this->supportedCompositeAlpha = supportedCompositeAlpha;
        this->supportedUsageFlags = supportedUsageFlags;
        this->supportedSurfaceCounters = supportedSurfaceCounters;
#endif
      }

      SurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT& value)
      {
        *reinterpret_cast<VkSurfaceCapabilities2EXT*>(this) = value;
      }

      SurfaceCapabilities2EXT& operator=(const VkSurfaceCapabilities2EXT& rhs)
      {
        *reinterpret_cast<VkSurfaceCapabilities2EXT*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayPowerInfoEXT : public VkDisplayPowerInfoEXT
    {
      DisplayPowerInfoEXT()
        : VkDisplayPowerInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
      }

      explicit DisplayPowerInfoEXT(VkDisplayPowerStateEXT powerState)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayPowerInfoEXT{VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT, nullptr, powerState}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
        this->pNext = nullptr;
        this->powerState = powerState;
#endif
      }

      DisplayPowerInfoEXT(const VkDisplayPowerInfoEXT& value)
      {
        *reinterpret_cast<VkDisplayPowerInfoEXT*>(this) = value;
      }

      DisplayPowerInfoEXT& operator=(const VkDisplayPowerInfoEXT& rhs)
      {
        *reinterpret_cast<VkDisplayPowerInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct DeviceEventInfoEXT : public VkDeviceEventInfoEXT
    {
      DeviceEventInfoEXT()
        : VkDeviceEventInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
      }

      explicit DeviceEventInfoEXT(VkDeviceEventTypeEXT deviceEvent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDeviceEventInfoEXT{VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT, nullptr, deviceEvent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
        this->pNext = nullptr;
        this->deviceEvent = deviceEvent;
#endif
      }

      DeviceEventInfoEXT(const VkDeviceEventInfoEXT& value)
      {
        *reinterpret_cast<VkDeviceEventInfoEXT*>(this) = value;
      }

      DeviceEventInfoEXT& operator=(const VkDeviceEventInfoEXT& rhs)
      {
        *reinterpret_cast<VkDeviceEventInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct DisplayEventInfoEXT : public VkDisplayEventInfoEXT
    {
      DisplayEventInfoEXT()
        : VkDisplayEventInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
      }

      explicit DisplayEventInfoEXT(VkDisplayEventTypeEXT displayEvent)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkDisplayEventInfoEXT{VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT, nullptr, displayEvent}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
        this->pNext = nullptr;
        this->displayEvent = displayEvent;
#endif
      }

      DisplayEventInfoEXT(const VkDisplayEventInfoEXT& value)
      {
        *reinterpret_cast<VkDisplayEventInfoEXT*>(this) = value;
      }

      DisplayEventInfoEXT& operator=(const VkDisplayEventInfoEXT& rhs)
      {
        *reinterpret_cast<VkDisplayEventInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct SwapchainCounterCreateInfoEXT : public VkSwapchainCounterCreateInfoEXT
    {
      SwapchainCounterCreateInfoEXT()
        : VkSwapchainCounterCreateInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
      }

      explicit SwapchainCounterCreateInfoEXT(VkSurfaceCounterFlagsEXT surfaceCounters)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkSwapchainCounterCreateInfoEXT{VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT, nullptr, surfaceCounters}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
        this->pNext = nullptr;
        this->surfaceCounters = surfaceCounters;
#endif
      }

      SwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT& value)
      {
        *reinterpret_cast<VkSwapchainCounterCreateInfoEXT*>(this) = value;
      }

      SwapchainCounterCreateInfoEXT& operator=(const VkSwapchainCounterCreateInfoEXT& rhs)
      {
        *reinterpret_cast<VkSwapchainCounterCreateInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct RefreshCycleDurationGOOGLE : public VkRefreshCycleDurationGOOGLE
    {
      RefreshCycleDurationGOOGLE()
        : VkRefreshCycleDurationGOOGLE{}
      {
      }

      explicit RefreshCycleDurationGOOGLE(uint64_t refreshDuration)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkRefreshCycleDurationGOOGLE{refreshDuration}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->refreshDuration = refreshDuration;
#endif
      }

      RefreshCycleDurationGOOGLE(const VkRefreshCycleDurationGOOGLE& value)
      {
        *reinterpret_cast<VkRefreshCycleDurationGOOGLE*>(this) = value;
      }

      RefreshCycleDurationGOOGLE& operator=(const VkRefreshCycleDurationGOOGLE& rhs)
      {
        *reinterpret_cast<VkRefreshCycleDurationGOOGLE*>(this) = rhs;
        return *this;
      }
    };

    struct PastPresentationTimingGOOGLE : public VkPastPresentationTimingGOOGLE
    {
      PastPresentationTimingGOOGLE()
        : VkPastPresentationTimingGOOGLE{}
      {
      }

      explicit PastPresentationTimingGOOGLE(uint32_t presentID, uint64_t desiredPresentTime, uint64_t actualPresentTime, uint64_t earliestPresentTime, uint64_t presentMargin)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPastPresentationTimingGOOGLE{presentID, desiredPresentTime, actualPresentTime, earliestPresentTime, presentMargin}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->presentID = presentID;
        this->desiredPresentTime = desiredPresentTime;
        this->actualPresentTime = actualPresentTime;
        this->earliestPresentTime = earliestPresentTime;
        this->presentMargin = presentMargin;
#endif
      }

      PastPresentationTimingGOOGLE(const VkPastPresentationTimingGOOGLE& value)
      {
        *reinterpret_cast<VkPastPresentationTimingGOOGLE*>(this) = value;
      }

      PastPresentationTimingGOOGLE& operator=(const VkPastPresentationTimingGOOGLE& rhs)
      {
        *reinterpret_cast<VkPastPresentationTimingGOOGLE*>(this) = rhs;
        return *this;
      }
    };

    struct PresentTimeGOOGLE : public VkPresentTimeGOOGLE
    {
      PresentTimeGOOGLE()
        : VkPresentTimeGOOGLE{}
      {
      }

      explicit PresentTimeGOOGLE(uint32_t presentID, uint64_t desiredPresentTime)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPresentTimeGOOGLE{presentID, desiredPresentTime}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->presentID = presentID;
        this->desiredPresentTime = desiredPresentTime;
#endif
      }

      PresentTimeGOOGLE(const VkPresentTimeGOOGLE& value)
      {
        *reinterpret_cast<VkPresentTimeGOOGLE*>(this) = value;
      }

      PresentTimeGOOGLE& operator=(const VkPresentTimeGOOGLE& rhs)
      {
        *reinterpret_cast<VkPresentTimeGOOGLE*>(this) = rhs;
        return *this;
      }
    };

    struct PresentTimesInfoGOOGLE : public VkPresentTimesInfoGOOGLE
    {
      PresentTimesInfoGOOGLE()
        : VkPresentTimesInfoGOOGLE{}
      {
        this->sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
      }

      explicit PresentTimesInfoGOOGLE(uint32_t swapchainCount, const VkPresentTimeGOOGLE * pTimes)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPresentTimesInfoGOOGLE{VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE, nullptr, swapchainCount, pTimes}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
        this->pNext = nullptr;
        this->swapchainCount = swapchainCount;
        this->pTimes = pTimes;
#endif
      }

      PresentTimesInfoGOOGLE(const VkPresentTimesInfoGOOGLE& value)
      {
        *reinterpret_cast<VkPresentTimesInfoGOOGLE*>(this) = value;
      }

      PresentTimesInfoGOOGLE& operator=(const VkPresentTimesInfoGOOGLE& rhs)
      {
        *reinterpret_cast<VkPresentTimesInfoGOOGLE*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX : public VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
    {
      PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
        : VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
      }

      explicit PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(VkBool32 perViewPositionAllComponents)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX, nullptr, perViewPositionAllComponents}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
        this->pNext = nullptr;
        this->perViewPositionAllComponents = perViewPositionAllComponents;
#endif
      }

      PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& value)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this) = value;
      }

      PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& operator=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this) = rhs;
        return *this;
      }
    };

    struct ViewportSwizzleNV : public VkViewportSwizzleNV
    {
      ViewportSwizzleNV()
        : VkViewportSwizzleNV{}
      {
      }

      explicit ViewportSwizzleNV(VkViewportCoordinateSwizzleNV x, VkViewportCoordinateSwizzleNV y, VkViewportCoordinateSwizzleNV z, VkViewportCoordinateSwizzleNV w)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkViewportSwizzleNV{x, y, z, w}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
#endif
      }

      ViewportSwizzleNV(const VkViewportSwizzleNV& value)
      {
        *reinterpret_cast<VkViewportSwizzleNV*>(this) = value;
      }

      ViewportSwizzleNV& operator=(const VkViewportSwizzleNV& rhs)
      {
        *reinterpret_cast<VkViewportSwizzleNV*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineViewportSwizzleStateCreateInfoNV : public VkPipelineViewportSwizzleStateCreateInfoNV
    {
      PipelineViewportSwizzleStateCreateInfoNV()
        : VkPipelineViewportSwizzleStateCreateInfoNV{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
      }

      explicit PipelineViewportSwizzleStateCreateInfoNV(VkPipelineViewportSwizzleStateCreateFlagsNV flags, uint32_t viewportCount, const VkViewportSwizzleNV * pViewportSwizzles)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineViewportSwizzleStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV, nullptr, flags, viewportCount, pViewportSwizzles}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
        this->pNext = nullptr;
        this->flags = flags;
        this->viewportCount = viewportCount;
        this->pViewportSwizzles = pViewportSwizzles;
#endif
      }

      PipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV& value)
      {
        *reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV*>(this) = value;
      }

      PipelineViewportSwizzleStateCreateInfoNV& operator=(const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
      {
        *reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV*>(this) = rhs;
        return *this;
      }
    };

    struct PhysicalDeviceDiscardRectanglePropertiesEXT : public VkPhysicalDeviceDiscardRectanglePropertiesEXT
    {
      PhysicalDeviceDiscardRectanglePropertiesEXT()
        : VkPhysicalDeviceDiscardRectanglePropertiesEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
      }

      explicit PhysicalDeviceDiscardRectanglePropertiesEXT(uint32_t maxDiscardRectangles)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPhysicalDeviceDiscardRectanglePropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT, nullptr, maxDiscardRectangles}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
        this->pNext = nullptr;
        this->maxDiscardRectangles = maxDiscardRectangles;
#endif
      }

      PhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& value)
      {
        *reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this) = value;
      }

      PhysicalDeviceDiscardRectanglePropertiesEXT& operator=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
      {
        *reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this) = rhs;
        return *this;
      }
    };

    struct PipelineDiscardRectangleStateCreateInfoEXT : public VkPipelineDiscardRectangleStateCreateInfoEXT
    {
      PipelineDiscardRectangleStateCreateInfoEXT()
        : VkPipelineDiscardRectangleStateCreateInfoEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
      }

      explicit PipelineDiscardRectangleStateCreateInfoEXT(VkPipelineDiscardRectangleStateCreateFlagsEXT flags, VkDiscardRectangleModeEXT discardRectangleMode, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkPipelineDiscardRectangleStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT, nullptr, flags, discardRectangleMode, discardRectangleCount, pDiscardRectangles}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
        this->pNext = nullptr;
        this->flags = flags;
        this->discardRectangleMode = discardRectangleMode;
        this->discardRectangleCount = discardRectangleCount;
        this->pDiscardRectangles = pDiscardRectangles;
#endif
      }

      PipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT& value)
      {
        *reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT*>(this) = value;
      }

      PipelineDiscardRectangleStateCreateInfoEXT& operator=(const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
      {
        *reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT*>(this) = rhs;
        return *this;
      }
    };

    struct XYColorEXT : public VkXYColorEXT
    {
      XYColorEXT()
        : VkXYColorEXT{}
      {
      }

      explicit XYColorEXT(float x, float y)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkXYColorEXT{x, y}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->x = x;
        this->y = y;
#endif
      }

      XYColorEXT(const VkXYColorEXT& value)
      {
        *reinterpret_cast<VkXYColorEXT*>(this) = value;
      }

      XYColorEXT& operator=(const VkXYColorEXT& rhs)
      {
        *reinterpret_cast<VkXYColorEXT*>(this) = rhs;
        return *this;
      }
    };

    struct HdrMetadataEXT : public VkHdrMetadataEXT
    {
      HdrMetadataEXT()
        : VkHdrMetadataEXT{}
      {
        this->sType = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
      }

      explicit HdrMetadataEXT(VkXYColorEXT displayPrimaryRed, VkXYColorEXT displayPrimaryGreen, VkXYColorEXT displayPrimaryBlue, VkXYColorEXT whitePoint, float maxLuminance, float minLuminance, float maxContentLightLevel, float maxFrameAverageLightLevel)
#ifdef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        : VkHdrMetadataEXT{VK_STRUCTURE_TYPE_HDR_METADATA_EXT, nullptr, displayPrimaryRed, displayPrimaryGreen, displayPrimaryBlue, whitePoint, maxLuminance, minLuminance, maxContentLightLevel, maxFrameAverageLightLevel}
#endif
      {
#ifndef RAPIDVULKAN_CPP_FEATURE_ENABLED_MEMBER_LIST_INITIALIZATION
        this->sType = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
        this->pNext = nullptr;
        this->displayPrimaryRed = displayPrimaryRed;
        this->displayPrimaryGreen = displayPrimaryGreen;
        this->displayPrimaryBlue = displayPrimaryBlue;
        this->whitePoint = whitePoint;
        this->maxLuminance = maxLuminance;
        this->minLuminance = minLuminance;
        this->maxContentLightLevel = maxContentLightLevel;
        this->maxFrameAverageLightLevel = maxFrameAverageLightLevel;
#endif
      }

      HdrMetadataEXT(const VkHdrMetadataEXT& value)
      {
        *reinterpret_cast<VkHdrMetadataEXT*>(this) = value;
      }

      HdrMetadataEXT& operator=(const VkHdrMetadataEXT& rhs)
      {
        *reinterpret_cast<VkHdrMetadataEXT*>(this) = rhs;
        return *this;
      }
    };
  }
}

#endif
