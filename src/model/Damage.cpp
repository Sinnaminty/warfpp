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

#include "CppRestOpenAPIClient/model/Damage.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Damage::Damage() {
  m_Impact = 0.0;
  m_ImpactIsSet = false;
  m_Puncture = 0.0;
  m_PunctureIsSet = false;
  m_Slash = 0.0;
  m_SlashIsSet = false;
  m_Heat = 0.0;
  m_HeatIsSet = false;
  m_Cold = 0.0;
  m_ColdIsSet = false;
  m_Electric = 0.0;
  m_ElectricIsSet = false;
  m_Toxin = 0.0;
  m_ToxinIsSet = false;
  m_Gas = 0.0;
  m_GasIsSet = false;
  m_Viral = 0.0;
  m_ViralIsSet = false;
  m_Corrosive = 0.0;
  m_CorrosiveIsSet = false;
  m_Blast = 0.0;
  m_BlastIsSet = false;
  m_Magnetic = 0.0;
  m_MagneticIsSet = false;
  m_Radiation = 0.0;
  m_RadiationIsSet = false;
  m_r_true = 0.0;
  m_r_trueIsSet = false;
  m_r_void = 0.0;
  m_r_voidIsSet = false;
}

Damage::~Damage() {}

void Damage::validate() {
  // TODO: implement validation
}

web::json::value Damage::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_ImpactIsSet) {
    val[utility::conversions::to_string_t(U("impact"))] =
        ModelBase::toJson(m_Impact);
  }
  if (m_PunctureIsSet) {
    val[utility::conversions::to_string_t(U("puncture"))] =
        ModelBase::toJson(m_Puncture);
  }
  if (m_SlashIsSet) {
    val[utility::conversions::to_string_t(U("slash"))] =
        ModelBase::toJson(m_Slash);
  }
  if (m_HeatIsSet) {
    val[utility::conversions::to_string_t(U("heat"))] =
        ModelBase::toJson(m_Heat);
  }
  if (m_ColdIsSet) {
    val[utility::conversions::to_string_t(U("cold"))] =
        ModelBase::toJson(m_Cold);
  }
  if (m_ElectricIsSet) {
    val[utility::conversions::to_string_t(U("electric"))] =
        ModelBase::toJson(m_Electric);
  }
  if (m_ToxinIsSet) {
    val[utility::conversions::to_string_t(U("toxin"))] =
        ModelBase::toJson(m_Toxin);
  }
  if (m_GasIsSet) {
    val[utility::conversions::to_string_t(U("gas"))] = ModelBase::toJson(m_Gas);
  }
  if (m_ViralIsSet) {
    val[utility::conversions::to_string_t(U("viral"))] =
        ModelBase::toJson(m_Viral);
  }
  if (m_CorrosiveIsSet) {
    val[utility::conversions::to_string_t(U("corrosive"))] =
        ModelBase::toJson(m_Corrosive);
  }
  if (m_BlastIsSet) {
    val[utility::conversions::to_string_t(U("blast"))] =
        ModelBase::toJson(m_Blast);
  }
  if (m_MagneticIsSet) {
    val[utility::conversions::to_string_t(U("magnetic"))] =
        ModelBase::toJson(m_Magnetic);
  }
  if (m_RadiationIsSet) {
    val[utility::conversions::to_string_t(U("radiation"))] =
        ModelBase::toJson(m_Radiation);
  }
  if (m_r_trueIsSet) {
    val[utility::conversions::to_string_t(U("true"))] =
        ModelBase::toJson(m_r_true);
  }
  if (m_r_voidIsSet) {
    val[utility::conversions::to_string_t(U("void"))] =
        ModelBase::toJson(m_r_void);
  }

  return val;
}

