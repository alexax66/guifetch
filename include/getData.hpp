#ifndef GET_DATA_HPP
#define GET_DATA_HPP

#include <QObject>

class getData : public QObject {
  Q_OBJECT
  Q_PROPERTY(QString osName READ osName NOTIFY osNameChanged)
  Q_PROPERTY(QString osHost READ osHost NOTIFY osHostChanged)
  Q_PROPERTY(QString osKernel READ osKernel NOTIFY osKernelChanged)
  Q_PROPERTY(QString osArch READ osArch NOTIFY osArchChanged)
  Q_PROPERTY(int osFreeMemory READ osFreeMemory NOTIFY osFreeMemoryChanged)
  Q_PROPERTY(int osTotalMemory READ osTotalMemory NOTIFY osTotalMemoryChanged)
  Q_PROPERTY(QString osShell READ osShell NOTIFY osShellChanged)
  Q_PROPERTY(int osUptime READ osUptime NOTIFY osUptimeChanged)

  public:
    explicit getData(QObject *parent = nullptr);
    virtual ~getData();
    Q_INVOKABLE int getFreeRam();
    Q_INVOKABLE int getTotalRam();
    Q_INVOKABLE int getUptime();
    QString osName();
    QString osHost();
    QString osKernel();
    QString osArch();
    int osFreeMemory();
    int osTotalMemory();
    QString osShell();
    int osUptime();

  signals:
    void osNameChanged();
    void osHostChanged();
    void osKernelChanged();
    void osArchChanged();
    void osFreeMemoryChanged();
    void osTotalMemoryChanged();
    void osShellChanged();
    void osUptimeChanged();

  private:
    QString m_osName;
    QString m_osHost;
    QString m_osKernel;
    QString m_osArch;
    unsigned long m_osFreeMemory;
    unsigned long m_osTotalMemory;
    QString m_osShell;
    int m_osUptime;
};

#endif
