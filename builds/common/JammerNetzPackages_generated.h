// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_JAMMERNETZPACKAGES_H_
#define FLATBUFFERS_GENERATED_JAMMERNETZPACKAGES_H_

#include "flatbuffers/flatbuffers.h"

struct JammerNetzPNPStreamQualityInfo;
struct JammerNetzPNPStreamQualityInfoBuilder;

struct JammerNetzPNPClientInfo;
struct JammerNetzPNPClientInfoBuilder;

struct JammerNetzPNPClientInfoPackage;
struct JammerNetzPNPClientInfoPackageBuilder;

struct JammerNetzPNPStreamQualityInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef JammerNetzPNPStreamQualityInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOOLATEORDUPLICATE = 4,
    VT_DROPPEDPACKETCOUNTER = 6,
    VT_OUTOFORDERPACKETCOUNTER = 8,
    VT_DUPLICATEPACKETCOUNTER = 10,
    VT_DROPSHEALED = 12,
    VT_PACKAGESPUSHED = 14,
    VT_PACKAGESPOPPED = 16,
    VT_MAXLENGTHOFGAP = 18,
    VT_MAXWRONGORDERSPAN = 20
  };
  uint64_t tooLateOrDuplicate() const {
    return GetField<uint64_t>(VT_TOOLATEORDUPLICATE, 0);
  }
  int64_t droppedPacketCounter() const {
    return GetField<int64_t>(VT_DROPPEDPACKETCOUNTER, 0);
  }
  int64_t outOfOrderPacketCounter() const {
    return GetField<int64_t>(VT_OUTOFORDERPACKETCOUNTER, 0);
  }
  int64_t duplicatePacketCounter() const {
    return GetField<int64_t>(VT_DUPLICATEPACKETCOUNTER, 0);
  }
  uint64_t dropsHealed() const {
    return GetField<uint64_t>(VT_DROPSHEALED, 0);
  }
  uint64_t packagesPushed() const {
    return GetField<uint64_t>(VT_PACKAGESPUSHED, 0);
  }
  uint64_t packagesPopped() const {
    return GetField<uint64_t>(VT_PACKAGESPOPPED, 0);
  }
  uint64_t maxLengthOfGap() const {
    return GetField<uint64_t>(VT_MAXLENGTHOFGAP, 0);
  }
  uint64_t maxWrongOrderSpan() const {
    return GetField<uint64_t>(VT_MAXWRONGORDERSPAN, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOOLATEORDUPLICATE) &&
           VerifyField<int64_t>(verifier, VT_DROPPEDPACKETCOUNTER) &&
           VerifyField<int64_t>(verifier, VT_OUTOFORDERPACKETCOUNTER) &&
           VerifyField<int64_t>(verifier, VT_DUPLICATEPACKETCOUNTER) &&
           VerifyField<uint64_t>(verifier, VT_DROPSHEALED) &&
           VerifyField<uint64_t>(verifier, VT_PACKAGESPUSHED) &&
           VerifyField<uint64_t>(verifier, VT_PACKAGESPOPPED) &&
           VerifyField<uint64_t>(verifier, VT_MAXLENGTHOFGAP) &&
           VerifyField<uint64_t>(verifier, VT_MAXWRONGORDERSPAN) &&
           verifier.EndTable();
  }
};

