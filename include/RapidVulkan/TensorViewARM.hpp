#ifndef RAPIDVULKAN_TENSORVIEWARM_HPP
#define RAPIDVULKAN_TENSORVIEWARM_HPP
#if VK_HEADER_VERSION >= 321
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016-2025, Rene Thrane
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

// Auto-generated Vulkan 1.0 C++17 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <RapidVulkan/ClaimMode.hpp>
#include <RapidVulkan/CheckError.hpp>
#include <RapidVulkan/System/Macro.hpp>
#include <vulkan/vulkan.h>
#include <cassert>
#include <utility>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class TensorViewARM
  {
    VkDevice m_device{VK_NULL_HANDLE};
    VkTensorViewARM m_view{VK_NULL_HANDLE};

  public:
    TensorViewARM(const TensorViewARM&) = delete;
    TensorViewARM& operator=(const TensorViewARM&) = delete;

    //! @brief Move assignment operator
    TensorViewARM& operator=(TensorViewARM&& other) noexcept
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
        {
          Reset();
        }

        // Claim ownership here and leave other in its default state
        m_device = std::exchange(other.m_device, VK_NULL_HANDLE);
        m_view = std::exchange(other.m_view, VK_NULL_HANDLE);
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this and leave other in its default state
    TensorViewARM(TensorViewARM&& other) noexcept
      : m_device(std::exchange(other.m_device, VK_NULL_HANDLE))
      , m_view(std::exchange(other.m_view, VK_NULL_HANDLE))
    {
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    TensorViewARM() = default;

    //! @brief Assume control of the TensorViewARM (this object becomes responsible for releasing it)
    explicit TensorViewARM(const ClaimMode claimMode, const VkDevice device, const VkTensorViewARM view)
      : TensorViewARM()
    {
      Reset(claimMode, device, view);
    }

#if VK_HEADER_VERSION >= 321
    //! @brief Create the requested resource
    //! @note  Function: vkCreateTensorViewARM
    TensorViewARM(const VkDevice device, const VkTensorViewCreateInfoARM& createInfo)
      : TensorViewARM()
    {
      Reset(device, createInfo);
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkCreateTensorViewARM
    TensorViewARM(const VkDevice device, const VkTensorViewCreateFlagsARM flags, const VkTensorARM tensor, const VkFormat format)
      : TensorViewARM()
    {
      Reset(device, flags, tensor, format);
    }
#endif

    ~TensorViewARM()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    [[nodiscard]] VkTensorViewARM Release() noexcept
    {
      const auto resource = m_view;
      m_device = VK_NULL_HANDLE;
      m_view = VK_NULL_HANDLE;
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
      assert(m_view != VK_NULL_HANDLE);

      vkDestroyTensorViewARM(m_device, m_view, nullptr);
      m_device = VK_NULL_HANDLE;
      m_view = VK_NULL_HANDLE;
    }

    //! @brief Destroys any owned resources and assume control of the TensorViewARM (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkTensorViewARM view)
    {
      // The claim mode only exists to select this overload
      RAPIDVULKAN_PARAM_NOT_USED(claimMode);
      if (IsValid())
      {
        Reset();
      }


      m_device = device;
      m_view = view;
    }

#if VK_HEADER_VERSION >= 321
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateTensorViewARM
    void Reset(const VkDevice device, const VkTensorViewCreateInfoARM& createInfo)
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
      VkTensorViewARM view;
      CheckError(vkCreateTensorViewARM(device, &createInfo, nullptr, &view), "vkCreateTensorViewARM", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_view = view;
    }
#endif

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkCreateTensorViewARM
    void Reset(const VkDevice device, const VkTensorViewCreateFlagsARM flags, const VkTensorARM tensor, const VkFormat format)
    {
      VkTensorViewCreateInfoARM createInfo{};
      createInfo.sType = VK_STRUCTURE_TYPE_TENSOR_VIEW_CREATE_INFO_ARM;
      createInfo.pNext = nullptr;
      createInfo.flags = flags;
      createInfo.tensor = tensor;
      createInfo.format = format;

      Reset(device, createInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    [[nodiscard]] VkDevice GetDevice() const noexcept
    {
      return m_device;
    }

    //! @brief Get the associated resource handle
    [[nodiscard]] VkTensorViewARM Get() const noexcept
    {
      return m_view;
    }

    //! @brief Get a pointer to the associated resource handle
    [[nodiscard]] const VkTensorViewARM* GetPointer() const noexcept
    {
      return &m_view;
    }

    //! @brief Check if this object contains a valid resource
    [[nodiscard]] bool IsValid() const noexcept
    {
      return m_view != VK_NULL_HANDLE;
    }
  };
}

#endif
#endif
