#pragma once

namespace Frame
{
	class Layer
	{
	public:
		~Layer();

		void OnAttach();
		void OnDetach();
		void OnImGUIRender();
	};
}