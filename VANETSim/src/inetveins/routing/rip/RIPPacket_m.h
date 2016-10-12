//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/routing/rip/RIPPacket.msg.
//

#ifndef _INETVEINS_RIPPACKET_M_H_
#define _INETVEINS_RIPPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/networklayer/common/L3Address.h"
// }}


namespace inetveins {

// cplusplus {{
const int RIP_HEADER_SIZE = 4;
const int RIP_RTE_SIZE = 20;
// }}

/**
 * Enum generated from <tt>inetveins/routing/rip/RIPPacket.msg:35</tt> by nedtool.
 * <pre>
 * //
 * // RIP commands
 * //
 * enum RIPCommand
 * {
 * 
 *     RIP_REQUEST = 1;
 *     RIP_RESPONSE = 2;
 * }
 * </pre>
 */
enum RIPCommand {
    RIP_REQUEST = 1,
    RIP_RESPONSE = 2
};

/**
 * Enum generated from <tt>inetveins/routing/rip/RIPPacket.msg:43</tt> by nedtool.
 * <pre>
 * //
 * // Address Family constants
 * //
 * enum RIP_AF
 * {
 * 
 *     RIP_AF_NONE = 0;
 *     RIP_AF_INETVEINS = 2;
 *     // RIP_AF_AUTH = 0xFFFF;
 * }
 * </pre>
 */
enum RIP_AF {
    RIP_AF_NONE = 0,
    RIP_AF_INETVEINS = 2
};

/**
 * Struct generated from inetveins/routing/rip/RIPPacket.msg:55 by nedtool.
 */
struct RIPEntry
{
    RIPEntry();
    unsigned short addressFamilyId;
    unsigned short routeTag;
    L3Address address;
    int prefixLength;
    L3Address nextHop;
    unsigned int metric;
};

void doPacking(cCommBuffer *b, RIPEntry& a);
void doUnpacking(cCommBuffer *b, RIPEntry& a);

/**
 * Class generated from <tt>inetveins/routing/rip/RIPPacket.msg:69</tt> by nedtool.
 * <pre>
 * //
 * // RIPv2 packet
 * //
 * // note: Authentication entry is not allowed
 * //
 * packet RIPPacket
 * {
 *     unsigned char command @enum(RIPCommand);
 *     // version is fixed: 2
 *     RIPEntry entry[];
 * }
 * </pre>
 */
class RIPPacket : public ::cPacket
{
  protected:
    unsigned char command_var;
    RIPEntry *entry_var; // array ptr
    unsigned int entry_arraysize;

  private:
    void copy(const RIPPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RIPPacket&);

  public:
    RIPPacket(const char *name=NULL, int kind=0);
    RIPPacket(const RIPPacket& other);
    virtual ~RIPPacket();
    RIPPacket& operator=(const RIPPacket& other);
    virtual RIPPacket *dup() const {return new RIPPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getCommand() const;
    virtual void setCommand(unsigned char command);
    virtual void setEntryArraySize(unsigned int size);
    virtual unsigned int getEntryArraySize() const;
    virtual RIPEntry& getEntry(unsigned int k);
    virtual const RIPEntry& getEntry(unsigned int k) const {return const_cast<RIPPacket*>(this)->getEntry(k);}
    virtual void setEntry(unsigned int k, const RIPEntry& entry);
};

inline void doPacking(cCommBuffer *b, RIPPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RIPPacket& obj) {obj.parsimUnpack(b);}

} // namespace inetveins

#endif // ifndef _INETVEINS_RIPPACKET_M_H_

