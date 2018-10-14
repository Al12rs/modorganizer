#include "modInfoseparator.h"

std::vector<ModInfo::EFlag> ModInfoSeparator::getFlags() const
{
  std::vector<ModInfo::EFlag> result = ModInfoRegular::getFlags();
  result.insert(result.begin(), ModInfo::FLAG_SEPARATOR);
  return result;
}


QString ModInfoSeparator::getDescription() const
{
  return tr("This is a Separator");
}


ModInfoSeparator::ModInfoSeparator(PluginContainer *pluginContainer, const MOBase::IPluginGame *game, const QDir &path, MOShared::DirectoryEntry **directoryStructure)
  : ModInfoRegular(pluginContainer, game, path, directoryStructure)
{
}
