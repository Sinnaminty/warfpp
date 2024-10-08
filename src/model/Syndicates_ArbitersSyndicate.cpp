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

#include "CppRestOpenAPIClient/model/Syndicates_ArbitersSyndicate.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Syndicates_ArbitersSyndicate::Syndicates_ArbitersSyndicate() {
  m_Name = utility::conversions::to_string_t("");
  m_NameIsSet = false;
}

Syndicates_ArbitersSyndicate::~Syndicates_ArbitersSyndicate() {}

void Syndicates_ArbitersSyndicate::validate() {
  // TODO: implement validation
}

web::json::value Syndicates_ArbitersSyndicate::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_NameIsSet) {
    val[utility::conversions::to_string_t(U("name"))] =
        ModelBase::toJson(m_Name);
  }

  return val;
}

bool Syndicates_ArbitersSyndicate::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("name")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("name")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setName;
      ok &= ModelBase::fromJson(fieldValue, refVal_setName);
      setName(refVal_setName);
    }
  }
  return ok;
}

void Syndicates_ArbitersSyndicate::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_NameIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
  }
}

bool Syndicates_ArbitersSyndicate::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("name")))) {
    utility::string_t refVal_setName;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("name"))),
        refVal_setName);
    setName(refVal_setName);
  }
  return ok;
}

utility::string_t Syndicates_ArbitersSyndicate::getName() const {
  return m_Name;
}

void Syndicates_ArbitersSyndicate::setName(const utility::string_t &value) {
  m_Name = value;
  m_NameIsSet = true;
}

bool Syndicates_ArbitersSyndicate::nameIsSet() const { return m_NameIsSet; }

void Syndicates_ArbitersSyndicate::unsetName() { m_NameIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
