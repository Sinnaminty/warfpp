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

#include "CppRestOpenAPIClient/model/Conclave_categories.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Conclave_categories::Conclave_categories() {
  m_PVPChallengeTypeCategory_DAILY_ROOTIsSet = false;
  m_PVPChallengeTypeCategory_DAILYIsSet = false;
  m_PVPChallengeTypeCategory_WEEKLYIsSet = false;
  m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet = false;
  m_PVPChallengeTypeCategory_MODEAFFECTORIsSet = false;
}

Conclave_categories::~Conclave_categories() {}

void Conclave_categories::validate() {
  // TODO: implement validation
}

web::json::value Conclave_categories::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_PVPChallengeTypeCategory_DAILY_ROOTIsSet) {
    val[utility::conversions::to_string_t(
        U("PVPChallengeTypeCategory_DAILY_ROOT"))] =
        ModelBase::toJson(m_PVPChallengeTypeCategory_DAILY_ROOT);
  }
  if (m_PVPChallengeTypeCategory_DAILYIsSet) {
    val[utility::conversions::to_string_t(
        U("PVPChallengeTypeCategory_DAILY"))] =
        ModelBase::toJson(m_PVPChallengeTypeCategory_DAILY);
  }
  if (m_PVPChallengeTypeCategory_WEEKLYIsSet) {
    val[utility::conversions::to_string_t(
        U("PVPChallengeTypeCategory_WEEKLY"))] =
        ModelBase::toJson(m_PVPChallengeTypeCategory_WEEKLY);
  }
  if (m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet) {
    val[utility::conversions::to_string_t(
        U("PVPChallengeTypeCategory_WEEKLY_ROOT"))] =
        ModelBase::toJson(m_PVPChallengeTypeCategory_WEEKLY_ROOT);
  }
  if (m_PVPChallengeTypeCategory_MODEAFFECTORIsSet) {
    val[utility::conversions::to_string_t(
        U("PVPChallengeTypeCategory_MODEAFFECTOR"))] =
        ModelBase::toJson(m_PVPChallengeTypeCategory_MODEAFFECTOR);
  }

  return val;
}

bool Conclave_categories::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_DAILY_ROOT")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_DAILY_ROOT")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Conclave_modes_PVPMODE_ALL>
          refVal_setPVPChallengeTypeCategoryDAILYROOT;
      ok &= ModelBase::fromJson(fieldValue,
                                refVal_setPVPChallengeTypeCategoryDAILYROOT);
      setPVPChallengeTypeCategoryDAILYROOT(
          refVal_setPVPChallengeTypeCategoryDAILYROOT);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_DAILY")))) {
    const web::json::value &fieldValue = val.at(
        utility::conversions::to_string_t(U("PVPChallengeTypeCategory_DAILY")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Conclave_modes_PVPMODE_ALL>
          refVal_setPVPChallengeTypeCategoryDAILY;
      ok &= ModelBase::fromJson(fieldValue,
                                refVal_setPVPChallengeTypeCategoryDAILY);
      setPVPChallengeTypeCategoryDAILY(refVal_setPVPChallengeTypeCategoryDAILY);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_WEEKLY")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_WEEKLY")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Conclave_modes_PVPMODE_ALL>
          refVal_setPVPChallengeTypeCategoryWEEKLY;
      ok &= ModelBase::fromJson(fieldValue,
                                refVal_setPVPChallengeTypeCategoryWEEKLY);
      setPVPChallengeTypeCategoryWEEKLY(
          refVal_setPVPChallengeTypeCategoryWEEKLY);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_WEEKLY_ROOT")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_WEEKLY_ROOT")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Conclave_modes_PVPMODE_ALL>
          refVal_setPVPChallengeTypeCategoryWEEKLYROOT;
      ok &= ModelBase::fromJson(fieldValue,
                                refVal_setPVPChallengeTypeCategoryWEEKLYROOT);
      setPVPChallengeTypeCategoryWEEKLYROOT(
          refVal_setPVPChallengeTypeCategoryWEEKLYROOT);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_MODEAFFECTOR")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_MODEAFFECTOR")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Conclave_modes_PVPMODE_ALL>
          refVal_setPVPChallengeTypeCategoryMODEAFFECTOR;
      ok &= ModelBase::fromJson(fieldValue,
                                refVal_setPVPChallengeTypeCategoryMODEAFFECTOR);
      setPVPChallengeTypeCategoryMODEAFFECTOR(
          refVal_setPVPChallengeTypeCategoryMODEAFFECTOR);
    }
  }
  return ok;
}

