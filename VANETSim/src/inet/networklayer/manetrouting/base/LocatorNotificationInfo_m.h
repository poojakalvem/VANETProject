//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/base/LocatorNotificationInfo.msg.
//

#ifndef _LOCATORNOTIFICATIONINFO_M_H_
#define _LOCATORNOTIFICATIONINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "MACAddress.h"
#include "IPv4Address.h"
// }}

/**
 * Class generated from <tt>networklayer/manetrouting/base/LocatorNotificationInfo.msg:30</tt> by nedtool.
 * <pre>
 * class LocatorNotificationInfo
 * {
 *     MACAddress macAddr;   //
 *     IPv4Address ipAddr;
 * }
 * </pre>
 */
class LocatorNotificationInfo : public ::cObject
{
  protected:
    MACAddress macAddr_var;
    IPv4Address ipAddr_var;

  private:
    void copy(const LocatorNotificationInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LocatorNotificationInfo&);

  public:
    LocatorNotificationInfo();
    LocatorNotificationInfo(const LocatorNotificationInfo& other);
    virtual ~LocatorNotificationInfo();
    LocatorNotificationInfo& operator=(const LocatorNotificationInfo& other);
    virtual LocatorNotificationInfo *dup() const {return new LocatorNotificationInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getMacAddr();
    virtual const MACAddress& getMacAddr() const {return const_cast<LocatorNotificationInfo*>(this)->getMacAddr();}
    virtual void setMacAddr(const MACAddress& macAddr);
    virtual IPv4Address& getIpAddr();
    virtual const IPv4Address& getIpAddr() const {return const_cast<LocatorNotificationInfo*>(this)->getIpAddr();}
    virtual void setIpAddr(const IPv4Address& ipAddr);
};

inline void doPacking(cCommBuffer *b, LocatorNotificationInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LocatorNotificationInfo& obj) {obj.parsimUnpack(b);}


#endif // ifndef _LOCATORNOTIFICATIONINFO_M_H_
