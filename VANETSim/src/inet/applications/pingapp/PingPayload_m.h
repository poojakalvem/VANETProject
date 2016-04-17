//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/pingapp/PingPayload.msg.
//

#ifndef _INET_PINGPAYLOAD_M_H_
#define _INET_PINGPAYLOAD_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/common/INETDefs.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/applications/pingapp/PingPayload.msg:30</tt> by nedtool.
 * <pre>
 * //
 * // Represents payload in an ICMP/ICMPv6 Echo Request/Reply.
 * //
 * // TODO: move originator id and sequence number to ICMPMessage and use an ICMPControlInfo
 * packet PingPayload
 * {
 *     long originatorId; // sender module id
 *     long seqNo; // sequence number
 *     unsigned char data[];
 * }
 * </pre>
 */
class PingPayload : public ::cPacket
{
  protected:
    long originatorId_var;
    long seqNo_var;
    unsigned char *data_var; // array ptr
    unsigned int data_arraysize;

  private:
    void copy(const PingPayload& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PingPayload&);

  public:
    PingPayload(const char *name=NULL, int kind=0);
    PingPayload(const PingPayload& other);
    virtual ~PingPayload();
    PingPayload& operator=(const PingPayload& other);
    virtual PingPayload *dup() const {return new PingPayload(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getOriginatorId() const;
    virtual void setOriginatorId(long originatorId);
    virtual long getSeqNo() const;
    virtual void setSeqNo(long seqNo);
    virtual void setDataArraySize(unsigned int size);
    virtual unsigned int getDataArraySize() const;
    virtual unsigned char getData(unsigned int k) const;
    virtual void setData(unsigned int k, unsigned char data);
};

inline void doPacking(cCommBuffer *b, PingPayload& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PingPayload& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_PINGPAYLOAD_M_H_

