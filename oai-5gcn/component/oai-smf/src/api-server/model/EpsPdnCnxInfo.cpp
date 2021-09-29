/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EpsPdnCnxInfo.h"

namespace oai {
namespace smf_server {
namespace model {

EpsPdnCnxInfo::EpsPdnCnxInfo() {
  m_PgwNodeNameIsSet = false;
}

EpsPdnCnxInfo::~EpsPdnCnxInfo() {}

void EpsPdnCnxInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const EpsPdnCnxInfo& o) {
  j                = nlohmann::json();
  j["pgwS8cFteid"] = o.m_PgwS8cFteid;
  if (o.pgwNodeNameIsSet()) j["pgwNodeName"] = o.m_PgwNodeName;
}

void from_json(const nlohmann::json& j, EpsPdnCnxInfo& o) {
  j.at("pgwS8cFteid").get_to(o.m_PgwS8cFteid);
  if (j.find("pgwNodeName") != j.end()) {
    j.at("pgwNodeName").get_to(o.m_PgwNodeName);
    o.m_PgwNodeNameIsSet = true;
  }
}

std::string EpsPdnCnxInfo::getPgwS8cFteid() const {
  return m_PgwS8cFteid;
}
void EpsPdnCnxInfo::setPgwS8cFteid(std::string const& value) {
  m_PgwS8cFteid = value;
}
std::string EpsPdnCnxInfo::getPgwNodeName() const {
  return m_PgwNodeName;
}
void EpsPdnCnxInfo::setPgwNodeName(std::string const& value) {
  m_PgwNodeName      = value;
  m_PgwNodeNameIsSet = true;
}
bool EpsPdnCnxInfo::pgwNodeNameIsSet() const {
  return m_PgwNodeNameIsSet;
}
void EpsPdnCnxInfo::unsetPgwNodeName() {
  m_PgwNodeNameIsSet = false;
}

}  // namespace model
}  // namespace smf_server
}  // namespace oai
