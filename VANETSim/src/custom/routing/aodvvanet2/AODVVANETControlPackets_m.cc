//
// Generated file, do not edit! Created by nedtool 4.6 from custom/routing/aodv/AODVVANETControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AODVVANETControlPackets_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

UnreachableNode::UnreachableNode()
{
    seqNum = 0;
}

void doPacking(cCommBuffer *b, UnreachableNode& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.seqNum);
}

void doUnpacking(cCommBuffer *b, UnreachableNode& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.seqNum);
}

class UnreachableNodeDescriptor : public cClassDescriptor
{
  public:
    UnreachableNodeDescriptor();
    virtual ~UnreachableNodeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(UnreachableNodeDescriptor);

UnreachableNodeDescriptor::UnreachableNodeDescriptor() : cClassDescriptor("UnreachableNode", "")
{
}

UnreachableNodeDescriptor::~UnreachableNodeDescriptor()
{
}

bool UnreachableNodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnreachableNode *>(obj)!=NULL;
}

const char *UnreachableNodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnreachableNodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UnreachableNodeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UnreachableNodeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addr",
        "seqNum",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UnreachableNodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnreachableNodeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UnreachableNodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int UnreachableNodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnreachableNodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableNodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableNodeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *UnreachableNodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("AODVVANETControlPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("AODVVANETControlPacketType"));
    e->insert(RREQ, "RREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
);

Register_Class(AODVVANETControlPacket);

AODVVANETControlPacket::AODVVANETControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
}

AODVVANETControlPacket::AODVVANETControlPacket(const AODVVANETControlPacket& other) : ::cPacket(other)
{
    copy(other);
}

AODVVANETControlPacket::~AODVVANETControlPacket()
{
}

AODVVANETControlPacket& AODVVANETControlPacket::operator=(const AODVVANETControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETControlPacket::copy(const AODVVANETControlPacket& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVVANETControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVVANETControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVVANETControlPacket::getPacketType() const
{
    return packetType_var;
}

void AODVVANETControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVVANETControlPacketDescriptor : public cClassDescriptor
{
  public:
    AODVVANETControlPacketDescriptor();
    virtual ~AODVVANETControlPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVVANETControlPacketDescriptor);

AODVVANETControlPacketDescriptor::AODVVANETControlPacketDescriptor() : cClassDescriptor("AODVVANETControlPacket", "cPacket")
{
}

AODVVANETControlPacketDescriptor::~AODVVANETControlPacketDescriptor()
{
}

bool AODVVANETControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETControlPacket *>(obj)!=NULL;
}

const char *AODVVANETControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVVANETControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AODVVANETControlPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AODVVANETControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETControlPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVVANETControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVVANETControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETControlPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *AODVVANETControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(AODVVANETRREQ);

AODVVANETRREQ::AODVVANETRREQ(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RREQ;
    this->joinFlag_var = 0;
    this->repairFlag_var = 0;
    this->gratuitousRREPFlag_var = 0;
    this->destOnlyFlag_var = 0;
    this->unknownSeqNumFlag_var = 0;
    this->hopCount_var = 0;
    this->rreqId_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
}

AODVVANETRREQ::AODVVANETRREQ(const AODVVANETRREQ& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETRREQ::~AODVVANETRREQ()
{
}

AODVVANETRREQ& AODVVANETRREQ::operator=(const AODVVANETRREQ& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRREQ::copy(const AODVVANETRREQ& other)
{
    this->packetType_var = other.packetType_var;
    this->joinFlag_var = other.joinFlag_var;
    this->repairFlag_var = other.repairFlag_var;
    this->gratuitousRREPFlag_var = other.gratuitousRREPFlag_var;
    this->destOnlyFlag_var = other.destOnlyFlag_var;
    this->unknownSeqNumFlag_var = other.unknownSeqNumFlag_var;
    this->hopCount_var = other.hopCount_var;
    this->rreqId_var = other.rreqId_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
}

void AODVVANETRREQ::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->joinFlag_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->gratuitousRREPFlag_var);
    doPacking(b,this->destOnlyFlag_var);
    doPacking(b,this->unknownSeqNumFlag_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->rreqId_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
}

void AODVVANETRREQ::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->joinFlag_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->gratuitousRREPFlag_var);
    doUnpacking(b,this->destOnlyFlag_var);
    doUnpacking(b,this->unknownSeqNumFlag_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->rreqId_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
}

unsigned int AODVVANETRREQ::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRREQ::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVVANETRREQ::getJoinFlag() const
{
    return joinFlag_var;
}

void AODVVANETRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag_var = joinFlag;
}

