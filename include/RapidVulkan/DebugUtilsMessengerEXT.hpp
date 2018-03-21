#ifndef RAPIDVULKAN_DEBUGUTILSMESSENGEREXT_HPP
#define RAPIDVULKAN_DEBUGUTILSMESSENGEREXT_HPP
#if VK_HEADER_VERSION >= 70
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
  class DebugUtilsMessengerEXT
  {
    VkInstance m_instance;
    VkDebugUtilsMessengerEXT m_messenger;
  public:
    DebugUtilsMessengerEXT(const DebugUtilsMessengerEXT&) = delete;
    DebugUtilsMessengerEXT& operator=(const DebugUtilsMessengerEXT&) = delete;

    //! @brief Move assignment operator
    DebugUtilsMessengerEXT& operator=(DebugUtilsMessengerEXT&& other)
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_instance = other.m_instance;
        m_messenger = other.m_messenger;

        // Remove the data from other
        other.m_instance = VK_NULL_HANDLE;
        other.m_messenger = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    DebugUtilsMessengerEXT(DebugUtilsMessengerEXT&& other)
      : m_instance(other.m_instance)
      , m_messenger(other.m_messenger)
    {
      // Remove the data from other
      other.m_instance = VK_NULL_HANDLE;
      other.m_messenger = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    DebugUtilsMessengerEXT()
      : m_instance(VK_NULL_HANDLE)
      , m_messenger(FIX_DEFAULT_FOR_TYPE_NOT_DEFINED)
    {
    }

    //! @brief Assume control of the DebugUtilsMessengerEXT (this object becomes responsible for releasing it)
    explicit DebugUtilsMessengerEXT(const ClaimMode claimMode, const VkInstance instance, const VkDebugUtilsMessengerEXT messenger)
      : DebugUtilsMessengerEXT()
    {
      Reset(claimMode, instance, messenger);
    }

#if VK_HEADER_VERSION >= 70
    //! @brief Create the requested resource
    //! @note  Function: vkCreateDebugUtilsMessengerEXT
    DebugUtilsMessengerEXT(const VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT& createInfo)
      : DebugUtilsMessengerEXT()
    {
      Reset(instance, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateDebugUtilsMessengerEXT
    DebugUtilsMessengerEXT(const VkInstance instance, const VkDebugUtilsMessengerCreateFlagsEXT flags, const VkDebugUtilsMessageSeverityFlagsEXT messageSeverity, const VkDebugUtilsMessageTypeFlagsEXT messageType, const PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback, void * pUserData)
      : DebugUtilsMessengerEXT()
    {
      Reset(instance, flags, messageSeverity, messageType, pfnUserCallback, pUserData);
    }
#endif

    ~DebugUtilsMessengerEXT()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkDebugUtilsMessengerEXT Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      const auto resource = m_messenger;
      m_instance = VK_NULL_HANDLE;
      m_messenger = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset()
    {
      if (! IsValid())
        return;

      assert(m_instance != VK_NULL_HANDLE);
      assert(m_messenger != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED);

      vkDestroyDebugUtilsMessengerEXT(m_instance, m_messenger, nullptr);
      m_instance = VK_NULL_HANDLE;
      m_messenger = FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }

    //! @brief Destroys any owned resources and assume control of the DebugUtilsMessengerEXT (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkInstance instance, const VkDebugUtilsMessengerEXT messenger)
    {
      if (IsValid())
        Reset();


      m_instance = instance;
      m_messenger = messenger;
    }

#if VK_HEADER_VERSION >= 70
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateDebugUtilsMessengerEXT
    void Reset(const VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT& createInfo)
    {
#ifndef RAPIDVULKAN_DISABLE_PARAM_VALIDATION
      if (instance == VK_NULL_HANDLE)
        throw std::invalid_argument("instance can not be VK_NULL_HANDLE");
#else
      assert(instance != VK_NULL_HANDLE);
#endif

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkDebugUtilsMessengerEXT messenger;
      CheckError(vkCreateDebugUtilsMessengerEXT(instance, &createInfo, nullptr, &messenger), "vkCreateDebugUtilsMessengerEXT", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_instance = instance;
      m_messenger = messenger;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateDebugUtilsMessengerEXT
    void Reset(const VkInstance instance, const VkDebugUtilsMessengerCreateFlagsEXT flags, const VkDebugUtilsMessageSeverityFlagsEXT messageSeverity, const VkDebugUtilsMessageTypeFlagsEXT messageType, const PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback, void * pUserData)
    {
      VkDebugUtilsMessengerCreateInfoEXT createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
      createInfo.pNext = nullptr;
      createInfo.flags = flags;
      createInfo.messageSeverity = messageSeverity;
      createInfo.messageType = messageType;
      createInfo.pfnUserCallback = pfnUserCallback;
      createInfo.pUserData = pUserData;

      Reset(instance, createInfo);
    }
#endif

    //! @brief Get the associated 'Instance'
    VkInstance GetInstance() const
    {
      return m_instance;
    }

    //! @brief Get the associated resource handle
    VkDebugUtilsMessengerEXT Get() const
    {
      return m_messenger;
    }

    //! @brief Get a pointer to the associated resource handle
    const VkDebugUtilsMessengerEXT* GetPointer() const
    {
      return &m_messenger;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_messenger != FIX_DEFAULT_FOR_TYPE_NOT_DEFINED;
    }
  };
}

#endif
#endif
