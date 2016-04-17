//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/udp/UDPPacket.msg.
//

#ifndef _INET_UDPPACKET_M_H_
#define _INET_UDPPACKET_M_H_

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
 * Enum generated from <tt>inet/transportlayer/udp/UDPPacket.msg:26</tt> by nedtool.
 * <pre>
 * enum UdpConstants
 * {
 * 
 *     UDP_HEADER_BYTES = 8;
 * }
 * </pre>
 */
enum UdpConstants {
    UDP_HEADER_BYTES = 8
};

/**
 * Class generated from <tt>inet/transportlayer/udp/UDPPacket.msg:33</tt> by nedtool.
 * <pre>
 * //
 * // Represents an UDP packet, to be used with the ~UDP module.
 * //
 * packet UDPPacket
 * {
 *     @customize(true);
 *     @fieldNameSuffix("_var"); //TODO remove when OMNeT++ 4.x compatibility is no longer required
 * 
 *     unsigned short srcPort;
 *     unsigned short destPort;
 *     byteLength = UDP_HEADER_BYTES;
 *     int totalLengthField = -1;   // -1 means: getTotalLengthField() uses getByteLength()
 * }
 * </pre>
 *
 * UDPPacket_Base is only useful if it gets subclassed, and UDPPacket is derived from it.
 * The minimum code to be written for UDPPacket is the following:
 *
 * <pre>
 * class UDPPacket : public UDPPacket_Base
 * {
 *   private:
 *     void copy(const UDPPacket& other) { ... }

 *   public:
 *     UDPPacket(const char *name=NULL, int kind=0) : UDPPacket_Base(name,kind) {}
 *     UDPPacket(const UDPPacket& other) : UDPPacket_Base(other) {copy(other);}
 *     UDPPacket& operator=(const UDPPacket& other) {if (this==&other) return *this; UDPPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual UDPPacket *dup() const {return new UDPPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from UDPPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(UDPPacket);
 * </pre>
 */
class UDPPacket_Base : public ::cPacket
{
  protected:
    unsigned short srcPort_var;
    unsigned short destPort_var;
    int totalLengthField_var;

  private:
    void copy(const UDPPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UDPPacket_Base&);
    // make constructors protected to avoid instantiation
    UDPPacket_Base(const char *name=NULL, int kind=0);
    UDPPacket_Base(const UDPPacket_Base& other);
    // make assignment operator protected to force the user override it
    UDPPacket_Base& operator=(const UDPPacket_Base& other);

  public:
    virtual ~UDPPacket_Base();
    virtual UDPPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class UDPPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getSrcPort() const;
    virtual void setSrcPort(unsigned short srcPort);
    virtual unsigned short getDestPort() const;
    virtual void setDestPort(unsigned short destPort);
    virtual int getTotalLengthField() const;
    virtual void setTotalLengthField(int totalLengthField);
};

} // namespace inet

#endif // ifndef _INET_UDPPACKET_M_H_

