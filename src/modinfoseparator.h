#ifndef MODINFOSEPARATOR_H
#define MODINFOSEPARATOR_H

#include "modinforegular.h"

class ModInfoSeparator:
    public ModInfoRegular
{
  friend class ModInfo;

public:

  virtual bool updateAvailable() const { return false; }
  virtual bool updateIgnored() const { return false; }
  virtual bool downgradeAvailable() const { return false; }
  virtual bool updateNXMInfo() { return false; }
  virtual void setGameName(QString) {}
  virtual void setNexusID(int) {}
  virtual void endorse(bool) {}
  virtual void ignoreUpdate(bool) {}
  virtual bool canBeUpdated() const { return false; }
  virtual bool canBeEnabled() const { return false; }
  virtual std::vector<QString> getIniTweaks() const { return std::vector<QString>(); }
  virtual std::vector<EFlag> getFlags() const;
  virtual QString getDescription() const;
  virtual QDateTime getLastNexusQuery() const { return QDateTime(); }
  virtual void getNexusFiles(QList<MOBase::ModRepositoryFileInfo*>::const_iterator&,
    QList<MOBase::ModRepositoryFileInfo*>::const_iterator&) {}
  virtual QString getNexusDescription() const { return QString(); }

  virtual void addInstalledFile(int, int) {}

private:

  ModInfoSeparator(PluginContainer* pluginContainer, 
      const MOBase::IPluginGame* game, const QDir& path,
      MOShared::DirectoryEntry** directoryStructure);
};

#endif
