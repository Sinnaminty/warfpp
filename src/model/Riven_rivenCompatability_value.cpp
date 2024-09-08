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

#include "CppRestOpenAPIClient/model/Riven_rivenCompatability_value.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Riven_rivenCompatability_value::Riven_rivenCompatability_value() {
  m_RolledIsSet = false;
  m_UnrolledIsSet = false;
}

Riven_rivenCompatability_value::~Riven_rivenCompatability_value() {}

void Riven_rivenCompatability_value::validate() {
  // TODO: implement validation
}

web::json::value Riven_rivenCompatability_value::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_RolledIsSet) {
    val[utility::conversions::to_string_t(U("rolled"))] =
        ModelBase::toJson(m_Rolled);
  }
  if (m_UnrolledIsSet) {
    val[utility::conversions::to_string_t(U("unrolled"))] =
        ModelBase::toJson(m_Unrolled);
  }

  return val;
}

bool Riven_rivenCompatability_value::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("rolled")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("rolled")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<RivenStatistic> refVal_setRolled;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRolled);
      setRolled(refVal_setRolled);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("unrolled")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("unrolled")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<RivenStatistic> refVal_setUnrolled;
      ok &= ModelBase::fromJson(fieldValue, refVal_setUnrolled);
      setUnrolled(refVal_setUnrolled);
    }
  }
  return ok;
}

void Riven_rivenCompatability_value::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_RolledIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("rolled")), m_Rolled));
  }
  if (m_UnrolledIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("unrolled")),
        m_Unrolled));
  }
}

bool Riven_rivenCompatability_value::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("rolled")))) {
    std::shared_ptr<RivenStatistic> refVal_setRolled;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("rolled"))),
        refVal_setRolled);
    setRolled(refVal_setRolled);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("unrolled")))) {
    std::shared_ptr<RivenStatistic> refVal_setUnrolled;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("unrolled"))),
        refVal_setUnrolled);
    setUnrolled(refVal_setUnrolled);
  }
  return ok;
}

std::shared_ptr<RivenStatistic>
Riven_rivenCompatability_value::getRolled() const {
  return m_Rolled;
}

void Riven_rivenCompatability_value::setRolled(
    const std::shared_ptr<RivenStatistic> &value) {
  m_Rolled = value;
  m_RolledIsSet = true;
}

bool Riven_rivenCompatability_value::rolledIsSet() const {
  return m_RolledIsSet;
}

void Riven_rivenCompatability_value::unsetRolled() { m_RolledIsSet = false; }
std::shared_ptr<RivenStatistic>
Riven_rivenCompatability_value::getUnrolled() const {
  return m_Unrolled;
}

void Riven_rivenCompatability_value::setUnrolled(
    const std::shared_ptr<RivenStatistic> &value) {
  m_Unrolled = value;
  m_UnrolledIsSet = true;
}

bool Riven_rivenCompatability_value::unrolledIsSet() const {
  return m_UnrolledIsSet;
}

void Riven_rivenCompatability_value::unsetUnrolled() {
  m_UnrolledIsSet = false;
}
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
