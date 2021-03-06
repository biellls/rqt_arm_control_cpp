#ifndef rqt_arm_control_cpp_arm_control_plugin_H
#define rqt_arm_control_cpp_arm_control_plugin_H

#include <rqt_gui_cpp/plugin.h>
#include <rqt_arm_control_cpp/ui_arm_control_plugin.h>
#include <QWidget>

namespace rqt_arm_control_cpp {

class ArmControlPlugin
  : public rqt_gui_cpp::Plugin
{
  Q_OBJECT
public:
  ArmControlPlugin();
  virtual void initPlugin(qt_gui_cpp::PluginContext& context);
  virtual void shutdownPlugin();
  virtual void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const;
  virtual void restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings);

  // Comment in to signal that the plugin has a way to configure it
  // bool hasConfiguration() const;
  // void triggerConfiguration();
private:
  Ui::ArmControlPluginWidget ui_;
  QWidget* widget_;
};
}  // namespace rqt_arm_control_cpp
#endif  // rqt_arm_control_cpp_arm_control_plugin_H
