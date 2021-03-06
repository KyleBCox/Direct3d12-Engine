﻿#pragma once
#include "BufferManagerBase.h"
#include "Structures.h"
/**
 * @brief Vertices make up the shapes that are visible inside the 3d render space
 * 
 */
class VertexBufferManager : public BufferManagerBase
{
public:
	D3DENGINE_API VertexBufferManager(std::shared_ptr<std::vector<Structures::VertexTexCoordNormal>> vertices,
	                    const std::shared_ptr<DX::DeviceResources> deviceResources,
	                    const std::shared_ptr<CommandListManager> commandListManager);
	D3DENGINE_API ~VertexBufferManager();
	D3DENGINE_API D3D12_VERTEX_BUFFER_VIEW CreateVertexBufferView() const;
private:
	std::shared_ptr<std::vector<Structures::VertexTexCoordNormal>> m_vertices; /// vertices
	size_t m_verticesSize; /// count of vertices
};
