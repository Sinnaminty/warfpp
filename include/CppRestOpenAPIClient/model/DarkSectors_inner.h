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
 * DarkSectors_inner.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DarkSectors_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DarkSectors_inner_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/DarkSectorHistory.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class DarkSectorHistory;

/// <summary>
///
/// </summary>
class DarkSectors_inner : public ModelBase {
public:
  DarkSectors_inner();
  virtual ~DarkSectors_inner();

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
  /// DarkSectors_inner members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getDefenderMOTD() const;
  bool defenderMOTDIsSet() const;
  void unsetDefenderMOTD();

  void setDefenderMOTD(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getDeployerName() const;
  bool deployerNameIsSet() const;
  void unsetDeployerName();

  void setDeployerName(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  double getDefenderDeploymentActivation() const;
  bool defenderDeploymentActivationIsSet() const;
  void unsetDefenderDeploymentActivation();

  void setDefenderDeploymentActivation(double value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getDefenderName() const;
  bool defenderNameIsSet() const;
  void unsetDefenderName();

  void setDefenderName(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getDeployerClan() const;
  bool deployerClanIsSet() const;
  void unsetDeployerClan();

  void setDeployerClan(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  bool isIsAlliance() const;
  bool isAllianceIsSet() const;
  void unsetIsAlliance();

  void setIsAlliance(bool value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getId() const;
  bool idIsSet() const;
  void unsetId();

  void setId(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  std::vector<std::shared_ptr<DarkSectorHistory>> &getHistory();
  bool historyIsSet() const;
  void unsetHistory();

  void setHistory(const std::vector<std::shared_ptr<DarkSectorHistory>> &value);

protected:
  utility::string_t m_DefenderMOTD;
  bool m_DefenderMOTDIsSet;
  utility::string_t m_DeployerName;
  bool m_DeployerNameIsSet;
  double m_DefenderDeploymentActivation;
  bool m_DefenderDeploymentActivationIsSet;
  utility::string_t m_DefenderName;
  bool m_DefenderNameIsSet;
  utility::string_t m_DeployerClan;
  bool m_DeployerClanIsSet;
  bool m_IsAlliance;
  bool m_IsAllianceIsSet;
  utility::string_t m_Id;
  bool m_IdIsSet;
  std::vector<std::shared_ptr<DarkSectorHistory>> m_History;
  bool m_HistoryIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DarkSectors_inner_H_ */
