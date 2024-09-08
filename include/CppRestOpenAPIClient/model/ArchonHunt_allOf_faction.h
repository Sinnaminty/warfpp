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
 * ArchonHunt_allOf_faction.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ArchonHunt_allOf_faction_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ArchonHunt_allOf_faction_H_

#include "CppRestOpenAPIClient/ModelBase.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class ArchonHunt_allOf_faction : public ModelBase {
public:
  ArchonHunt_allOf_faction();
  virtual ~ArchonHunt_allOf_faction();

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
  /// ArchonHunt_allOf_faction members

protected:
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ArchonHunt_allOf_faction_H_ */