struct JammerNetzPNPStreamQualityInfoBuilder {
  typedef JammerNetzPNPStreamQualityInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tooLateOrDuplicate(uint64_t tooLateOrDuplicate) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_TOOLATEORDUPLICATE, tooLateOrDuplicate, 0);
  }
  void add_droppedPacketCounter(int64_t droppedPacketCounter) {
    fbb_.AddElement<int64_t>(JammerNetzPNPStreamQualityInfo::VT_DROPPEDPACKETCOUNTER, droppedPacketCounter, 0);
  }
  void add_outOfOrderPacketCounter(int64_t outOfOrderPacketCounter) {
    fbb_.AddElement<int64_t>(JammerNetzPNPStreamQualityInfo::VT_OUTOFORDERPACKETCOUNTER, outOfOrderPacketCounter, 0);
  }
  void add_duplicatePacketCounter(int64_t duplicatePacketCounter) {
    fbb_.AddElement<int64_t>(JammerNetzPNPStreamQualityInfo::VT_DUPLICATEPACKETCOUNTER, duplicatePacketCounter, 0);
  }
  void add_dropsHealed(uint64_t dropsHealed) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_DROPSHEALED, dropsHealed, 0);
  }
  void add_packagesPushed(uint64_t packagesPushed) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_PACKAGESPUSHED, packagesPushed, 0);
  }
  void add_packagesPopped(uint64_t packagesPopped) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_PACKAGESPOPPED, packagesPopped, 0);
  }
  void add_maxLengthOfGap(uint64_t maxLengthOfGap) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_MAXLENGTHOFGAP, maxLengthOfGap, 0);
  }
  void add_maxWrongOrderSpan(uint64_t maxWrongOrderSpan) {
    fbb_.AddElement<uint64_t>(JammerNetzPNPStreamQualityInfo::VT_MAXWRONGORDERSPAN, maxWrongOrderSpan, 0);
  }
  explicit JammerNetzPNPStreamQualityInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<JammerNetzPNPStreamQualityInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<JammerNetzPNPStreamQualityInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<JammerNetzPNPStreamQualityInfo> CreateJammerNetzPNPStreamQualityInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t tooLateOrDuplicate = 0,
    int64_t droppedPacketCounter = 0,
    int64_t outOfOrderPacketCounter = 0,
    int64_t duplicatePacketCounter = 0,
    uint64_t dropsHealed = 0,
    uint64_t packagesPushed = 0,
    uint64_t packagesPopped = 0,
    uint64_t maxLengthOfGap = 0,
    uint64_t maxWrongOrderSpan = 0) {
  JammerNetzPNPStreamQualityInfoBuilder builder_(_fbb);
  builder_.add_maxWrongOrderSpan(maxWrongOrderSpan);
  builder_.add_maxLengthOfGap(maxLengthOfGap);
  builder_.add_packagesPopped(packagesPopped);
  builder_.add_packagesPushed(packagesPushed);
  builder_.add_dropsHealed(dropsHealed);
  builder_.add_duplicatePacketCounter(duplicatePacketCounter);
  builder_.add_outOfOrderPacketCounter(outOfOrderPacketCounter);
  builder_.add_droppedPacketCounter(droppedPacketCounter);
  builder_.add_tooLateOrDuplicate(tooLateOrDuplicate);
  return builder_.Finish();
}

struct JammerNetzPNPClientInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef JammerNetzPNPClientInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IPADDRESS = 4,
    VT_ISIPV6 = 6,
    VT_PORTNUMBER = 8,
    VT_QUALITYINFO = 10
  };
  const flatbuffers::Vector<uint8_t> *ipAddress() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_IPADDRESS);
  }
  bool isIPV6() const {
    return GetField<uint8_t>(VT_ISIPV6, 0) != 0;
  }
  int32_t portNumber() const {
    return GetField<int32_t>(VT_PORTNUMBER, 0);
  }
  const JammerNetzPNPStreamQualityInfo *qualityInfo() const {
    return GetPointer<const JammerNetzPNPStreamQualityInfo *>(VT_QUALITYINFO);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_IPADDRESS) &&
           verifier.VerifyVector(ipAddress()) &&
           VerifyField<uint8_t>(verifier, VT_ISIPV6) &&
           VerifyField<int32_t>(verifier, VT_PORTNUMBER) &&
           VerifyOffset(verifier, VT_QUALITYINFO) &&
           verifier.VerifyTable(qualityInfo()) &&
           verifier.EndTable();
  }
};

