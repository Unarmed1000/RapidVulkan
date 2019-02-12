#ifndef RAPIDVULKAN_COMMANDBUFFERS_HPP
#define RAPIDVULKAN_COMMANDBUFFERS_HPP
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
#include <utility>
#include <vector>

namespace RapidVulkan
{
  //! This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class CommandBuffers
  {
    VkDevice m_device;
    VkCommandPool m_commandPool;
    std::vector<VkCommandBuffer> m_commandBuffers;
  public:
    CommandBuffers(const CommandBuffers&) = delete;
    CommandBuffers& operator=(const CommandBuffers&) = delete;

    //! @brief Move assignment operator
    CommandBuffers& operator=(CommandBuffers&& other) noexcept
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
        m_commandPool = other.m_commandPool;
        m_commandBuffers = std::move(other.m_commandBuffers);

        // Remove the data from other
        other.m_device = VK_NULL_HANDLE;
        other.m_commandPool = VK_NULL_HANDLE;
      }
      return *this;
    }

    //! @brief Move constructor
    //! Transfer ownership from other to this
    CommandBuffers(CommandBuffers&& other) noexcept
      : m_device(other.m_device)
      , m_commandPool(other.m_commandPool)
      , m_commandBuffers(std::move(other.m_commandBuffers))
    {
      // Remove the data from other
      other.m_device = VK_NULL_HANDLE;
      other.m_commandPool = VK_NULL_HANDLE;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    CommandBuffers()
      : m_device(VK_NULL_HANDLE)
      , m_commandPool(VK_NULL_HANDLE)
      , m_commandBuffers()
    {
    }

    //! @brief Assume control of the CommandBuffers (this object becomes responsible for releasing it)
    //explicit CommandBuffers(const ClaimMode claimMode, const VkDevice device, const VkCommandPool commandPool, const VkCommandBuffer commandBuffers)
    //  : CommandBuffers()
    //{
    //  Reset(claimMode, device, commandPool, commandBuffers);
    //}

    //! @brief Create the requested resource
    //! @note  Function: vkAllocateCommandBuffers
    CommandBuffers(const VkDevice device, const VkCommandBufferAllocateInfo& allocateInfo)
      : CommandBuffers()
    {
      Reset(device, allocateInfo);
    }

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Create the requested resource
    //! @note  Function: vkAllocateCommandBuffers
    CommandBuffers(const VkDevice device, const VkCommandPool commandPool, const VkCommandBufferLevel level, const uint32_t commandBufferCount)
      : CommandBuffers()
    {
      Reset(device, commandPool, level, commandBufferCount);
    }
#endif

    ~CommandBuffers()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    std::vector<VkCommandBuffer> Release() RAPIDVULKAN_FUNC_POSTFIX_WARN_UNUSED_RESULT
    {
      auto resource = std::move(m_commandBuffers); 
      m_device = VK_NULL_HANDLE;
      m_commandPool = VK_NULL_HANDLE;
      m_commandBuffers.clear();
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
      assert(m_commandPool != VK_NULL_HANDLE);
      assert(! m_commandBuffers.empty());

      vkFreeCommandBuffers(m_device, m_commandPool, static_cast<uint32_t>(m_commandBuffers.size()), m_commandBuffers.data());
      m_device = VK_NULL_HANDLE;
      m_commandPool = VK_NULL_HANDLE;
      m_commandBuffers.clear();
    }

/*    
    //! @brief Destroys any owned resources and assume control of the CommandBuffers (this object becomes responsible for releasing it)
    void Reset(const ClaimMode claimMode, const VkDevice device, const VkCommandPool commandPool, const VkCommandBuffer commandBuffers)
    {
      if (IsValid())
        Reset();


      m_device = device;
      m_commandPool = commandPool;
      m_commandBuffers = std::move(commandBuffers);
    }
*/
    
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkAllocateCommandBuffers
    void Reset(const VkDevice device, const VkCommandBufferAllocateInfo& allocateInfo)
    {
#ifndef RAPIDVULKAN_DISABLE_PARAM_VALIDATION
      if (device == VK_NULL_HANDLE)
      {
        throw std::invalid_argument("device can not be VK_NULL_HANDLE");
      }
      if (allocateInfo.commandPool == VK_NULL_HANDLE)
      {
        throw std::invalid_argument("allocateInfo.commandPool can not be VK_NULL_HANDLE");
      }
#else
      assert(device != VK_NULL_HANDLE);
      assert(allocateInfo.commandPool != VK_NULL_HANDLE);
#endif

      // Free any currently allocated resource
      if (IsValid())
      {
        Reset();
      }

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      std::vector<VkCommandBuffer> commandBuffers(allocateInfo.commandBufferCount);
      CheckError(vkAllocateCommandBuffers(device, &allocateInfo, commandBuffers.data()), "vkAllocateCommandBuffers", __FILE__, __LINE__);

      // Everything is ready, so assign the members
      m_device = device;
      m_commandPool = allocateInfo.commandPool;
      m_commandBuffers = std::move(commandBuffers);
    }

#ifndef RAPIDVULKAN_DISABLE_UNROLLED_STRUCT_METHODS
    //! @brief Destroys any owned resources and then creates the requested one
    //! @note  Function: vkAllocateCommandBuffers
    void Reset(const VkDevice device, const VkCommandPool commandPool, const VkCommandBufferLevel level, const uint32_t commandBufferCount)
    {
      VkCommandBufferAllocateInfo allocateInfo{};
      allocateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
      allocateInfo.pNext = nullptr;
      allocateInfo.commandPool = commandPool;
      allocateInfo.level = level;
      allocateInfo.commandBufferCount = commandBufferCount;

      Reset(device, allocateInfo);
    }
#endif

    //! @brief Get the associated 'Device'
    VkDevice GetDevice() const
    {
      return m_device;
    }

    //! @brief Get the associated 'CommandPool'
    VkCommandPool GetCommandPool() const
    {
      return m_commandPool;
    }

    //! @brief Get size of the vector
    std::size_t Size() const
    {
      return m_commandBuffers.size();
    }


    //! @brief Get direct access to the vector content
    const VkCommandBuffer* Data() const
    {
      return m_commandBuffers.data();
    }


    //! @brief Get the associated resource handles
    const std::vector<VkCommandBuffer>& Get() const
    {
      return m_commandBuffers;
    }


      VkCommandBuffer Get(const std::size_t arrayIndex) const
      {
        assert(arrayIndex < m_commandBuffers.size());
        return m_commandBuffers[arrayIndex];
      }


    //! @brief Access the resource at a given index
    VkCommandBuffer operator[] (const std::size_t arrayIndex) const
    {
      assert(arrayIndex < m_commandBuffers.size());
      return m_commandBuffers[arrayIndex];
    }

    //! @brief get a pointer to the resource at the given index
    const VkCommandBuffer* GetPointer(const std::size_t arrayIndex) const
    {
      assert(arrayIndex < m_commandBuffers.size());
      return &m_commandBuffers[arrayIndex];
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return ! m_commandBuffers.empty();
    }


    void Begin(const std::size_t index,
               const VkCommandBufferUsageFlags flags, const VkRenderPass renderPass, const uint32_t subpass,
               const VkFramebuffer framebuffer, const VkBool32 occlusionQueryEnable, const VkQueryControlFlags queryFlags,
               const VkQueryPipelineStatisticFlags pipelineStatistics)
    {
      VkCommandBufferInheritanceInfo commandBufferInheritanceInfo{};
      commandBufferInheritanceInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
      commandBufferInheritanceInfo.renderPass = renderPass;
      commandBufferInheritanceInfo.subpass = subpass;
      commandBufferInheritanceInfo.framebuffer = framebuffer;
      commandBufferInheritanceInfo.occlusionQueryEnable = occlusionQueryEnable;
      commandBufferInheritanceInfo.queryFlags = queryFlags;
      commandBufferInheritanceInfo.pipelineStatistics = pipelineStatistics;

      VkCommandBufferBeginInfo commandBufferBeginInfo{};
      commandBufferBeginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
      commandBufferBeginInfo.flags = flags;
      commandBufferBeginInfo.pInheritanceInfo = &commandBufferInheritanceInfo;

      Begin(index, commandBufferBeginInfo);
    }

    void Begin(const std::size_t index, const VkCommandBufferBeginInfo& commandBufferBeginInfo)
    {
      if (index >= m_commandBuffers.size() || m_commandBuffers[index] == VK_NULL_HANDLE)
      {
        throw VulkanUsageErrorException("Index must be valid and/or can not call Begin on a NULL handle");
      }

      CheckError(vkBeginCommandBuffer(m_commandBuffers[index], &commandBufferBeginInfo), "vkBeginCommandBuffer", __FILE__, __LINE__);
    }

    void End(const std::size_t index)
    {
      if (index >= m_commandBuffers.size() || m_commandBuffers[index] == VK_NULL_HANDLE)
      {
        throw VulkanUsageErrorException("Index must be valid and/or can not call End on a NULL handle");
      }

      CheckError(vkEndCommandBuffer(m_commandBuffers[index]), "vkEndCommandBuffer", __FILE__, __LINE__);
    }

    void CmdBeginRenderPass(const std::size_t index, const VkRenderPassBeginInfo* pRenderPassBeginInfo, const VkSubpassContents contents)
    {
      if (index >= m_commandBuffers.size() || m_commandBuffers[index] == VK_NULL_HANDLE)
      {
        throw VulkanUsageErrorException("Index must be valid and/or can not call CmdBeginRenderPass on a NULL handle");
      }

      vkCmdBeginRenderPass(m_commandBuffers[index], pRenderPassBeginInfo, contents);
    }

    void CmdEndRenderPass(const std::size_t index)
    {
      if (index >= m_commandBuffers.size() || m_commandBuffers[index] == VK_NULL_HANDLE)
      {
        throw VulkanUsageErrorException("Index must be valid and/or can not call CmdEndRenderPass on a NULL handle");
      }

      vkCmdEndRenderPass(m_commandBuffers[index]);
    }
  };
}

#endif
