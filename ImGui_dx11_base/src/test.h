#pragma once
#include "../ext/imgui.h"
#include "../ext/imgui_impl_win32.h"
#include "../ext/imgui_impl_dx11.h"

void menu_test() {
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.2f, 0.2f, 0.2f, 0.7f));

    ImGui::Begin("Test Window", nullptr, ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoTitleBar);

    if (ImGui::BeginMenuBar()) {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("Open")) { /* Handle open */ }
            if (ImGui::MenuItem("Save")) { /* Handle save */ }
            ImGui::EndMenu();
        }
        ImGui::EndMenuBar();
    }

    ImGui::Text("This is a test window.");
    ImGui::Text("You can add more UI elements here.");

    static float value = 0.5f;
    ImGui::SliderFloat("Value", &value, 0.0f, 1.0f);

    static bool check = true;
    ImGui::Checkbox("Enable", &check);

    ImGui::End();
    ImGui::PopStyleColor();
}