bool Damage::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("impact")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("impact")));
    if (!fieldValue.is_null()) {
      double refVal_setImpact;
      ok &= ModelBase::fromJson(fieldValue, refVal_setImpact);
      setImpact(refVal_setImpact);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("puncture")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("puncture")));
    if (!fieldValue.is_null()) {
      double refVal_setPuncture;
      ok &= ModelBase::fromJson(fieldValue, refVal_setPuncture);
      setPuncture(refVal_setPuncture);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("slash")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("slash")));
    if (!fieldValue.is_null()) {
      double refVal_setSlash;
      ok &= ModelBase::fromJson(fieldValue, refVal_setSlash);
      setSlash(refVal_setSlash);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("heat")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("heat")));
    if (!fieldValue.is_null()) {
      double refVal_setHeat;
      ok &= ModelBase::fromJson(fieldValue, refVal_setHeat);
      setHeat(refVal_setHeat);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("cold")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("cold")));
    if (!fieldValue.is_null()) {
      double refVal_setCold;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCold);
      setCold(refVal_setCold);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("electric")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("electric")));
    if (!fieldValue.is_null()) {
      double refVal_setElectric;
      ok &= ModelBase::fromJson(fieldValue, refVal_setElectric);
      setElectric(refVal_setElectric);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("toxin")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("toxin")));
    if (!fieldValue.is_null()) {
      double refVal_setToxin;
      ok &= ModelBase::fromJson(fieldValue, refVal_setToxin);
      setToxin(refVal_setToxin);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("gas")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("gas")));
    if (!fieldValue.is_null()) {
      double refVal_setGas;
      ok &= ModelBase::fromJson(fieldValue, refVal_setGas);
      setGas(refVal_setGas);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("viral")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("viral")));
    if (!fieldValue.is_null()) {
      double refVal_setViral;
      ok &= ModelBase::fromJson(fieldValue, refVal_setViral);
      setViral(refVal_setViral);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("corrosive")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("corrosive")));
    if (!fieldValue.is_null()) {
      double refVal_setCorrosive;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCorrosive);
      setCorrosive(refVal_setCorrosive);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("blast")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("blast")));
    if (!fieldValue.is_null()) {
      double refVal_setBlast;
      ok &= ModelBase::fromJson(fieldValue, refVal_setBlast);
      setBlast(refVal_setBlast);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("magnetic")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("magnetic")));
    if (!fieldValue.is_null()) {
      double refVal_setMagnetic;
      ok &= ModelBase::fromJson(fieldValue, refVal_setMagnetic);
      setMagnetic(refVal_setMagnetic);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("radiation")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("radiation")));
    if (!fieldValue.is_null()) {
      double refVal_setRadiation;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRadiation);
      setRadiation(refVal_setRadiation);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("true")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("true")));
    if (!fieldValue.is_null()) {
      double refVal_setRTrue;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRTrue);
      setRTrue(refVal_setRTrue);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("void")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("void")));
    if (!fieldValue.is_null()) {
      double refVal_setRVoid;
      ok &= ModelBase::fromJson(fieldValue, refVal_setRVoid);
      setRVoid(refVal_setRVoid);
    }
  }
  return ok;
}

void Damage::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                         const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_ImpactIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("impact")), m_Impact));
  }
  if (m_PunctureIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("puncture")),
        m_Puncture));
  }
  if (m_SlashIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("slash")), m_Slash));
  }
  if (m_HeatIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("heat")), m_Heat));
  }
  if (m_ColdIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("cold")), m_Cold));
  }
  if (m_ElectricIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("electric")),
        m_Electric));
  }
  if (m_ToxinIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("toxin")), m_Toxin));
  }
  if (m_GasIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("gas")), m_Gas));
  }
  if (m_ViralIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("viral")), m_Viral));
  }
  if (m_CorrosiveIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("corrosive")),
        m_Corrosive));
  }
  if (m_BlastIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("blast")), m_Blast));
  }
  if (m_MagneticIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("magnetic")),
        m_Magnetic));
  }
  if (m_RadiationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("radiation")),
        m_Radiation));
  }
  if (m_r_trueIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("true")), m_r_true));
  }
  if (m_r_voidIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("void")), m_r_void));
  }
}

bool Damage::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                           const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("impact")))) {
    double refVal_setImpact;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("impact"))),
        refVal_setImpact);
    setImpact(refVal_setImpact);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("puncture")))) {
    double refVal_setPuncture;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("puncture"))),
        refVal_setPuncture);
    setPuncture(refVal_setPuncture);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("slash")))) {
    double refVal_setSlash;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("slash"))),
        refVal_setSlash);
    setSlash(refVal_setSlash);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("heat")))) {
    double refVal_setHeat;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("heat"))),
        refVal_setHeat);
    setHeat(refVal_setHeat);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("cold")))) {
    double refVal_setCold;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("cold"))),
        refVal_setCold);
    setCold(refVal_setCold);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("electric")))) {
    double refVal_setElectric;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("electric"))),
        refVal_setElectric);
    setElectric(refVal_setElectric);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("toxin")))) {
    double refVal_setToxin;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("toxin"))),
        refVal_setToxin);
    setToxin(refVal_setToxin);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("gas")))) {
    double refVal_setGas;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("gas"))),
        refVal_setGas);
    setGas(refVal_setGas);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("viral")))) {
    double refVal_setViral;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("viral"))),
        refVal_setViral);
    setViral(refVal_setViral);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("corrosive")))) {
    double refVal_setCorrosive;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("corrosive"))),
        refVal_setCorrosive);
    setCorrosive(refVal_setCorrosive);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("blast")))) {
    double refVal_setBlast;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("blast"))),
        refVal_setBlast);
    setBlast(refVal_setBlast);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("magnetic")))) {
    double refVal_setMagnetic;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("magnetic"))),
        refVal_setMagnetic);
    setMagnetic(refVal_setMagnetic);
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t(U("radiation")))) {
    double refVal_setRadiation;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(
            utility::conversions::to_string_t(U("radiation"))),
        refVal_setRadiation);
    setRadiation(refVal_setRadiation);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("true")))) {
    double refVal_setRTrue;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("true"))),
        refVal_setRTrue);
    setRTrue(refVal_setRTrue);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("void")))) {
    double refVal_setRVoid;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("void"))),
        refVal_setRVoid);
    setRVoid(refVal_setRVoid);
  }
  return ok;
}

