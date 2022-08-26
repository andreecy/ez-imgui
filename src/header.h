#pragma once

#include <stdio.h>

// ===========================
// imgui Framework
// ===========================
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

// ===========================
// OPENGL Framework /
// ===========================

#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h>