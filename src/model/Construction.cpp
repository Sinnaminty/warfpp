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

#include "CppRestOpenAPIClient/model/Construction.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Construction::Construction() {
  m_Id = utility::conversions::to_string_t("");
  m_IdIsSet = false;
  m_FomorianProgress = utility::conversions::to_string_t("");
  m_FomorianProgressIsSet = false;
  m_RazorbackProgress = utility::conversions::to_string_t("");
  m_RazorbackProgressIsSet = false;
  m_UnknownProgress = utility::conversions::to_string_t("");
  m_UnknownProgressIsSet = false;
}

Construction::~Construction() {}

void Construction::validate() {
  // TODO: implement validation
}

web::json::value Construction::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_IdIsSet) {
    val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
  }
  if (m_FomorianProgressIsSet) {
    val[utility::conversions::to_string_t(U("fomorianProgress"))] =
        ModelBase::toJson(m_FomorianProgress);
  }
  if (m_RazorbackProgressIsSet) {
    val[utility::conversions::to_string_t(U("razorbackProgress"))] =
        ModelBase::toJson(m_RazorbackProgress);
  }
  if (m_UnknownProgressIsSet) {
    val[utility::conversions::to_string_t(U("unknownProgress"))] =
        ModelBase::toJson(m_UnknownProgress);
  }

  return val;
}

bool Construction::fromJson(const web::json::value &val) {
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
  if (val.has_field(utility::conversions::to_string_t(U("fomorianProgress")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("fomorianProgress")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setFomorianProgress;
      ok &= ModelBase::fromJson(fieldValue, refVal_setFomorianProgress);
      setFomorianProgress(refVal_setFomorianProgress);
    }
  }
  if (val.has_field(
          utility::conversions::to_string_t(U("razorbackProgress")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("razorbackProgress")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setRazorbackProgress;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRazorbackProgress);
      setRazorbackProgress(refVal_setRazorbackProgress);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("unknownProgress")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("unknownProgress")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setUnknownProgress;
      ok &= ModelBase::fromJson(fieldValue, refVal_setUnknownProgress);
      setUnknownProgress(refVal_setUnknownProgress);
    }
  }
  return ok;
}

void Construction::toMultipart(std::shared_ptr<MultipartFormData> multipart,
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
  if (m_FomorianProgressIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("fomorianProgress")),
        m_FomorianProgress));
  }
  if (m_RazorbackProgressIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("razorbackProgress")),
        m_RazorbackProgress));
  }
  if (m_UnknownProgressIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("unknownProgress")),
        m_UnknownProgress));
  }
}

bool Construction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
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
          utility::conversions::to_string_t(U("fomorianProgress")))) {
    utility::string_t refVal_setFomorianProgress;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("fomorianProgress"))),
        refVal_setFomorianProgress);
    setFomorianProgress(refVal_setFomorianProgress);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("razorbackProgress")))) {
    utility::string_t refVal_setRazorbackProgress;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("razorbackProgress"))),
        refVal_setRazorbackProgress);
    setRazorbackProgress(refVal_setRazorbackProgress);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("unknownProgress")))) {
    utility::string_t refVal_setUnknownProgress;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("unknownProgress"))),
        refVal_setUnknownProgress);
    setUnknownProgress(refVal_setUnknownProgress);
  }
  return ok;
}

utility::string_t Construction::getId() const { return m_Id; }

void Construction::setId(const utility::string_t &value) {
  m_Id = value;
  m_IdIsSet = true;
}

bool Construction::idIsSet() const { return m_IdIsSet; }

void Construction::unsetId() { m_IdIsSet = false; }
utility::string_t Construction::getFomorianProgress() const {
  return m_FomorianProgress;
}

void Construction::setFomorianProgress(const utility::string_t &value) {
  m_FomorianProgress = value;
  m_FomorianProgressIsSet = true;
}

bool Construction::fomorianProgressIsSet() const {
  return m_FomorianProgressIsSet;
}

void Construction::unsetFomorianProgress() { m_FomorianProgressIsSet = false; }
utility::string_t Construction::getRazorbackProgress() const {
  return m_RazorbackProgress;
}

void Construction::setRazorbackProgress(const utility::string_t &value) {
  m_RazorbackProgress = value;
  m_RazorbackProgressIsSet = true;
}

bool Construction::razorbackProgressIsSet() const {
  return m_RazorbackProgressIsSet;
}

void Construction::unsetRazorbackProgress() {
  m_RazorbackProgressIsSet = false;
}
utility::string_t Construction::getUnknownProgress() const {
  return m_UnknownProgress;
}

void Construction::setUnknownProgress(const utility::string_t &value) {
  m_UnknownProgress = value;
  m_UnknownProgressIsSet = true;
}

bool Construction::unknownProgressIsSet() const {
  return m_UnknownProgressIsSet;
}

void Construction::unsetUnknownProgress() { m_UnknownProgressIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