double Damage::getImpact() const { return m_Impact; }

void Damage::setImpact(double value) {
  m_Impact = value;
  m_ImpactIsSet = true;
}

bool Damage::impactIsSet() const { return m_ImpactIsSet; }

void Damage::unsetImpact() { m_ImpactIsSet = false; }
double Damage::getPuncture() const { return m_Puncture; }

void Damage::setPuncture(double value) {
  m_Puncture = value;
  m_PunctureIsSet = true;
}

bool Damage::punctureIsSet() const { return m_PunctureIsSet; }

void Damage::unsetPuncture() { m_PunctureIsSet = false; }
double Damage::getSlash() const { return m_Slash; }

void Damage::setSlash(double value) {
  m_Slash = value;
  m_SlashIsSet = true;
}

bool Damage::slashIsSet() const { return m_SlashIsSet; }

void Damage::unsetSlash() { m_SlashIsSet = false; }
double Damage::getHeat() const { return m_Heat; }

void Damage::setHeat(double value) {
  m_Heat = value;
  m_HeatIsSet = true;
}

bool Damage::heatIsSet() const { return m_HeatIsSet; }

void Damage::unsetHeat() { m_HeatIsSet = false; }
double Damage::getCold() const { return m_Cold; }

void Damage::setCold(double value) {
  m_Cold = value;
  m_ColdIsSet = true;
}

bool Damage::coldIsSet() const { return m_ColdIsSet; }

void Damage::unsetCold() { m_ColdIsSet = false; }
double Damage::getElectric() const { return m_Electric; }

void Damage::setElectric(double value) {
  m_Electric = value;
  m_ElectricIsSet = true;
}

bool Damage::electricIsSet() const { return m_ElectricIsSet; }

void Damage::unsetElectric() { m_ElectricIsSet = false; }
double Damage::getToxin() const { return m_Toxin; }

void Damage::setToxin(double value) {
  m_Toxin = value;
  m_ToxinIsSet = true;
}

bool Damage::toxinIsSet() const { return m_ToxinIsSet; }

void Damage::unsetToxin() { m_ToxinIsSet = false; }
double Damage::getGas() const { return m_Gas; }

void Damage::setGas(double value) {
  m_Gas = value;
  m_GasIsSet = true;
}

bool Damage::gasIsSet() const { return m_GasIsSet; }

void Damage::unsetGas() { m_GasIsSet = false; }
double Damage::getViral() const { return m_Viral; }

void Damage::setViral(double value) {
  m_Viral = value;
  m_ViralIsSet = true;
}

bool Damage::viralIsSet() const { return m_ViralIsSet; }

void Damage::unsetViral() { m_ViralIsSet = false; }
double Damage::getCorrosive() const { return m_Corrosive; }

void Damage::setCorrosive(double value) {
  m_Corrosive = value;
  m_CorrosiveIsSet = true;
}

bool Damage::corrosiveIsSet() const { return m_CorrosiveIsSet; }

void Damage::unsetCorrosive() { m_CorrosiveIsSet = false; }
double Damage::getBlast() const { return m_Blast; }

void Damage::setBlast(double value) {
  m_Blast = value;
  m_BlastIsSet = true;
}

bool Damage::blastIsSet() const { return m_BlastIsSet; }

void Damage::unsetBlast() { m_BlastIsSet = false; }
double Damage::getMagnetic() const { return m_Magnetic; }

void Damage::setMagnetic(double value) {
  m_Magnetic = value;
  m_MagneticIsSet = true;
}

bool Damage::magneticIsSet() const { return m_MagneticIsSet; }

void Damage::unsetMagnetic() { m_MagneticIsSet = false; }
double Damage::getRadiation() const { return m_Radiation; }

void Damage::setRadiation(double value) {
  m_Radiation = value;
  m_RadiationIsSet = true;
}

bool Damage::radiationIsSet() const { return m_RadiationIsSet; }

void Damage::unsetRadiation() { m_RadiationIsSet = false; }
double Damage::getRTrue() const { return m_r_true; }

void Damage::setRTrue(double value) {
  m_r_true = value;
  m_r_trueIsSet = true;
}

bool Damage::rTrueIsSet() const { return m_r_trueIsSet; }

void Damage::unsetr_true() { m_r_trueIsSet = false; }
double Damage::getRVoid() const { return m_r_void; }

void Damage::setRVoid(double value) {
  m_r_void = value;
  m_r_voidIsSet = true;
}

bool Damage::rVoidIsSet() const { return m_r_voidIsSet; }

void Damage::unsetr_void() { m_r_voidIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
