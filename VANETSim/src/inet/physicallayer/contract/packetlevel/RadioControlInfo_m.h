//
// Generated file, do not edit! Created by nedtool 4.6 from inet/physicallayer/contract/packetlevel/RadioControlInfo.msg.
//

#ifndef _INET__PHYSICALLAYER_RADIOCONTROLINFO_M_H_
#define _INET__PHYSICALLAYER_RADIOCONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/physicallayer/contract/packetlevel/IModulation.h"
// }}


namespace inet {
namespace physicallayer {

// cplusplus {{
typedef IModulation * IModulationPtr;
// }}

/**
 * Enum generated from <tt>inet/physicallayer/contract/packetlevel/RadioControlInfo.msg:37</tt> by nedtool.
 * <pre>
 * //
 * // Message kinds for sending commands to the radio.
 * //
 * enum RadioCommandCode
 * {
 * 
 *     RADIO_C_CONFIGURE = 1;
 * }
 * </pre>
 */
enum RadioCommandCode {
    RADIO_C_CONFIGURE = 1
};

/**
 * Class generated from <tt>inet/physicallayer/contract/packetlevel/RadioControlInfo.msg:45</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a configure command that is sent to the ~Radio.
 * //
 * class ConfigureRadioCommand
 * {
 *     int radioMode = -1;                  // new radio mode or -1 if not set.
 *     W power = W(NaN);                    // new default transmission power in the range (0, +infinity) or NaN if not set.
 *     bps bitrate = bps(NaN);              // new default bitrate in the range (0, +infinity) or NaN if not set.
 *     IModulationPtr modulation = nullptr; // new default modulation or nullptr if not set.
 *     Hz carrierFrequency = Hz(NaN);       // new default carrier frequency in the range (0, +infinity) or NaN if not set.
 *     Hz bandwidth = Hz(NaN);              // new default bandwidth in the rage (0, +infinity) or NaN if not set.
 * }
 * </pre>
 */
class ConfigureRadioCommand : public ::cObject
{
  protected:
    int radioMode_var;
    W power_var;
    bps bitrate_var;
    IModulationPtr modulation_var;
    Hz carrierFrequency_var;
    Hz bandwidth_var;

  private:
    void copy(const ConfigureRadioCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ConfigureRadioCommand&);

