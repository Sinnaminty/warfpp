/**
 * WarframeStat.us API
 * Simple API for data from the game Warframe. [Parser
 * Docs](https://wfcd.github.io/warframe-worldstate-parser/) [Items
 * Types](https://github.com/WFCD/warframe-items/blob/master/index.d.ts)
 *
 * The version of the OpenAPI document: 2.0.8
 * Contact: tobiah@protonmail.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "CppRestOpenAPIClient/model/PersistentEnemies_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PersistentEnemies_inner::PersistentEnemies_inner() {
  m_LocationTag = utility::conversions::to_string_t("");
  m_LocationTagIsSet = false;
  m_AgentType = utility::conversions::to_string_t("");
  m_AgentTypeIsSet = false;
  m_Rank = 0.0;
  m_RankIsSet = false;
  m_HealthPercent = 0.0;
  m_HealthPercentIsSet = false;
  m_FleeDamage = 0.0;
  m_FleeDamageIsSet = false;
  m_Region = utility::conversions::to_string_t("");
  m_RegionIsSet = false;
  m_LastDiscoveredTime = utility::conversions::to_string_t("");
  m_LastDiscoveredTimeIsSet = false;
  m_LastDiscoveredAt = utility::conversions::to_string_t("");
  m_LastDiscoveredAtIsSet = false;
  m_IsDiscovered = false;
  m_IsDiscoveredIsSet = false;
  m_IsUsingTicketing = false;
  m_IsUsingTicketingIsSet = false;
  m_Pid = utility::conversions::to_string_t("");
  m_PidIsSet = false;
}

PersistentEnemies_inner::~PersistentEnemies_inner() {}

void PersistentEnemies_inner::validate() {
  // TODO: implement validation
}

web::json::value PersistentEnemies_inner::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_LocationTagIsSet) {
    val[utility::conversions::to_string_t(U("locationTag"))] =
        ModelBase::toJson(m_LocationTag);
  }
  if (m_AgentTypeIsSet) {
    val[utility::conversions::to_string_t(U("agentType"))] =
        ModelBase::toJson(m_AgentType);
  }
  if (m_RankIsSet) {
    val[utility::conversions::to_string_t(U("rank"))] =
        ModelBase::toJson(m_Rank);
  }
  if (m_HealthPercentIsSet) {
    val[utility::conversions::to_string_t(U("healthPercent"))] =
        ModelBase::toJson(m_HealthPercent);
  }
  if (m_FleeDamageIsSet) {
    val[utility::conversions::to_string_t(U("fleeDamage"))] =
        ModelBase::toJson(m_FleeDamage);
  }
  if (m_RegionIsSet) {
    val[utility::conversions::to_string_t(U("region"))] =
        ModelBase::toJson(m_Region);
  }
  if (m_LastDiscoveredTimeIsSet) {
    val[utility::conversions::to_string_t(U("lastDiscoveredTime"))] =
        ModelBase::toJson(m_LastDiscoveredTime);
  }
  if (m_LastDiscoveredAtIsSet) {
    val[utility::conversions::to_string_t(U("lastDiscoveredAt"))] =
        ModelBase::toJson(m_LastDiscoveredAt);
  }
  if (m_IsDiscoveredIsSet) {
    val[utility::conversions::to_string_t(U("isDiscovered"))] =
        ModelBase::toJson(m_IsDiscovered);
  }
  if (m_IsUsingTicketingIsSet) {
    val[utility::conversions::to_string_t(U("isUsingTicketing"))] =
        ModelBase::toJson(m_IsUsingTicketing);
  }
  if (m_PidIsSet) {
    val[utility::conversions::to_string_t(U("pid"))] = ModelBase::toJson(m_Pid);
  }

  return val;
}

bool PersistentEnemies_inner::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("locationTag")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("locationTag")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setLocationTag;
      ok &= ModelBase::fromJson(fieldValue, refVal_setLocationTag);
      setLocationTag(refVal_setLocationTag);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("agentType")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("agentType")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setAgentType;
      ok &= ModelBase::fromJson(fieldValue, refVal_setAgentType);
      setAgentType(refVal_setAgentType);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("rank")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("rank")));
    if (!fieldValue.is_null()) {
      double refVal_setRank;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRank);
      setRank(refVal_setRank);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("healthPercent")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("healthPercent")));
    if (!fieldValue.is_null()) {
      double refVal_setHealthPercent;
      ok &= ModelBase::fromJson(fieldValue, refVal_setHealthPercent);
      setHealthPercent(refVal_setHealthPercent);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("fleeDamage")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("fleeDamage")));
    if (!fieldValue.is_null()) {
      double refVal_setFleeDamage;
      ok &= ModelBase::fromJson(fieldValue, refVal_setFleeDamage);
      setFleeDamage(refVal_setFleeDamage);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("region")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("region")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setRegion;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRegion);
      setRegion(refVal_setRegion);
    }
  }
  if (val.has_field(
          utility::conversions::to_string_t(U("lastDiscoveredTime")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("lastDiscoveredTime")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setLastDiscoveredTime;
      ok &= ModelBase::fromJson(fieldValue, refVal_setLastDiscoveredTime);
      setLastDiscoveredTime(refVal_setLastDiscoveredTime);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("lastDiscoveredAt")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("lastDiscoveredAt")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setLastDiscoveredAt;
      ok &= ModelBase::fromJson(fieldValue, refVal_setLastDiscoveredAt);
      setLastDiscoveredAt(refVal_setLastDiscoveredAt);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("isDiscovered")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("isDiscovered")));
    if (!fieldValue.is_null()) {
      bool refVal_setIsDiscovered;
      ok &= ModelBase::fromJson(fieldValue, refVal_setIsDiscovered);
      setIsDiscovered(refVal_setIsDiscovered);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("isUsingTicketing")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("isUsingTicketing")));
    if (!fieldValue.is_null()) {
      bool refVal_setIsUsingTicketing;
      ok &= ModelBase::fromJson(fieldValue, refVal_setIsUsingTicketing);
      setIsUsingTicketing(refVal_setIsUsingTicketing);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("pid")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("pid")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setPid;
      ok &= ModelBase::fromJson(fieldValue, refVal_setPid);
      setPid(refVal_setPid);
    }
  }
  return ok;
}

void PersistentEnemies_inner::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_LocationTagIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("locationTag")),
        m_LocationTag));
  }
  if (m_AgentTypeIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("agentType")),
        m_AgentType));
  }
  if (m_RankIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("rank")), m_Rank));
  }
  if (m_HealthPercentIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("healthPercent")),
        m_HealthPercent));
  }
  if (m_FleeDamageIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("fleeDamage")),
        m_FleeDamage));
  }
  if (m_RegionIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("region")), m_Region));
  }
  if (m_LastDiscoveredTimeIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("lastDiscoveredTime")),
        m_LastDiscoveredTime));
  }
  if (m_LastDiscoveredAtIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("lastDiscoveredAt")),
        m_LastDiscoveredAt));
  }
  if (m_IsDiscoveredIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("isDiscovered")),
        m_IsDiscovered));
  }
  if (m_IsUsingTicketingIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("isUsingTicketing")),
        m_IsUsingTicketing));
  }
  if (m_PidIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("pid")), m_Pid));
  }
}

bool PersistentEnemies_inner::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(
          utility::conversions::to_string_t(U("locationTag")))) {
    utility::string_t refVal_setLocationTag;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("locationTag"))),
        refVal_setLocationTag);
    setLocationTag(refVal_setLocationTag);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("agentType")))) {
    utility::string_t refVal_setAgentType;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("agentType"))),
        refVal_setAgentType);
    setAgentType(refVal_setAgentType);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("rank")))) {
    double refVal_setRank;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("rank"))),
        refVal_setRank);
    setRank(refVal_setRank);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("healthPercent")))) {
    double refVal_setHealthPercent;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("healthPercent"))),
        refVal_setHealthPercent);
    setHealthPercent(refVal_setHealthPercent);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("fleeDamage")))) {
    double refVal_setFleeDamage;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("fleeDamage"))),
        refVal_setFleeDamage);
    setFleeDamage(refVal_setFleeDamage);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("region")))) {
    utility::string_t refVal_setRegion;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("region"))),
        refVal_setRegion);
    setRegion(refVal_setRegion);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("lastDiscoveredTime")))) {
    utility::string_t refVal_setLastDiscoveredTime;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("lastDiscoveredTime"))),
        refVal_setLastDiscoveredTime);
    setLastDiscoveredTime(refVal_setLastDiscoveredTime);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("lastDiscoveredAt")))) {
    utility::string_t refVal_setLastDiscoveredAt;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("lastDiscoveredAt"))),
        refVal_setLastDiscoveredAt);
    setLastDiscoveredAt(refVal_setLastDiscoveredAt);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("isDiscovered")))) {
    bool refVal_setIsDiscovered;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("isDiscovered"))),
        refVal_setIsDiscovered);
    setIsDiscovered(refVal_setIsDiscovered);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("isUsingTicketing")))) {
    bool refVal_setIsUsingTicketing;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("isUsingTicketing"))),
        refVal_setIsUsingTicketing);
    setIsUsingTicketing(refVal_setIsUsingTicketing);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("pid")))) {
    utility::string_t refVal_setPid;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("pid"))),
        refVal_setPid);
    setPid(refVal_setPid);
  }
  return ok;
}

utility::string_t PersistentEnemies_inner::getLocationTag() const {
  return m_LocationTag;
}

void PersistentEnemies_inner::setLocationTag(const utility::string_t &value) {
  m_LocationTag = value;
  m_LocationTagIsSet = true;
}

bool PersistentEnemies_inner::locationTagIsSet() const {
  return m_LocationTagIsSet;
}

void PersistentEnemies_inner::unsetLocationTag() { m_LocationTagIsSet = false; }
utility::string_t PersistentEnemies_inner::getAgentType() const {
  return m_AgentType;
}

void PersistentEnemies_inner::setAgentType(const utility::string_t &value) {
  m_AgentType = value;
  m_AgentTypeIsSet = true;
}

bool PersistentEnemies_inner::agentTypeIsSet() const {
  return m_AgentTypeIsSet;
}

void PersistentEnemies_inner::unsetAgentType() { m_AgentTypeIsSet = false; }
double PersistentEnemies_inner::getRank() const { return m_Rank; }

void PersistentEnemies_inner::setRank(double value) {
  m_Rank = value;
  m_RankIsSet = true;
}

bool PersistentEnemies_inner::rankIsSet() const { return m_RankIsSet; }

void PersistentEnemies_inner::unsetRank() { m_RankIsSet = false; }
double PersistentEnemies_inner::getHealthPercent() const {
  return m_HealthPercent;
}

void PersistentEnemies_inner::setHealthPercent(double value) {
  m_HealthPercent = value;
  m_HealthPercentIsSet = true;
}

bool PersistentEnemies_inner::healthPercentIsSet() const {
  return m_HealthPercentIsSet;
}

void PersistentEnemies_inner::unsetHealthPercent() {
  m_HealthPercentIsSet = false;
}
double PersistentEnemies_inner::getFleeDamage() const { return m_FleeDamage; }

void PersistentEnemies_inner::setFleeDamage(double value) {
  m_FleeDamage = value;
  m_FleeDamageIsSet = true;
}

bool PersistentEnemies_inner::fleeDamageIsSet() const {
  return m_FleeDamageIsSet;
}

void PersistentEnemies_inner::unsetFleeDamage() { m_FleeDamageIsSet = false; }
utility::string_t PersistentEnemies_inner::getRegion() const {
  return m_Region;
}

void PersistentEnemies_inner::setRegion(const utility::string_t &value) {
  m_Region = value;
  m_RegionIsSet = true;
}

bool PersistentEnemies_inner::regionIsSet() const { return m_RegionIsSet; }

void PersistentEnemies_inner::unsetRegion() { m_RegionIsSet = false; }
utility::string_t PersistentEnemies_inner::getLastDiscoveredTime() const {
  return m_LastDiscoveredTime;
}

void PersistentEnemies_inner::setLastDiscoveredTime(
    const utility::string_t &value) {
  m_LastDiscoveredTime = value;
  m_LastDiscoveredTimeIsSet = true;
}

bool PersistentEnemies_inner::lastDiscoveredTimeIsSet() const {
  return m_LastDiscoveredTimeIsSet;
}

void PersistentEnemies_inner::unsetLastDiscoveredTime() {
  m_LastDiscoveredTimeIsSet = false;
}
utility::string_t PersistentEnemies_inner::getLastDiscoveredAt() const {
  return m_LastDiscoveredAt;
}

void PersistentEnemies_inner::setLastDiscoveredAt(
    const utility::string_t &value) {
  m_LastDiscoveredAt = value;
  m_LastDiscoveredAtIsSet = true;
}

bool PersistentEnemies_inner::lastDiscoveredAtIsSet() const {
  return m_LastDiscoveredAtIsSet;
}

void PersistentEnemies_inner::unsetLastDiscoveredAt() {
  m_LastDiscoveredAtIsSet = false;
}
bool PersistentEnemies_inner::isIsDiscovered() const { return m_IsDiscovered; }

void PersistentEnemies_inner::setIsDiscovered(bool value) {
  m_IsDiscovered = value;
  m_IsDiscoveredIsSet = true;
}

bool PersistentEnemies_inner::isDiscoveredIsSet() const {
  return m_IsDiscoveredIsSet;
}

void PersistentEnemies_inner::unsetIsDiscovered() {
  m_IsDiscoveredIsSet = false;
}
bool PersistentEnemies_inner::isIsUsingTicketing() const {
  return m_IsUsingTicketing;
}

void PersistentEnemies_inner::setIsUsingTicketing(bool value) {
  m_IsUsingTicketing = value;
  m_IsUsingTicketingIsSet = true;
}

bool PersistentEnemies_inner::isUsingTicketingIsSet() const {
  return m_IsUsingTicketingIsSet;
}

void PersistentEnemies_inner::unsetIsUsingTicketing() {
  m_IsUsingTicketingIsSet = false;
}
utility::string_t PersistentEnemies_inner::getPid() const { return m_Pid; }

void PersistentEnemies_inner::setPid(const utility::string_t &value) {
  m_Pid = value;
  m_PidIsSet = true;
}

bool PersistentEnemies_inner::pidIsSet() const { return m_PidIsSet; }

void PersistentEnemies_inner::unsetPid() { m_PidIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
