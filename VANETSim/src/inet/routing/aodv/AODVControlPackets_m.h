//
// Generated file, do not edit! Created by nedtool 4.6 from inet/routing/aodv/AODVControlPackets.msg.
//

#ifndef _INET_AODVCONTROLPACKETS_M_H_
#define _INET_AODVCONTROLPACKETS_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {

/**
 * Struct generated from inet/routing/aodv/AODVControlPackets.msg:31 by nedtool.
 */
struct UnreachableNode
{
    UnreachableNode();
    L3Address addr;
    unsigned int seqNum;
};

void doPacking(cCommBuffer *b, UnreachableNode& a);
void doUnpacking(cCommBuffer *b, UnreachableNode& a);

/**
 * Enum generated from <tt>inet/routing/aodv/AODVControlPackets.msg:37</tt> by nedtool.
 * <pre>
 * enum AODVControlPacketType
 * {
 * 
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum AODVControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:48</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for AODV Control Packets
 * //
 * packet AODVControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class AODVControlPacket : public ::cPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const AODVControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVControlPacket&);

  public:
    AODVControlPacket(const char *name=NULL, int kind=0);
    AODVControlPacket(const AODVControlPacket& other);
    virtual ~AODVControlPacket();
    AODVControlPacket& operator=(const AODVControlPacket& other);
    virtual AODVControlPacket *dup() const {return new AODVControlPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, AODVControlPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Request
 * //
 * class AODVRREQ extends AODVControlPacket
 * {
 *     unsigned int packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 * }
 * </pre>
 */
class AODVRREQ : public ::inet::AODVControlPacket
{
  protected:
    unsigned int packetType_var;
    bool joinFlag_var;
    bool repairFlag_var;
    bool gratuitousRREPFlag_var;
    bool destOnlyFlag_var;
    bool unknownSeqNumFlag_var;
    unsigned int hopCount_var;
    unsigned int rreqId_var;
    L3Address destAddr_var;
    unsigned int destSeqNum_var;
    L3Address originatorAddr_var;
    unsigned int originatorSeqNum_var;

  private:
    void copy(const AODVRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVRREQ&);

  public:
    AODVRREQ(const char *name=NULL);
    AODVRREQ(const AODVRREQ& other);
    virtual ~AODVRREQ();
    AODVRREQ& operator=(const AODVRREQ& other);
    virtual AODVRREQ *dup() const {return new AODVRREQ(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
};

inline void doPacking(cCommBuffer *b, AODVRREQ& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:75</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply
 * //
 * class AODVRREP extends AODVControlPacket
 * {
 *     unsigned int packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 * }
 * </pre>
 */
class AODVRREP : public ::inet::AODVControlPacket
{
  protected:
    unsigned int packetType_var;
    bool repairFlag_var;
    bool ackRequiredFlag_var;
    unsigned int prefixSize_var;
    unsigned int hopCount_var;
    L3Address destAddr_var;
    unsigned int destSeqNum_var;
    L3Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    simtime_t lifeTime_var;

  private:
    void copy(const AODVRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVRREP&);

  public:
    AODVRREP(const char *name=NULL);
    AODVRREP(const AODVRREP& other);
    virtual ~AODVRREP();
    AODVRREP& operator=(const AODVRREP& other);
    virtual AODVRREP *dup() const {return new AODVRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual simtime_t getLifeTime() const;
    virtual void setLifeTime(simtime_t lifeTime);
};

inline void doPacking(cCommBuffer *b, AODVRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:92</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Error
 * //
 * class AODVRERR extends AODVControlPacket
 * {
 *     unsigned int packetType = RERR;
 *     UnreachableNode unreachableNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class AODVRERR : public ::inet::AODVControlPacket
{
  protected:
    unsigned int packetType_var;
    UnreachableNode *unreachableNodes_var; // array ptr
    unsigned int unreachableNodes_arraysize;
    bool noDeleteFlag_var;
    unsigned int destCount_var;

  private:
    void copy(const AODVRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVRERR&);

  public:
    AODVRERR(const char *name=NULL);
    AODVRERR(const AODVRERR& other);
    virtual ~AODVRERR();
    AODVRERR& operator=(const AODVRERR& other);
    virtual AODVRERR *dup() const {return new AODVRERR(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual void setUnreachableNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableNodesArraySize() const;
    virtual UnreachableNode& getUnreachableNodes(unsigned int k);
    virtual const UnreachableNode& getUnreachableNodes(unsigned int k) const {return const_cast<AODVRERR*>(this)->getUnreachableNodes(k);}
    virtual void setUnreachableNodes(unsigned int k, const UnreachableNode& unreachableNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doPacking(cCommBuffer *b, AODVRERR& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:103</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply ACK
 * //
 * class AODVRREPACK extends AODVControlPacket
 * {
 *     unsigned int packetType = RREPACK;
 * }
 * </pre>
 */
class AODVRREPACK : public ::inet::AODVControlPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const AODVRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVRREPACK&);

  public:
    AODVRREPACK(const char *name=NULL);
    AODVRREPACK(const AODVRREPACK& other);
    virtual ~AODVRREPACK();
    AODVRREPACK& operator=(const AODVRREPACK& other);
    virtual AODVRREPACK *dup() const {return new AODVRREPACK(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, AODVRREPACK& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AODVControlPackets.msg:111</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForRREP
 * {
 *     L3Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForRREP : public ::cMessage
{
  protected:
    L3Address destAddr_var;
    unsigned int lastTTL_var;
    bool fromInvalidEntry_var;

  private:
    void copy(const WaitForRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForRREP&);

  public:
    WaitForRREP(const char *name=NULL, int kind=0);
    WaitForRREP(const WaitForRREP& other);
    virtual ~WaitForRREP();
    WaitForRREP& operator=(const WaitForRREP& other);
    virtual WaitForRREP *dup() const {return new WaitForRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<WaitForRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doPacking(cCommBuffer *b, WaitForRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WaitForRREP& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_AODVCONTROLPACKETS_M_H_

