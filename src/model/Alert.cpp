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

#include "CppRestOpenAPIClient/model/Alert.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Alert::Alert() {
  m_MissionIsSet = false;
  m_Expired = false;
  m_ExpiredIsSet = false;
  m_Eta = utility::conversions::to_string_t("");
  m_EtaIsSet = false;
  m_RewardTypesIsSet = false;
}

Alert::~Alert() {}

void Alert::validate() {
  // TODO: implement validation
}

web::json::value Alert::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_MissionIsSet) {
    val[utility::conversions::to_string_t(U("mission"))] =
        ModelBase::toJson(m_Mission);
  }
  if (m_ExpiredIsSet) {
    val[utility::conversions::to_string_t(U("expired"))] =
        ModelBase::toJson(m_Expired);
  }
  if (m_EtaIsSet) {
    val[utility::conversions::to_string_t(U("eta"))] = ModelBase::toJson(m_Eta);
  }
  if (m_RewardTypesIsSet) {
    val[utility::conversions::to_string_t(U("rewardTypes"))] =
        ModelBase::toJson(m_RewardTypes);
  }

  return val;
}

bool Alert::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("mission")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("mission")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Alert_mission> refVal_setMission;
      ok &= ModelBase::fromJson(fieldValue, refVal_setMission);
      setMission(refVal_setMission);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("expired")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("expired")));
    if (!fieldValue.is_null()) {
      bool refVal_setExpired;
      ok &= ModelBase::fromJson(fieldValue, refVal_setExpired);
      setExpired(refVal_setExpired);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("eta")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("eta")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setEta;
      ok &= ModelBase::fromJson(fieldValue, refVal_setEta);
      setEta(refVal_setEta);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("rewardTypes")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("rewardTypes")));
    if (!fieldValue.is_null()) {
      std::vector<std::shared_ptr<RewardType>> refVal_setRewardTypes;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRewardTypes);
      setRewardTypes(refVal_setRewardTypes);
    }
  }
  return ok;
}

void Alert::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                        const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_MissionIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("mission")),
        m_Mission));
  }
  if (m_ExpiredIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("expired")),
        m_Expired));
  }
  if (m_EtaIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("eta")), m_Eta));
  }
  if (m_RewardTypesIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("rewardTypes")),
        m_RewardTypes));
  }
}

bool Alert::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                          const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("mission")))) {
    std::shared_ptr<Alert_mission> refVal_setMission;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("mission"))),
        refVal_setMission);
    setMission(refVal_setMission);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("expired")))) {
    bool refVal_setExpired;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("expired"))),
        refVal_setExpired);
    setExpired(refVal_setExpired);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("eta")))) {
    utility::string_t refVal_setEta;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("eta"))),
        refVal_setEta);
    setEta(refVal_setEta);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("rewardTypes")))) {
    std::vector<std::shared_ptr<RewardType>> refVal_setRewardTypes;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("rewardTypes"))),
        refVal_setRewardTypes);
    setRewardTypes(refVal_setRewardTypes);
  }
  return ok;
}

std::shared_ptr<Alert_mission> Alert::getMission() const { return m_Mission; }

void Alert::setMission(const std::shared_ptr<Alert_mission> &value) {
  m_Mission = value;
  m_MissionIsSet = true;
}

bool Alert::missionIsSet() const { return m_MissionIsSet; }

void Alert::unsetMission() { m_MissionIsSet = false; }
bool Alert::isExpired() const { return m_Expired; }

void Alert::setExpired(bool value) {
  m_Expired = value;
  m_ExpiredIsSet = true;
}

bool Alert::expiredIsSet() const { return m_ExpiredIsSet; }

void Alert::unsetExpired() { m_ExpiredIsSet = false; }
utility::string_t Alert::getEta() const { return m_Eta; }

void Alert::setEta(const utility::string_t &value) {
  m_Eta = value;
  m_EtaIsSet = true;
}

bool Alert::etaIsSet() const { return m_EtaIsSet; }

void Alert::unsetEta() { m_EtaIsSet = false; }
std::vector<std::shared_ptr<RewardType>> &Alert::getRewardTypes() {
  return m_RewardTypes;
}

void Alert::setRewardTypes(
    const std::vector<std::shared_ptr<RewardType>> &value) {
  m_RewardTypes = value;
  m_RewardTypesIsSet = true;
}

bool Alert::rewardTypesIsSet() const { return m_RewardTypesIsSet; }

void Alert::unsetRewardTypes() { m_RewardTypesIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
