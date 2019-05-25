//
// Generated file, do not edit! Created by nedtool 5.1 from msg/StreamingMessage.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __ECSNET_STREAMINGMESSAGE_M_H
#define __ECSNET_STREAMINGMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0501
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace ecsnetpp {

// cplusplus {{
#include "omnetpp.h"
// }}

/**
 * Class generated from <tt>msg/StreamingMessage.msg:32</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet StreamingMessage
 * {
 *     int messageId;
 *     string sender;
 *     //	int size;
 *     string content;
 *     bool isProcessingDelayInCyclesPerEvent;
 *     //	double cyclesPerEvent;
 *     double processingDelayPerEvent;
 *     double selectivityRatio;
 *     simtime_t startTime;
 *     simtime_t operatorIngressTime;
 *     simtime_t channelIngressTime;
 *     double networkDelay;
 *     double processingDelay;
 *     double edgeProcessingDelay;
 * }
 * </pre>
 */
class StreamingMessage : public ::omnetpp::cPacket
{
  protected:
    int messageId;
    ::omnetpp::opp_string sender;
    ::omnetpp::opp_string content;
    bool isProcessingDelayInCyclesPerEvent;
    double processingDelayPerEvent;
    double selectivityRatio;
    ::omnetpp::simtime_t startTime;
    ::omnetpp::simtime_t operatorIngressTime;
    ::omnetpp::simtime_t channelIngressTime;
    double networkDelay;
    double processingDelay;
    double edgeProcessingDelay;

  private:
    void copy(const StreamingMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const StreamingMessage&);

  public:
    StreamingMessage(const char *name=nullptr, short kind=0);
    StreamingMessage(const StreamingMessage& other);
    virtual ~StreamingMessage();
    StreamingMessage& operator=(const StreamingMessage& other);
    virtual StreamingMessage *dup() const override {return new StreamingMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getMessageId() const;
    virtual void setMessageId(int messageId);
    virtual const char * getSender() const;
    virtual void setSender(const char * sender);
    virtual const char * getContent() const;
    virtual void setContent(const char * content);
    virtual bool getIsProcessingDelayInCyclesPerEvent() const;
    virtual void setIsProcessingDelayInCyclesPerEvent(bool isProcessingDelayInCyclesPerEvent);
    virtual double getProcessingDelayPerEvent() const;
    virtual void setProcessingDelayPerEvent(double processingDelayPerEvent);
    virtual double getSelectivityRatio() const;
    virtual void setSelectivityRatio(double selectivityRatio);
    virtual ::omnetpp::simtime_t getStartTime() const;
    virtual void setStartTime(::omnetpp::simtime_t startTime);
    virtual ::omnetpp::simtime_t getOperatorIngressTime() const;
    virtual void setOperatorIngressTime(::omnetpp::simtime_t operatorIngressTime);
    virtual ::omnetpp::simtime_t getChannelIngressTime() const;
    virtual void setChannelIngressTime(::omnetpp::simtime_t channelIngressTime);
    virtual double getNetworkDelay() const;
    virtual void setNetworkDelay(double networkDelay);
    virtual double getProcessingDelay() const;
    virtual void setProcessingDelay(double processingDelay);
    virtual double getEdgeProcessingDelay() const;
    virtual void setEdgeProcessingDelay(double edgeProcessingDelay);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const StreamingMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, StreamingMessage& obj) {obj.parsimUnpack(b);}

} // namespace ecsnetpp

#endif // ifndef __ECSNET_STREAMINGMESSAGE_M_H

