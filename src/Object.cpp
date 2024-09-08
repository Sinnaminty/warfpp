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

#include "CppRestOpenAPIClient/Object.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Object::Object() { m_object = web::json::value::object(); }

Object::~Object() {}

void Object::validate() {}

web::json::value Object::toJson() const { return m_object; }

bool Object::fromJson(const web::json::value &val) {
  if (val.is_object()) {
    m_object = val;
    m_IsSet = true;
  }
  return isSet();
}

void Object::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                         const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("object"), m_object));
}

bool Object::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                           const utility::string_t &prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  if (ModelBase::fromHttpContent(
          multipart->getContent(namePrefix +
                                utility::conversions::to_string_t("object")),
          m_object)) {
    m_IsSet = true;
  }
  return isSet();
}

web::json::value Object::getValue(const utility::string_t &key) const {
  return m_object.at(key);
}

void Object::setValue(const utility::string_t &key,
                      const web::json::value &value) {
  if (!value.is_null()) {
    m_object[key] = value;
    m_IsSet = true;
  }
}

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
