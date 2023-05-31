#ifndef RAPIDVULKAN_VIDEOSESSIONKHR_HPP
#define RAPIDVULKAN_VIDEOSESSIONKHR_HPP
#if VK_HEADER_VERSION >= 239
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
  class VideoSessionKHR
  {
    VkDevice m_device;
    VkVideoSessionKHR m_videoSession;
  public:
    VideoSessionKHR(const VideoSessionKHR&) = delete;
    VideoSessionKHR& operator=(const VideoSessionKHR&) = delete;

    //! @brief Move assignment operator
    VideoSessionKHR& operator=(VideoSessionKHR&& other) noexcept
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
        m_videoSession = other.m_videoSession;

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_videoSession = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    VideoSessionKHR(VideoSessionKHR&& other) noexcept
      : m_device(other.m_device)
      , m_videoSession(other.m_videoSession)
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_videoSession = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    VideoSessionKHR()
      : m_device(VK_NULL_HANDLE)
      , m_videoSession(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the VideoSessionKHR (this object becomes responsible for releasing it)
    explicit VideoSessionKHR(const ClaimMode claimMode, const VkDevice device, const VkVideoSessionKHR videoSession)
      : VideoSessionKHR()
    {
      Reset(claimMode, device, videoSession);
    }

#if VK_HEADER_VERSION >= 239
    //! @brief Create the requested resource
    //! @note  Function: vkCreateVideoSessionKHR
    VideoSessionKHR(const VkDevice device, const VkVideoSessionCreateInfoKHR& createInfo)
      : VideoSessionKHR()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateVideoSessionKHR
    VideoSessionKHR(const VkDevice device, const uint32_t queueFamilyIndex, const VkVideoSessionCreateFlagsKHR flags, VkVideoProfileInfoKHR*const pVideoProfile, const VkFormat pictureFormat, const VkExtent2D maxCodedExtent, const VkFormat referencePictureFormat, const uint32_t maxDpbSlots, const uint32_t maxActiveReferencePictures, VkExtensionProperties*const pStdHeaderVersion)
      : VideoSessionKHR()
    {
      Reset(device, queueFamilyIndex, flags, pVideoProfile, pictureFormat, maxCodedExtent, referencePictureFormat, maxDpbSlots, maxActiveReferencePictures, pStdHeaderVersion);
    }
#endif

    ~VideoSessionKHR()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    RAPIDVULKAN_FUNC_WARN_UNUSED_RESULT VkVideoSessionKHR Release()
    {
      const auto resource = m_videoSession;
      m_device = VK_NULL_HANDLE;
      m_videoSession = VK_NULL_HANDLE;
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
      assert(m_videoSession != VK_NULL_HANDLE);

      vkDestroyVideoSessionKHR(m_device, m_videoSession, nullptr);
      m_device = VK_NULL_HANDLE;
      m_videoSession = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the VideoSessionKHR (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkVideoSessionKHR videoSession)
    {
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_videoSession = videoSession;
    }

#if VK_HEADER_VERSION >= 239
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateVideoSessionKHR
    void Reset(const VkDevice device, const VkVideoSessionCreateInfoKHR& createInfo)
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
      VkVideoSessionKHR videoSession;
      CheckError(vkCreateVideoSessionKHR(device, &createInfo, nullptr, &videoSession), "vkCreateVideoSessionKHR", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_videoSession = videoSession;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateVideoSessionKHR
    void Reset(const VkDevice device, const uint32_t queueFamilyIndex, const VkVideoSessionCreateFlagsKHR flags, VkVideoProfileInfoKHR*const pVideoProfile, const VkFormat pictureFormat, const VkExtent2D maxCodedExtent, const VkFormat referencePictureFormat, const uint32_t maxDpbSlots, const uint32_t maxActiveReferencePictures, VkExtensionProperties*const pStdHeaderVersion)
    {
      VkVideoSessionCreateInfoKHR createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR;
      createInfo.pNext = nullptr;
      createInfo.queueFamilyIndex = queueFamilyIndex;
      createInfo.flags = flags;
      createInfo.pVideoProfile = pVideoProfile;
      createInfo.pictureFormat = pictureFormat;
      createInfo.maxCodedExtent = maxCodedExtent;
      createInfo.referencePictureFormat = referencePictureFormat;
      createInfo.maxDpbSlots = maxDpbSlots;
      createInfo.maxActiveReferencePictures = maxActiveReferencePictures;
      createInfo.pStdHeaderVersion = pStdHeaderVersion;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    VkVideoSessionKHR Get() const
    {
      return m_videoSession;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkVideoSessionKHR* GetPointer() const
    {
      return &m_videoSession;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_videoSession != VK_NULL_HANDLE;
    }


#if VK_HEADER_VERSION >= 239
    //! @note  Function: vkGetVideoSessionMemoryRequirementsKHR
    void GetVideoSessionMemoryRequirementsKHR(uint32_t * pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR * pMemoryRequirements)
    {
      CheckError(vkGetVideoSessionMemoryRequirementsKHR(m_device, m_videoSession, pMemoryRequirementsCount, pMemoryRequirements), "vkGetVideoSessionMemoryRequirementsKHR", __FILE__, __LINE__);
    }
#endif


#if VK_HEADER_VERSION >= 239
    //! @note  Function: vkBindVideoSessionMemoryKHR
    void BindVideoSessionMemoryKHR(const uint32_t bindSessionMemoryInfoCount, const VkBindVideoSessionMemoryInfoKHR * pBindSessionMemoryInfos)
    {
      CheckError(vkBindVideoSessionMemoryKHR(m_device, m_videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos), "vkBindVideoSessionMemoryKHR", __FILE__, __LINE__);
    }
#endif
  };
}

#endif
#endif