bool AODVVANETRREQ::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVVANETRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVVANETRREQ::getGratuitousRREPFlag() const
{
    return gratuitousRREPFlag_var;
}

void AODVVANETRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag_var = gratuitousRREPFlag;
}

bool AODVVANETRREQ::getDestOnlyFlag() const
{
    return destOnlyFlag_var;
}

void AODVVANETRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag_var = destOnlyFlag;
}

bool AODVVANETRREQ::getUnknownSeqNumFlag() const
{
    return unknownSeqNumFlag_var;
}

void AODVVANETRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag_var = unknownSeqNumFlag;
}

unsigned int AODVVANETRREQ::getHopCount() const
{
    return hopCount_var;
}

void AODVVANETRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

unsigned int AODVVANETRREQ::getRreqId() const
{
    return rreqId_var;
}

void AODVVANETRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId_var = rreqId;
}

IPv4Address& AODVVANETRREQ::getDestAddr()
{
    return destAddr_var;
}

void AODVVANETRREQ::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVVANETRREQ::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVVANETRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVVANETRREQ::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVVANETRREQ::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVVANETRREQ::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVVANETRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

class AODVVANETRREQDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRREQDescriptor();
    virtual ~AODVVANETRREQDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVVANETRREQDescriptor);

AODVVANETRREQDescriptor::AODVVANETRREQDescriptor() : cClassDescriptor("AODVVANETRREQ", "AODVVANETControlPacket")
{
}

AODVVANETRREQDescriptor::~AODVVANETRREQDescriptor()
{
}

bool AODVVANETRREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRREQ *>(obj)!=NULL;
}

const char *AODVVANETRREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int AODVVANETRREQDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *AODVVANETRREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "joinFlag",
        "repairFlag",
        "gratuitousRREPFlag",
        "destOnlyFlag",
        "unknownSeqNumFlag",
        "hopCount",
        "rreqId",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int AODVVANETRREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinFlag")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+2;
    if (fieldName[0]=='g' && strcmp(fieldName, "gratuitousRREPFlag")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destOnlyFlag")==0) return base+4;
    if (fieldName[0]=='u' && strcmp(fieldName, "unknownSeqNumFlag")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "rreqId")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+9;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+10;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETRREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVVANETRREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREQ *pp = (AODVVANETRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETRREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREQ *pp = (AODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getJoinFlag());
        case 2: return bool2string(pp->getRepairFlag());
        case 3: return bool2string(pp->getGratuitousRREPFlag());
        case 4: return bool2string(pp->getDestOnlyFlag());
        case 5: return bool2string(pp->getUnknownSeqNumFlag());
        case 6: return ulong2string(pp->getHopCount());
        case 7: return ulong2string(pp->getRreqId());
        case 8: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 9: return ulong2string(pp->getDestSeqNum());
        case 10: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 11: return ulong2string(pp->getOriginatorSeqNum());
        default: return "";
    }
}

