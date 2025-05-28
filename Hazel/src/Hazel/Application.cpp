#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Hazel {
	Application::Application() {
		// Initialize the application
	}

	Application::~Application() {
		// Clean up the application
	}

	void Application::Run() {
		WindowResizeEvent event(1280, 720);
		if (event.IsInCategory(EventCategoryApplication)) {
			HZ_TRACE(event.ToString());
		} else if (event.IsInCategory(EventCategoryInput)) {
			HZ_TRACE(event.ToString());
		}

		// Main loop of the application
		while (true) {
			// Process events, update, render, etc.
		}
	}
}