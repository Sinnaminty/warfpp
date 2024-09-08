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
 * StaticProcessingDataApi.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_StaticProcessingDataApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_StaticProcessingDataApi_H_

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/Object.h"
#include "CppRestOpenAPIClient/model/AcolyteI18n.h"
#include "CppRestOpenAPIClient/model/Arcane.h"
#include "CppRestOpenAPIClient/model/Conclave.h"
#include "CppRestOpenAPIClient/model/Factions.h"
#include "CppRestOpenAPIClient/model/FissureModifiers.h"
#include "CppRestOpenAPIClient/model/GetWorldstateByPlatform_400_response.h"
#include "CppRestOpenAPIClient/model/Language.h"
#include "CppRestOpenAPIClient/model/Languages.h"
#include "CppRestOpenAPIClient/model/MissionTypes.h"
#include "CppRestOpenAPIClient/model/OperationTypes.h"
#include "CppRestOpenAPIClient/model/SolNode.h"
#include "CppRestOpenAPIClient/model/SortieData.h"
#include "CppRestOpenAPIClient/model/Syndicates.h"
#include "CppRestOpenAPIClient/model/Tutorials.h"
#include "CppRestOpenAPIClient/model/UpgradeTypes.h"
#include <boost/optional.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

class StaticProcessingDataApi {
public:
  explicit StaticProcessingDataApi(std::shared_ptr<const ApiClient> apiClient);

  virtual ~StaticProcessingDataApi();

  /// <summary>
  /// Get Persistent Enemy translation data.
  /// </summary>
  /// <remarks>
  /// Persistent Enemy translation information for aiding translation of
  /// identifiers.
  /// </remarks>
  pplx::task<std::shared_ptr<AcolyteI18n>> getAcolyteData() const;
  /// <summary>
  /// Get Arcane Enhancement Data
  /// </summary>
  /// <remarks>
  /// Available Arcane Enhancements
  /// </remarks>
  pplx::task<std::vector<std::shared_ptr<Arcane>>> getArcanesData() const;
  /// <summary>
  /// Get conclave challenge data
  /// </summary>
  /// <remarks>
  /// Data about conclave challenges
  /// </remarks>
  pplx::task<std::shared_ptr<Conclave>> getConclaveData() const;
  /// <summary>
  /// Get Event-specific Data
  /// </summary>
  /// <remarks>
  /// Data about events
  /// </remarks>
  pplx::task<std::shared_ptr<Object>> getEventsData() const;
  /// <summary>
  /// Get Faction translation information.
  /// </summary>
  /// <remarks>
  /// Strings for translating faction identifiers.
  /// </remarks>
  pplx::task<std::shared_ptr<Factions>> getFactionsData() const;
  /// <summary>
  /// Get Fissure Modifier translation data.
  /// </summary>
  /// <remarks>
  /// Fissure translation identifiers
  /// </remarks>
  pplx::task<std::shared_ptr<FissureModifiers>> getFissuresData() const;
  /// <summary>
  /// Get Language strings for Warframe.
  /// </summary>
  /// <remarks>
  /// Get language strings to assist translation. (Prefer the
  /// /languages/search/:query route)
  /// </remarks>
  pplx::task<std::shared_ptr<Languages>> getLanguageData() const;
  /// <summary>
  /// Full list of supported locales
  /// </summary>
  /// <remarks>
  /// Locales supported by the API
  /// </remarks>
  pplx::task<std::vector<std::shared_ptr<Language>>> getLocales() const;
  /// <summary>
  /// Get MissionType Translation Keys
  /// </summary>
  /// <remarks>
  /// Mission Type information to aid translating identifiers
  /// </remarks>
  pplx::task<std::shared_ptr<MissionTypes>> getMissionData() const;
  /// <summary>
  /// Get Sol Node information and translation data.
  /// </summary>
  /// <remarks>
  /// Sol Node translation information for aiding the translation of
  /// identifiers.
  /// </remarks>
  pplx::task<std::shared_ptr<SolNode>> getNodeData() const;
  /// <summary>
  /// Get operation types data.
  /// </summary>
  /// <remarks>
  /// Operation Types information to aid translating identifiers for global
  /// upgrades
  /// </remarks>
  pplx::task<std::shared_ptr<OperationTypes>> getOperationsData() const;
  /// <summary>
  /// Get Sortie translation information.
  /// </summary>
  /// <remarks>
  /// Sortie translation information for assisting translation of identifiers.
  /// </remarks>
  pplx::task<std::shared_ptr<SortieData>> getSortieData() const;
  /// <summary>
  /// Get Syndicate translation data.
  /// </summary>
  /// <remarks>
  /// Information to assist translating syndicate identifiers.
  /// </remarks>
  pplx::task<std::shared_ptr<Syndicates>> getSyndicateData() const;
  /// <summary>
  /// Get Tutorials Data
  /// </summary>
  /// <remarks>
  /// Tutorials data from DE
  /// </remarks>
  pplx::task<std::shared_ptr<Tutorials>> getTutorialData() const;
  /// <summary>
  /// Get upgrade types data for global upgrades.
  /// </summary>
  /// <remarks>
  /// Upgrade types for what can be changed by global modifiers, such as double
  /// credit weekends.
  /// </remarks>
  pplx::task<std::shared_ptr<UpgradeTypes>> getUpgradeTypesData() const;

protected:
  std::shared_ptr<const ApiClient> m_ApiClient;
};

} // namespace api
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_API_StaticProcessingDataApi_H_ */
