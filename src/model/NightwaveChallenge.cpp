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

#include "CppRestOpenAPIClient/model/NightwaveChallenge.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

NightwaveChallenge::NightwaveChallenge() {
  m_Id = utility::conversions::to_string_t("");
  m_IdIsSet = false;
  m_Activation = utility::datetime();
  m_ActivationIsSet = false;
  m_Expiry = utility::datetime();
  m_ExpiryIsSet = false;
  m_StartString = utility::conversions::to_string_t("");
  m_StartStringIsSet = false;
  m_Active = false;
  m_ActiveIsSet = false;
  m_IsDaily = false;
  m_IsDailyIsSet = false;
  m_IsElite = false;
  m_IsEliteIsSet = false;
  m_Title = utility::conversions::to_string_t("");
  m_TitleIsSet = false;
  m_Desc = utility::conversions::to_string_t("");
  m_DescIsSet = false;
  m_Reputation = 0.0;
  m_ReputationIsSet = false;
}

NightwaveChallenge::~NightwaveChallenge() {}

void NightwaveChallenge::validate() {
  // TODO: implement validation
}

web::json::value NightwaveChallenge::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_IdIsSet) {
    val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
  }
  if (m_ActivationIsSet) {
    val[utility::conversions::to_string_t(U("activation"))] =
        ModelBase::toJson(m_Activation);
  }
  if (m_ExpiryIsSet) {
    val[utility::conversions::to_string_t(U("expiry"))] =
        ModelBase::toJson(m_Expiry);
  }
  if (m_StartStringIsSet) {
    val[utility::conversions::to_string_t(U("startString"))] =
        ModelBase::toJson(m_StartString);
  }
  if (m_ActiveIsSet) {
    val[utility::conversions::to_string_t(U("active"))] =
        ModelBase::toJson(m_Active);
  }
  if (m_IsDailyIsSet) {
    val[utility::conversions::to_string_t(U("isDaily"))] =
        ModelBase::toJson(m_IsDaily);
  }
  if (m_IsEliteIsSet) {
    val[utility::conversions::to_string_t(U("isElite"))] =
        ModelBase::toJson(m_IsElite);
  }
  if (m_TitleIsSet) {
    val[utility::conversions::to_string_t(U("title"))] =
        ModelBase::toJson(m_Title);
  }
  if (m_DescIsSet) {
    val[utility::conversions::to_string_t(U("desc"))] =
        ModelBase::toJson(m_Desc);
  }
  if (m_ReputationIsSet) {
    val[utility::conversions::to_string_t(U("reputation"))] =
        ModelBase::toJson(m_Reputation);
  }

  return val;
}

bool NightwaveChallenge::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("id")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("id")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setId;
      ok &= ModelBase::fromJson(fieldValue, refVal_setId);
      setId(refVal_setId);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("activation")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("activation")));
    if (!fieldValue.is_null()) {
      utility::datetime refVal_setActivation;
      ok &= ModelBase::fromJson(fieldValue, refVal_setActivation);
      setActivation(refVal_setActivation);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("expiry")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("expiry")));
    if (!fieldValue.is_null()) {
      utility::datetime refVal_setExpiry;
      ok &= ModelBase::fromJson(fieldValue, refVal_setExpiry);
      setExpiry(refVal_setExpiry);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("startString")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("startString")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setStartString;
      ok &= ModelBase::fromJson(fieldValue, refVal_setStartString);
      setStartString(refVal_setStartString);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("active")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("active")));
    if (!fieldValue.is_null()) {
      bool refVal_setActive;
      ok &= ModelBase::fromJson(fieldValue, refVal_setActive);
      setActive(refVal_setActive);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("isDaily")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("isDaily")));
    if (!fieldValue.is_null()) {
      bool refVal_setIsDaily;
      ok &= ModelBase::fromJson(fieldValue, refVal_setIsDaily);
      setIsDaily(refVal_setIsDaily);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("isElite")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("isElite")));
    if (!fieldValue.is_null()) {
      bool refVal_setIsElite;
      ok &= ModelBase::fromJson(fieldValue, refVal_setIsElite);
      setIsElite(refVal_setIsElite);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("title")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("title")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setTitle;
      ok &= ModelBase::fromJson(fieldValue, refVal_setTitle);
      setTitle(refVal_setTitle);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("desc")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("desc")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setDesc;
      ok &= ModelBase::fromJson(fieldValue, refVal_setDesc);
      setDesc(refVal_setDesc);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("reputation")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("reputation")));
    if (!fieldValue.is_null()) {
      double refVal_setReputation;
      ok &= ModelBase::fromJson(fieldValue, refVal_setReputation);
      setReputation(refVal_setReputation);
    }
  }
  return ok;
}

void NightwaveChallenge::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_IdIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
  }
  if (m_ActivationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("activation")),
        m_Activation));
  }
  if (m_ExpiryIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("expiry")), m_Expiry));
  }
  if (m_StartStringIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("startString")),
        m_StartString));
  }
  if (m_ActiveIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("active")), m_Active));
  }
  if (m_IsDailyIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("isDaily")),
        m_IsDaily));
  }
  if (m_IsEliteIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("isElite")),
        m_IsElite));
  }
  if (m_TitleIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
  }
  if (m_DescIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("desc")), m_Desc));
  }
  if (m_ReputationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("reputation")),
        m_Reputation));
  }
}

