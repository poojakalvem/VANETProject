//
// Generated file, do not edit! Created by nedtool 4.6 from inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMPLCPFrame.msg.
//

#ifndef _INET__PHYSICALLAYER_IEEE80211OFDMPLCPFRAME_M_H_
#define _INET__PHYSICALLAYER_IEEE80211OFDMPLCPFRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/physicallayer/ieee80211/bitlevel/Ieee80211PLCPFrame_m.h"
// }}


namespace inet {
namespace physicallayer {

/**
 * Class generated from <tt>inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMPLCPFrame.msg:45</tt> by nedtool.
 * <pre>
 * // TODO: revise name
 * packet Ieee80211OFDMPLCPFrame extends Ieee80211PLCPFrame
 * {
 *     type = OFDM;
 *     int rate;
 *     int length;
 * }
 * </pre>
 */
class Ieee80211OFDMPLCPFrame : public ::inet::physicallayer::Ieee80211PLCPFrame
{
  protected:
    int rate_var;
    int length_var;

  private:
    void copy(const Ieee80211OFDMPLCPFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211OFDMPLCPFrame&);

  public:
    Ieee80211OFDMPLCPFrame();
    Ieee80211OFDMPLCPFrame(const Ieee80211OFDMPLCPFrame& other);
    virtual ~Ieee80211OFDMPLCPFrame();
    Ieee80211OFDMPLCPFrame& operator=(const Ieee80211OFDMPLCPFrame& other);
    virtual Ieee80211OFDMPLCPFrame *dup() const {return new Ieee80211OFDMPLCPFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getRate() const;
    virtual void setRate(int rate);
    virtual int getLength() const;
    virtual void setLength(int length);
};

inline void doPacking(cCommBuffer *b, Ieee80211OFDMPLCPFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211OFDMPLCPFrame& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inet

#endif // ifndef _INET__PHYSICALLAYER_IEEE80211OFDMPLCPFRAME_M_H_