  public:
    ConfigureRadioCommand();
    ConfigureRadioCommand(const ConfigureRadioCommand& other);
    virtual ~ConfigureRadioCommand();
    ConfigureRadioCommand& operator=(const ConfigureRadioCommand& other);
    virtual ConfigureRadioCommand *dup() const {return new ConfigureRadioCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getRadioMode() const;
    virtual void setRadioMode(int radioMode);
    virtual W& getPower();
    virtual const W& getPower() const {return const_cast<ConfigureRadioCommand*>(this)->getPower();}
    virtual void setPower(const W& power);
    virtual bps& getBitrate();
    virtual const bps& getBitrate() const {return const_cast<ConfigureRadioCommand*>(this)->getBitrate();}
    virtual void setBitrate(const bps& bitrate);
    virtual IModulationPtr& getModulation();
    virtual const IModulationPtr& getModulation() const {return const_cast<ConfigureRadioCommand*>(this)->getModulation();}
    virtual void setModulation(const IModulationPtr& modulation);
    virtual Hz& getCarrierFrequency();
    virtual const Hz& getCarrierFrequency() const {return const_cast<ConfigureRadioCommand*>(this)->getCarrierFrequency();}
    virtual void setCarrierFrequency(const Hz& carrierFrequency);
    virtual Hz& getBandwidth();
    virtual const Hz& getBandwidth() const {return const_cast<ConfigureRadioCommand*>(this)->getBandwidth();}
    virtual void setBandwidth(const Hz& bandwidth);
};

inline void doPacking(cCommBuffer *b, ConfigureRadioCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ConfigureRadioCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/contract/packetlevel/RadioControlInfo.msg:58</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent down to the ~Radio.
 * //
 * class TransmissionRequest
 * {
 *     W power = W(NaN);              // override default transmission power in the range (0, +infinity) or NaN if not set.
 *     bps bitrate = bps(NaN);        // override default bitrate in the range (0, +infinity) or NaN if not set.
 *     Hz carrierFrequency = Hz(NaN); // override default carrier frequency in the range (0, +infinity) or NaN if not set.
 *     Hz bandwidth = Hz(NaN);        // override default bandwidth in the rage (0, +infinity) or NaN if not set.
 * }
 * </pre>
 */
class TransmissionRequest : public ::cObject
{
  protected:
    W power_var;
    bps bitrate_var;
    Hz carrierFrequency_var;
    Hz bandwidth_var;

  private:
    void copy(const TransmissionRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TransmissionRequest&);

  public:
    TransmissionRequest();
    TransmissionRequest(const TransmissionRequest& other);
    virtual ~TransmissionRequest();
    TransmissionRequest& operator=(const TransmissionRequest& other);
    virtual TransmissionRequest *dup() const {return new TransmissionRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual W& getPower();
    virtual const W& getPower() const {return const_cast<TransmissionRequest*>(this)->getPower();}
    virtual void setPower(const W& power);
    virtual bps& getBitrate();
    virtual const bps& getBitrate() const {return const_cast<TransmissionRequest*>(this)->getBitrate();}
    virtual void setBitrate(const bps& bitrate);
    virtual Hz& getCarrierFrequency();
    virtual const Hz& getCarrierFrequency() const {return const_cast<TransmissionRequest*>(this)->getCarrierFrequency();}
    virtual void setCarrierFrequency(const Hz& carrierFrequency);
    virtual Hz& getBandwidth();
    virtual const Hz& getBandwidth() const {return const_cast<TransmissionRequest*>(this)->getBandwidth();}
    virtual void setBandwidth(const Hz& bandwidth);
};

inline void doPacking(cCommBuffer *b, TransmissionRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TransmissionRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/contract/packetlevel/RadioControlInfo.msg:69</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent up from the ~Radio.
 * //
 * class ReceptionIndication
 * {
 *     int bitErrorCount = -1;       // number of erroneous bits in the range [0, +infinity) or -1 if unknown.
 *     int symbolErrorCount = -1;    // number of erroneous symbols in the range [0, +infinity) or -1 if unknown.
 *     double packetErrorRate = NaN; // packet error rate (probability) in the range [0, 1] or NaN if unknown.
 *     double bitErrorRate = NaN;    // bit error rate (probability) in the range [0, 1] or NaN if unknown.
 *     double symbolErrorRate = NaN; // symbol error rate (probability) in the range [0, 1] or NaN if unknown.
 *     W minRSSI = W(NaN);           // minimum receive signal strength indication in the range (0, +infinity) or NaN if unknown.
 *     double minSNIR = NaN;         // minimum signal to noise plus interference ratio in the range (0, +infinity) or NaN if unknown.
 * }
 * </pre>
 */
class ReceptionIndication : public ::cObject
{
  protected:
    int bitErrorCount_var;
    int symbolErrorCount_var;
    double packetErrorRate_var;
    double bitErrorRate_var;
    double symbolErrorRate_var;
    W minRSSI_var;
    double minSNIR_var;

  private:
    void copy(const ReceptionIndication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ReceptionIndication&);

  public:
    ReceptionIndication();
    ReceptionIndication(const ReceptionIndication& other);
    virtual ~ReceptionIndication();
    ReceptionIndication& operator=(const ReceptionIndication& other);
    virtual ReceptionIndication *dup() const {return new ReceptionIndication(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getBitErrorCount() const;
    virtual void setBitErrorCount(int bitErrorCount);
    virtual int getSymbolErrorCount() const;
    virtual void setSymbolErrorCount(int symbolErrorCount);
    virtual double getPacketErrorRate() const;
    virtual void setPacketErrorRate(double packetErrorRate);
    virtual double getBitErrorRate() const;
    virtual void setBitErrorRate(double bitErrorRate);
    virtual double getSymbolErrorRate() const;
    virtual void setSymbolErrorRate(double symbolErrorRate);
    virtual W& getMinRSSI();
    virtual const W& getMinRSSI() const {return const_cast<ReceptionIndication*>(this)->getMinRSSI();}
    virtual void setMinRSSI(const W& minRSSI);
    virtual double getMinSNIR() const;
    virtual void setMinSNIR(double minSNIR);
};

inline void doPacking(cCommBuffer *b, ReceptionIndication& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ReceptionIndication& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inet

#endif // ifndef _INET__PHYSICALLAYER_RADIOCONTROLINFO_M_H_

