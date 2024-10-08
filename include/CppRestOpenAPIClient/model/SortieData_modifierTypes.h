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

/*
 * SortieData_modifierTypes.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SortieData_modifierTypes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SortieData_modifierTypes_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class SortieData_modifierTypes : public ModelBase {
public:
  SortieData_modifierTypes();
  virtual ~SortieData_modifierTypes();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  /////////////////////////////////////////////
  /// SortieData_modifierTypes members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERIMPACT() const;
  bool sORTIEMODIFIERIMPACTIsSet() const;
  void unsetSORTIE_MODIFIER_IMPACT();

  void setSORTIEMODIFIERIMPACT(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDCOLD() const;
  bool sORTIEMODIFIERHAZARDCOLDIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_COLD();

  void setSORTIEMODIFIERHAZARDCOLD(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERSECONDARYONLY() const;
  bool sORTIEMODIFIERSECONDARYONLYIsSet() const;
  void unsetSORTIE_MODIFIER_SECONDARY_ONLY();

  void setSORTIEMODIFIERSECONDARYONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERTOXIN() const;
  bool sORTIEMODIFIERTOXINIsSet() const;
  void unsetSORTIE_MODIFIER_TOXIN();

  void setSORTIEMODIFIERTOXIN(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERELECTRICITY() const;
  bool sORTIEMODIFIERELECTRICITYIsSet() const;
  void unsetSORTIE_MODIFIER_ELECTRICITY();

  void setSORTIEMODIFIERELECTRICITY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDFOG() const;
  bool sORTIEMODIFIERHAZARDFOGIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_FOG();

  void setSORTIEMODIFIERHAZARDFOG(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDMAGNETIC() const;
  bool sORTIEMODIFIERHAZARDMAGNETICIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_MAGNETIC();

  void setSORTIEMODIFIERHAZARDMAGNETIC(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERARMOR() const;
  bool sORTIEMODIFIERARMORIsSet() const;
  void unsetSORTIE_MODIFIER_ARMOR();

  void setSORTIEMODIFIERARMOR(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERCORROSIVE() const;
  bool sORTIEMODIFIERCORROSIVEIsSet() const;
  void unsetSORTIE_MODIFIER_CORROSIVE();

  void setSORTIEMODIFIERCORROSIVE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERVIRAL() const;
  bool sORTIEMODIFIERVIRALIsSet() const;
  void unsetSORTIE_MODIFIER_VIRAL();

  void setSORTIEMODIFIERVIRAL(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDRADIATION() const;
  bool sORTIEMODIFIERHAZARDRADIATIONIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_RADIATION();

  void setSORTIEMODIFIERHAZARDRADIATION(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERSLASH() const;
  bool sORTIEMODIFIERSLASHIsSet() const;
  void unsetSORTIE_MODIFIER_SLASH();

  void setSORTIEMODIFIERSLASH(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERPOISON() const;
  bool sORTIEMODIFIERPOISONIsSet() const;
  void unsetSORTIE_MODIFIER_POISON();

  void setSORTIEMODIFIERPOISON(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERGAS() const;
  bool sORTIEMODIFIERGASIsSet() const;
  void unsetSORTIE_MODIFIER_GAS();

  void setSORTIEMODIFIERGAS(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERMAGNETIC() const;
  bool sORTIEMODIFIERMAGNETICIsSet() const;
  void unsetSORTIE_MODIFIER_MAGNETIC();

  void setSORTIEMODIFIERMAGNETIC(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERFIRE() const;
  bool sORTIEMODIFIERFIREIsSet() const;
  void unsetSORTIE_MODIFIER_FIRE();

  void setSORTIEMODIFIERFIRE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERSNIPERONLY() const;
  bool sORTIEMODIFIERSNIPERONLYIsSet() const;
  void unsetSORTIE_MODIFIER_SNIPER_ONLY();

  void setSORTIEMODIFIERSNIPERONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERPUNCTURE() const;
  bool sORTIEMODIFIERPUNCTUREIsSet() const;
  void unsetSORTIE_MODIFIER_PUNCTURE();

  void setSORTIEMODIFIERPUNCTURE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIEREXPLOSION() const;
  bool sORTIEMODIFIEREXPLOSIONIsSet() const;
  void unsetSORTIE_MODIFIER_EXPLOSION();

  void setSORTIEMODIFIEREXPLOSION(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERBOWONLY() const;
  bool sORTIEMODIFIERBOWONLYIsSet() const;
  void unsetSORTIE_MODIFIER_BOW_ONLY();

  void setSORTIEMODIFIERBOWONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERRADIATION() const;
  bool sORTIEMODIFIERRADIATIONIsSet() const;
  void unsetSORTIE_MODIFIER_RADIATION();

  void setSORTIEMODIFIERRADIATION(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERSHIELDS() const;
  bool sORTIEMODIFIERSHIELDSIsSet() const;
  void unsetSORTIE_MODIFIER_SHIELDS();

  void setSORTIEMODIFIERSHIELDS(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERFREEZE() const;
  bool sORTIEMODIFIERFREEZEIsSet() const;
  void unsetSORTIE_MODIFIER_FREEZE();

  void setSORTIEMODIFIERFREEZE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDFIRE() const;
  bool sORTIEMODIFIERHAZARDFIREIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_FIRE();

  void setSORTIEMODIFIERHAZARDFIRE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIEREXIMUS() const;
  bool sORTIEMODIFIEREXIMUSIsSet() const;
  void unsetSORTIE_MODIFIER_EXIMUS();

  void setSORTIEMODIFIEREXIMUS(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERSHOTGUNONLY() const;
  bool sORTIEMODIFIERSHOTGUNONLYIsSet() const;
  void unsetSORTIE_MODIFIER_SHOTGUN_ONLY();

  void setSORTIEMODIFIERSHOTGUNONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERMELEEONLY() const;
  bool sORTIEMODIFIERMELEEONLYIsSet() const;
  void unsetSORTIE_MODIFIER_MELEE_ONLY();

  void setSORTIEMODIFIERMELEEONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERRIFLEONLY() const;
  bool sORTIEMODIFIERRIFLEONLYIsSet() const;
  void unsetSORTIE_MODIFIER_RIFLE_ONLY();

  void setSORTIEMODIFIERRIFLEONLY(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERHAZARDICE() const;
  bool sORTIEMODIFIERHAZARDICEIsSet() const;
  void unsetSORTIE_MODIFIER_HAZARD_ICE();

  void setSORTIEMODIFIERHAZARDICE(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getSORTIEMODIFIERLOWENERGY() const;
  bool sORTIEMODIFIERLOWENERGYIsSet() const;
  void unsetSORTIE_MODIFIER_LOW_ENERGY();

  void setSORTIEMODIFIERLOWENERGY(const utility::string_t &value);

protected:
  utility::string_t m_SORTIE_MODIFIER_IMPACT;
  bool m_SORTIE_MODIFIER_IMPACTIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_COLD;
  bool m_SORTIE_MODIFIER_HAZARD_COLDIsSet;
  utility::string_t m_SORTIE_MODIFIER_SECONDARY_ONLY;
  bool m_SORTIE_MODIFIER_SECONDARY_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_TOXIN;
  bool m_SORTIE_MODIFIER_TOXINIsSet;
  utility::string_t m_SORTIE_MODIFIER_ELECTRICITY;
  bool m_SORTIE_MODIFIER_ELECTRICITYIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_FOG;
  bool m_SORTIE_MODIFIER_HAZARD_FOGIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_MAGNETIC;
  bool m_SORTIE_MODIFIER_HAZARD_MAGNETICIsSet;
  utility::string_t m_SORTIE_MODIFIER_ARMOR;
  bool m_SORTIE_MODIFIER_ARMORIsSet;
  utility::string_t m_SORTIE_MODIFIER_CORROSIVE;
  bool m_SORTIE_MODIFIER_CORROSIVEIsSet;
  utility::string_t m_SORTIE_MODIFIER_VIRAL;
  bool m_SORTIE_MODIFIER_VIRALIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_RADIATION;
  bool m_SORTIE_MODIFIER_HAZARD_RADIATIONIsSet;
  utility::string_t m_SORTIE_MODIFIER_SLASH;
  bool m_SORTIE_MODIFIER_SLASHIsSet;
  utility::string_t m_SORTIE_MODIFIER_POISON;
  bool m_SORTIE_MODIFIER_POISONIsSet;
  utility::string_t m_SORTIE_MODIFIER_GAS;
  bool m_SORTIE_MODIFIER_GASIsSet;
  utility::string_t m_SORTIE_MODIFIER_MAGNETIC;
  bool m_SORTIE_MODIFIER_MAGNETICIsSet;
  utility::string_t m_SORTIE_MODIFIER_FIRE;
  bool m_SORTIE_MODIFIER_FIREIsSet;
  utility::string_t m_SORTIE_MODIFIER_SNIPER_ONLY;
  bool m_SORTIE_MODIFIER_SNIPER_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_PUNCTURE;
  bool m_SORTIE_MODIFIER_PUNCTUREIsSet;
  utility::string_t m_SORTIE_MODIFIER_EXPLOSION;
  bool m_SORTIE_MODIFIER_EXPLOSIONIsSet;
  utility::string_t m_SORTIE_MODIFIER_BOW_ONLY;
  bool m_SORTIE_MODIFIER_BOW_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_RADIATION;
  bool m_SORTIE_MODIFIER_RADIATIONIsSet;
  utility::string_t m_SORTIE_MODIFIER_SHIELDS;
  bool m_SORTIE_MODIFIER_SHIELDSIsSet;
  utility::string_t m_SORTIE_MODIFIER_FREEZE;
  bool m_SORTIE_MODIFIER_FREEZEIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_FIRE;
  bool m_SORTIE_MODIFIER_HAZARD_FIREIsSet;
  utility::string_t m_SORTIE_MODIFIER_EXIMUS;
  bool m_SORTIE_MODIFIER_EXIMUSIsSet;
  utility::string_t m_SORTIE_MODIFIER_SHOTGUN_ONLY;
  bool m_SORTIE_MODIFIER_SHOTGUN_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_MELEE_ONLY;
  bool m_SORTIE_MODIFIER_MELEE_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_RIFLE_ONLY;
  bool m_SORTIE_MODIFIER_RIFLE_ONLYIsSet;
  utility::string_t m_SORTIE_MODIFIER_HAZARD_ICE;
  bool m_SORTIE_MODIFIER_HAZARD_ICEIsSet;
  utility::string_t m_SORTIE_MODIFIER_LOW_ENERGY;
  bool m_SORTIE_MODIFIER_LOW_ENERGYIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SortieData_modifierTypes_H_ */
