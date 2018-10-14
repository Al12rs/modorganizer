#ifndef MODINFOSEPARATOR_H
#define MODINFOSEPARATOR_H

#include "modinforegular.h"

class ModInfoSeparator:
    public ModInfoRegular
{
  friend class ModInfo;

public:

  bool updateAvailable() const override { return false; }
  bool updateIgnored() const override { return false; }
  bool downgradeAvailable() const override { return false; }
  bool updateNXMInfo() override { return false; }

  void setGameName(QString /*gameName*/) override
  {
  }

  void setNexusID(int /*modID*/) override
  {
  }

  void endorse(bool /*doEndorse*/) override
  {
  }

  void ignoreUpdate(bool /*ignore*/) override
  {
  }

  bool                 canBeUpdated() const override { return false; }
  bool                 canBeEnabled() const override { return false; }
  std::vector<QString> getIniTweaks() const override { return std::vector<QString>(); }

  std::vector<EFlag> getFlags() const override;

  QString getDescription() const override;

  QDateTime getLastNexusQuery() const override { return QDateTime(); }

  virtual void getNexusFiles
    (
      QList<MOBase::ModRepositoryFileInfo*>::const_iterator& /*unused*/,
      QList<MOBase::ModRepositoryFileInfo*>::const_iterator& /*unused*/)
  {
  }

  QString getNexusDescription() const override { return QString(); }

  void addInstalledFile(int /*modId*/, int /*fileId*/) override
  {
  }

private:

  ModInfoSeparator
    (
      PluginContainer*           pluginContainer, const MOBase::IPluginGame* game, const QDir& path,
      MOShared::DirectoryEntry** directoryStructure);
};

#endif
