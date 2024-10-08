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
 * Sortie_allOf_variants.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Sortie_allOf_variants_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Sortie_allOf_variants_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/MissionType.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class Sortie_allOf_variants : public ModelBase {
public:
  Sortie_allOf_variants();
  virtual ~Sortie_allOf_variants();

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
  /// Sortie_allOf_variants members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getNode() const;
  bool nodeIsSet() const;
  void unsetNode();

  void setNode(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getBoss() const;
  bool bossIsSet() const;
  void unsetBoss();

  void setBoss(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<MissionType> getMissionType() const;
  bool missionTypeIsSet() const;
  void unsetMissionType();

  void setMissionType(const std::shared_ptr<MissionType> &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getPlanet() const;
  bool planetIsSet() const;
  void unsetPlanet();

  void setPlanet(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getModifier() const;
  bool modifierIsSet() const;
  void unsetModifier();

  void setModifier(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getModifierDescription() const;
  bool modifierDescriptionIsSet() const;
  void unsetModifierDescription();

  void setModifierDescription(const utility::string_t &value);

protected:
  utility::string_t m_Node;
  bool m_NodeIsSet;
  utility::string_t m_Boss;
  bool m_BossIsSet;
  std::shared_ptr<MissionType> m_MissionType;
  bool m_MissionTypeIsSet;
  utility::string_t m_Planet;
  bool m_PlanetIsSet;
  utility::string_t m_Modifier;
  bool m_ModifierIsSet;
  utility::string_t m_ModifierDescription;
  bool m_ModifierDescriptionIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Sortie_allOf_variants_H_ */
