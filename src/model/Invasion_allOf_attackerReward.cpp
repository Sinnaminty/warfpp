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

#include "CppRestOpenAPIClient/model/Invasion_allOf_attackerReward.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Invasion_allOf_attackerReward::Invasion_allOf_attackerReward() {
  m_CountedItemsIsSet = false;
  m_Thumbnail = utility::conversions::to_string_t("");
  m_ThumbnailIsSet = false;
  m_Color = 0.0;
  m_ColorIsSet = false;
  m_Credits = 0;
  m_CreditsIsSet = false;
  m_AsString = utility::conversions::to_string_t("");
  m_AsStringIsSet = false;
  m_ItemsIsSet = false;
  m_ItemString = utility::conversions::to_string_t("");
  m_ItemStringIsSet = false;
}

Invasion_allOf_attackerReward::~Invasion_allOf_attackerReward() {}

void Invasion_allOf_attackerReward::validate() {
  // TODO: implement validation
}

web::json::value Invasion_allOf_attackerReward::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_CountedItemsIsSet) {
    val[utility::conversions::to_string_t(U("countedItems"))] =
        ModelBase::toJson(m_CountedItems);
  }
  if (m_ThumbnailIsSet) {
    val[utility::conversions::to_string_t(U("thumbnail"))] =
        ModelBase::toJson(m_Thumbnail);
  }
  if (m_ColorIsSet) {
    val[utility::conversions::to_string_t(U("color"))] =
        ModelBase::toJson(m_Color);
  }
  if (m_CreditsIsSet) {
    val[utility::conversions::to_string_t(U("credits"))] =
        ModelBase::toJson(m_Credits);
  }
  if (m_AsStringIsSet) {
    val[utility::conversions::to_string_t(U("asString"))] =
        ModelBase::toJson(m_AsString);
  }
  if (m_ItemsIsSet) {
    val[utility::conversions::to_string_t(U("items"))] =
        ModelBase::toJson(m_Items);
  }
  if (m_ItemStringIsSet) {
    val[utility::conversions::to_string_t(U("itemString"))] =
        ModelBase::toJson(m_ItemString);
  }

  return val;
}

bool Invasion_allOf_attackerReward::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("countedItems")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("countedItems")));
    if (!fieldValue.is_null()) {
      std::set<std::shared_ptr<Reward_countedItems_inner>>
          refVal_setCountedItems;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCountedItems);
      setCountedItems(refVal_setCountedItems);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("thumbnail")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("thumbnail")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setThumbnail;
      ok &= ModelBase::fromJson(fieldValue, refVal_setThumbnail);
      setThumbnail(refVal_setThumbnail);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("color")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("color")));
    if (!fieldValue.is_null()) {
      double refVal_setColor;
      ok &= ModelBase::fromJson(fieldValue, refVal_setColor);
      setColor(refVal_setColor);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("credits")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("credits")));
    if (!fieldValue.is_null()) {
      int32_t refVal_setCredits;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCredits);
      setCredits(refVal_setCredits);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("asString")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("asString")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setAsString;
      ok &= ModelBase::fromJson(fieldValue, refVal_setAsString);
      setAsString(refVal_setAsString);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("items")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("items")));
    if (!fieldValue.is_null()) {
      std::vector<utility::string_t> refVal_setItems;
      ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
      setItems(refVal_setItems);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("itemString")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("itemString")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setItemString;
      ok &= ModelBase::fromJson(fieldValue, refVal_setItemString);
      setItemString(refVal_setItemString);
    }
  }
  return ok;
}

void Invasion_allOf_attackerReward::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_CountedItemsIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("countedItems")),
        m_CountedItems));
  }
  if (m_ThumbnailIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("thumbnail")),
        m_Thumbnail));
  }
  if (m_ColorIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("color")), m_Color));
  }
  if (m_CreditsIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("credits")),
        m_Credits));
  }
  if (m_AsStringIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("asString")),
        m_AsString));
  }
  if (m_ItemsIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
  }
  if (m_ItemStringIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("itemString")),
        m_ItemString));
  }
}

