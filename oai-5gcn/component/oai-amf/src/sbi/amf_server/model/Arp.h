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
/*
 * Arp.h
 *
 *
 */

#ifndef Arp_H_
#define Arp_H_

#include "PreemptionCapability.h"
#include "PreemptionVulnerability.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class Arp {
 public:
  Arp();
  virtual ~Arp();

  void validate();

  /////////////////////////////////////////////
  /// Arp members

  /// <summary>
  /// nullable true shall not be used for this attribute
  /// </summary>
  int32_t getPriorityLevel() const;
  void setPriorityLevel(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  PreemptionCapability getPreemptCap() const;
  void setPreemptCap(PreemptionCapability const& value);
  /// <summary>
  ///
  /// </summary>
  PreemptionVulnerability getPreemptVuln() const;
  void setPreemptVuln(PreemptionVulnerability const& value);

  friend void to_json(nlohmann::json& j, const Arp& o);
  friend void from_json(const nlohmann::json& j, Arp& o);

 protected:
  int32_t m_PriorityLevel;

  PreemptionCapability m_PreemptCap;

  PreemptionVulnerability m_PreemptVuln;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* Arp_H_ */