struct JammerNetzPNPClientInfoBuilder {
  typedef JammerNetzPNPClientInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ipAddress(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> ipAddress) {
    fbb_.AddOffset(JammerNetzPNPClientInfo::VT_IPADDRESS, ipAddress);
  }
  void add_isIPV6(bool isIPV6) {
    fbb_.AddElement<uint8_t>(JammerNetzPNPClientInfo::VT_ISIPV6, static_cast<uint8_t>(isIPV6), 0);
  }
  void add_portNumber(int32_t portNumber) {
    fbb_.AddElement<int32_t>(JammerNetzPNPClientInfo::VT_PORTNUMBER, portNumber, 0);
  }
  void add_qualityInfo(flatbuffers::Offset<JammerNetzPNPStreamQualityInfo> qualityInfo) {
    fbb_.AddOffset(JammerNetzPNPClientInfo::VT_QUALITYINFO, qualityInfo);
  }
  explicit JammerNetzPNPClientInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<JammerNetzPNPClientInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<JammerNetzPNPClientInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<JammerNetzPNPClientInfo> CreateJammerNetzPNPClientInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> ipAddress = 0,
    bool isIPV6 = false,
    int32_t portNumber = 0,
    flatbuffers::Offset<JammerNetzPNPStreamQualityInfo> qualityInfo = 0) {
  JammerNetzPNPClientInfoBuilder builder_(_fbb);
  builder_.add_qualityInfo(qualityInfo);
  builder_.add_portNumber(portNumber);
  builder_.add_ipAddress(ipAddress);
  builder_.add_isIPV6(isIPV6);
  return builder_.Finish();
}

inline flatbuffers::Offset<JammerNetzPNPClientInfo> CreateJammerNetzPNPClientInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *ipAddress = nullptr,
    bool isIPV6 = false,
    int32_t portNumber = 0,
    flatbuffers::Offset<JammerNetzPNPStreamQualityInfo> qualityInfo = 0) {
  auto ipAddress__ = ipAddress ? _fbb.CreateVector<uint8_t>(*ipAddress) : 0;
  return CreateJammerNetzPNPClientInfo(
      _fbb,
      ipAddress__,
      isIPV6,
      portNumber,
      qualityInfo);
}

struct JammerNetzPNPClientInfoPackage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef JammerNetzPNPClientInfoPackageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CLIENTINFOS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<JammerNetzPNPClientInfo>> *clientInfos() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<JammerNetzPNPClientInfo>> *>(VT_CLIENTINFOS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CLIENTINFOS) &&
           verifier.VerifyVector(clientInfos()) &&
           verifier.VerifyVectorOfTables(clientInfos()) &&
           verifier.EndTable();
  }
};

struct JammerNetzPNPClientInfoPackageBuilder {
  typedef JammerNetzPNPClientInfoPackage Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_clientInfos(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<JammerNetzPNPClientInfo>>> clientInfos) {
    fbb_.AddOffset(JammerNetzPNPClientInfoPackage::VT_CLIENTINFOS, clientInfos);
  }
  explicit JammerNetzPNPClientInfoPackageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<JammerNetzPNPClientInfoPackage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<JammerNetzPNPClientInfoPackage>(end);
    return o;
  }
};

inline flatbuffers::Offset<JammerNetzPNPClientInfoPackage> CreateJammerNetzPNPClientInfoPackage(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<JammerNetzPNPClientInfo>>> clientInfos = 0) {
  JammerNetzPNPClientInfoPackageBuilder builder_(_fbb);
  builder_.add_clientInfos(clientInfos);
  return builder_.Finish();
}

inline flatbuffers::Offset<JammerNetzPNPClientInfoPackage> CreateJammerNetzPNPClientInfoPackageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<JammerNetzPNPClientInfo>> *clientInfos = nullptr) {
  auto clientInfos__ = clientInfos ? _fbb.CreateVector<flatbuffers::Offset<JammerNetzPNPClientInfo>>(*clientInfos) : 0;
  return CreateJammerNetzPNPClientInfoPackage(
      _fbb,
      clientInfos__);
}

inline const JammerNetzPNPClientInfoPackage *GetJammerNetzPNPClientInfoPackage(const void *buf) {
  return flatbuffers::GetRoot<JammerNetzPNPClientInfoPackage>(buf);
}

inline const JammerNetzPNPClientInfoPackage *GetSizePrefixedJammerNetzPNPClientInfoPackage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<JammerNetzPNPClientInfoPackage>(buf);
}

inline bool VerifyJammerNetzPNPClientInfoPackageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<JammerNetzPNPClientInfoPackage>(nullptr);
}

inline bool VerifySizePrefixedJammerNetzPNPClientInfoPackageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<JammerNetzPNPClientInfoPackage>(nullptr);
}

inline void FinishJammerNetzPNPClientInfoPackageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<JammerNetzPNPClientInfoPackage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedJammerNetzPNPClientInfoPackageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<JammerNetzPNPClientInfoPackage> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_JAMMERNETZPACKAGES_H_
