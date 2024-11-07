#pragma once

namespace Frame
{
	class Layer
	{
	public:
		virtual ~Layer() = default;

		virtual void OnAttach();
		virtual void OnDetach();
		virtual void OnImGUIRender();
	};
}