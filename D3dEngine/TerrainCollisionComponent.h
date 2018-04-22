#pragma once
#include "Component.h"
#include "TerrainCollisionHelper.h"
class D3DENGINE_API TerrainCollisionComponent : public Component
{
public:
	TerrainCollisionComponent();
	~TerrainCollisionComponent();

	virtual int InitRootSignatureParameters(int indexOffset) override;
	virtual void Init(std::shared_ptr<CommandListManager>* commandListManager, std::shared_ptr<DescriptorHeapManager> descriptorHeapManager, UINT * descOffset, std::shared_ptr<PSOManager>* pso) override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void OnKeyDown(UINT key) override;
	virtual void OnKeyUp(UINT key) override;
	virtual void OnMouseMoved(float x, float y) override;
	virtual void OnDeviceRemoved() override;
	virtual void CreateWindowSizeDependentResources() override;
	virtual void CreateDeviceDependentResoures() override;
private:
	std::unique_ptr<TerrainCollisionHelper> m_terrainCollisionHelper; /// helper for the collision 
};