void Conclave_categories::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_PVPChallengeTypeCategory_DAILY_ROOTIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(
                         U("PVPChallengeTypeCategory_DAILY_ROOT")),
        m_PVPChallengeTypeCategory_DAILY_ROOT));
  }
  if (m_PVPChallengeTypeCategory_DAILYIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(
                         U("PVPChallengeTypeCategory_DAILY")),
        m_PVPChallengeTypeCategory_DAILY));
  }
  if (m_PVPChallengeTypeCategory_WEEKLYIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(
                         U("PVPChallengeTypeCategory_WEEKLY")),
        m_PVPChallengeTypeCategory_WEEKLY));
  }
  if (m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(
                         U("PVPChallengeTypeCategory_WEEKLY_ROOT")),
        m_PVPChallengeTypeCategory_WEEKLY_ROOT));
  }
  if (m_PVPChallengeTypeCategory_MODEAFFECTORIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(
                         U("PVPChallengeTypeCategory_MODEAFFECTOR")),
        m_PVPChallengeTypeCategory_MODEAFFECTOR));
  }
}

bool Conclave_categories::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_DAILY_ROOT")))) {
    std::shared_ptr<Conclave_modes_PVPMODE_ALL>
        refVal_setPVPChallengeTypeCategoryDAILYROOT;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_DAILY_ROOT"))),
        refVal_setPVPChallengeTypeCategoryDAILYROOT);
    setPVPChallengeTypeCategoryDAILYROOT(
        refVal_setPVPChallengeTypeCategoryDAILYROOT);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_DAILY")))) {
    std::shared_ptr<Conclave_modes_PVPMODE_ALL>
        refVal_setPVPChallengeTypeCategoryDAILY;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_DAILY"))),
        refVal_setPVPChallengeTypeCategoryDAILY);
    setPVPChallengeTypeCategoryDAILY(refVal_setPVPChallengeTypeCategoryDAILY);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_WEEKLY")))) {
    std::shared_ptr<Conclave_modes_PVPMODE_ALL>
        refVal_setPVPChallengeTypeCategoryWEEKLY;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_WEEKLY"))),
        refVal_setPVPChallengeTypeCategoryWEEKLY);
    setPVPChallengeTypeCategoryWEEKLY(refVal_setPVPChallengeTypeCategoryWEEKLY);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_WEEKLY_ROOT")))) {
    std::shared_ptr<Conclave_modes_PVPMODE_ALL>
        refVal_setPVPChallengeTypeCategoryWEEKLYROOT;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_WEEKLY_ROOT"))),
        refVal_setPVPChallengeTypeCategoryWEEKLYROOT);
    setPVPChallengeTypeCategoryWEEKLYROOT(
        refVal_setPVPChallengeTypeCategoryWEEKLYROOT);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(
          U("PVPChallengeTypeCategory_MODEAFFECTOR")))) {
    std::shared_ptr<Conclave_modes_PVPMODE_ALL>
        refVal_setPVPChallengeTypeCategoryMODEAFFECTOR;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(
            U("PVPChallengeTypeCategory_MODEAFFECTOR"))),
        refVal_setPVPChallengeTypeCategoryMODEAFFECTOR);
    setPVPChallengeTypeCategoryMODEAFFECTOR(
        refVal_setPVPChallengeTypeCategoryMODEAFFECTOR);
  }
  return ok;
}

std::shared_ptr<Conclave_modes_PVPMODE_ALL>
Conclave_categories::getPVPChallengeTypeCategoryDAILYROOT() const {
  return m_PVPChallengeTypeCategory_DAILY_ROOT;
}