bool Invasion_allOf_attackerReward::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(
          utility::conversions::to_string_t(U("countedItems")))) {
    std::set<std::shared_ptr<Reward_countedItems_inner>> refVal_setCountedItems;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("countedItems"))),
        refVal_setCountedItems);
    setCountedItems(refVal_setCountedItems);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("thumbnail")))) {
    utility::string_t refVal_setThumbnail;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("thumbnail"))),
        refVal_setThumbnail);
    setThumbnail(refVal_setThumbnail);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("color")))) {
    double refVal_setColor;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("color"))),
        refVal_setColor);
    setColor(refVal_setColor);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("credits")))) {
    int32_t refVal_setCredits;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("credits"))),
        refVal_setCredits);
    setCredits(refVal_setCredits);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("asString")))) {
    utility::string_t refVal_setAsString;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("asString"))),
        refVal_setAsString);
    setAsString(refVal_setAsString);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("items")))) {
    std::vector<utility::string_t> refVal_setItems;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("items"))),
        refVal_setItems);
    setItems(refVal_setItems);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("itemString")))) {
    utility::string_t refVal_setItemString;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("itemString"))),
        refVal_setItemString);
    setItemString(refVal_setItemString);
  }
  return ok;
}

std::set<std::shared_ptr<Reward_countedItems_inner>> &
Invasion_allOf_attackerReward::getCountedItems() {
  return m_CountedItems;
}

void Invasion_allOf_attackerReward::setCountedItems(
    const std::set<std::shared_ptr<Reward_countedItems_inner>> &value) {
  m_CountedItems = value;
  m_CountedItemsIsSet = true;
}

bool Invasion_allOf_attackerReward::countedItemsIsSet() const {
  return m_CountedItemsIsSet;
}

void Invasion_allOf_attackerReward::unsetCountedItems() {
  m_CountedItemsIsSet = false;
}
utility::string_t Invasion_allOf_attackerReward::getThumbnail() const {
  return m_Thumbnail;
}

void Invasion_allOf_attackerReward::setThumbnail(
    const utility::string_t &value) {
  m_Thumbnail = value;
  m_ThumbnailIsSet = true;
}

bool Invasion_allOf_attackerReward::thumbnailIsSet() const {
  return m_ThumbnailIsSet;
}

void Invasion_allOf_attackerReward::unsetThumbnail() {
  m_ThumbnailIsSet = false;
}
double Invasion_allOf_attackerReward::getColor() const { return m_Color; }

void Invasion_allOf_attackerReward::setColor(double value) {
  m_Color = value;
  m_ColorIsSet = true;
}

bool Invasion_allOf_attackerReward::colorIsSet() const { return m_ColorIsSet; }

void Invasion_allOf_attackerReward::unsetColor() { m_ColorIsSet = false; }
int32_t Invasion_allOf_attackerReward::getCredits() const { return m_Credits; }

void Invasion_allOf_attackerReward::setCredits(int32_t value) {
  m_Credits = value;
  m_CreditsIsSet = true;
}

bool Invasion_allOf_attackerReward::creditsIsSet() const {
  return m_CreditsIsSet;
}

void Invasion_allOf_attackerReward::unsetCredits() { m_CreditsIsSet = false; }
utility::string_t Invasion_allOf_attackerReward::getAsString() const {
  return m_AsString;
}

void Invasion_allOf_attackerReward::setAsString(
    const utility::string_t &value) {
  m_AsString = value;
  m_AsStringIsSet = true;
}

bool Invasion_allOf_attackerReward::asStringIsSet() const {
  return m_AsStringIsSet;
}

void Invasion_allOf_attackerReward::unsetAsString() { m_AsStringIsSet = false; }
std::vector<utility::string_t> &Invasion_allOf_attackerReward::getItems() {
  return m_Items;
}

void Invasion_allOf_attackerReward::setItems(
    const std::vector<utility::string_t> &value) {
  m_Items = value;
  m_ItemsIsSet = true;
}

bool Invasion_allOf_attackerReward::itemsIsSet() const { return m_ItemsIsSet; }

void Invasion_allOf_attackerReward::unsetItems() { m_ItemsIsSet = false; }
utility::string_t Invasion_allOf_attackerReward::getItemString() const {
  return m_ItemString;
}

void Invasion_allOf_attackerReward::setItemString(
    const utility::string_t &value) {
  m_ItemString = value;
  m_ItemStringIsSet = true;
}

bool Invasion_allOf_attackerReward::itemStringIsSet() const {
  return m_ItemStringIsSet;
}

void Invasion_allOf_attackerReward::unsetItemString() {
  m_ItemStringIsSet = false;
}
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