bool AODVVANETRREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREQ *pp = (AODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setJoinFlag(string2bool(value)); return true;
        case 2: pp->setRepairFlag(string2bool(value)); return true;
        case 3: pp->setGratuitousRREPFlag(string2bool(value)); return true;
        case 4: pp->setDestOnlyFlag(string2bool(value)); return true;
        case 5: pp->setUnknownSeqNumFlag(string2bool(value)); return true;
        case 6: pp->setHopCount(string2ulong(value)); return true;
        case 7: pp->setRreqId(string2ulong(value)); return true;
        case 9: pp->setDestSeqNum(string2ulong(value)); return true;
        case 11: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRREQDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 8: return opp_typename(typeid(IPv4Address));
        case 10: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *AODVVANETRREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREQ *pp = (AODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 8: return (void *)(&pp->getDestAddr()); break;
        case 10: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(AODVVANETRREP);

AODVVANETRREP::AODVVANETRREP(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RREP;
    this->repairFlag_var = 0;
    this->ackRequiredFlag_var = 0;
    this->prefixSize_var = 0;
    this->hopCount_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
    this->lifeTime_var = 0;
}

AODVVANETRREP::AODVVANETRREP(const AODVVANETRREP& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETRREP::~AODVVANETRREP()
{
}

AODVVANETRREP& AODVVANETRREP::operator=(const AODVVANETRREP& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRREP::copy(const AODVVANETRREP& other)
{
    this->packetType_var = other.packetType_var;
    this->repairFlag_var = other.repairFlag_var;
    this->ackRequiredFlag_var = other.ackRequiredFlag_var;
    this->prefixSize_var = other.prefixSize_var;
    this->hopCount_var = other.hopCount_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
    this->lifeTime_var = other.lifeTime_var;
}

void AODVVANETRREP::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->ackRequiredFlag_var);
    doPacking(b,this->prefixSize_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
    doPacking(b,this->lifeTime_var);
}

void AODVVANETRREP::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->ackRequiredFlag_var);
    doUnpacking(b,this->prefixSize_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
    doUnpacking(b,this->lifeTime_var);
}

unsigned int AODVVANETRREP::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRREP::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVVANETRREP::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVVANETRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVVANETRREP::getAckRequiredFlag() const
{
    return ackRequiredFlag_var;
}

void AODVVANETRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag_var = ackRequiredFlag;
}

unsigned int AODVVANETRREP::getPrefixSize() const
{
    return prefixSize_var;
}

void AODVVANETRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize_var = prefixSize;
}

unsigned int AODVVANETRREP::getHopCount() const
{
    return hopCount_var;
}

void AODVVANETRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

IPv4Address& AODVVANETRREP::getDestAddr()
{
    return destAddr_var;
}

void AODVVANETRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVVANETRREP::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVVANETRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVVANETRREP::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVVANETRREP::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVVANETRREP::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVVANETRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

simtime_t AODVVANETRREP::getLifeTime() const
{
    return lifeTime_var;
}

void AODVVANETRREP::setLifeTime(simtime_t lifeTime)
{
    this->lifeTime_var = lifeTime;
}

class AODVVANETRREPDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRREPDescriptor();
    virtual ~AODVVANETRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVVANETRREPDescriptor);

AODVVANETRREPDescriptor::AODVVANETRREPDescriptor() : cClassDescriptor("AODVVANETRREP", "AODVVANETControlPacket")
{
}

AODVVANETRREPDescriptor::~AODVVANETRREPDescriptor()
{
}

bool AODVVANETRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRREP *>(obj)!=NULL;
}

const char *AODVVANETRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int AODVVANETRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *AODVVANETRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "repairFlag",
        "ackRequiredFlag",
        "prefixSize",
        "hopCount",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "lifeTime",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int AODVVANETRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackRequiredFlag")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixSize")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+6;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+7;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+8;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "simtime_t",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVVANETRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREP *pp = (AODVVANETRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREP *pp = (AODVVANETRREP *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getRepairFlag());
        case 2: return bool2string(pp->getAckRequiredFlag());
        case 3: return ulong2string(pp->getPrefixSize());
        case 4: return ulong2string(pp->getHopCount());
        case 5: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 6: return ulong2string(pp->getDestSeqNum());
        case 7: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 8: return ulong2string(pp->getOriginatorSeqNum());
        case 9: return double2string(pp->getLifeTime());
        default: return "";
    }
}

