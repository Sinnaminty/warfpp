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
 * WarframeItemsApi.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_WarframeItemsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_WarframeItemsApi_H_

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/GetWorldstateByPlatform_400_response.h"
#include "CppRestOpenAPIClient/model/Item.h"
#include "CppRestOpenAPIClient/model/Items.h"
#include "CppRestOpenAPIClient/model/Language.h"
#include "CppRestOpenAPIClient/model/Mod.h"
#include "CppRestOpenAPIClient/model/Warframe.h"
#include "CppRestOpenAPIClient/model/Warframes.h"
#include "CppRestOpenAPIClient/model/Weapon.h"
#include "CppRestOpenAPIClient/model/Weapons.h"
#include <boost/optional.hpp>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

class WarframeItemsApi {
public:
  explicit WarframeItemsApi(std::shared_ptr<const ApiClient> apiClient);

  virtual ~WarframeItemsApi();

  /// <summary>
  /// Get all item data.
  /// </summary>
  /// <remarks>
  /// Item information.
  /// </remarks>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Items>>
  getItemsData(std::shared_ptr<Language> language,
               boost::optional<utility::string_t> only,
               boost::optional<utility::string_t> remove,
               boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get all mod data.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::vector<std::shared_ptr<Mod>>>
  getModsData(std::shared_ptr<Language> language,
              boost::optional<utility::string_t> only,
              boost::optional<utility::string_t> remove,
              boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get all Warframe data
  /// </summary>
  /// <remarks>
  /// Warframe stats and general information.
  /// </remarks>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Warframes>> getWarframesData(
      std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get Weapon data and statistics.
  /// </summary>
  /// <remarks>
  /// Weapon statistics.
  /// </remarks>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Weapons>> getWeaponsData(
      std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for the closest matching single item
  /// </summary>
  /// <remarks>
  /// Item information.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Item>> searchItemData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for all matching items
  /// </summary>
  /// <remarks>
  /// Item information, such as name, unique name, type, and image name.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Items>> searchItemsData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for the closest matching single mod
  /// </summary>
  /// <remarks>
  /// Mod information.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Mod>> searchModData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for all matching mods
  /// </summary>
  /// <remarks>
  /// Mod information, such as name, unique name, type, and image name.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::vector<std::shared_ptr<Mod>>> searchModsData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for the closest matching single item
  /// </summary>
  /// <remarks>
  /// Mod information.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Warframe>> searchWarframeData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for all matching Warframes
  /// </summary>
  /// <remarks>
  /// Warframe stats and general information.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Warframes>> searchWarframesData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for the closest matching single weapon
  /// </summary>
  /// <remarks>
  /// Mod information.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Weapon>> searchWeaponData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;
  /// <summary>
  /// Get data for all matching weapons
  /// </summary>
  /// <remarks>
  /// Weapon statistics.
  /// </remarks>
  /// <param name="query">Keyword to search for</param>
  /// <param name="language">Language to retrieve. With Caching, this has become
  /// required if you want your reply to always match your request.</param>
  /// <param name="only">Keys to keep on the object. Comma separated for
  /// multiple (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="remove">Keys to remove on the object. Comma separated for multiple
  /// (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="by">Key to search by on the object (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="acceptLanguage">Language to retrieve. Doesn&#39;t always work with
  /// caching. See Language query string parameter. (optional, default to new
  /// Language())</param>
  pplx::task<std::shared_ptr<Weapons>> searchWeaponsData(
      utility::string_t query, std::shared_ptr<Language> language,
      boost::optional<utility::string_t> only,
      boost::optional<utility::string_t> remove,
      boost::optional<utility::string_t> by,
      boost::optional<std::shared_ptr<Language>> acceptLanguage) const;

protected:
  std::shared_ptr<const ApiClient> m_ApiClient;
};

} // namespace api
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_API_WarframeItemsApi_H_ */
