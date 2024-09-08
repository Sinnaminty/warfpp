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

#include "CppRestOpenAPIClient/model/Language.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

namespace {
using EnumUnderlyingType = utility::string_t;

Language::eLanguage toEnum(const EnumUnderlyingType &val) {
  if (val == utility::conversions::to_string_t(U("de")))
    return Language::eLanguage::Language_DE;
  if (val == utility::conversions::to_string_t(U("es")))
    return Language::eLanguage::Language_ES;
  if (val == utility::conversions::to_string_t(U("fr")))
    return Language::eLanguage::Language_FR;
  if (val == utility::conversions::to_string_t(U("it")))
    return Language::eLanguage::Language_IT;
  if (val == utility::conversions::to_string_t(U("ko")))
    return Language::eLanguage::Language_KO;
  if (val == utility::conversions::to_string_t(U("pl")))
    return Language::eLanguage::Language_PL;
  if (val == utility::conversions::to_string_t(U("pt")))
    return Language::eLanguage::Language_PT;
  if (val == utility::conversions::to_string_t(U("ru")))
    return Language::eLanguage::Language_RU;
  if (val == utility::conversions::to_string_t(U("zh")))
    return Language::eLanguage::Language_ZH;
  if (val == utility::conversions::to_string_t(U("en")))
    return Language::eLanguage::Language_EN;
  if (val == utility::conversions::to_string_t(U("uk")))
    return Language::eLanguage::Language_UK;
  return {};
}

EnumUnderlyingType fromEnum(Language::eLanguage e) {
  switch (e) {
  case Language::eLanguage::Language_DE:
    return U("de");
  case Language::eLanguage::Language_ES:
    return U("es");
  case Language::eLanguage::Language_FR:
    return U("fr");
  case Language::eLanguage::Language_IT:
    return U("it");
  case Language::eLanguage::Language_KO:
    return U("ko");
  case Language::eLanguage::Language_PL:
    return U("pl");
  case Language::eLanguage::Language_PT:
    return U("pt");
  case Language::eLanguage::Language_RU:
    return U("ru");
  case Language::eLanguage::Language_ZH:
    return U("zh");
  case Language::eLanguage::Language_EN:
    return U("en");
  case Language::eLanguage::Language_UK:
    return U("uk");
  default:
    break;
  }
  return {};
}
} // namespace

Language::Language() {}

Language::~Language() {}

void Language::validate() {
  // TODO: implement validation
}

web::json::value Language::toJson() const {
  auto val = fromEnum(m_value);
  return web::json::value(val);
}

bool Language::fromJson(const web::json::value &val) {
  m_value = toEnum(val.as_string());
  return true;
}

void Language::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                           const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (!namePrefix.empty() && namePrefix.back() != U('.')) {
    namePrefix.push_back(U('.'));
  }

  auto e = fromEnum(m_value);
  multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool Language::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (!namePrefix.empty() && namePrefix.back() != U('.')) {
    namePrefix.push_back(U('.'));
  }
  {
    EnumUnderlyingType e;
    ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
    if (ok) {
      auto v = toEnum(e);
      setValue(v);
    }
  }
  return ok;
}

Language::eLanguage Language::getValue() const { return m_value; }
utility::string_t Language::toString() const { return fromEnum(m_value); }

void Language::setValue(Language::eLanguage const value) { m_value = value; }

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
