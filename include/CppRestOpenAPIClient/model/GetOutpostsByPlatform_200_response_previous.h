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
 * GetOutpostsByPlatform_200_response_previous.h
 *
 * Estimation data for the last mission that was active. Could also be the
 * current.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_previous_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_previous_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// Estimation data for the last mission that was active. Could also be the
/// current.
/// </summary>
class GetOutpostsByPlatform_200_response_previous : public ModelBase {
public:
  GetOutpostsByPlatform_200_response_previous();
  virtual ~GetOutpostsByPlatform_200_response_previous();

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
  /// GetOutpostsByPlatform_200_response_previous members

  /// <summary>
  /// When the mission became or becomes active
  /// </summary>
  utility::datetime getActivation() const;
  bool activationIsSet() const;
  void unsetActivation();

  void setActivation(const utility::datetime &value);

  /// <summary>
  /// When the mission became or becomes inactive
  /// </summary>
  utility::datetime getExpiry() const;
  bool expiryIsSet() const;
  void unsetExpiry();

  void setExpiry(const utility::datetime &value);

protected:
  utility::datetime m_Activation;
  bool m_ActivationIsSet;
  utility::datetime m_Expiry;
  bool m_ExpiryIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_previous_H_ \
        */