bool AODVVANETRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREP *pp = (AODVVANETRREP *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setRepairFlag(string2bool(value)); return true;
        case 2: pp->setAckRequiredFlag(string2bool(value)); return true;
        case 3: pp->setPrefixSize(string2ulong(value)); return true;
        case 4: pp->setHopCount(string2ulong(value)); return true;
        case 6: pp->setDestSeqNum(string2ulong(value)); return true;
        case 8: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 9: pp->setLifeTime(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(IPv4Address));
        case 7: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *AODVVANETRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREP *pp = (AODVVANETRREP *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDestAddr()); break;
        case 7: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(AODVVANETRERR);

AODVVANETRERR::AODVVANETRERR(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RERR;
    unreachableNodes_arraysize = 0;
    this->unreachableNodes_var = 0;
    this->noDeleteFlag_var = 0;
    this->destCount_var = 0;
}

AODVVANETRERR::AODVVANETRERR(const AODVVANETRERR& other) : ::AODVVANETControlPacket(other)
{
    unreachableNodes_arraysize = 0;
    this->unreachableNodes_var = 0;
    copy(other);
}

AODVVANETRERR::~AODVVANETRERR()
{
    delete [] unreachableNodes_var;
}

AODVVANETRERR& AODVVANETRERR::operator=(const AODVVANETRERR& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRERR::copy(const AODVVANETRERR& other)
{
    this->packetType_var = other.packetType_var;
    delete [] this->unreachableNodes_var;
    this->unreachableNodes_var = (other.unreachableNodes_arraysize==0) ? NULL : new UnreachableNode[other.unreachableNodes_arraysize];
    unreachableNodes_arraysize = other.unreachableNodes_arraysize;
    for (unsigned int i=0; i<unreachableNodes_arraysize; i++)
        this->unreachableNodes_var[i] = other.unreachableNodes_var[i];
    this->noDeleteFlag_var = other.noDeleteFlag_var;
    this->destCount_var = other.destCount_var;
}

void AODVVANETRERR::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    b->pack(unreachableNodes_arraysize);
    doPacking(b,this->unreachableNodes_var,unreachableNodes_arraysize);
    doPacking(b,this->noDeleteFlag_var);
    doPacking(b,this->destCount_var);
}

void AODVVANETRERR::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    delete [] this->unreachableNodes_var;
    b->unpack(unreachableNodes_arraysize);
    if (unreachableNodes_arraysize==0) {
        this->unreachableNodes_var = 0;
    } else {
        this->unreachableNodes_var = new UnreachableNode[unreachableNodes_arraysize];
        doUnpacking(b,this->unreachableNodes_var,unreachableNodes_arraysize);
    }
    doUnpacking(b,this->noDeleteFlag_var);
    doUnpacking(b,this->destCount_var);
}

unsigned int AODVVANETRERR::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRERR::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

void AODVVANETRERR::setUnreachableNodesArraySize(unsigned int size)
{
    UnreachableNode *unreachableNodes_var2 = (size==0) ? NULL : new UnreachableNode[size];
    unsigned int sz = unreachableNodes_arraysize < size ? unreachableNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableNodes_var2[i] = this->unreachableNodes_var[i];
    unreachableNodes_arraysize = size;
    delete [] this->unreachableNodes_var;
    this->unreachableNodes_var = unreachableNodes_var2;
}

unsigned int AODVVANETRERR::getUnreachableNodesArraySize() const
{
    return unreachableNodes_arraysize;
}

UnreachableNode& AODVVANETRERR::getUnreachableNodes(unsigned int k)
{
    if (k>=unreachableNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    return unreachableNodes_var[k];
}

void AODVVANETRERR::setUnreachableNodes(unsigned int k, const UnreachableNode& unreachableNodes)
{
    if (k>=unreachableNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    this->unreachableNodes_var[k] = unreachableNodes;
}

bool AODVVANETRERR::getNoDeleteFlag() const
{
    return noDeleteFlag_var;
}

void AODVVANETRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag_var = noDeleteFlag;
}

unsigned int AODVVANETRERR::getDestCount() const
{
    return destCount_var;
}

void AODVVANETRERR::setDestCount(unsigned int destCount)
{
    this->destCount_var = destCount;
}

class AODVVANETRERRDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRERRDescriptor();
    virtual ~AODVVANETRERRDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVVANETRERRDescriptor);

AODVVANETRERRDescriptor::AODVVANETRERRDescriptor() : cClassDescriptor("AODVVANETRERR", "AODVVANETControlPacket")
{
}

AODVVANETRERRDescriptor::~AODVVANETRERRDescriptor()
{
}

bool AODVVANETRERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRERR *>(obj)!=NULL;
}

const char *AODVVANETRERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int AODVVANETRERRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *AODVVANETRERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "unreachableNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int AODVVANETRERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableNodes")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "UnreachableNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETRERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVVANETRERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRERR *pp = (AODVVANETRERR *)object; (void)pp;
    switch (field) {
        case 1: return pp->getUnreachableNodesArraySize();
        default: return 0;
    }
}

std::string AODVVANETRERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRERR *pp = (AODVVANETRERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: {std::stringstream out; out << pp->getUnreachableNodes(i); return out.str();}
        case 2: return bool2string(pp->getNoDeleteFlag());
        case 3: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool AODVVANETRERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRERR *pp = (AODVVANETRERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 2: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 3: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(UnreachableNode));
        default: return NULL;
    };
}

