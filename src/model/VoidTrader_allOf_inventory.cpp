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

#include "CppRestOpenAPIClient/model/VoidTrader_allOf_inventory.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

VoidTrader_allOf_inventory::VoidTrader_allOf_inventory() {
  m_Item = utility::conversions::to_string_t("");
  m_ItemIsSet = false;
  m_Ducats = 0.0;
  m_DucatsIsSet = false;
  m_Credits = 0.0;
  m_CreditsIsSet = false;
}

VoidTrader_allOf_inventory::~VoidTrader_allOf_inventory() {}

void VoidTrader_allOf_inventory::validate() {
  // TODO: implement validation
}

web::json::value VoidTrader_allOf_inventory::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_ItemIsSet) {
    val[utility::conversions::to_string_t(U("item"))] =
        ModelBase::toJson(m_Item);
  }
  if (m_DucatsIsSet) {
    val[utility::conversions::to_string_t(U("ducats"))] =
        ModelBase::toJson(m_Ducats);
  }
  if (m_CreditsIsSet) {
    val[utility::conversions::to_string_t(U("credits"))] =
        ModelBase::toJson(m_Credits);
  }

  return val;
}

bool VoidTrader_allOf_inventory::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("item")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("item")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setItem;
      ok &= ModelBase::fromJson(fieldValue, refVal_setItem);
      setItem(refVal_setItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("ducats")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("ducats")));
    if (!fieldValue.is_null()) {
      double refVal_setDucats;
      ok &= ModelBase::fromJson(fieldValue, refVal_setDucats);
      setDucats(refVal_setDucats);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("credits")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("credits")));
    if (!fieldValue.is_null()) {
      double refVal_setCredits;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCredits);
      setCredits(refVal_setCredits);
    }
  }
  return ok;
}

void VoidTrader_allOf_inventory::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_ItemIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("item")), m_Item));
  }
  if (m_DucatsIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("ducats")), m_Ducats));
  }
  if (m_CreditsIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("credits")),
        m_Credits));
  }
}

bool VoidTrader_allOf_inventory::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("item")))) {
    utility::string_t refVal_setItem;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("item"))),
        refVal_setItem);
    setItem(refVal_setItem);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("ducats")))) {
    double refVal_setDucats;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("ducats"))),
        refVal_setDucats);
    setDucats(refVal_setDucats);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("credits")))) {
    double refVal_setCredits;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("credits"))),
        refVal_setCredits);
    setCredits(refVal_setCredits);
  }
  return ok;
}

utility::string_t VoidTrader_allOf_inventory::getItem() const { return m_Item; }

void VoidTrader_allOf_inventory::setItem(const utility::string_t &value) {
  m_Item = value;
  m_ItemIsSet = true;
}

bool VoidTrader_allOf_inventory::itemIsSet() const { return m_ItemIsSet; }

void VoidTrader_allOf_inventory::unsetItem() { m_ItemIsSet = false; }
double VoidTrader_allOf_inventory::getDucats() const { return m_Ducats; }

void VoidTrader_allOf_inventory::setDucats(double value) {
  m_Ducats = value;
  m_DucatsIsSet = true;
}

bool VoidTrader_allOf_inventory::ducatsIsSet() const { return m_DucatsIsSet; }

void VoidTrader_allOf_inventory::unsetDucats() { m_DucatsIsSet = false; }
double VoidTrader_allOf_inventory::getCredits() const { return m_Credits; }

void VoidTrader_allOf_inventory::setCredits(double value) {
  m_Credits = value;
  m_CreditsIsSet = true;
}

bool VoidTrader_allOf_inventory::creditsIsSet() const { return m_CreditsIsSet; }

void VoidTrader_allOf_inventory::unsetCredits() { m_CreditsIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
