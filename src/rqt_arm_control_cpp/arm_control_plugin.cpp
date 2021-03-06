#include "rqt_arm_control_cpp/arm_control_plugin.h"
#include <pluginlib/class_list_macros.h>
#include <QStringList>

namespace rqt_arm_control_cpp {

ArmControlPlugin::ArmControlPlugin()
  : rqt_gui_cpp::Plugin()
  , widget_(0)
{
  // Constructor is called first before initPlugin function, needless to say.

  // give QObjects reasonable names
  setObjectName("ArmControlPlugin");
}

void ArmControlPlugin::initPlugin(qt_gui_cpp::PluginContext& context)
{
  // access standalone command line arguments
  QStringList argv = context.argv();
  // create QWidget
  widget_ = new QWidget();
  // extend the widget with all attributes and children from UI file
  ui_.setupUi(widget_);
  // add widget to the user interface
  context.addWidget(widget_);
}

void ArmControlPlugin::shutdownPlugin()
{
  // TODO unregister all publishers here
}

void ArmControlPlugin::saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const
{
  // TODO save intrinsic configuration, usually using:
  // instance_settings.setValue(k, v)
}

void ArmControlPlugin::restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings)
{
  // TODO restore intrinsic configuration, usually using:
  // v = instance_settings.value(k)
}

/*bool hasConfiguration() const
{
  return true;
}

void triggerConfiguration()
{
  // Usually used to open a dialog to offer the user a set of configuration
}*/

} // namespace
PLUGINLIB_DECLARE_CLASS(rqt_arm_control_cpp, ArmControlPlugin, rqt_arm_control_cpp::ArmControlPlugin, rqt_gui_cpp::Plugin)