bool NightwaveChallenge::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("id")))) {
    utility::string_t refVal_setId;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("id"))),
        refVal_setId);
    setId(refVal_setId);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("activation")))) {
    utility::datetime refVal_setActivation;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("activation"))),
        refVal_setActivation);
    setActivation(refVal_setActivation);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("expiry")))) {
    utility::datetime refVal_setExpiry;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("expiry"))),
        refVal_setExpiry);
    setExpiry(refVal_setExpiry);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("startString")))) {
    utility::string_t refVal_setStartString;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("startString"))),
        refVal_setStartString);
    setStartString(refVal_setStartString);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("active")))) {
    bool refVal_setActive;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("active"))),
        refVal_setActive);
    setActive(refVal_setActive);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("isDaily")))) {
    bool refVal_setIsDaily;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("isDaily"))),
        refVal_setIsDaily);
    setIsDaily(refVal_setIsDaily);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("isElite")))) {
    bool refVal_setIsElite;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("isElite"))),
        refVal_setIsElite);
    setIsElite(refVal_setIsElite);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("title")))) {
    utility::string_t refVal_setTitle;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("title"))),
        refVal_setTitle);
    setTitle(refVal_setTitle);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("desc")))) {
    utility::string_t refVal_setDesc;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("desc"))),
        refVal_setDesc);
    setDesc(refVal_setDesc);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("reputation")))) {
    double refVal_setReputation;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("reputation"))),
        refVal_setReputation);
    setReputation(refVal_setReputation);
  }
  return ok;
}

utility::string_t NightwaveChallenge::getId() const { return m_Id; }

void NightwaveChallenge::setId(const utility::string_t &value) {
  m_Id = value;
  m_IdIsSet = true;
}

bool NightwaveChallenge::idIsSet() const { return m_IdIsSet; }

void NightwaveChallenge::unsetId() { m_IdIsSet = false; }
utility::datetime NightwaveChallenge::getActivation() const {
  return m_Activation;
}

void NightwaveChallenge::setActivation(const utility::datetime &value) {
  m_Activation = value;
  m_ActivationIsSet = true;
}

bool NightwaveChallenge::activationIsSet() const { return m_ActivationIsSet; }

void NightwaveChallenge::unsetActivation() { m_ActivationIsSet = false; }
utility::datetime NightwaveChallenge::getExpiry() const { return m_Expiry; }

void NightwaveChallenge::setExpiry(const utility::datetime &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}

bool NightwaveChallenge::expiryIsSet() const { return m_ExpiryIsSet; }

void NightwaveChallenge::unsetExpiry() { m_ExpiryIsSet = false; }
utility::string_t NightwaveChallenge::getStartString() const {
  return m_StartString;
}

void NightwaveChallenge::setStartString(const utility::string_t &value) {
  m_StartString = value;
  m_StartStringIsSet = true;
}

bool NightwaveChallenge::startStringIsSet() const { return m_StartStringIsSet; }

void NightwaveChallenge::unsetStartString() { m_StartStringIsSet = false; }
bool NightwaveChallenge::isActive() const { return m_Active; }

void NightwaveChallenge::setActive(bool value) {
  m_Active = value;
  m_ActiveIsSet = true;
}

bool NightwaveChallenge::activeIsSet() const { return m_ActiveIsSet; }

void NightwaveChallenge::unsetActive() { m_ActiveIsSet = false; }
bool NightwaveChallenge::isIsDaily() const { return m_IsDaily; }

void NightwaveChallenge::setIsDaily(bool value) {
  m_IsDaily = value;
  m_IsDailyIsSet = true;
}

bool NightwaveChallenge::isDailyIsSet() const { return m_IsDailyIsSet; }

void NightwaveChallenge::unsetIsDaily() { m_IsDailyIsSet = false; }
bool NightwaveChallenge::isIsElite() const { return m_IsElite; }

void NightwaveChallenge::setIsElite(bool value) {
  m_IsElite = value;
  m_IsEliteIsSet = true;
}

bool NightwaveChallenge::isEliteIsSet() const { return m_IsEliteIsSet; }

void NightwaveChallenge::unsetIsElite() { m_IsEliteIsSet = false; }
utility::string_t NightwaveChallenge::getTitle() const { return m_Title; }

void NightwaveChallenge::setTitle(const utility::string_t &value) {
  m_Title = value;
  m_TitleIsSet = true;
}

bool NightwaveChallenge::titleIsSet() const { return m_TitleIsSet; }

void NightwaveChallenge::unsetTitle() { m_TitleIsSet = false; }
utility::string_t NightwaveChallenge::getDesc() const { return m_Desc; }

void NightwaveChallenge::setDesc(const utility::string_t &value) {
  m_Desc = value;
  m_DescIsSet = true;
}

bool NightwaveChallenge::descIsSet() const { return m_DescIsSet; }

void NightwaveChallenge::unsetDesc() { m_DescIsSet = false; }
double NightwaveChallenge::getReputation() const { return m_Reputation; }

void NightwaveChallenge::setReputation(double value) {
  m_Reputation = value;
  m_ReputationIsSet = true;
}

bool NightwaveChallenge::reputationIsSet() const { return m_ReputationIsSet; }

void NightwaveChallenge::unsetReputation() { m_ReputationIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