void *AODVVANETRERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRERR *pp = (AODVVANETRERR *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUnreachableNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(AODVVANETRREPACK);

AODVVANETRREPACK::AODVVANETRREPACK(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RREPACK;
}

AODVVANETRREPACK::AODVVANETRREPACK(const AODVVANETRREPACK& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETRREPACK::~AODVVANETRREPACK()
{
}

AODVVANETRREPACK& AODVVANETRREPACK::operator=(const AODVVANETRREPACK& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRREPACK::copy(const AODVVANETRREPACK& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVVANETRREPACK::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVVANETRREPACK::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVVANETRREPACK::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRREPACK::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVVANETRREPACKDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRREPACKDescriptor();
    virtual ~AODVVANETRREPACKDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVVANETRREPACKDescriptor);

AODVVANETRREPACKDescriptor::AODVVANETRREPACKDescriptor() : cClassDescriptor("AODVVANETRREPACK", "AODVVANETControlPacket")
{
}

AODVVANETRREPACKDescriptor::~AODVVANETRREPACKDescriptor()
{
}

bool AODVVANETRREPACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRREPACK *>(obj)!=NULL;
}

const char *AODVVANETRREPACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRREPACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVVANETRREPACKDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AODVVANETRREPACKDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AODVVANETRREPACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRREPACKDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETRREPACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVVANETRREPACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREPACK *pp = (AODVVANETRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETRREPACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREPACK *pp = (AODVVANETRREPACK *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVVANETRREPACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREPACK *pp = (AODVVANETRREPACK *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRREPACKDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *AODVVANETRREPACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRREPACK *pp = (AODVVANETRREPACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(WaitForVANETRREP);

WaitForVANETRREP::WaitForVANETRREP(const char *name, int kind) : ::cMessage(name,kind)
{
    this->lastTTL_var = 0;
    this->fromInvalidEntry_var = 0;
}

WaitForVANETRREP::WaitForVANETRREP(const WaitForVANETRREP& other) : ::cMessage(other)
{
    copy(other);
}

WaitForVANETRREP::~WaitForVANETRREP()
{
}

WaitForVANETRREP& WaitForVANETRREP::operator=(const WaitForVANETRREP& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForVANETRREP::copy(const WaitForVANETRREP& other)
{
    this->destAddr_var = other.destAddr_var;
    this->lastTTL_var = other.lastTTL_var;
    this->fromInvalidEntry_var = other.fromInvalidEntry_var;
}

void WaitForVANETRREP::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->lastTTL_var);
    doPacking(b,this->fromInvalidEntry_var);
}

void WaitForVANETRREP::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->lastTTL_var);
    doUnpacking(b,this->fromInvalidEntry_var);
}

IPv4Address& WaitForVANETRREP::getDestAddr()
{
    return destAddr_var;
}

void WaitForVANETRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int WaitForVANETRREP::getLastTTL() const
{
    return lastTTL_var;
}

void WaitForVANETRREP::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL_var = lastTTL;
}

bool WaitForVANETRREP::getFromInvalidEntry() const
{
    return fromInvalidEntry_var;
}

void WaitForVANETRREP::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry_var = fromInvalidEntry;
}

class WaitForVANETRREPDescriptor : public cClassDescriptor
{
  public:
    WaitForVANETRREPDescriptor();
    virtual ~WaitForVANETRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(WaitForVANETRREPDescriptor);

WaitForVANETRREPDescriptor::WaitForVANETRREPDescriptor() : cClassDescriptor("WaitForVANETRREP", "cMessage")
{
}

WaitForVANETRREPDescriptor::~WaitForVANETRREPDescriptor()
{
}

bool WaitForVANETRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WaitForVANETRREP *>(obj)!=NULL;
}

const char *WaitForVANETRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WaitForVANETRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int WaitForVANETRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *WaitForVANETRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "lastTTL",
        "fromInvalidEntry",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int WaitForVANETRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WaitForVANETRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *WaitForVANETRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int WaitForVANETRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WaitForVANETRREP *pp = (WaitForVANETRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WaitForVANETRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForVANETRREP *pp = (WaitForVANETRREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForVANETRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WaitForVANETRREP *pp = (WaitForVANETRREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForVANETRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *WaitForVANETRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForVANETRREP *pp = (WaitForVANETRREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