void Conclave_categories::setPVPChallengeTypeCategoryDAILYROOT(
    const std::shared_ptr<Conclave_modes_PVPMODE_ALL> &value) {
  m_PVPChallengeTypeCategory_DAILY_ROOT = value;
  m_PVPChallengeTypeCategory_DAILY_ROOTIsSet = true;
}

bool Conclave_categories::pVPChallengeTypeCategoryDAILYROOTIsSet() const {
  return m_PVPChallengeTypeCategory_DAILY_ROOTIsSet;
}

void Conclave_categories::unsetPVPChallengeTypeCategory_DAILY_ROOT() {
  m_PVPChallengeTypeCategory_DAILY_ROOTIsSet = false;
}
std::shared_ptr<Conclave_modes_PVPMODE_ALL>
Conclave_categories::getPVPChallengeTypeCategoryDAILY() const {
  return m_PVPChallengeTypeCategory_DAILY;
}

void Conclave_categories::setPVPChallengeTypeCategoryDAILY(
    const std::shared_ptr<Conclave_modes_PVPMODE_ALL> &value) {
  m_PVPChallengeTypeCategory_DAILY = value;
  m_PVPChallengeTypeCategory_DAILYIsSet = true;
}

bool Conclave_categories::pVPChallengeTypeCategoryDAILYIsSet() const {
  return m_PVPChallengeTypeCategory_DAILYIsSet;
}

void Conclave_categories::unsetPVPChallengeTypeCategory_DAILY() {
  m_PVPChallengeTypeCategory_DAILYIsSet = false;
}
std::shared_ptr<Conclave_modes_PVPMODE_ALL>
Conclave_categories::getPVPChallengeTypeCategoryWEEKLY() const {
  return m_PVPChallengeTypeCategory_WEEKLY;
}

void Conclave_categories::setPVPChallengeTypeCategoryWEEKLY(
    const std::shared_ptr<Conclave_modes_PVPMODE_ALL> &value) {
  m_PVPChallengeTypeCategory_WEEKLY = value;
  m_PVPChallengeTypeCategory_WEEKLYIsSet = true;
}

bool Conclave_categories::pVPChallengeTypeCategoryWEEKLYIsSet() const {
  return m_PVPChallengeTypeCategory_WEEKLYIsSet;
}

void Conclave_categories::unsetPVPChallengeTypeCategory_WEEKLY() {
  m_PVPChallengeTypeCategory_WEEKLYIsSet = false;
}
std::shared_ptr<Conclave_modes_PVPMODE_ALL>
Conclave_categories::getPVPChallengeTypeCategoryWEEKLYROOT() const {
  return m_PVPChallengeTypeCategory_WEEKLY_ROOT;
}

void Conclave_categories::setPVPChallengeTypeCategoryWEEKLYROOT(
    const std::shared_ptr<Conclave_modes_PVPMODE_ALL> &value) {
  m_PVPChallengeTypeCategory_WEEKLY_ROOT = value;
  m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet = true;
}

bool Conclave_categories::pVPChallengeTypeCategoryWEEKLYROOTIsSet() const {
  return m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet;
}

void Conclave_categories::unsetPVPChallengeTypeCategory_WEEKLY_ROOT() {
  m_PVPChallengeTypeCategory_WEEKLY_ROOTIsSet = false;
}
std::shared_ptr<Conclave_modes_PVPMODE_ALL>
Conclave_categories::getPVPChallengeTypeCategoryMODEAFFECTOR() const {
  return m_PVPChallengeTypeCategory_MODEAFFECTOR;
}

void Conclave_categories::setPVPChallengeTypeCategoryMODEAFFECTOR(
    const std::shared_ptr<Conclave_modes_PVPMODE_ALL> &value) {
  m_PVPChallengeTypeCategory_MODEAFFECTOR = value;
  m_PVPChallengeTypeCategory_MODEAFFECTORIsSet = true;
}

bool Conclave_categories::pVPChallengeTypeCategoryMODEAFFECTORIsSet() const {
  return m_PVPChallengeTypeCategory_MODEAFFECTORIsSet;
}

void Conclave_categories::unsetPVPChallengeTypeCategory_MODEAFFECTOR() {
  m_PVPChallengeTypeCategory_MODEAFFECTORIsSet = false;
}
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
