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
 * AcolyteI18n.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AcolyteI18n_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AcolyteI18n_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class AcolyteI18n : public ModelBase {
public:
  AcolyteI18n();
  virtual ~AcolyteI18n();

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
  /// AcolyteI18n members

  /// <summary>
  ///
  /// </summary>
  std::vector<utility::string_t> &getRegion();
  bool regionIsSet() const;
  void unsetRegion();

  void setRegion(const std::vector<utility::string_t> &value);

protected:
  std::vector<utility::string_t> m_Region;
  bool m_RegionIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AcolyteI18n_H_ */
