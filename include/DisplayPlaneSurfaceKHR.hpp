#ifndef RAPIDVULKAN_DISPLAYPLANESURFACEKHR_HPP
#define RAPIDVULKAN_DISPLAYPLANESURFACEKHR_HPP
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

// Auto-generated Vulkan 1.0 C++11 RAII classes based on RAIIGen V0.2.0 (https://github.com/Unarmed1000)

#include <cassert>
#include <RapidVulkan/VulkanCheck.hpp>
#include <vulkan/vulkan.h>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class DisplayPlaneSurfaceKHR
  {
    VkInstance m_instance;
    VkSurfaceKHR m_surface;
  public:
    DisplayPlaneSurfaceKHR(const DisplayPlaneSurfaceKHR&) = delete;
    DisplayPlaneSurfaceKHR& operator=(const DisplayPlaneSurfaceKHR&) = delete;
  
    //! @brief Move assignment operator
    DisplayPlaneSurfaceKHR& operator=(DisplayPlaneSurfaceKHR&& other)
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_instance = other.m_instance;
        m_surface = other.m_surface;

        // Remove the data from other
        other.m_instance = VK_NULL_HANDLE;
        other.m_surface = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    DisplayPlaneSurfaceKHR(DisplayPlaneSurfaceKHR&& other)
      : m_instance(other.m_instance)
      , m_surface(other.m_surface)
    {
      // Remove the data from other
      other.m_instance = VK_NULL_HANDLE;
      other.m_surface = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    DisplayPlaneSurfaceKHR()
      : m_instance(VK_NULL_HANDLE)
      , m_surface(VK_NULL_HANDLE)
    {
    }

    //! @brief Assume control of the DisplayPlaneSurfaceKHR (this object becomes responsible for releasing it)
    explicit DisplayPlaneSurfaceKHR(const VkInstance instance, VkSurfaceKHR * surface)
      : DisplayPlaneSurfaceKHR()
    {
      Reset(instance, surface);
    }

    //! @brief Create the requested resource
    DisplayPlaneSurfaceKHR(const VkInstance instance, const VkDisplaySurfaceCreateInfoKHR& createInfo)
      : DisplayPlaneSurfaceKHR()
    {
      Reset(instance, createInfo);
    }

    
    ~DisplayPlaneSurfaceKHR()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    VkSurfaceKHR Release()
    {
      const auto resource = m_surface; 
      m_instance = VK_NULL_HANDLE;
      m_surface = VK_NULL_HANDLE;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset()
    {
      if (!IsValid())
        return;

      assert(m_instance != VK_NULL_HANDLE);
      assert(m_surface != VK_NULL_HANDLE);

      vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
      m_instance = VK_NULL_HANDLE;
      m_surface = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the DisplayPlaneSurfaceKHR (this object becomes responsible for releasing it)
    void Reset(const VkInstance instance, VkSurfaceKHR * surface)
    {
      if (IsValid())
        Reset();


      m_instance = instance;
      m_surface = surface;
    }

    //! @brief Destroys any owned resources and then creates the requested one
    void Reset(const VkInstance instance, const VkDisplaySurfaceCreateInfoKHR& createInfo)
    {
      if (instance == VK_NULL_HANDLE)
        throw std::invalid_argument("instance can not be VK_NULL_HANDLE");

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      VkSurfaceKHR surface;
      RAPIDVULKAN_CHECK(vkCreateDisplayPlaneSurfaceKHR(instance, &createInfo, nullptr, &surface));

      // Everything is ready, so assign the members
      m_instance = instance;
      m_surface = surface;
    }

    //! @brief Get the associated 'Instance'
    VkInstance GetInstance() const
    {
      return m_instance;
    }

    //! @brief Get the associated resource handle
    VkSurfaceKHR Get() const
    {
      return m_surface;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_surface != VK_NULL_HANDLE;
    }
  };
}

#endif
