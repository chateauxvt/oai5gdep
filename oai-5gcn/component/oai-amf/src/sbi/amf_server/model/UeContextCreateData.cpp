/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeContextCreateData.h"

namespace oai {
namespace amf {
namespace model {

UeContextCreateData::UeContextCreateData() {
  m_MmeControlFteidIsSet   = false;
  m_N2NotifyUri            = "";
  m_N2NotifyUriIsSet       = false;
  m_UeRadioCapabilityIsSet = false;
  m_NgapCauseIsSet         = false;
  m_SupportedFeatures      = "";
  m_SupportedFeaturesIsSet = false;
}

UeContextCreateData::~UeContextCreateData() {}

void UeContextCreateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const UeContextCreateData& o) {
  j                       = nlohmann::json();
  j["ueContext"]          = o.m_UeContext;
  j["targetId"]           = o.m_TargetId;
  j["sourceToTargetData"] = o.m_SourceToTargetData;
  j["pduSessionList"]     = o.m_PduSessionList;
  if (o.mmeControlFteidIsSet()) j["mmeControlFteid"] = o.m_MmeControlFteid;
  if (o.n2NotifyUriIsSet()) j["n2NotifyUri"] = o.m_N2NotifyUri;
  if (o.ueRadioCapabilityIsSet())
    j["ueRadioCapability"] = o.m_UeRadioCapability;
  if (o.ngapCauseIsSet()) j["ngapCause"] = o.m_NgapCause;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, UeContextCreateData& o) {
  j.at("ueContext").get_to(o.m_UeContext);
  j.at("targetId").get_to(o.m_TargetId);
  j.at("sourceToTargetData").get_to(o.m_SourceToTargetData);
  j.at("pduSessionList").get_to(o.m_PduSessionList);
  if (j.find("mmeControlFteid") != j.end()) {
    j.at("mmeControlFteid").get_to(o.m_MmeControlFteid);
    o.m_MmeControlFteidIsSet = true;
  }
  if (j.find("n2NotifyUri") != j.end()) {
    j.at("n2NotifyUri").get_to(o.m_N2NotifyUri);
    o.m_N2NotifyUriIsSet = true;
  }
  if (j.find("ueRadioCapability") != j.end()) {
    j.at("ueRadioCapability").get_to(o.m_UeRadioCapability);
    o.m_UeRadioCapabilityIsSet = true;
  }
  if (j.find("ngapCause") != j.end()) {
    j.at("ngapCause").get_to(o.m_NgapCause);
    o.m_NgapCauseIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

UeContext UeContextCreateData::getUeContext() const {
  return m_UeContext;
}
void UeContextCreateData::setUeContext(UeContext const& value) {
  m_UeContext = value;
}
NgRanTargetId UeContextCreateData::getTargetId() const {
  return m_TargetId;
}
void UeContextCreateData::setTargetId(NgRanTargetId const& value) {
  m_TargetId = value;
}
N2InfoContent UeContextCreateData::getSourceToTargetData() const {
  return m_SourceToTargetData;
}
void UeContextCreateData::setSourceToTargetData(N2InfoContent const& value) {
  m_SourceToTargetData = value;
}
std::vector<N2SmInformation>& UeContextCreateData::getPduSessionList() {
  return m_PduSessionList;
}
std::string UeContextCreateData::getMmeControlFteid() const {
  return m_MmeControlFteid;
}
void UeContextCreateData::setMmeControlFteid(std::string const& value) {
  m_MmeControlFteid      = value;
  m_MmeControlFteidIsSet = true;
}
bool UeContextCreateData::mmeControlFteidIsSet() const {
  return m_MmeControlFteidIsSet;
}
void UeContextCreateData::unsetMmeControlFteid() {
  m_MmeControlFteidIsSet = false;
}
std::string UeContextCreateData::getN2NotifyUri() const {
  return m_N2NotifyUri;
}
void UeContextCreateData::setN2NotifyUri(std::string const& value) {
  m_N2NotifyUri      = value;
  m_N2NotifyUriIsSet = true;
}
bool UeContextCreateData::n2NotifyUriIsSet() const {
  return m_N2NotifyUriIsSet;
}
void UeContextCreateData::unsetN2NotifyUri() {
  m_N2NotifyUriIsSet = false;
}
N2InfoContent UeContextCreateData::getUeRadioCapability() const {
  return m_UeRadioCapability;
}
void UeContextCreateData::setUeRadioCapability(N2InfoContent const& value) {
  m_UeRadioCapability      = value;
  m_UeRadioCapabilityIsSet = true;
}
bool UeContextCreateData::ueRadioCapabilityIsSet() const {
  return m_UeRadioCapabilityIsSet;
}
void UeContextCreateData::unsetUeRadioCapability() {
  m_UeRadioCapabilityIsSet = false;
}
NgApCause UeContextCreateData::getNgapCause() const {
  return m_NgapCause;
}
void UeContextCreateData::setNgapCause(NgApCause const& value) {
  m_NgapCause      = value;
  m_NgapCauseIsSet = true;
}
bool UeContextCreateData::ngapCauseIsSet() const {
  return m_NgapCauseIsSet;
}
void UeContextCreateData::unsetNgapCause() {
  m_NgapCauseIsSet = false;
}
std::string UeContextCreateData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void UeContextCreateData::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool UeContextCreateData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void UeContextCreateData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
