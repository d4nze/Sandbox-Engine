#include "ProjectSelection.hpp"
#include "LauncherGUI.hpp"
#include "ProjectCreation.hpp"

#include <imgui.h>

ProjectSelection::ProjectSelection(LauncherGUI& launcherGUI)
    : m_launcherGUI(launcherGUI)
    , m_projectsHolder()
{}

void ProjectSelection::update()
{
    if (ImGui::Button("New Project"))
    {
        m_launcherGUI.getStateManager().setState<ProjectCreation>();
    }
    ImGui::SameLine();
    if (ImGui::Button("Import Project"));
    m_projectsHolder.update();
}

ProjectsHolder& ProjectSelection::getProjectsHolder()
{
    return m_projectsHolder;
}

const ProjectsHolder& ProjectSelection::getProjectsHolder() const
{
    return m_projectsHolder;
}
