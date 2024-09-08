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

#include "CppRestOpenAPIClient/model/Invasion_allOf_defender.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Invasion_allOf_defender::Invasion_allOf_defender() {
  m_RewardIsSet = false;
  m_FactionIsSet = false;
  m_FactionKeyIsSet = false;
}

Invasion_allOf_defender::~Invasion_allOf_defender() {}

void Invasion_allOf_defender::validate() {
  // TODO: implement validation
}

web::json::value Invasion_allOf_defender::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_RewardIsSet) {
    val[utility::conversions::to_string_t(U("reward"))] =
        ModelBase::toJson(m_Reward);
  }
  if (m_FactionIsSet) {
    val[utility::conversions::to_string_t(U("faction"))] =
        ModelBase::toJson(m_Faction);
  }
  if (m_FactionKeyIsSet) {
    val[utility::conversions::to_string_t(U("factionKey"))] =
        ModelBase::toJson(m_FactionKey);
  }

  return val;
}

bool Invasion_allOf_defender::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("reward")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("reward")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Reward> refVal_setReward;
      ok &= ModelBase::fromJson(fieldValue, refVal_setReward);
      setReward(refVal_setReward);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("faction")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("faction")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Faction> refVal_setFaction;
      ok &= ModelBase::fromJson(fieldValue, refVal_setFaction);
      setFaction(refVal_setFaction);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("factionKey")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("factionKey")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Faction> refVal_setFactionKey;
      ok &= ModelBase::fromJson(fieldValue, refVal_setFactionKey);
      setFactionKey(refVal_setFactionKey);
    }
  }
  return ok;
}

void Invasion_allOf_defender::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_RewardIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("reward")), m_Reward));
  }
  if (m_FactionIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("faction")),
        m_Faction));
  }
  if (m_FactionKeyIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("factionKey")),
        m_FactionKey));
  }
}

bool Invasion_allOf_defender::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("reward")))) {
    std::shared_ptr<Reward> refVal_setReward;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("reward"))),
        refVal_setReward);
    setReward(refVal_setReward);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("faction")))) {
    std::shared_ptr<Faction> refVal_setFaction;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("faction"))),
        refVal_setFaction);
    setFaction(refVal_setFaction);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("factionKey")))) {
    std::shared_ptr<Faction> refVal_setFactionKey;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("factionKey"))),
        refVal_setFactionKey);
    setFactionKey(refVal_setFactionKey);
  }
  return ok;
}

std::shared_ptr<Reward> Invasion_allOf_defender::getReward() const {
  return m_Reward;
}

void Invasion_allOf_defender::setReward(const std::shared_ptr<Reward> &value) {
  m_Reward = value;
  m_RewardIsSet = true;
}

bool Invasion_allOf_defender::rewardIsSet() const { return m_RewardIsSet; }

void Invasion_allOf_defender::unsetReward() { m_RewardIsSet = false; }
std::shared_ptr<Faction> Invasion_allOf_defender::getFaction() const {
  return m_Faction;
}

void Invasion_allOf_defender::setFaction(
    const std::shared_ptr<Faction> &value) {
  m_Faction = value;
  m_FactionIsSet = true;
}

bool Invasion_allOf_defender::factionIsSet() const { return m_FactionIsSet; }

void Invasion_allOf_defender::unsetFaction() { m_FactionIsSet = false; }
std::shared_ptr<Faction> Invasion_allOf_defender::getFactionKey() const {
  return m_FactionKey;
}

void Invasion_allOf_defender::setFactionKey(
    const std::shared_ptr<Faction> &value) {
  m_FactionKey = value;
  m_FactionKeyIsSet = true;
}

bool Invasion_allOf_defender::factionKeyIsSet() const {
  return m_FactionKeyIsSet;
}

void Invasion_allOf_defender::unsetFactionKey() { m_FactionKeyIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
